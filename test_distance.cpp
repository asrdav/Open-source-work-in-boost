namespace bg = boost::geometry;

int main(){
    bg::model::d3::earth_point<double> p1(108,56,23.18,'E',34,20,33.2,'N',385);
    bg::model::d3::earth_point<double> p2(25,45,57.62,'W',54,23,38.26,'N',-5900);

    std::cout<<p1.shortest_distance_GreatCircle(p2)<<std::endl;

    return 0;
}
