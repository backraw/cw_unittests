# Common source files
set(cppunit-dumper-plugin_SOURCES
    DumperListener.cpp
    DumperPlugIn.cpp
)

# Create the test plugin
add_library(cppunit-dumper-plugin MODULE ${cppunit-dumper-plugin_SOURCES})
target_link_libraries(cppunit-dumper-plugin cppunit)

install(TARGETS cppunit-dumper-plugin
    DESTINATION share/${CPPUNIT_VERSION}/examples COMPONENT examples)
