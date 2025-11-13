// 函数: sub_141086c50
// 地址: 0x141086c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4ccff

if ((rax & 2) != 0)
    return &data_143e4cc98

data_143e4ccff = rax | 2
data_143e4cca0 = u"TBasePassVertexShaderBaseType"
data_143e4ccb8 = sub_140b4ede0
data_143e4cce0 = sub_140594890
char rax_1 = data_143e4f867
data_143e4ccc0 = sub_140b4ed00
data_143e4ccc8 = sub_140b4e800
data_143e4ccd0 = sub_140b4ead0
data_143e4ccd8 = sub_140b4eb90
data_143e4ccf0 = 0x148
data_143e4ccf8 = 8
data_143e4ccfc = 0
data_143e4ccf4 = 0xffffffff
data_143e4ecc8 = u"BASE"
data_143e4ecf2 = 4

if ((rax_1 & 2) == 0)
    data_143e4f820 = sub_140b4ede0
    data_143e4f867 = rax_1 | 2
    data_143e4f828 = sub_140b4ed00
    data_143e4f808 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f848 = sub_140594890
    data_143e4f830 = sub_140b4e800
    data_143e4f838 = sub_140b4ead0
    data_143e4f840 = sub_140b4eb90
    data_143e4f858 = 0x148
    data_143e4f860 = 8
    data_143e4f864 = 0
    data_143e4f85c = 0xffffffff
    data_143e50148 = u"ReflectionCaptureBuffer"
    data_143e50172 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50150 = &data_143f21520
    data_143e50158 = data_143e4f810
    data_143e4f810 = &data_143e50148
    data_143e50160 = sub_140b4f380
    data_143e50168 = 0x146
    data_143e5016c = 1
    data_143e50170 = 0
    data_143e50d48 = u"BASE"
    data_143e50d72 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f810
    data_143e4f865 += 1
    data_143e50d58 = rcx_1
    data_143e4f810 = &data_143e50d48
    data_143e50d50 = &data_143e85cb0
    data_143e50d60 = sub_140b4f380
    data_143e50d68 = 0x140
    data_143e50d6c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f866 += 1
    
    data_143e50748 = u"BASE"
    data_143e50772 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f810
    data_143e4f865 += 1
    data_143e50758 = rcx_2
    data_143e4f810 = &data_143e50748
    data_143e50750 = &data_143ed82c8
    data_143e50760 = sub_140b4f380
    data_143e50768 = 0
    data_143e5076c = 1
    
    if (data_143ed832c != 0)
        data_143e4f866 += 1
    
    sub_140b51460(&data_143e4f800)

int64_t rax_4 = data_143e4cca8
data_143e4ccfd += 1
bool cond:0 = data_143e4f864 == 0
data_143e4ecd8 = rax_4
data_143e4ecd0 = &data_143e4f800
data_143e4cca8 = &data_143e4ecc8
data_143e4ece0 = sub_140b4f380
data_143e4ece8 = 0
data_143e4ecec = 1

if (not(cond:0))
    data_143e4ccfe += 1

sub_140b51460(&data_143e4cc98)
return &data_143e4cc98
