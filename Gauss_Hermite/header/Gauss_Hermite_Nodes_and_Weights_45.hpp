//
//        Gauss_Hermite_Nodes_and_Weights_45.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 45.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_45_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_45_hpp__

void Gauss_Hermite_Nodes_and_Weights_45(long double*& nodes, long double*& weights) {
	nodes	= new long double[45];
	weights	= new long double[45];

	nodes[0] 	= 0;
	weights[0] 	= 0.32931845505069154525723210300488993483293643527537708272446333825383122062999813943761006500970652075735235891644689579515356618;

	nodes[1] 	= -0.32938389969666915384226159530616381239985579500108125133944445875752176188734897424032685949472471003702853681337678502505487598;
	weights[1] 	= 0.295635651966628421573346677094918526593629620922054983732338387652700715495146171976941970618541130101075777825251083113214247;

	nodes[2] 	= 0.32938389969666915384226159530616381239985579500108125133944445875752176188734897424032685949472471003702853681337678502505487598;
	weights[2] 	= 0.295635651966628421573346677094918526593629620922054983732338387652700715495146171976941970618541130101075777825251083113214247;

	nodes[3] 	= -0.65916168887413517200547611928564107150780496090568227948946290391929895442030038282455958894772758875119793309451279416143124075;
	weights[3] 	= 0.21377487850201806522943548814021203444447860564627514644074742687078126597348390433806947131083282355528180769915624691655501;

	nodes[4] 	= 0.65916168887413517200547611928564107150780496090568227948946290391929895442030038282455958894772758875119793309451279416143124075;
	weights[4] 	= 0.21377487850201806522943548814021203444447860564627514644074742687078126597348390433806947131083282355528180769915624691655501;

	nodes[5] 	= -0.98973342486571132626456398907321927275071194738481653387624789804570038798620749039308778761126447038648072720840229738469552019;
	weights[5] 	= 0.1243205019289360596336968672529647582871214485956010548221446987176672163137328825316575035309007159237468550697110393337026;

	nodes[6] 	= 0.98973342486571132626456398907321927275071194738481653387624789804570038798620749039308778761126447038648072720840229738469552019;
	weights[6] 	= 0.1243205019289360596336968672529647582871214485956010548221446987176672163137328825316575035309007159237468550697110393337026;

	nodes[7] 	= -1.3215117856392311608996576943327864463514207071358265658736174145721430841096680469096966118608173899545493588211933867859732944;
	weights[7] 	= 0.057992746631628722973214521495087888209306105055130691209099551022664315379104370327962263619593659749050267397496665764139;

	nodes[8] 	= 1.3215117856392311608996576943327864463514207071358265658736174145721430841096680469096966118608173899545493588211933867859732944;
	weights[8] 	= 0.057992746631628722973214521495087888209306105055130691209099551022664315379104370327962263619593659749050267397496665764139;

	nodes[9] 	= -1.6549291191547923420782729585911728874077461467817368440649742791306637918131122065603532184165723769995855960958758670127674206;
	weights[9] 	= 0.02161764443376565725154195176574824014527700541363402966331043400735143742132491602556500675721160519690610501140409092405;

	nodes[10] 	= 1.6549291191547923420782729585911728874077461467817368440649742791306637918131122065603532184165723769995855960958758670127674206;
	weights[10] 	= 0.02161764443376565725154195176574824014527700541363402966331043400735143742132491602556500675721160519690610501140409092405;

	nodes[11] 	= -1.9904454586466384433660965966121070614108203206434259846611947150606400030754576229712104308458412710586052169675840270751568988;
	weights[11] 	= 0.0064070706562040154008143584709186336552325750306362726250178542789679850642972000704317833566205904354660063528342733909;

	nodes[12] 	= 1.9904454586466384433660965966121070614108203206434259846611947150606400030754576229712104308458412710586052169675840270751568988;
	weights[12] 	= 0.0064070706562040154008143584709186336552325750306362726250178542789679850642972000704317833566205904354660063528342733909;

	nodes[13] 	= -2.3285579714531896165181632003411472558959944558988705022328204231654721329426024392894045282387993389170618492931752980520646696;
	weights[13] 	= 0.00150012788292975799989171931980153716087361794836523692904968935878444176299292183828530759265482508389101253400264371606;

	nodes[14] 	= 2.3285579714531896165181632003411472558959944558988705022328204231654721329426024392894045282387993389170618492931752980520646696;
	weights[14] 	= 0.00150012788292975799989171931980153716087361794836523692904968935878444176299292183828530759265482508389101253400264371606;

	nodes[15] 	= -2.6698124652513463097287370790748856604962091357266186604553220690218273569631315481663506281934602551824199257814521861315633919;
	weights[15] 	= 0.00027524242709953041398069203193691406096108687060817047957839234848147214224384800208838061239402552417856130488733459915;

	nodes[16] 	= 2.6698124652513463097287370790748856604962091357266186604553220690218273569631315481663506281934602551824199257814521861315633919;
	weights[16] 	= 0.00027524242709953041398069203193691406096108687060817047957839234848147214224384800208838061239402552417856130488733459915;

	nodes[17] 	= -3.0148178197492258368142427593062733535894817066884466989041950044266345348960506139353333313861105599698405248466638508204437098;
	weights[17] 	= 0.0000391832954488195003890637501500918627802670537206120651722952518519958029314773608203461509001232665790845535343965358;

	nodes[18] 	= 3.0148178197492258368142427593062733535894817066884466989041950044266345348960506139353333313861105599698405248466638508204437098;
	weights[18] 	= 0.0000391832954488195003890637501500918627802670537206120651722952518519958029314773608203461509001232665790845535343965358;

	nodes[19] 	= -3.3642645958565403212237766984434753848903062949178156939950225224977512221191453711203152217129107576069530943683558863473166716;
	weights[19] 	= 4.27545588639726473743850483773588782549223382296236439512963732050791203407582529582774171546016290529574086742064454e-6;

	nodes[20] 	= 3.3642645958565403212237766984434753848903062949178156939950225224977512221191453711203152217129107576069530943683558863473166716;
	weights[20] 	= 4.27545588639726473743850483773588782549223382296236439512963732050791203407582529582774171546016290529574086742064454e-6;

	nodes[21] 	= -3.7189496893415633288332964947135436795504701056622381990088671249091289229434798009588288324381005770099905715847333964128905987;
	weights[21] 	= 3.5225192415065159481279538182583881879948952357214528436794358438308964670372395619878199824721495692328917008559328e-7;

	nodes[22] 	= 3.7189496893415633288332964947135436795504701056622381990088671249091289229434798009588288324381005770099905715847333964128905987;
	weights[22] 	= 3.5225192415065159481279538182583881879948952357214528436794358438308964670372395619878199824721495692328917008559328e-7;

	nodes[23] 	= -4.0798099079253934537134759612344650889793155740244272519980963780455613698396414479915004568863838740172956407917786229541827831;
	weights[23] 	= 2.15128390741944406826115113273284222189901100924587279134740142556402149227393730304053153633578475115895634233678188e-8;

	nodes[24] 	= 4.0798099079253934537134759612344650889793155740244272519980963780455613698396414479915004568863838740172956407917786229541827831;
	weights[24] 	= 2.15128390741944406826115113273284222189901100924587279134740142556402149227393730304053153633578475115895634233678188e-8;

	nodes[25] 	= -4.4479690736019315509014497129031317360375968195160204138577008987964575137285540159593508968349847389555396431215616831884728643;
	weights[25] 	= 9.5182669412336584693818970515052034644626116215102290834053188746763592385707234603646108938324129356181919984530619e-10;

	nodes[26] 	= 4.4479690736019315509014497129031317360375968195160204138577008987964575137285540159593508968349847389555396431215616831884728643;
	weights[26] 	= 9.5182669412336584693818970515052034644626116215102290834053188746763592385707234603646108938324129356181919984530619e-10;

	nodes[27] 	= -4.8248063087032578863347958889145129145284379862281284664461618502567979482841176131901787088443261050541360165013916729291479332;
	weights[27] 	= 2.9642049893157551759136241544783969572320124738117337268813244742662154020401245078002271973023177347052718465251166e-11;

	nodes[28] 	= 4.8248063087032578863347958889145129145284379862281284664461618502567979482841176131901787088443261050541360165013916729291479332;
	weights[28] 	= 2.9642049893157551759136241544783969572320124738117337268813244742662154020401245078002271973023177347052718465251166e-11;

	nodes[29] 	= -5.2120588631620083271109920356336657912342500060895618382688410192444667588203159291334226573355298555223512192252837659236650001;
	weights[29] 	= 6.262038315835359235164033413718794297456823126983733958236932127601743088797894052972626306218733001597477110538312e-13;

	nodes[30] 	= 5.2120588631620083271109920356336657912342500060895618382688410192444667588203159291334226573355298555223512192252837659236650001;
	weights[30] 	= 6.262038315835359235164033413718794297456823126983733958236932127601743088797894052972626306218733001597477110538312e-13;

	nodes[31] 	= -5.6119841218396651048394168371412027965410287623385321065959092644305477535396920907484648191700714895792511383653590048024171475;
	weights[31] 	= 8.550087466370290201686537445849457189332565977391124887462261815667842211480270514561248645348829423067455653676834e-15;

	nodes[32] 	= 5.6119841218396651048394168371412027965410287623385321065959092644305477535396920907484648191700714895792511383653590048024171475;
	weights[32] 	= 8.550087466370290201686537445849457189332565977391124887462261815667842211480270514561248645348829423067455653676834e-15;

	nodes[33] 	= -6.0276294722536947303973303837645845859660877864878079631024304657261778995401699061643096424661077657908864827402435406732888529;
	weights[33] 	= 7.0674619157542899941159334122929147505617184281753741799219326436677700051523493620494314152213719748871743884349528e-17;

	nodes[34] 	= 6.0276294722536947303973303837645845859660877864878079631024304657261778995401699061643096424661077657908864827402435406732888529;
	weights[34] 	= 7.0674619157542899941159334122929147505617184281753741799219326436677700051523493620494314152213719748871743884349528e-17;

	nodes[35] 	= -6.4633149436642537851047456371473597658633077422169854988783948662305322273735791174285994834146208189431169580971309761465151059;
	weights[35] 	= 3.2248298707326505446556514190167439817219096262028682085724614987971683946743577948643726361732129919468477262631061e-19;

	nodes[36] 	= 6.4633149436642537851047456371473597658633077422169854988783948662305322273735791174285994834146208189431169580971309761465151059;
	weights[36] 	= 3.2248298707326505446556514190167439817219096262028682085724614987971683946743577948643726361732129919468477262631061e-19;

	nodes[37] 	= -6.9255820732775951489571190212738272336611424281779087149822036264345704129326186969827727600599664854992318592959008855686262654;
	weights[37] 	= 7.0737246502696397311650075322299421433907552789264566463805608161100395279581550972717523131512059097764264153914203e-22;

	nodes[38] 	= 6.9255820732775951489571190212738272336611424281779087149822036264345704129326186969827727600599664854992318592959008855686262654;
	weights[38] 	= 7.0737246502696397311650075322299421433907552789264566463805608161100395279581550972717523131512059097764264153914203e-22;

	nodes[39] 	= -7.4253266258561949354519828758381435062549788019261024025863675925297686285739236181761003018225241537639856996990937894410013557;
	weights[39] 	= 5.94817471592317180862554393741311308963164843746728559361258870980687723247452125996554849464815446002584719302586618e-25;

	nodes[40] 	= 7.4253266258561949354519828758381435062549788019261024025863675925297686285739236181761003018225241537639856996990937894410013557;
	weights[40] 	= 5.94817471592317180862554393741311308963164843746728559361258870980687723247452125996554849464815446002584719302586618e-25;

	nodes[41] 	= -7.9836998162220029719125170950123817070877687364482043528897799586599361527902927327870922580013690535300687986244951777736117025;
	weights[41] 	= 1.249482912055989677363994707627095011901020275688350440058754015038030719167282850296442232290322777861900249566323392e-28;

	nodes[42] 	= 7.9836998162220029719125170950123817070877687364482043528897799586599361527902927327870922580013690535300687986244951777736117025;
	weights[42] 	= 1.249482912055989677363994707627095011901020275688350440058754015038030719167282850296442232290322777861900249566323392e-28;

	nodes[43] 	= -8.6561523259903277651348438768277804514067370059012110578021431550477099382385901358358153996953133813088352633140367258956007848;
	weights[43] 	= 2.2308126620263936677859642572908484467122598846582758840674602137826626874583007345433571827167273871099282685113623665e-33;

	nodes[44] 	= 8.6561523259903277651348438768277804514067370059012110578021431550477099382385901358358153996953133813088352633140367258956007848;
	weights[44] 	= 2.2308126620263936677859642572908484467122598846582758840674602137826626874583007345433571827167273871099282685113623665e-33;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_45_hpp__)*/