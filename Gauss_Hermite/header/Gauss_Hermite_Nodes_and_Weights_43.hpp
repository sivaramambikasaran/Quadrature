//
//        Gauss_Hermite_Nodes_and_Weights_43.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 43.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_43_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_43_hpp__

void Gauss_Hermite_Nodes_and_Weights_43(long double*& nodes, long double*& weights) {
	nodes	= new long double[43];
	weights	= new long double[43];

	nodes[0] 	= 0;
	weights[0] 	= 0.33680296539275271674035101443681925153368499062254474369547386866869102109886173351573756648719985077456491252818432524504341996;

	nodes[1] 	= -0.33687619662553302459285723545713451323950123486233641038559276474519011634564017511156477623041962756581688342001299260456540289;
	weights[1] 	= 0.300865993867659789644811678866745496202186542601667622060460843381814065769008296247514744830606618170747287959243765499819674;

	nodes[2] 	= 0.33687619662553302459285723545713451323950123486233641038559276474519011634564017511156477623041962756581688342001299260456540289;
	weights[2] 	= 0.300865993867659789644811678866745496202186542601667622060460843381814065769008296247514744830606618170747287959243765499819674;

	nodes[3] 	= -0.67419327674231391411566809480852677499462892458203193477241904443315802445333110704012703427778858730020555928758819985637090328;
	weights[3] 	= 0.2143434970018836830129692509218299649289963940500653075932364419780004990546807002917249522659233727781192523144671413121381;

	nodes[4] 	= 0.67419327674231391411566809480852677499462892458203193477241904443315802445333110704012703427778858730020555928758819985637090328;
	weights[4] 	= 0.2143434970018836830129692509218299649289963940500653075932364419780004990546807002917249522659233727781192523144671413121381;

	nodes[5] 	= -1.0123996845633197964032754553292300092137677573593903185194938786379933565415265520172433178258855762006625179710437894856917588;
	weights[5] 	= 0.1215673798863880745573497177769412474461543957212894504352620028636060474781955275185417740053804523526650422882428171059184;

	nodes[6] 	= 1.0123996845633197964032754553292300092137677573593903185194938786379933565415265520172433178258855762006625179710437894856917588;
	weights[6] 	= 0.1215673798863880745573497177769412474461543957212894504352620028636060474781955275185417740053804523526650422882428171059184;

	nodes[7] 	= -1.3519593686708703714719577159412320308352440674290354962467513953617061370180258878030520537497471626989485930848816876130588621;
	weights[7] 	= 0.054724809081874854392172490392283679884066002234663011167119065703343222172681898818831557052259202247397439614089257209246;

	nodes[8] 	= 1.3519593686708703714719577159412320308352440674290354962467513953617061370180258878030520537497471626989485930848816876130588621;
	weights[8] 	= 0.054724809081874854392172490392283679884066002234663011167119065703343222172681898818831557052259202247397439614089257209246;

	nodes[9] 	= -1.6933605309399098651652190438884287064695815978902212887571643334591430244868795358476947661371254839996941909430224422629802103;
	weights[9] 	= 0.019468160151101705561965765878233176432920350105515068547855803271895350785172721091253245226556397623698618634575211758507;

	nodes[10] 	= 1.6933605309399098651652190438884287064695815978902212887571643334591430244868795358476947661371254839996941909430224422629802103;
	weights[10] 	= 0.019468160151101705561965765878233176432920350105515068547855803271895350785172721091253245226556397623698618634575211758507;

	nodes[11] 	= -2.0371256888641935768503964448586572776835675720029884523843542672195969631057452847507222310946551059362487445096490954077301812;
	weights[11] 	= 0.00544145529324181689601057015880693281965568713429772273743727624662477427808015675540807884169478657334010025761508602613;

	nodes[12] 	= 2.0371256888641935768503964448586572776835675720029884523843542672195969631057452847507222310946551059362487445096490954077301812;
	weights[12] 	= 0.00544145529324181689601057015880693281965568713429772273743727624662477427808015675540807884169478657334010025761508602613;

	nodes[13] 	= -2.3838237072843598123629002086655408962158658368050826167927817626884099160577498524587200120609392154633874875640849397153546653;
	weights[13] 	= 0.0011860700927674240877469670451113641053025925815402790350742923067250927571102535528763530082024115183509104806515757269;

	nodes[14] 	= 2.3838237072843598123629002086655408962158658368050826167927817626884099160577498524587200120609392154633874875640849397153546653;
	weights[14] 	= 0.0011860700927674240877469670451113641053025925815402790350742923067250927571102535528763530082024115183509104806515757269;

	nodes[15] 	= -2.7340846945379050389537593487963911066372973089480068864832021957042156030707400403314225962883773594197742694788609844555246937;
	weights[15] 	= 0.00019972435671322895564234702373229282565309988778232527170377679779791230986609516336879562870356344873891057913264131056;

	nodes[16] 	= 2.7340846945379050389537593487963911066372973089480068864832021957042156030707400403314225962883773594197742694788609844555246937;
	weights[16] 	= 0.00019972435671322895564234702373229282565309988778232527170377679779791230986609516336879562870356344873891057913264131056;

	nodes[17] 	= -3.0886190396004187148858855359351490525615713398088669541099770459028754805144782514016611774027050831859510880700388438194626408;
	weights[17] 	= 0.00002568057307705665995939501175472538595268981781928521482844032487853274079127428517484598982645456601004778586025972649;

	nodes[18] 	= 3.0886190396004187148858855359351490525615713398088669541099770459028754805144782514016611774027050831859510880700388438194626408;
	weights[18] 	= 0.00002568057307705665995939501175472538595268981781928521482844032487853274079127428517484598982645456601004778586025972649;

	nodes[19] 	= -3.4482424822200031018576225497320977262352601499648028465157099131673830251091494264311665401421341444176439918042694822834179136;
	weights[19] 	= 2.485137742411527237578893557727830957252669153686371919152777716822751639045174560696929613495440220567114407979591674e-6;

	nodes[20] 	= 3.4482424822200031018576225497320977262352601499648028465157099131673830251091494264311665401421341444176439918042694822834179136;
	weights[20] 	= 2.485137742411527237578893557727830957252669153686371919152777716822751639045174560696929613495440220567114407979591674e-6;

	nodes[21] 	= -3.8139101240654274072859802569545368213884876959928377361715692237830709978199522220976674082277222166229525227969679754125171074;
	weights[21] 	= 1.77778304454797009608530344463770305224056706801057143841542539296719816326544710543582568692516165129806089222585775e-7;

	nodes[22] 	= 3.8139101240654274072859802569545368213884876959928377361715692237830709978199522220976674082277222166229525227969679754125171074;
	weights[22] 	= 1.77778304454797009608530344463770305224056706801057143841542539296719816326544710543582568692516165129806089222585775e-7;

	nodes[23] 	= -4.1867640213660029217617999114370739596287182533087860871635736261550876876648764471688958016347710044642042681646856047242937789;
	weights[23] 	= 9.1931960675404239441913702098506003448038656692077757156048662860940158970093564974255690635599326925363292884231961e-9;

	nodes[24] 	= 4.1867640213660029217617999114370739596287182533087860871635736261550876876648764471688958016347710044642042681646856047242937789;
	weights[24] 	= 9.1931960675404239441913702098506003448038656692077757156048662860940158970093564974255690635599326925363292884231961e-9;

	nodes[25] 	= -4.5682020755441553490864193882466881634029290058281349177391431708284700626482454657937546857612829756385090998730101516482068922;
	weights[25] 	= 3.34071791531755939020833193660604614468988138216887820413646059905785550388674073491237163564171098422778867248600419e-10;

	nodes[26] 	= 4.5682020755441553490864193882466881634029290058281349177391431708284700626482454657937546857612829756385090998730101516482068922;
	weights[26] 	= 3.34071791531755939020833193660604614468988138216887820413646059905785550388674073491237163564171098422778867248600419e-10;

	nodes[27] 	= -4.9599816751949553142070946461445546033651962192859065351726578635488438918204693082687972721734023200486975610558556334690288474;
	weights[27] 	= 8.2271061208164924228410438945892732633705183254603389897961630076509583055162828641185990141799149390965651608126492e-12;

	nodes[28] 	= 4.9599816751949553142070946461445546033651962192859065351726578635488438918204693082687972721734023200486975610558556334690288474;
	weights[28] 	= 8.2271061208164924228410438945892732633705183254603389897961630076509583055162828641185990141799149390965651608126492e-12;

	nodes[29] 	= -5.3643829011515566820529832225242551262750283191878072575398853426251219772386322247544728638450023635627375689265083379294122027;
	weights[29] 	= 1.30921041665847775052041773022197139923322812343722425849043919971868514272544990068833352632242044220570899476764769e-13;

	nodes[30] 	= 5.3643829011515566820529832225242551262750283191878072575398853426251219772386322247544728638450023635627375689265083379294122027;
	weights[30] 	= 1.30921041665847775052041773022197139923322812343722425849043919971868514272544990068833352632242044220570899476764769e-13;

	nodes[31] 	= -5.7844803140775571639971855330279939202557200659708424257237005738086567388727996531133127280663248202526327594882747798284644096;
	weights[31] 	= 1.26220322097581856629914982192510816366765647012914232628622014774980864783954202018501989666618942859857209767327252e-15;

	nodes[32] 	= 5.7844803140775571639971855330279939202557200659708424257237005738086567388727996531133127280663248202526327594882747798284644096;
	weights[32] 	= 1.26220322097581856629914982192510816366765647012914232628622014774980864783954202018501989666618942859857209767327252e-15;

	nodes[33] 	= -6.2246289668942206854221888973126110349719555353199275186060870170894283742756279420136860850752994176888133084193758356131739577;
	weights[33] 	= 6.7308117032427445638169775808864362655876701926228834845407962660460629747957782654866887587818743725223156759412911e-18;

	nodes[34] 	= 6.2246289668942206854221888973126110349719555353199275186060870170894283742756279420136860850752994176888133084193758356131739577;
	weights[34] 	= 6.7308117032427445638169775808864362655876701926228834845407962660460629747957782654866887587818743725223156759412911e-18;

	nodes[35] 	= -6.6914198727121077472820058322542481049215311236836974457940002524871255285505754632970030572489241629518975742211278967285270746;
	weights[35] 	= 1.73207537909133368531181778534192607863968882803126334216401085890758501929515856352439119588395078751840355990655076e-20;

	nodes[36] 	= 6.6914198727121077472820058322542481049215311236836974457940002524871255285505754632970030572489241629518975742211278967285270746;
	weights[36] 	= 1.73207537909133368531181778534192607863968882803126334216401085890758501929515856352439119588395078751840355990655076e-20;

	nodes[37] 	= -7.1958276123464342498981301024023728137624486327900393823348158504140737010980412057444602437596577429830611898151833372608210257;
	weights[37] 	= 1.720336826028200371122371144655833475163319289811235651176310624288855751153675800370439373594952668169576958594586554e-23;

	nodes[38] 	= 7.1958276123464342498981301024023728137624486327900393823348158504140737010980412057444602437596577429830611898151833372608210257;
	weights[38] 	= 1.720336826028200371122371144655833475163319289811235651176310624288855751153675800370439373594952668169576958594586554e-23;

	nodes[39] 	= -7.7591530847325340407640464057882339167915755709316370801186781576635020551713594696335895487127075039343517248639949098919866472;
	weights[39] 	= 4.32214605993392410026942912798051430724344937648596072901203470941090290261256517344739560416869440900303995288538074e-27;

	nodes[40] 	= 7.7591530847325340407640464057882339167915755709316370801186781576635020551713594696335895487127075039343517248639949098919866472;
	weights[40] 	= 4.32214605993392410026942912798051430724344937648596072901203470941090290261256517344739560416869440900303995288538074e-27;

	nodes[41] 	= -8.4372386310833762836922228833446384736855866911166954733236637755671542298884285471062891517237203068126965725820095294995440048;
	weights[41] 	= 9.4863063412564384378103858855275481141068976562037705757296494178825082063485999974840460378026048354560578671171812708e-32;

	nodes[42] 	= 8.4372386310833762836922228833446384736855866911166954733236637755671542298884285471062891517237203068126965725820095294995440048;
	weights[42] 	= 9.4863063412564384378103858855275481141068976562037705757296494178825082063485999974840460378026048354560578671171812708e-32;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_43_hpp__)*/