//
//        Gauss_Hermite_Nodes_and_Weights_15.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 15.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_15_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_15_hpp__

void Gauss_Hermite_Nodes_and_Weights_15(long double*& nodes, long double*& weights) {
	nodes	= new long double[15];
	weights	= new long double[15];

	nodes[0] 	= 0;
	weights[0] 	= 0.56410030872641753285262579733996353292453477640072243023805413420648986959478382400247069852378235816199417789938317089735068237;

	nodes[1] 	= -0.56506958325557574852602033719818886681552078800505788680930739682745058470915375159973526283034610292989738379345760524024548196;
	weights[1] 	= 0.412028687498898627025891079567810318933752327416921418778442735509794477208623358552365034954941563307506306039315558848117808;

	nodes[2] 	= 0.56506958325557574852602033719818886681552078800505788680930739682745058470915375159973526283034610292989738379345760524024548196;
	weights[2] 	= 0.412028687498898627025891079567810318933752327416921418778442735509794477208623358552365034954941563307506306039315558848117808;

	nodes[3] 	= -1.1361155852109206663191349055561021252835292947846650850648392599800715967101004409631966601830482707422651868052475122154285771;
	weights[3] 	= 0.15848891579593574688383938495999402721002703620834420484147417162556491543397074116784210832986285797844312792251257974564284;

	nodes[4] 	= 1.1361155852109206663191349055561021252835292947846650850648392599800715967101004409631966601830482707422651868052475122154285771;
	weights[4] 	= 0.15848891579593574688383938495999402721002703620834420484147417162556491543397074116784210832986285797844312792251257974564284;

	nodes[5] 	= -1.7199925751864889324158315251525615148429195630613888498938216300095132434761832428439718888176122448729491067241319740735703868;
	weights[5] 	= 0.03078003387254608222868141587578014556964507809535783167012620432094342629690748354354310507577256211302484779020141460117872;

	nodes[6] 	= 1.7199925751864889324158315251525615148429195630613888498938216300095132434761832428439718888176122448729491067241319740735703868;
	weights[6] 	= 0.03078003387254608222868141587578014556964507809535783167012620432094342629690748354354310507577256211302484779020141460117872;

	nodes[7] 	= -2.325732486173857745454044794485347012307095009563482895772162594874023804858360872706184155464310313457073665833608883700906885;
	weights[7] 	= 0.002778068842912775896078870492292134903012425113482266668571706121009897950137220528932794973888018310705648426765821401909046;

	nodes[8] 	= 2.325732486173857745454044794485347012307095009563482895772162594874023804858360872706184155464310313457073665833608883700906885;
	weights[8] 	= 0.002778068842912775896078870492292134903012425113482266668571706121009897950137220528932794973888018310705648426765821401909046;

	nodes[9] 	= -2.9671669279056032484889603635498063155705164076381381507212727522118956916046294049934561649283587290854852693064039196365781711;
	weights[9] 	= 0.0001000044412324998681272967361769785085169938781087638778923410716175215246096650343937891735161400595160380575139926529398634;

	nodes[10] 	= 2.9671669279056032484889603635498063155705164076381381507212727522118956916046294049934561649283587290854852693064039196365781711;
	weights[10] 	= 0.0001000044412324998681272967361769785085169938781087638778923410716175215246096650343937891735161400595160380575139926529398634;

	nodes[11] 	= -3.6699503734044525347292238331156814846958556260108268200827250197712929612325341525137596165272567610075980577793223907294202252;
	weights[11] 	= 1.059115547711066635775207910550163287296352401831549915876172845509130326551589368432561816927964129984362514113969623508344e-6;

	nodes[12] 	= 3.6699503734044525347292238331156814846958556260108268200827250197712929612325341525137596165272567610075980577793223907294202252;
	weights[12] 	= 1.059115547711066635775207910550163287296352401831549915876172845509130326551589368432561816927964129984362514113969623508344e-6;

	nodes[13] 	= -4.4999907073093915536643805305348242199319830534949905938271742846019366228525630586264389556919589962713446071341276080166860155;
	weights[13] 	= 1.522475804253517020160626669648266182796216031601453793001434959953549158269794714037583083893790370263626218665030954778057e-9;

	nodes[14] 	= 4.4999907073093915536643805305348242199319830534949905938271742846019366228525630586264389556919589962713446071341276080166860155;
	weights[14] 	= 1.522475804253517020160626669648266182796216031601453793001434959953549158269794714037583083893790370263626218665030954778057e-9;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_15_hpp__)*/