//
//        Gauss_Legendre_Nodes_and_Weights_63.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 63.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_63_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_63_hpp__

void Gauss_Legendre_Nodes_and_Weights_63(long double*& nodes, long double*& weights) {
	nodes	= new long double[63];
	weights	= new long double[63];

	nodes[0] 	= 0;
	weights[0] 	= 0.0494723666239310208886693604209259446135322539423832672394478847005094113475826316373209212784027162857171854154663301301354768;

	nodes[1] 	= -0.049452187116159627234233818051807609897755456899915946063163012003374246991309124489887194293575135661926872145791220523200048552;
	weights[1] 	= 0.0494118330399181789670396461167048596977283900845409695999168819552883288857412541148663128235434088567957421345218802238366935;

	nodes[2] 	= 0.049452187116159627234233818051807609897755456899915946063163012003374246991309124489887194293575135661926872145791220523200048552;
	weights[2] 	= 0.0494118330399181789670396461167048596977283900845409695999168819552883288857412541148663128235434088567957421345218802238366935;

	nodes[3] 	= -0.098783356446945279529703669453922103439558601178943217292233098832364686321162363545275896886551263512905168177560864883547601168;
	weights[3] 	= 0.04923038042374756078504311698814458759187653281991422328112462351339862598568573155089767086258941369108237785942147465583949;

	nodes[4] 	= 0.098783356446945279529703669453922103439558601178943217292233098832364686321162363545275896886551263512905168177560864883547601168;
	weights[4] 	= 0.04923038042374756078504311698814458759187653281991422328112462351339862598568573155089767086258941369108237785942147465583949;

	nodes[5] 	= -0.14787278635787196856983909655297294344146366408396302911734900665663934383505073994270549913035775004501145288483571092680786152;
	weights[5] 	= 0.0489284528205119899447093615492148212325258099816152681686619261552781835654312499373274984462288523669446750323163965734752;

	nodes[6] 	= 0.14787278635787196856983909655297294344146366408396302911734900665663934383505073994270549913035775004501145288483571092680786152;
	weights[6] 	= 0.0489284528205119899447093615492148212325258099816152681686619261552781835654312499373274984462288523669446750323163965734752;

	nodes[7] 	= -0.19660034679150668455762745706571769792078300580349275988855047201860717274352749653541194719280642753179486420516949220445824203;
	weights[7] 	= 0.04850678909788384786409009914580158202759176924782665496504473949450237965737935437998735134614894271858889918896435710335;

	nodes[8] 	= 0.19660034679150668455762745706571769792078300580349275988855047201860717274352749653541194719280642753179486420516949220445824203;
	weights[8] 	= 0.04850678909788384786409009914580158202759176924782665496504473949450237965737935437998735134614894271858889918896435710335;

	nodes[9] 	= -0.24484679324595336274840459392482937014834217535821483279903376694643347735027937460867012290930494861959114491103895714579896216;
	weights[9] 	= 0.0479664211379951314110527561951322536106849214321465805928401539145974147079440846286378132387480201342551517445753212571;

	nodes[10] 	= 0.24484679324595336274840459392482937014834217535821483279903376694643347735027937460867012290930494861959114491103895714579896216;
	weights[10] 	= 0.0479664211379951314110527561951322536106849214321465805928401539145974147079440846286378132387480201342551517445753212571;

	nodes[11] 	= -0.2924940585862514400361571555506669236893458719388423697060455248712980070816074093157596474010309285258128850877878602777633536;
	weights[11] 	= 0.047308671312268919080604988338844062386620001972645718119849484126788841209482574171044423099121680666937398226551700397;

	nodes[12] 	= 0.2924940585862514400361571555506669236893458719388423697060455248712980070816074093157596474010309285258128850877878602777633536;
	weights[12] 	= 0.047308671312268919080604988338844062386620001972645718119849484126788841209482574171044423099121680666937398226551700397;

	nodes[13] 	= -0.33942554197458440246883443159431508504391804671870448527148420145391405247612441882372209755529631490801318885367425309953346015;
	weights[13] 	= 0.0465351492453836965103954187469531872278224771737984216765893748746518938430130863538096140750950758249616375929820148;

	nodes[14] 	= 0.33942554197458440246883443159431508504391804671870448527148420145391405247612441882372209755529631490801318885367425309953346015;
	weights[14] 	= 0.0465351492453836965103954187469531872278224771737984216765893748746518938430130863538096140750950758249616375929820148;

	nodes[15] 	= -0.38552639421224789247761502227439815027504570543713342740705917954278405991353716645832845325855056498905363964564365641438754581;
	weights[15] 	= 0.045647747876292608685885992608542522426607323938963929813865260016550252082545173089984606188567037922736617217228196;

	nodes[16] 	= 0.38552639421224789247761502227439815027504570543713342740705917954278405991353716645832845325855056498905363964564365641438754581;
	weights[16] 	= 0.045647747876292608685885992608542522426607323938963929813865260016550252082545173089984606188567037922736617217228196;

	nodes[17] 	= -0.43068379879511160066208893391862998206648141720003732528477945292317312089066981285544166736731604363229946922630828706567790819;
	weights[17] 	= 0.04464863882594139537033266951681339323410056356252033365432727272664889002867009826571419283116796423898422374210904;

	nodes[18] 	= 0.43068379879511160066208893391862998206648141720003732528477945292317312089066981285544166736731604363229946922630828706567790819;
	weights[18] 	= 0.04464863882594139537033266951681339323410056356252033365432727272664889002867009826571419283116796423898422374210904;

	nodes[19] 	= -0.47478724799480439992221230985149474928601795896973316966711836225115911461824418324740112967947018716570597583857051764934281677;
	weights[19] 	= 0.0435402670830275907989643157044011396409312119283805380941306699751173511467385772144101942868835591069249801527846;

	nodes[20] 	= 0.47478724799480439992221230985149474928601795896973316966711836225115911461824418324740112967947018716570597583857051764934281677;
	weights[20] 	= 0.0435402670830275907989643157044011396409312119283805380941306699751173511467385772144101942868835591069249801527846;

	nodes[21] 	= -0.51772881329003324812447758452631553557737395502174835046316174601568354586659791337243723778894267961732068077089493191861432928;
	weights[21] 	= 0.042325345020815822982505485403027456482843378914196375089989674621569471503978246621351571093242768365783029595135;

	nodes[22] 	= 0.51772881329003324812447758452631553557737395502174835046316174601568354586659791337243723778894267961732068077089493191861432928;
	weights[22] 	= 0.042325345020815822982505485403027456482843378914196375089989674621569471503978246621351571093242768365783029595135;

	nodes[23] 	= -0.55940340948628501326769780007005469654052841560665752733698746575880395127390871831687314707437347636323769173580307271990143955;
	weights[23] 	= 0.04100684575966639863511003700907235074017796621249930393159847953295137840839067942306968257060454220699238358921;

	nodes[24] 	= 0.55940340948628501326769780007005469654052841560665752733698746575880395127390871831687314707437347636323769173580307271990143955;
	weights[24] 	= 0.04100684575966639863511003700907235074017796621249930393159847953295137840839067942306968257060454220699238358921;

	nodes[25] 	= -0.59970905187762523573900892686879986107116952399752914562710897100462167627327107451680482067476696881646263476475095810799300312;
	weights[25] 	= 0.0395879958915440939848079281492023644541949391141024388083643619259647393230863880662864954283993251067404740302;

	nodes[26] 	= 0.59970905187762523573900892686879986107116952399752914562710897100462167627327107451680482067476696881646263476475095810799300312;
	weights[26] 	= 0.0395879958915440939848079281492023644541949391141024388083643619259647393230863880662864954283993251067404740302;

	nodes[27] 	= -0.63854710582136538500030695387337648123329492461318163956158286516017699370314807567010641811010235621889744243048544637971826749;
	weights[27] 	= 0.038072267584349556763638324927889218627303357254175429490592215315559950834267918152240194724895581540218794023;

	nodes[28] 	= 0.63854710582136538500030695387337648123329492461318163956158286516017699370314807567010641811010235621889744243048544637971826749;
	weights[28] 	= 0.038072267584349556763638324927889218627303357254175429490592215315559950834267918152240194724895581540218794023;

	nodes[29] 	= -0.67582252811498609013110331596954450877981125472379970647423639886614818858849312370386393747963171980044071452831304915921885485;
	weights[29] 	= 0.03646337008545728963045240978754179183183295025429651122993433007616729725055503253959905095363262340649092993;

	nodes[30] 	= 0.67582252811498609013110331596954450877981125472379970647423639886614818858849312370386393747963171980044071452831304915921885485;
	weights[30] 	= 0.03646337008545728963045240978754179183183295025429651122993433007616729725055503253959905095363262340649092993;

	nodes[31] 	= -0.71144409958484580785143153770401487912828251178701249195340107778139063251073356746127317483639180668858566639149225178939596479;
	weights[31] 	= 0.03476524064535587769718050464278815710707330249414719432367976155661782304030314822603028893540698243128659508;

	nodes[32] 	= 0.71144409958484580785143153770401487912828251178701249195340107778139063251073356746127317483639180668858566639149225178939596479;
	weights[32] 	= 0.03476524064535587769718050464278815710707330249414719432367976155661782304030314822603028893540698243128659508;

	nodes[33] 	= -0.74532464831784741782932166103758763231460294726194072573502963183661617814441352791386201101324986775377291663232357824555759551;
	weights[33] 	= 0.0329820348837793417656831796724593071377942161572778555906245243277363395648705411220655435163112655554361395;

	nodes[34] 	= 0.74532464831784741782932166103758763231460294726194072573502963183661617814441352791386201101324986775377291663232357824555759551;
	weights[34] 	= 0.0329820348837793417656831796724593071377942161572778555906245243277363395648705411220655435163112655554361395;

	nodes[35] 	= -0.77738126299037233556333018991104275575979914204810200254119695026049537591476799027903011764449423457598307253599994556610554796;
	weights[35] 	= 0.031118116622219817508215988557188582024911189532915112650972723063990492851796227103635323390576375268814797;

	nodes[36] 	= 0.77738126299037233556333018991104275575979914204810200254119695026049537591476799027903011764449423457598307253599994556610554796;
	weights[36] 	= 0.031118116622219817508215988557188582024911189532915112650972723063990492851796227103635323390576375268814797;

	nodes[37] 	= -0.8075354957734567600514659863632431345941923607774963000573210069601706708161726739565094076008308140104525601541699791821865914;
	weights[37] 	= 0.029178047208280526945551502154028802282940945920805426830355067718396086066199199456152491147176574969103183;

	nodes[38] 	= 0.8075354957734567600514659863632431345941923607774963000573210069601706708161726739565094076008308140104525601541699791821865914;
	weights[38] 	= 0.029178047208280526945551502154028802282940945920805426830355067718396086066199199456152491147176574969103183;

	nodes[39] 	= -0.83571355431950284347180776961570545282361447758388598140006592985930021292978073208309498519938043646941895496314462372924325566;
	weights[39] 	= 0.02716657435909793322518983943941272660664268398662912748456490376205997065763050982500298380188268087153104;

	nodes[40] 	= 0.83571355431950284347180776961570545282361447758388598140006592985930021292978073208309498519938043646941895496314462372924325566;
	weights[40] 	= 0.02716657435909793322518983943941272660664268398662912748456490376205997065763050982500298380188268087153104;

	nodes[41] 	= -0.86184648236412371953961183943105995399653622521626831383589266763794010135663320330626299583070983625663937366785676379840886127;
	weights[41] 	= 0.02508862055334498661863013806844335610235380744763357244745649810745858831914312610339463648329648786761403;

	nodes[42] 	= 0.86184648236412371953961183943105995399653622521626831383589266763794010135663320330626299583070983625663937366785676379840886127;
	weights[42] 	= 0.02508862055334498661863013806844335610235380744763357244745649810745858831914312610339463648329648786761403;

	nodes[43] 	= -0.88587032850785342629029845731336987514986846948785371656042312456841470450533305259601551004437313436689608301147606316541459532;
	weights[43] 	= 0.0229492710048899331489423195617705058910474999190868284292047422701479453610906208781127436067315803066559;

	nodes[44] 	= 0.88587032850785342629029845731336987514986846948785371656042312456841470450533305259601551004437313436689608301147606316541459532;
	weights[44] 	= 0.0229492710048899331489423195617705058910474999190868284292047422701479453610906208781127436067315803066559;

	nodes[45] 	= -0.90772630277853155803695313291595322554779392827565820821769425337851091832180531425902467424715741223519512166723795622430504658;
	weights[45] 	= 0.0207537612580390907753419534214731533478132648784418211209014379724351815982736488274703056408145847928658;

	nodes[46] 	= 0.90772630277853155803695313291595322554779392827565820821769425337851091832180531425902467424715741223519512166723795622430504658;
	weights[46] 	= 0.0207537612580390907753419534214731533478132648784418211209014379724351815982736488274703056408145847928658;

	nodes[47] 	= -0.92736092062184320544703138132512156945605436106860191751711002600831308367008081954338315114177763117260011576818555950728272484;
	weights[47] 	= 0.0185074644601612704092605458051579631102389214176312854335687774772707375525358614985201862214927500234137;

	nodes[48] 	= 0.92736092062184320544703138132512156945605436106860191751711002600831308367008081954338315114177763117260011576818555950728272484;
	weights[48] 	= 0.0185074644601612704092605458051579631102389214176312854335687774772707375525358614985201862214927500234137;

	nodes[49] 	= -0.94472613404100980296637531962750066374458068895776698179936366138705419259334883789119895970138610770728349002442414201720425387;
	weights[49] 	= 0.016215878410338338882283672975130914915815603829930900970890493908075020866076276022169349273252791813523;

	nodes[50] 	= 0.94472613404100980296637531962750066374458068895776698179936366138705419259334883789119895970138610770728349002442414201720425387;
	weights[50] 	= 0.016215878410338338882283672975130914915815603829930900970890493908075020866076276022169349273252791813523;

	nodes[51] 	= -0.9597794497589419270703541662589889691654165031616554269143100209723838124832806216389672029389772119136994044363303547252993639;
	weights[51] 	= 0.01388461261611561082486608636762443491927765825349064754906966272881158601910391662786642474473266150766;

	nodes[52] 	= 0.9597794497589419270703541662589889691654165031616554269143100209723838124832806216389672029389772119136994044363303547252993639;
	weights[52] 	= 0.01388461261611561082486608636762443491927765825349064754906966272881158601910391662786642474473266150766;

	nodes[53] 	= -0.97248403469757002280196067857681094816497654120309783825229426366042669851360709865331410943000812332645139533952759487135650068;
	weights[53] 	= 0.011519376076880041750750606148618064841588793945388983235703970478206558576277131304574282962263555915867;

	nodes[54] 	= 0.97248403469757002280196067857681094816497654120309783825229426366042669851360709865331410943000812332645139533952759487135650068;
	weights[54] 	= 0.011519376076880041750750606148618064841588793945388983235703970478206558576277131304574282962263555915867;

	nodes[55] 	= -0.98280881059372723486251140569161173920259916195620734199530573384062427667387888731292009834501131670268000022159936904860767666;
	weights[55] 	= 0.009125968676326656354058645421759954849692417788375349669674385340929380288861266570749387445488698089988;

	nodes[56] 	= 0.98280881059372723486251140569161173920259916195620734199530573384062427667387888731292009834501131670268000022159936904860767666;
	weights[56] 	= 0.009125968676326656354058645421759954849692417788375349669674385340929380288861266570749387445488698089988;

	nodes[57] 	= -0.99072854689218946681089466720470345305426226535032777976683156639717250965250110310800170906591223367088310005573233991175384212;
	weights[57] 	= 0.006710291765960136251906930729728803973436028555716110243797176206161819795240140158239205680807158218554;

	nodes[58] 	= 0.99072854689218946681089466720470345305426226535032777976683156639717250965250110310800170906591223367088310005573233991175384212;
	weights[58] 	= 0.006710291765960136251906930729728803973436028555716110243797176206161819795240140158239205680807158218554;

	nodes[59] 	= -0.99622401277797010860219336114631135329307697185752329787632166639161706539834431952789760167857771780413669813624043808541625647;
	weights[59] 	= 0.0042785083468637618660784110826227855171274726708752114023382155682336219708787539858760566988334813241562;

	nodes[60] 	= 0.99622401277797010860219336114631135329307697185752329787632166639161706539834431952789760167857771780413669813624043808541625647;
	weights[60] 	= 0.0042785083468637618660784110826227855171274726708752114023382155682336219708787539858760566988334813241562;

	nodes[61] 	= -0.99928298402912378037893614092894446107279671818624281315175615271126840017864004927080657406080138812469168121609681771550573426;
	weights[61] 	= 0.00183987459557708411709244555404392385263847233884024248064426893817914336501886796225365784286221674623473;

	nodes[62] 	= 0.99928298402912378037893614092894446107279671818624281315175615271126840017864004927080657406080138812469168121609681771550573426;
	weights[62] 	= 0.00183987459557708411709244555404392385263847233884024248064426893817914336501886796225365784286221674623473;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_63_hpp__)*/