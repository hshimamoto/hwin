using namespace hWin;

#define DEFINE_WNDPROC(n)	\
wnd *p__wnd ## n; \
static CALLBACK LRESULT \
wndproc ## n (HWND w, UINT m, WPARAM wp, LPARAM lp) \
{ return p__wnd ## n -> proc(w, m, wp, lp); }
#if 0 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(0)
#endif
#if 1 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(1)
#endif
#if 2 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(2)
#endif
#if 3 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(3)
#endif
#if 4 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(4)
#endif
#if 5 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(5)
#endif
#if 6 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(6)
#endif
#if 7 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(7)
#endif
#if 8 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(8)
#endif
#if 9 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(9)
#endif
#if 10 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(10)
#endif
#if 11 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(11)
#endif
#if 12 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(12)
#endif
#if 13 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(13)
#endif
#if 14 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(14)
#endif
#if 15 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(15)
#endif
#if 16 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(16)
#endif
#if 17 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(17)
#endif
#if 18 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(18)
#endif
#if 19 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(19)
#endif
#if 20 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(20)
#endif
#if 21 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(21)
#endif
#if 22 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(22)
#endif
#if 23 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(23)
#endif
#if 24 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(24)
#endif
#if 25 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(25)
#endif
#if 26 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(26)
#endif
#if 27 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(27)
#endif
#if 28 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(28)
#endif
#if 29 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(29)
#endif
#if 30 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(30)
#endif
#if 31 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(31)
#endif
#if 32 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(32)
#endif
#if 33 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(33)
#endif
#if 34 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(34)
#endif
#if 35 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(35)
#endif
#if 36 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(36)
#endif
#if 37 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(37)
#endif
#if 38 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(38)
#endif
#if 39 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(39)
#endif
#if 40 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(40)
#endif
#if 41 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(41)
#endif
#if 42 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(42)
#endif
#if 43 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(43)
#endif
#if 44 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(44)
#endif
#if 45 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(45)
#endif
#if 46 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(46)
#endif
#if 47 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(47)
#endif
#if 48 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(48)
#endif
#if 49 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(49)
#endif
#if 50 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(50)
#endif
#if 51 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(51)
#endif
#if 52 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(52)
#endif
#if 53 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(53)
#endif
#if 54 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(54)
#endif
#if 55 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(55)
#endif
#if 56 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(56)
#endif
#if 57 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(57)
#endif
#if 58 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(58)
#endif
#if 59 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(59)
#endif
#if 60 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(60)
#endif
#if 61 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(61)
#endif
#if 62 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(62)
#endif
#if 63 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(63)
#endif
#if 64 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(64)
#endif
#if 65 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(65)
#endif
#if 66 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(66)
#endif
#if 67 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(67)
#endif
#if 68 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(68)
#endif
#if 69 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(69)
#endif
#if 70 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(70)
#endif
#if 71 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(71)
#endif
#if 72 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(72)
#endif
#if 73 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(73)
#endif
#if 74 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(74)
#endif
#if 75 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(75)
#endif
#if 76 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(76)
#endif
#if 77 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(77)
#endif
#if 78 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(78)
#endif
#if 79 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(79)
#endif
#if 80 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(80)
#endif
#if 81 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(81)
#endif
#if 82 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(82)
#endif
#if 83 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(83)
#endif
#if 84 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(84)
#endif
#if 85 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(85)
#endif
#if 86 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(86)
#endif
#if 87 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(87)
#endif
#if 88 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(88)
#endif
#if 89 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(89)
#endif
#if 90 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(90)
#endif
#if 91 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(91)
#endif
#if 92 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(92)
#endif
#if 93 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(93)
#endif
#if 94 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(94)
#endif
#if 95 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(95)
#endif
#if 96 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(96)
#endif
#if 97 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(97)
#endif
#if 98 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(98)
#endif
#if 99 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(99)
#endif
#if 100 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(100)
#endif
#if 101 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(101)
#endif
#if 102 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(102)
#endif
#if 103 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(103)
#endif
#if 104 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(104)
#endif
#if 105 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(105)
#endif
#if 106 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(106)
#endif
#if 107 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(107)
#endif
#if 108 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(108)
#endif
#if 109 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(109)
#endif
#if 110 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(110)
#endif
#if 111 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(111)
#endif
#if 112 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(112)
#endif
#if 113 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(113)
#endif
#if 114 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(114)
#endif
#if 115 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(115)
#endif
#if 116 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(116)
#endif
#if 117 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(117)
#endif
#if 118 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(118)
#endif
#if 119 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(119)
#endif
#if 120 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(120)
#endif
#if 121 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(121)
#endif
#if 122 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(122)
#endif
#if 123 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(123)
#endif
#if 124 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(124)
#endif
#if 125 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(125)
#endif
#if 126 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(126)
#endif
#if 127 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(127)
#endif
#if 128 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(128)
#endif
#if 129 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(129)
#endif
#if 130 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(130)
#endif
#if 131 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(131)
#endif
#if 132 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(132)
#endif
#if 133 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(133)
#endif
#if 134 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(134)
#endif
#if 135 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(135)
#endif
#if 136 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(136)
#endif
#if 137 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(137)
#endif
#if 138 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(138)
#endif
#if 139 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(139)
#endif
#if 140 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(140)
#endif
#if 141 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(141)
#endif
#if 142 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(142)
#endif
#if 143 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(143)
#endif
#if 144 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(144)
#endif
#if 145 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(145)
#endif
#if 146 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(146)
#endif
#if 147 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(147)
#endif
#if 148 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(148)
#endif
#if 149 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(149)
#endif
#if 150 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(150)
#endif
#if 151 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(151)
#endif
#if 152 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(152)
#endif
#if 153 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(153)
#endif
#if 154 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(154)
#endif
#if 155 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(155)
#endif
#if 156 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(156)
#endif
#if 157 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(157)
#endif
#if 158 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(158)
#endif
#if 159 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(159)
#endif
#if 160 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(160)
#endif
#if 161 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(161)
#endif
#if 162 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(162)
#endif
#if 163 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(163)
#endif
#if 164 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(164)
#endif
#if 165 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(165)
#endif
#if 166 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(166)
#endif
#if 167 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(167)
#endif
#if 168 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(168)
#endif
#if 169 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(169)
#endif
#if 170 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(170)
#endif
#if 171 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(171)
#endif
#if 172 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(172)
#endif
#if 173 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(173)
#endif
#if 174 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(174)
#endif
#if 175 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(175)
#endif
#if 176 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(176)
#endif
#if 177 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(177)
#endif
#if 178 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(178)
#endif
#if 179 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(179)
#endif
#if 180 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(180)
#endif
#if 181 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(181)
#endif
#if 182 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(182)
#endif
#if 183 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(183)
#endif
#if 184 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(184)
#endif
#if 185 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(185)
#endif
#if 186 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(186)
#endif
#if 187 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(187)
#endif
#if 188 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(188)
#endif
#if 189 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(189)
#endif
#if 190 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(190)
#endif
#if 191 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(191)
#endif
#if 192 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(192)
#endif
#if 193 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(193)
#endif
#if 194 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(194)
#endif
#if 195 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(195)
#endif
#if 196 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(196)
#endif
#if 197 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(197)
#endif
#if 198 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(198)
#endif
#if 199 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(199)
#endif
#if 200 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(200)
#endif
#if 201 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(201)
#endif
#if 202 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(202)
#endif
#if 203 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(203)
#endif
#if 204 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(204)
#endif
#if 205 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(205)
#endif
#if 206 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(206)
#endif
#if 207 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(207)
#endif
#if 208 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(208)
#endif
#if 209 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(209)
#endif
#if 210 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(210)
#endif
#if 211 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(211)
#endif
#if 212 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(212)
#endif
#if 213 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(213)
#endif
#if 214 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(214)
#endif
#if 215 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(215)
#endif
#if 216 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(216)
#endif
#if 217 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(217)
#endif
#if 218 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(218)
#endif
#if 219 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(219)
#endif
#if 220 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(220)
#endif
#if 221 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(221)
#endif
#if 222 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(222)
#endif
#if 223 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(223)
#endif
#if 224 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(224)
#endif
#if 225 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(225)
#endif
#if 226 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(226)
#endif
#if 227 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(227)
#endif
#if 228 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(228)
#endif
#if 229 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(229)
#endif
#if 230 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(230)
#endif
#if 231 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(231)
#endif
#if 232 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(232)
#endif
#if 233 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(233)
#endif
#if 234 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(234)
#endif
#if 235 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(235)
#endif
#if 236 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(236)
#endif
#if 237 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(237)
#endif
#if 238 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(238)
#endif
#if 239 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(239)
#endif
#if 240 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(240)
#endif
#if 241 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(241)
#endif
#if 242 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(242)
#endif
#if 243 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(243)
#endif
#if 244 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(244)
#endif
#if 245 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(245)
#endif
#if 246 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(246)
#endif
#if 247 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(247)
#endif
#if 248 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(248)
#endif
#if 249 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(249)
#endif
#if 250 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(250)
#endif
#if 251 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(251)
#endif
#if 252 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(252)
#endif
#if 253 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(253)
#endif
#if 254 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(254)
#endif
#if 255 < HWIN_MAX_WINDOW
DEFINE_WNDPROC(255)
#endif
namespace hWin {
static struct wndcontainer a__wnds[HWIN_MAX_WINDOW] = {
#if 0 < HWIN_MAX_WINDOW
{ &p__wnd0, wndproc0 },
#endif
#if 1 < HWIN_MAX_WINDOW
{ &p__wnd1, wndproc1 },
#endif
#if 2 < HWIN_MAX_WINDOW
{ &p__wnd2, wndproc2 },
#endif
#if 3 < HWIN_MAX_WINDOW
{ &p__wnd3, wndproc3 },
#endif
#if 4 < HWIN_MAX_WINDOW
{ &p__wnd4, wndproc4 },
#endif
#if 5 < HWIN_MAX_WINDOW
{ &p__wnd5, wndproc5 },
#endif
#if 6 < HWIN_MAX_WINDOW
{ &p__wnd6, wndproc6 },
#endif
#if 7 < HWIN_MAX_WINDOW
{ &p__wnd7, wndproc7 },
#endif
#if 8 < HWIN_MAX_WINDOW
{ &p__wnd8, wndproc8 },
#endif
#if 9 < HWIN_MAX_WINDOW
{ &p__wnd9, wndproc9 },
#endif
#if 10 < HWIN_MAX_WINDOW
{ &p__wnd10, wndproc10 },
#endif
#if 11 < HWIN_MAX_WINDOW
{ &p__wnd11, wndproc11 },
#endif
#if 12 < HWIN_MAX_WINDOW
{ &p__wnd12, wndproc12 },
#endif
#if 13 < HWIN_MAX_WINDOW
{ &p__wnd13, wndproc13 },
#endif
#if 14 < HWIN_MAX_WINDOW
{ &p__wnd14, wndproc14 },
#endif
#if 15 < HWIN_MAX_WINDOW
{ &p__wnd15, wndproc15 },
#endif
#if 16 < HWIN_MAX_WINDOW
{ &p__wnd16, wndproc16 },
#endif
#if 17 < HWIN_MAX_WINDOW
{ &p__wnd17, wndproc17 },
#endif
#if 18 < HWIN_MAX_WINDOW
{ &p__wnd18, wndproc18 },
#endif
#if 19 < HWIN_MAX_WINDOW
{ &p__wnd19, wndproc19 },
#endif
#if 20 < HWIN_MAX_WINDOW
{ &p__wnd20, wndproc20 },
#endif
#if 21 < HWIN_MAX_WINDOW
{ &p__wnd21, wndproc21 },
#endif
#if 22 < HWIN_MAX_WINDOW
{ &p__wnd22, wndproc22 },
#endif
#if 23 < HWIN_MAX_WINDOW
{ &p__wnd23, wndproc23 },
#endif
#if 24 < HWIN_MAX_WINDOW
{ &p__wnd24, wndproc24 },
#endif
#if 25 < HWIN_MAX_WINDOW
{ &p__wnd25, wndproc25 },
#endif
#if 26 < HWIN_MAX_WINDOW
{ &p__wnd26, wndproc26 },
#endif
#if 27 < HWIN_MAX_WINDOW
{ &p__wnd27, wndproc27 },
#endif
#if 28 < HWIN_MAX_WINDOW
{ &p__wnd28, wndproc28 },
#endif
#if 29 < HWIN_MAX_WINDOW
{ &p__wnd29, wndproc29 },
#endif
#if 30 < HWIN_MAX_WINDOW
{ &p__wnd30, wndproc30 },
#endif
#if 31 < HWIN_MAX_WINDOW
{ &p__wnd31, wndproc31 },
#endif
#if 32 < HWIN_MAX_WINDOW
{ &p__wnd32, wndproc32 },
#endif
#if 33 < HWIN_MAX_WINDOW
{ &p__wnd33, wndproc33 },
#endif
#if 34 < HWIN_MAX_WINDOW
{ &p__wnd34, wndproc34 },
#endif
#if 35 < HWIN_MAX_WINDOW
{ &p__wnd35, wndproc35 },
#endif
#if 36 < HWIN_MAX_WINDOW
{ &p__wnd36, wndproc36 },
#endif
#if 37 < HWIN_MAX_WINDOW
{ &p__wnd37, wndproc37 },
#endif
#if 38 < HWIN_MAX_WINDOW
{ &p__wnd38, wndproc38 },
#endif
#if 39 < HWIN_MAX_WINDOW
{ &p__wnd39, wndproc39 },
#endif
#if 40 < HWIN_MAX_WINDOW
{ &p__wnd40, wndproc40 },
#endif
#if 41 < HWIN_MAX_WINDOW
{ &p__wnd41, wndproc41 },
#endif
#if 42 < HWIN_MAX_WINDOW
{ &p__wnd42, wndproc42 },
#endif
#if 43 < HWIN_MAX_WINDOW
{ &p__wnd43, wndproc43 },
#endif
#if 44 < HWIN_MAX_WINDOW
{ &p__wnd44, wndproc44 },
#endif
#if 45 < HWIN_MAX_WINDOW
{ &p__wnd45, wndproc45 },
#endif
#if 46 < HWIN_MAX_WINDOW
{ &p__wnd46, wndproc46 },
#endif
#if 47 < HWIN_MAX_WINDOW
{ &p__wnd47, wndproc47 },
#endif
#if 48 < HWIN_MAX_WINDOW
{ &p__wnd48, wndproc48 },
#endif
#if 49 < HWIN_MAX_WINDOW
{ &p__wnd49, wndproc49 },
#endif
#if 50 < HWIN_MAX_WINDOW
{ &p__wnd50, wndproc50 },
#endif
#if 51 < HWIN_MAX_WINDOW
{ &p__wnd51, wndproc51 },
#endif
#if 52 < HWIN_MAX_WINDOW
{ &p__wnd52, wndproc52 },
#endif
#if 53 < HWIN_MAX_WINDOW
{ &p__wnd53, wndproc53 },
#endif
#if 54 < HWIN_MAX_WINDOW
{ &p__wnd54, wndproc54 },
#endif
#if 55 < HWIN_MAX_WINDOW
{ &p__wnd55, wndproc55 },
#endif
#if 56 < HWIN_MAX_WINDOW
{ &p__wnd56, wndproc56 },
#endif
#if 57 < HWIN_MAX_WINDOW
{ &p__wnd57, wndproc57 },
#endif
#if 58 < HWIN_MAX_WINDOW
{ &p__wnd58, wndproc58 },
#endif
#if 59 < HWIN_MAX_WINDOW
{ &p__wnd59, wndproc59 },
#endif
#if 60 < HWIN_MAX_WINDOW
{ &p__wnd60, wndproc60 },
#endif
#if 61 < HWIN_MAX_WINDOW
{ &p__wnd61, wndproc61 },
#endif
#if 62 < HWIN_MAX_WINDOW
{ &p__wnd62, wndproc62 },
#endif
#if 63 < HWIN_MAX_WINDOW
{ &p__wnd63, wndproc63 },
#endif
#if 64 < HWIN_MAX_WINDOW
{ &p__wnd64, wndproc64 },
#endif
#if 65 < HWIN_MAX_WINDOW
{ &p__wnd65, wndproc65 },
#endif
#if 66 < HWIN_MAX_WINDOW
{ &p__wnd66, wndproc66 },
#endif
#if 67 < HWIN_MAX_WINDOW
{ &p__wnd67, wndproc67 },
#endif
#if 68 < HWIN_MAX_WINDOW
{ &p__wnd68, wndproc68 },
#endif
#if 69 < HWIN_MAX_WINDOW
{ &p__wnd69, wndproc69 },
#endif
#if 70 < HWIN_MAX_WINDOW
{ &p__wnd70, wndproc70 },
#endif
#if 71 < HWIN_MAX_WINDOW
{ &p__wnd71, wndproc71 },
#endif
#if 72 < HWIN_MAX_WINDOW
{ &p__wnd72, wndproc72 },
#endif
#if 73 < HWIN_MAX_WINDOW
{ &p__wnd73, wndproc73 },
#endif
#if 74 < HWIN_MAX_WINDOW
{ &p__wnd74, wndproc74 },
#endif
#if 75 < HWIN_MAX_WINDOW
{ &p__wnd75, wndproc75 },
#endif
#if 76 < HWIN_MAX_WINDOW
{ &p__wnd76, wndproc76 },
#endif
#if 77 < HWIN_MAX_WINDOW
{ &p__wnd77, wndproc77 },
#endif
#if 78 < HWIN_MAX_WINDOW
{ &p__wnd78, wndproc78 },
#endif
#if 79 < HWIN_MAX_WINDOW
{ &p__wnd79, wndproc79 },
#endif
#if 80 < HWIN_MAX_WINDOW
{ &p__wnd80, wndproc80 },
#endif
#if 81 < HWIN_MAX_WINDOW
{ &p__wnd81, wndproc81 },
#endif
#if 82 < HWIN_MAX_WINDOW
{ &p__wnd82, wndproc82 },
#endif
#if 83 < HWIN_MAX_WINDOW
{ &p__wnd83, wndproc83 },
#endif
#if 84 < HWIN_MAX_WINDOW
{ &p__wnd84, wndproc84 },
#endif
#if 85 < HWIN_MAX_WINDOW
{ &p__wnd85, wndproc85 },
#endif
#if 86 < HWIN_MAX_WINDOW
{ &p__wnd86, wndproc86 },
#endif
#if 87 < HWIN_MAX_WINDOW
{ &p__wnd87, wndproc87 },
#endif
#if 88 < HWIN_MAX_WINDOW
{ &p__wnd88, wndproc88 },
#endif
#if 89 < HWIN_MAX_WINDOW
{ &p__wnd89, wndproc89 },
#endif
#if 90 < HWIN_MAX_WINDOW
{ &p__wnd90, wndproc90 },
#endif
#if 91 < HWIN_MAX_WINDOW
{ &p__wnd91, wndproc91 },
#endif
#if 92 < HWIN_MAX_WINDOW
{ &p__wnd92, wndproc92 },
#endif
#if 93 < HWIN_MAX_WINDOW
{ &p__wnd93, wndproc93 },
#endif
#if 94 < HWIN_MAX_WINDOW
{ &p__wnd94, wndproc94 },
#endif
#if 95 < HWIN_MAX_WINDOW
{ &p__wnd95, wndproc95 },
#endif
#if 96 < HWIN_MAX_WINDOW
{ &p__wnd96, wndproc96 },
#endif
#if 97 < HWIN_MAX_WINDOW
{ &p__wnd97, wndproc97 },
#endif
#if 98 < HWIN_MAX_WINDOW
{ &p__wnd98, wndproc98 },
#endif
#if 99 < HWIN_MAX_WINDOW
{ &p__wnd99, wndproc99 },
#endif
#if 100 < HWIN_MAX_WINDOW
{ &p__wnd100, wndproc100 },
#endif
#if 101 < HWIN_MAX_WINDOW
{ &p__wnd101, wndproc101 },
#endif
#if 102 < HWIN_MAX_WINDOW
{ &p__wnd102, wndproc102 },
#endif
#if 103 < HWIN_MAX_WINDOW
{ &p__wnd103, wndproc103 },
#endif
#if 104 < HWIN_MAX_WINDOW
{ &p__wnd104, wndproc104 },
#endif
#if 105 < HWIN_MAX_WINDOW
{ &p__wnd105, wndproc105 },
#endif
#if 106 < HWIN_MAX_WINDOW
{ &p__wnd106, wndproc106 },
#endif
#if 107 < HWIN_MAX_WINDOW
{ &p__wnd107, wndproc107 },
#endif
#if 108 < HWIN_MAX_WINDOW
{ &p__wnd108, wndproc108 },
#endif
#if 109 < HWIN_MAX_WINDOW
{ &p__wnd109, wndproc109 },
#endif
#if 110 < HWIN_MAX_WINDOW
{ &p__wnd110, wndproc110 },
#endif
#if 111 < HWIN_MAX_WINDOW
{ &p__wnd111, wndproc111 },
#endif
#if 112 < HWIN_MAX_WINDOW
{ &p__wnd112, wndproc112 },
#endif
#if 113 < HWIN_MAX_WINDOW
{ &p__wnd113, wndproc113 },
#endif
#if 114 < HWIN_MAX_WINDOW
{ &p__wnd114, wndproc114 },
#endif
#if 115 < HWIN_MAX_WINDOW
{ &p__wnd115, wndproc115 },
#endif
#if 116 < HWIN_MAX_WINDOW
{ &p__wnd116, wndproc116 },
#endif
#if 117 < HWIN_MAX_WINDOW
{ &p__wnd117, wndproc117 },
#endif
#if 118 < HWIN_MAX_WINDOW
{ &p__wnd118, wndproc118 },
#endif
#if 119 < HWIN_MAX_WINDOW
{ &p__wnd119, wndproc119 },
#endif
#if 120 < HWIN_MAX_WINDOW
{ &p__wnd120, wndproc120 },
#endif
#if 121 < HWIN_MAX_WINDOW
{ &p__wnd121, wndproc121 },
#endif
#if 122 < HWIN_MAX_WINDOW
{ &p__wnd122, wndproc122 },
#endif
#if 123 < HWIN_MAX_WINDOW
{ &p__wnd123, wndproc123 },
#endif
#if 124 < HWIN_MAX_WINDOW
{ &p__wnd124, wndproc124 },
#endif
#if 125 < HWIN_MAX_WINDOW
{ &p__wnd125, wndproc125 },
#endif
#if 126 < HWIN_MAX_WINDOW
{ &p__wnd126, wndproc126 },
#endif
#if 127 < HWIN_MAX_WINDOW
{ &p__wnd127, wndproc127 },
#endif
#if 128 < HWIN_MAX_WINDOW
{ &p__wnd128, wndproc128 },
#endif
#if 129 < HWIN_MAX_WINDOW
{ &p__wnd129, wndproc129 },
#endif
#if 130 < HWIN_MAX_WINDOW
{ &p__wnd130, wndproc130 },
#endif
#if 131 < HWIN_MAX_WINDOW
{ &p__wnd131, wndproc131 },
#endif
#if 132 < HWIN_MAX_WINDOW
{ &p__wnd132, wndproc132 },
#endif
#if 133 < HWIN_MAX_WINDOW
{ &p__wnd133, wndproc133 },
#endif
#if 134 < HWIN_MAX_WINDOW
{ &p__wnd134, wndproc134 },
#endif
#if 135 < HWIN_MAX_WINDOW
{ &p__wnd135, wndproc135 },
#endif
#if 136 < HWIN_MAX_WINDOW
{ &p__wnd136, wndproc136 },
#endif
#if 137 < HWIN_MAX_WINDOW
{ &p__wnd137, wndproc137 },
#endif
#if 138 < HWIN_MAX_WINDOW
{ &p__wnd138, wndproc138 },
#endif
#if 139 < HWIN_MAX_WINDOW
{ &p__wnd139, wndproc139 },
#endif
#if 140 < HWIN_MAX_WINDOW
{ &p__wnd140, wndproc140 },
#endif
#if 141 < HWIN_MAX_WINDOW
{ &p__wnd141, wndproc141 },
#endif
#if 142 < HWIN_MAX_WINDOW
{ &p__wnd142, wndproc142 },
#endif
#if 143 < HWIN_MAX_WINDOW
{ &p__wnd143, wndproc143 },
#endif
#if 144 < HWIN_MAX_WINDOW
{ &p__wnd144, wndproc144 },
#endif
#if 145 < HWIN_MAX_WINDOW
{ &p__wnd145, wndproc145 },
#endif
#if 146 < HWIN_MAX_WINDOW
{ &p__wnd146, wndproc146 },
#endif
#if 147 < HWIN_MAX_WINDOW
{ &p__wnd147, wndproc147 },
#endif
#if 148 < HWIN_MAX_WINDOW
{ &p__wnd148, wndproc148 },
#endif
#if 149 < HWIN_MAX_WINDOW
{ &p__wnd149, wndproc149 },
#endif
#if 150 < HWIN_MAX_WINDOW
{ &p__wnd150, wndproc150 },
#endif
#if 151 < HWIN_MAX_WINDOW
{ &p__wnd151, wndproc151 },
#endif
#if 152 < HWIN_MAX_WINDOW
{ &p__wnd152, wndproc152 },
#endif
#if 153 < HWIN_MAX_WINDOW
{ &p__wnd153, wndproc153 },
#endif
#if 154 < HWIN_MAX_WINDOW
{ &p__wnd154, wndproc154 },
#endif
#if 155 < HWIN_MAX_WINDOW
{ &p__wnd155, wndproc155 },
#endif
#if 156 < HWIN_MAX_WINDOW
{ &p__wnd156, wndproc156 },
#endif
#if 157 < HWIN_MAX_WINDOW
{ &p__wnd157, wndproc157 },
#endif
#if 158 < HWIN_MAX_WINDOW
{ &p__wnd158, wndproc158 },
#endif
#if 159 < HWIN_MAX_WINDOW
{ &p__wnd159, wndproc159 },
#endif
#if 160 < HWIN_MAX_WINDOW
{ &p__wnd160, wndproc160 },
#endif
#if 161 < HWIN_MAX_WINDOW
{ &p__wnd161, wndproc161 },
#endif
#if 162 < HWIN_MAX_WINDOW
{ &p__wnd162, wndproc162 },
#endif
#if 163 < HWIN_MAX_WINDOW
{ &p__wnd163, wndproc163 },
#endif
#if 164 < HWIN_MAX_WINDOW
{ &p__wnd164, wndproc164 },
#endif
#if 165 < HWIN_MAX_WINDOW
{ &p__wnd165, wndproc165 },
#endif
#if 166 < HWIN_MAX_WINDOW
{ &p__wnd166, wndproc166 },
#endif
#if 167 < HWIN_MAX_WINDOW
{ &p__wnd167, wndproc167 },
#endif
#if 168 < HWIN_MAX_WINDOW
{ &p__wnd168, wndproc168 },
#endif
#if 169 < HWIN_MAX_WINDOW
{ &p__wnd169, wndproc169 },
#endif
#if 170 < HWIN_MAX_WINDOW
{ &p__wnd170, wndproc170 },
#endif
#if 171 < HWIN_MAX_WINDOW
{ &p__wnd171, wndproc171 },
#endif
#if 172 < HWIN_MAX_WINDOW
{ &p__wnd172, wndproc172 },
#endif
#if 173 < HWIN_MAX_WINDOW
{ &p__wnd173, wndproc173 },
#endif
#if 174 < HWIN_MAX_WINDOW
{ &p__wnd174, wndproc174 },
#endif
#if 175 < HWIN_MAX_WINDOW
{ &p__wnd175, wndproc175 },
#endif
#if 176 < HWIN_MAX_WINDOW
{ &p__wnd176, wndproc176 },
#endif
#if 177 < HWIN_MAX_WINDOW
{ &p__wnd177, wndproc177 },
#endif
#if 178 < HWIN_MAX_WINDOW
{ &p__wnd178, wndproc178 },
#endif
#if 179 < HWIN_MAX_WINDOW
{ &p__wnd179, wndproc179 },
#endif
#if 180 < HWIN_MAX_WINDOW
{ &p__wnd180, wndproc180 },
#endif
#if 181 < HWIN_MAX_WINDOW
{ &p__wnd181, wndproc181 },
#endif
#if 182 < HWIN_MAX_WINDOW
{ &p__wnd182, wndproc182 },
#endif
#if 183 < HWIN_MAX_WINDOW
{ &p__wnd183, wndproc183 },
#endif
#if 184 < HWIN_MAX_WINDOW
{ &p__wnd184, wndproc184 },
#endif
#if 185 < HWIN_MAX_WINDOW
{ &p__wnd185, wndproc185 },
#endif
#if 186 < HWIN_MAX_WINDOW
{ &p__wnd186, wndproc186 },
#endif
#if 187 < HWIN_MAX_WINDOW
{ &p__wnd187, wndproc187 },
#endif
#if 188 < HWIN_MAX_WINDOW
{ &p__wnd188, wndproc188 },
#endif
#if 189 < HWIN_MAX_WINDOW
{ &p__wnd189, wndproc189 },
#endif
#if 190 < HWIN_MAX_WINDOW
{ &p__wnd190, wndproc190 },
#endif
#if 191 < HWIN_MAX_WINDOW
{ &p__wnd191, wndproc191 },
#endif
#if 192 < HWIN_MAX_WINDOW
{ &p__wnd192, wndproc192 },
#endif
#if 193 < HWIN_MAX_WINDOW
{ &p__wnd193, wndproc193 },
#endif
#if 194 < HWIN_MAX_WINDOW
{ &p__wnd194, wndproc194 },
#endif
#if 195 < HWIN_MAX_WINDOW
{ &p__wnd195, wndproc195 },
#endif
#if 196 < HWIN_MAX_WINDOW
{ &p__wnd196, wndproc196 },
#endif
#if 197 < HWIN_MAX_WINDOW
{ &p__wnd197, wndproc197 },
#endif
#if 198 < HWIN_MAX_WINDOW
{ &p__wnd198, wndproc198 },
#endif
#if 199 < HWIN_MAX_WINDOW
{ &p__wnd199, wndproc199 },
#endif
#if 200 < HWIN_MAX_WINDOW
{ &p__wnd200, wndproc200 },
#endif
#if 201 < HWIN_MAX_WINDOW
{ &p__wnd201, wndproc201 },
#endif
#if 202 < HWIN_MAX_WINDOW
{ &p__wnd202, wndproc202 },
#endif
#if 203 < HWIN_MAX_WINDOW
{ &p__wnd203, wndproc203 },
#endif
#if 204 < HWIN_MAX_WINDOW
{ &p__wnd204, wndproc204 },
#endif
#if 205 < HWIN_MAX_WINDOW
{ &p__wnd205, wndproc205 },
#endif
#if 206 < HWIN_MAX_WINDOW
{ &p__wnd206, wndproc206 },
#endif
#if 207 < HWIN_MAX_WINDOW
{ &p__wnd207, wndproc207 },
#endif
#if 208 < HWIN_MAX_WINDOW
{ &p__wnd208, wndproc208 },
#endif
#if 209 < HWIN_MAX_WINDOW
{ &p__wnd209, wndproc209 },
#endif
#if 210 < HWIN_MAX_WINDOW
{ &p__wnd210, wndproc210 },
#endif
#if 211 < HWIN_MAX_WINDOW
{ &p__wnd211, wndproc211 },
#endif
#if 212 < HWIN_MAX_WINDOW
{ &p__wnd212, wndproc212 },
#endif
#if 213 < HWIN_MAX_WINDOW
{ &p__wnd213, wndproc213 },
#endif
#if 214 < HWIN_MAX_WINDOW
{ &p__wnd214, wndproc214 },
#endif
#if 215 < HWIN_MAX_WINDOW
{ &p__wnd215, wndproc215 },
#endif
#if 216 < HWIN_MAX_WINDOW
{ &p__wnd216, wndproc216 },
#endif
#if 217 < HWIN_MAX_WINDOW
{ &p__wnd217, wndproc217 },
#endif
#if 218 < HWIN_MAX_WINDOW
{ &p__wnd218, wndproc218 },
#endif
#if 219 < HWIN_MAX_WINDOW
{ &p__wnd219, wndproc219 },
#endif
#if 220 < HWIN_MAX_WINDOW
{ &p__wnd220, wndproc220 },
#endif
#if 221 < HWIN_MAX_WINDOW
{ &p__wnd221, wndproc221 },
#endif
#if 222 < HWIN_MAX_WINDOW
{ &p__wnd222, wndproc222 },
#endif
#if 223 < HWIN_MAX_WINDOW
{ &p__wnd223, wndproc223 },
#endif
#if 224 < HWIN_MAX_WINDOW
{ &p__wnd224, wndproc224 },
#endif
#if 225 < HWIN_MAX_WINDOW
{ &p__wnd225, wndproc225 },
#endif
#if 226 < HWIN_MAX_WINDOW
{ &p__wnd226, wndproc226 },
#endif
#if 227 < HWIN_MAX_WINDOW
{ &p__wnd227, wndproc227 },
#endif
#if 228 < HWIN_MAX_WINDOW
{ &p__wnd228, wndproc228 },
#endif
#if 229 < HWIN_MAX_WINDOW
{ &p__wnd229, wndproc229 },
#endif
#if 230 < HWIN_MAX_WINDOW
{ &p__wnd230, wndproc230 },
#endif
#if 231 < HWIN_MAX_WINDOW
{ &p__wnd231, wndproc231 },
#endif
#if 232 < HWIN_MAX_WINDOW
{ &p__wnd232, wndproc232 },
#endif
#if 233 < HWIN_MAX_WINDOW
{ &p__wnd233, wndproc233 },
#endif
#if 234 < HWIN_MAX_WINDOW
{ &p__wnd234, wndproc234 },
#endif
#if 235 < HWIN_MAX_WINDOW
{ &p__wnd235, wndproc235 },
#endif
#if 236 < HWIN_MAX_WINDOW
{ &p__wnd236, wndproc236 },
#endif
#if 237 < HWIN_MAX_WINDOW
{ &p__wnd237, wndproc237 },
#endif
#if 238 < HWIN_MAX_WINDOW
{ &p__wnd238, wndproc238 },
#endif
#if 239 < HWIN_MAX_WINDOW
{ &p__wnd239, wndproc239 },
#endif
#if 240 < HWIN_MAX_WINDOW
{ &p__wnd240, wndproc240 },
#endif
#if 241 < HWIN_MAX_WINDOW
{ &p__wnd241, wndproc241 },
#endif
#if 242 < HWIN_MAX_WINDOW
{ &p__wnd242, wndproc242 },
#endif
#if 243 < HWIN_MAX_WINDOW
{ &p__wnd243, wndproc243 },
#endif
#if 244 < HWIN_MAX_WINDOW
{ &p__wnd244, wndproc244 },
#endif
#if 245 < HWIN_MAX_WINDOW
{ &p__wnd245, wndproc245 },
#endif
#if 246 < HWIN_MAX_WINDOW
{ &p__wnd246, wndproc246 },
#endif
#if 247 < HWIN_MAX_WINDOW
{ &p__wnd247, wndproc247 },
#endif
#if 248 < HWIN_MAX_WINDOW
{ &p__wnd248, wndproc248 },
#endif
#if 249 < HWIN_MAX_WINDOW
{ &p__wnd249, wndproc249 },
#endif
#if 250 < HWIN_MAX_WINDOW
{ &p__wnd250, wndproc250 },
#endif
#if 251 < HWIN_MAX_WINDOW
{ &p__wnd251, wndproc251 },
#endif
#if 252 < HWIN_MAX_WINDOW
{ &p__wnd252, wndproc252 },
#endif
#if 253 < HWIN_MAX_WINDOW
{ &p__wnd253, wndproc253 },
#endif
#if 254 < HWIN_MAX_WINDOW
{ &p__wnd254, wndproc254 },
#endif
#if 255 < HWIN_MAX_WINDOW
{ &p__wnd255, wndproc255 },
#endif
}; // a__wnds
}; // namespace hWin
