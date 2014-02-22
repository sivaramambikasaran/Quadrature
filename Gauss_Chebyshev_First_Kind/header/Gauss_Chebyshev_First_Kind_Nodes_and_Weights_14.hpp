//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_14.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 14.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_14_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_14_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_14(long double*& nodes, long double& weight) {
	weight 		= 0.22439947525641380274733167023425020601408352852679327292678175659341545759187207133057391609586550485586772046523445047479241747;

	nodes		= new long double[14];

	nodes[0] 	= 0.99371220989324258353314824194737869715263549578207321492775650215951038096889094466909957648727064382235430090455376689544457885;
	nodes[1] 	= 0.94388333030836756289526360715103662152063246819031638184372537432131943503758466418252941903481932276227960741349249510914835859;
	nodes[2] 	= 0.846724199228284168352775816262965271510045028791363880459699986215067425396788004608913754590343028303284139431775577124289217;
	nodes[3] 	= 0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[4] 	= 0.5320320765153365635576303672303707301645839555086878851977353044941347235299017167950354327642331786314196171331486483438492121;
	nodes[5] 	= 0.3302790619551670817748776125965723703131814690300747593765437222435250687954688517389075196497193759942164267574669946716847655;
	nodes[6] 	= 0.1119644761033078584687059352720242032581964229674801150338625928690994145000046603589780831404428817615006675504234968466338679;
	nodes[7] 	= -0.1119644761033078584687059352720242032581964229674801150338625928690994145000046603589780831404428817615006675504234968466338679;
	nodes[8] 	= -0.3302790619551670817748776125965723703131814690300747593765437222435250687954688517389075196497193759942164267574669946716847655;
	nodes[9] 	= -0.5320320765153365635576303672303707301645839555086878851977353044941347235299017167950354327642331786314196171331486483438492121;
	nodes[10] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[11] 	= -0.846724199228284168352775816262965271510045028791363880459699986215067425396788004608913754590343028303284139431775577124289217;
	nodes[12] 	= -0.9438833303083675628952636071510366215206324681903163818437253743213194350375846641825294190348193227622796074134924951091483586;
	nodes[13] 	= -0.99371220989324258353314824194737869715263549578207321492775650215951038096889094466909957648727064382235430090455376689544457885;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_14_hpp__)*/