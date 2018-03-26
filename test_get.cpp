namespace bg = boost::geometry;

int main(){
    bg::model::d3::earth_point<double> p1(108,56,23.18,'E',34,20,33.2,'N',385);
    bg::model::d3::earth_point<double> p2(108.94,34.3426,385,"Angle");
    bg::model::d3::earth_point<double> p3(1.90136,0.599931,385,"Redian");
    bg::model::d3::earth_point<double> p4(25,45,57.62,'W',54,23,38.26,'N',-5900);
    std::cout<<p1.get_lat()<<' '<<p1.get_long()<<' '<<p1.get_H()<<' '<<p1.x()<<' '<<p1.y()<<' '<<p1.z()<<std::endl;
    std::cout<<p2.get_lat()<<' '<<p2.get_long()<<' '<<p2.get_H()<<' '<<p2.x()<<' '<<p2.y()<<' '<<p2.z()<<std::endl;
    std::cout<<p3.get_lat()<<' '<<p3.get_long()<<' '<<p3.get_H()<<' '<<p3.x()<<' '<<p3.y()<<' '<<p3.z()<<std::endl;
    std::cout<<p4.get_lat()<<' '<<p4.get_long()<<' '<<p4.get_H()<<' '<<p4.x()<<' '<<p4.y()<<' '<<p4.z()<<std::endl;
    return 0;
}
