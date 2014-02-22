//
//        Gauss_Legendre_Nodes_and_Weights_37.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 37.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_37_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_37_hpp__

void Gauss_Legendre_Nodes_and_Weights_37(long double*& nodes, long double*& weights) {
	nodes	= new long double[37];
	weights	= new long double[37];

	nodes[0] 	= 0;
	weights[0] 	= 0.083768360993138904797017366369459391716875280068476719228071146066035214495012251924883432864183099622854571134179961916583742598;

	nodes[1] 	= -0.083670408954769901943048331736399177563521632035152293615293317645541405086318679901769894606420139256250684963815281230419267705;
	weights[1] 	= 0.0834745736258627872522530094845186990204353102030260500598461097569919850793471590607910097728032483343883010336808971584467805;

	nodes[2] 	= 0.083670408954769901943048331736399177563521632035152293615293317645541405086318679901769894606420139256250684963815281230419267705;
	weights[2] 	= 0.0834745736258627872522530094845186990204353102030260500598461097569919850793471590607910097728032483343883010336808971584467805;

	nodes[3] 	= -0.1667539302398519769686717304118244374666483960312763490041079988291268512880662141315335721972009273694865163151700974588340184;
	weights[3] 	= 0.08259527223643725089123030115283847077330645260203976818432580899354219971959283717932078598548108910000523629243266816574123;

	nodes[4] 	= 0.1667539302398519769686717304118244374666483960312763490041079988291268512880662141315335721972009273694865163151700974588340184;
	weights[4] 	= 0.08259527223643725089123030115283847077330645260203976818432580899354219971959283717932078598548108910000523629243266816574123;

	nodes[5] 	= -0.24866779279136575880556775148771621853167765168294515767851682697071530620940838729600255747015697225866288609777059652023034312;
	weights[5] 	= 0.0811366245084650305098776017997922635664600449746249385493945058727608869116477595832276193816248589822031473373889321614871;

	nodes[6] 	= 0.24866779279136575880556775148771621853167765168294515767851682697071530620940838729600255747015697225866288609777059652023034312;
	weights[6] 	= 0.0811366245084650305098776017997922635664600449746249385493945058727608869116477595832276193816248589822031473373889321614871;

	nodes[7] 	= -0.32883742988370699949847180133994048368002257529230803802293551800389282325404642362304432069869730874341923231478068848777605712;
	weights[7] 	= 0.07910886183752938076721218739664523851600693506418236602175058639946006024218528098830650878650929913570658953470141761395;

	nodes[8] 	= 0.32883742988370699949847180133994048368002257529230803802293551800389282325404642362304432069869730874341923231478068848777605712;
	weights[8] 	= 0.07910886183752938076721218739664523851600693506418236602175058639946006024218528098830650878650929913570658953470141761395;

	nodes[9] 	= -0.40670050931832611010093159161396660852247127935055889959630397048489653338731473906707319931041835216350695266117086992145533445;
	weights[9] 	= 0.0765262075705292378858879912066225154953633155315440516125146198832027972566598352051974460354516147434813718566976657768;

	nodes[10] 	= 0.40670050931832611010093159161396660852247127935055889959630397048489653338731473906707319931041835216350695266117086992145533445;
	weights[10] 	= 0.0765262075705292378858879912066225154953633155315440516125146198832027972566598352051974460354516147434813718566976657768;

	nodes[11] 	= -0.48171087780320555414719286888263917198952243434735039595510893699442598654494747372833315479273212036783421456054434951063717376;
	weights[11] 	= 0.073406777248488172724626631519795464983469942197648214633221776610301384372386511141135697516305024037919546105898551296;

	nodes[12] 	= 0.48171087780320555414719286888263917198952243434735039595510893699442598654494747372833315479273212036783421456054434951063717376;
	weights[12] 	= 0.073406777248488172724626631519795464983469942197648214633221776610301384372386511141135697516305024037919546105898551296;

	nodes[13] 	= -0.55334239186158178123509835822926447347228655224098232397199961173386928494506140025644186954041865565146274342288961141167064168;
	weights[13] 	= 0.06977245155570034488508135679301929118602367869775608738004010270708184139770414701266503731981015285835644538613310697;

	nodes[14] 	= 0.55334239186158178123509835822926447347228655224098232397199961173386928494506140025644186954041865565146274342288961141167064168;
	weights[14] 	= 0.06977245155570034488508135679301929118602367869775608738004010270708184139770414701266503731981015285835644538613310697;

	nodes[15] 	= -0.62109260840892448314815259159505731004172640060413515922390186643614757242832023029648951830174992599201071225207870532412799798;
	weights[15] 	= 0.0656487228727512494840237662979712181966773211497249264974008609687361342510858828789315636761987344309369494474720079;

	nodes[16] 	= 0.62109260840892448314815259159505731004172640060413515922390186643614757242832023029648951830174992599201071225207870532412799798;
	weights[16] 	= 0.0656487228727512494840237662979712181966773211497249264974008609687361342510858828789315636761987344309369494474720079;

	nodes[17] 	= -0.68448630913095935744552321243115370804434381097007768743284097760206610241085665525854772824194424466720565767552708793494752417;
	weights[17] 	= 0.061064516523225986130988104500496585677994009062363104874610422420972970362730700991177735442622726551605340984350383;

	nodes[18] 	= 0.68448630913095935744552321243115370804434381097007768743284097760206610241085665525854772824194424466720565767552708793494752417;
	weights[18] 	= 0.061064516523225986130988104500496585677994009062363104874610422420972970362730700991177735442622726551605340984350383;

	nodes[19] 	= -0.74307883398196526254704741747381287908990185326301260235214708346322830516897807558041213543918605116633142767291014142383243202;
	weights[19] 	= 0.056051987998274917808539239664252666426753855287767078828835259125588968501992623888487241178058210528003944435838434;

	nodes[20] 	= 0.74307883398196526254704741747381287908990185326301260235214708346322830516897807558041213543918605116633142767291014142383243202;
	weights[20] 	= 0.056051987998274917808539239664252666426753855287767078828835259125588968501992623888487241178058210528003944435838434;

	nodes[21] 	= -0.79645920050990229339304633550032452348563115894052160758188377804224538097742078839659197077388971485906483255739536202786444764;
	weights[21] 	= 0.05064629765482460160387586308671634405270576294535410972861539845575235480642995820600060450132430339065584035934616;

	nodes[22] 	= 0.79645920050990229339304633550032452348563115894052160758188377804224538097742078839659197077388971485906483255739536202786444764;
	weights[22] 	= 0.05064629765482460160387586308671634405270576294535410972861539845575235480642995820600060450132430339065584035934616;

	nodes[23] 	= -0.84425298734055596798745627617486023169063449589762218411906551980678089027828847851838111721402329421407931265169654497871508283;
	weights[23] 	= 0.04488536466243716665741030411019636019472330651441393295679996302426599609688279714872831344164454175199427681454172;

	nodes[24] 	= 0.84425298734055596798745627617486023169063449589762218411906551980678089027828847851838111721402329421407931265169654497871508283;
	weights[24] 	= 0.04488536466243716665741030411019636019472330651441393295679996302426599609688279714872831344164454175199427681454172;

	nodes[25] 	= -0.88612496215548607894614950901688644010681323482689630769855031804283393522436123912793078608156813128035610574086945267850804179;
	weights[25] 	= 0.0388096025019345444889623703284760199673891892736854008228945024616579120498744831474201681162570315064079849274398;

	nodes[26] 	= 0.88612496215548607894614950901688644010681323482689630769855031804283393522436123912793078608156813128035610574086945267850804179;
	weights[26] 	= 0.0388096025019345444889623703284760199673891892736854008228945024616579120498744831474201681162570315064079849274398;

	nodes[27] 	= -0.92178143741246374266814368670071348878159526716232966114141050837926465441811215550485434632101064877074122842221319493994822431;
	weights[27] 	= 0.0324616398475214810672342535014587287990945591225246664125520799377862070355614623710417669873492028376874818519937;

	nodes[28] 	= 0.92178143741246374266814368670071348878159526716232966114141050837926465441811215550485434632101064877074122842221319493994822431;
	weights[28] 	= 0.0324616398475214810672342535014587287990945591225246664125520799377862070355614623710417669873492028376874818519937;

	nodes[29] 	= -0.95097234326209482132857609681632593399754857980457738551756067210927540475350289734080253623699394909532394748120931964053083596;
	weights[29] 	= 0.0258860369905589335227594813624872980294841825751032704331104972516649687424195209583685708013992340960195209634157;

	nodes[30] 	= 0.95097234326209482132857609681632593399754857980457738551756067210927540475350289734080253623699394909532394748120931964053083596;
	weights[30] 	= 0.0258860369905589335227594813624872980294841825751032704331104972516649687424195209583685708013992340960195209634157;

	nodes[31] 	= -0.97349303005648574432889047566575934481538461670860826835950340942525496728168805797064800372629048343637036495651337445693273432;
	weights[31] 	= 0.0191290444890839660435019479401061741302952357462103256522467467901708118051752183078543380727746481389283196101259;

	nodes[32] 	= 0.97349303005648574432889047566575934481538461670860826835950340942525496728168805797064800372629048343637036495651337445693273432;
	weights[32] 	= 0.0191290444890839660435019479401061741302952357462103256522467467901708118051752183078543380727746481389283196101259;

	nodes[33] 	= -0.98918596321431918668409906058427230896245291758067398047602164555467738263806711377765612518688400471454054389884880949007425095;
	weights[33] 	= 0.0122387801003075565263048524363465759422909531112660823040416890298892819780882215962874221663011459316727690669059;

	nodes[34] 	= 0.98918596321431918668409906058427230896245291758067398047602164555467738263806711377765612518688400471454054389884880949007425095;
	weights[34] 	= 0.0122387801003075565263048524363465759422909531112660823040416890298892819780882215962874221663011459316727690669059;

	nodes[35] 	= -0.99794458247791364894080307431736328366900784948672915406882677468633247777578196887276542632270298202810219608206286378052823461;
	weights[35] 	= 0.00527305727949793935172205423353038918308830590652726543376349727715563214272947437261645438599338383259964842454701;

	nodes[36] 	= 0.99794458247791364894080307431736328366900784948672915406882677468633247777578196887276542632270298202810219608206286378052823461;
	weights[36] 	= 0.00527305727949793935172205423353038918308830590652726543376349727715563214272947437261645438599338383259964842454701;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_37_hpp__)*/