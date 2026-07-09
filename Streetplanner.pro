QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractmap.cpp \
    city.cpp \
    cityadditionform.cpp \
    dijkstra.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    mapio.cpp \
    mapionrw.cpp \
    street.cpp

HEADERS += \
    abstractmap.h \
    city.h \
    cityadditionform.h \
    dijkstra.h \
    mainwindow.h \
    map.h \
    mapio.h \
    mapionrw.h \
    street.h

FORMS += \
    cityadditionform.ui \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .gitignore \
    TestFunktionen.txt \
    Versuch09.doxyfile \
    html/abstractmap_8cpp.html \
    html/abstractmap_8h.html \
    html/abstractmap_8h.js \
    html/abstractmap_8h_source.html \
    html/annotated.html \
    html/annotated_dup.js \
    html/city_8cpp.html \
    html/city_8h.html \
    html/city_8h.js \
    html/city_8h_source.html \
    html/cityadditionform_8cpp.html \
    html/cityadditionform_8h.html \
    html/cityadditionform_8h.js \
    html/cityadditionform_8h_source.html \
    html/class_abstract_map-members.html \
    html/class_abstract_map.html \
    html/class_abstract_map.js \
    html/class_city-members.html \
    html/class_city.html \
    html/class_city.js \
    html/class_dijkstra-members.html \
    html/class_dijkstra.html \
    html/class_dijkstra.js \
    html/class_main_window-members.html \
    html/class_main_window.html \
    html/class_main_window.js \
    html/class_map-members.html \
    html/class_map.html \
    html/class_map.js \
    html/class_map_io-members.html \
    html/class_map_io.html \
    html/class_map_io.js \
    html/class_map_io_nrw-members.html \
    html/class_map_io_nrw.html \
    html/class_map_io_nrw.js \
    html/class_street-members.html \
    html/class_street.html \
    html/class_street.js \
    html/class_tuppel-members.html \
    html/class_tuppel.html \
    html/class_tuppel.js \
    html/class_ui_1_1_main_window-members.html \
    html/class_ui_1_1_main_window.html \
    html/class_ui_1_1city_addition_form-members.html \
    html/class_ui_1_1city_addition_form.html \
    html/class_ui___main_window-members.html \
    html/class_ui___main_window.html \
    html/class_ui___main_window.js \
    html/class_ui__city_addition_form-members.html \
    html/class_ui__city_addition_form.html \
    html/class_ui__city_addition_form.js \
    html/classcity_addition_form-members.html \
    html/classcity_addition_form.html \
    html/classcity_addition_form.js \
    html/classes.html \
    html/clipboard.js \
    html/codefolding.js \
    html/cookie.js \
    html/dijkstra_8cpp.html \
    html/dijkstra_8cpp.js \
    html/dijkstra_8h.html \
    html/dijkstra_8h.js \
    html/dijkstra_8h_source.html \
    html/dir_4c22f77aa34e92173e586baf93dddc3b.html \
    html/dir_4c22f77aa34e92173e586baf93dddc3b.js \
    html/dir_4fef79e7177ba769987a8da36c892c5f.html \
    html/dir_4fef79e7177ba769987a8da36c892c5f.js \
    html/dir_e589aa444e1a38b81892ffeaf7ffb4bb.html \
    html/dir_e589aa444e1a38b81892ffeaf7ffb4bb.js \
    html/doxygen.css \
    html/doxygen.svg \
    html/doxygen_crawl.html \
    html/files.html \
    html/files_dup.js \
    html/functions.html \
    html/functions_func.html \
    html/functions_vars.html \
    html/globals.html \
    html/globals_defs.html \
    html/globals_defs.js \
    html/globals_defs_q.html \
    html/globals_defs_w.html \
    html/globals_dup.js \
    html/globals_func.html \
    html/globals_m.html \
    html/globals_q.html \
    html/globals_w.html \
    html/hierarchy.html \
    html/hierarchy.js \
    html/index.html \
    html/main_8cpp.html \
    html/main_8cpp.js \
    html/mainwindow_8cpp.html \
    html/mainwindow_8h.html \
    html/mainwindow_8h.js \
    html/mainwindow_8h_source.html \
    html/map_8cpp.html \
    html/map_8h.html \
    html/map_8h.js \
    html/map_8h_source.html \
    html/mapio_8cpp.html \
    html/mapio_8h.html \
    html/mapio_8h.js \
    html/mapio_8h_source.html \
    html/mapionrw_8cpp.html \
    html/mapionrw_8h.html \
    html/mapionrw_8h.js \
    html/mapionrw_8h_source.html \
    html/moc__cityadditionform_8cpp.html \
    html/moc__cityadditionform_8cpp.js \
    html/moc__mainwindow_8cpp.html \
    html/moc__mainwindow_8cpp.js \
    html/moc__predefs_8h.html \
    html/moc__predefs_8h.js \
    html/moc__predefs_8h_source.html \
    html/namespace_q_t___w_a_r_n_i_n_g___d_i_s_a_b_l_e___d_e_p_r_e_c_a_t_e_d.html \
    html/namespace_q_t___w_a_r_n_i_n_g___d_i_s_a_b_l_e___d_e_p_r_e_c_a_t_e_d.js \
    html/namespace_ui.html \
    html/namespace_ui.js \
    html/namespaces.html \
    html/namespaces_dup.js \
    html/navtree.css \
    html/navtree.js \
    html/navtreedata.js \
    html/navtreeindex0.js \
    html/navtreeindex1.js \
    html/navtreeindex2.js \
    html/search/all_0.js \
    html/search/all_1.js \
    html/search/all_10.js \
    html/search/all_11.js \
    html/search/all_12.js \
    html/search/all_13.js \
    html/search/all_14.js \
    html/search/all_2.js \
    html/search/all_3.js \
    html/search/all_4.js \
    html/search/all_5.js \
    html/search/all_6.js \
    html/search/all_7.js \
    html/search/all_8.js \
    html/search/all_9.js \
    html/search/all_a.js \
    html/search/all_b.js \
    html/search/all_c.js \
    html/search/all_d.js \
    html/search/all_e.js \
    html/search/all_f.js \
    html/search/classes_0.js \
    html/search/classes_1.js \
    html/search/classes_2.js \
    html/search/classes_3.js \
    html/search/classes_4.js \
    html/search/classes_5.js \
    html/search/classes_6.js \
    html/search/classes_7.js \
    html/search/defines_0.js \
    html/search/defines_1.js \
    html/search/defines_2.js \
    html/search/files_0.js \
    html/search/files_1.js \
    html/search/files_2.js \
    html/search/files_3.js \
    html/search/files_4.js \
    html/search/files_5.js \
    html/search/functions_0.js \
    html/search/functions_1.js \
    html/search/functions_2.js \
    html/search/functions_3.js \
    html/search/functions_4.js \
    html/search/functions_5.js \
    html/search/functions_6.js \
    html/search/functions_7.js \
    html/search/functions_8.js \
    html/search/functions_9.js \
    html/search/namespaces_0.js \
    html/search/namespaces_1.js \
    html/search/search.css \
    html/search/search.js \
    html/search/searchdata.js \
    html/search/variables_0.js \
    html/search/variables_1.js \
    html/search/variables_2.js \
    html/search/variables_3.js \
    html/search/variables_4.js \
    html/search/variables_5.js \
    html/search/variables_6.js \
    html/search/variables_7.js \
    html/search/variables_8.js \
    html/search/variables_9.js \
    html/search/variables_a.js \
    html/search/variables_b.js \
    html/search/variables_c.js \
    html/search/variables_d.js \
    html/search/variables_e.js \
    html/street_8cpp.html \
    html/street_8h.html \
    html/street_8h.js \
    html/street_8h_source.html \
    html/struct_q_t___w_a_r_n_i_n_g___d_i_s_a_b_l_e___d_e_p_r_e_c_a_t_e_d_1_1qt__meta__tag___z_n10_main_window_e__t.html \
    html/struct_q_t___w_a_r_n_i_n_g___d_i_s_a_b_l_e___d_e_p_r_e_c_a_t_e_d_1_1qt__meta__tag___z_n16city_addition_form_e__t.html \
    html/tabs.css \
    html/ui__cityadditionform_8h.html \
    html/ui__cityadditionform_8h.js \
    html/ui__cityadditionform_8h_source.html \
    html/ui__mainwindow_8h.html \
    html/ui__mainwindow_8h.js \
    html/ui__mainwindow_8h_source.html
