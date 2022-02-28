#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/liun/catkin_ws_10_23/src/vision_opencv/cv_bridge"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/liun/catkin_ws_10_23/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/liun/catkin_ws_10_23/install/lib/python2.7/dist-packages:/home/liun/catkin_ws_10_23/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/liun/catkin_ws_10_23/build" \
    "/usr/bin/python2" \
    "/home/liun/catkin_ws_10_23/src/vision_opencv/cv_bridge/setup.py" \
     \
    build --build-base "/home/liun/catkin_ws_10_23/build/vision_opencv/cv_bridge" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/liun/catkin_ws_10_23/install" --install-scripts="/home/liun/catkin_ws_10_23/install/bin"
