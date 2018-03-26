namespace bg = boost::geometry;

int main(){
    bg::model::d3::earth_point<double> p1(108,56,23.18,'E',34,20,33.2,'N',385);
    p1.set_lat(54.23406448,"Angle");
    std::cout<<p1.get_lat()<<' '<<p1.get_long()<<' '<<p1.get_H()<<' '<<p1.x()<<' '<<p1.y()<<' '<<p1.z()<<std::endl;
    p1.set_long(-0.449702,"Redian");
    std::cout<<p1.get_lat()<<' '<<p1.get_long()<<' '<<p1.get_H()<<' '<<p1.x()<<' '<<p1.y()<<' '<<p1.z()<<std::endl;
    p1.set_H(-986.7);
    std::cout<<p1.get_lat()<<' '<<p1.get_long()<<' '<<p1.get_H()<<' '<<p1.x()<<' '<<p1.y()<<' '<<p1.z()<<std::endl;
    return 0;
}
