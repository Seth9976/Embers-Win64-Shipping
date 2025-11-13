// 函数: sub_1411e7580
// 地址: 0x1411e7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143e7f990 = u"TwoSidedMeshDistanceBias"
data_143e7f9ba = sub_140b4fdf0(u"TwoSidedMeshDistanceBias")
sub_1419da370()
data_143e7f998 = &data_143f213e8
data_143e7f9b0 = 0x1a8
data_143e7f9a8 = sub_140b4f380
data_143e7f9b4 = 1
data_143e7f9b8 = 0
data_143e7f9a0 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f990
data_143e7f960 = u"WorldToShadow"
data_143e7f98a = sub_140b4fdf0(u"WorldToShadow")
sub_1419da370()
data_143e7f968 = &data_143f213e8
data_143e7f978 = sub_140b4f380
data_143e7f980 = 0x1a2
data_143e7f984 = 1
data_143e7f988 = 0
data_143e7f970 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f960
data_143e7f930 = u"LightTileIntersectionParameters"
data_143e7f95a = sub_140b4fdf0(u"LightTileIntersectionParameters")
sub_141155690()
data_143e7f938 = &data_143e58c18
data_143e7f948 = sub_140b4f380
data_143e7f950 = 0x176
data_143e7f954 = 1
data_143e7f958 = 0
data_143e7f940 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f930
data_143e7f900 = u"CascadeDepthMinMax"
data_143e7f92a = sub_140b4fdf0(u"CascadeDepthMinMax")
sub_1419da370()
data_143e7f908 = &data_143f213e8
data_143e7f918 = sub_140b4f380
data_143e7f920 = 0x170
data_143e7f924 = 1
data_143e7f928 = 0
data_143e7f910 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f900
data_143e7f8d0 = u"TanLightAngle"
data_143e7f8fa = sub_140b4fdf0(u"TanLightAngle")
sub_1419da370()
data_143e7f8d8 = &data_143f213e8
data_143e7f8e8 = sub_140b4f380
data_143e7f8f0 = 0x16a
data_143e7f8f4 = 1
data_143e7f8f8 = 0
data_143e7f8e0 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f8d0
data_143e7f8a0 = u"LightDirection"
data_143e7f8ca = sub_140b4fdf0(u"LightDirection")
sub_1419da370()
data_143e7f8a8 = &data_143f213e8
data_143e7f8b8 = sub_140b4f380
data_143e7f8c0 = 0x164
data_143e7f8c4 = 1
data_143e7f8c8 = 0
data_143e7f8b0 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f8a0
data_143e7f870 = u"ObjectParameters"
data_143e7f89a = sub_140b4fdf0(u"ObjectParameters")
char rax_13 = data_143e56597

if ((rax_13 & 2) == 0)
    data_143e56588 = 0x32
    data_143e56597 = rax_13 | 2
    data_143e56590 = 2
    data_143e56538 = u"TDistanceFieldCulledObjectBufferParameters"
    data_143e56550 = sub_140b4ede0
    data_143e56558 = sub_140b4ed00
    data_143e56560 = sub_140b4e800
    data_143e56568 = sub_140b4ead0
    data_143e56570 = sub_140b4eb90
    data_143e56548 = sub_140594850
    data_143e56578 = sub_140594890
    data_143e56594 = 0
    data_143e5658c = 0xffffffff
    sub_1410f8930(&data_143e56530)
    sub_140b51460(&data_143e56530)

data_143e7f888 = sub_140b4f380
data_143e7f878 = &data_143e56530
data_143e7f890 = 0x132
data_143e7f894 = 1
data_143e7f898 = 0
data_143e7f880 = *(arg1 + 0x10)
*(arg1 + 0x10) = &data_143e7f870
return &data_143e7f870
