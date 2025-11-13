// 函数: sub_141086940
// 地址: 0x141086940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cdcf

if ((rax & 2) != 0)
    return &data_143e4cd68

data_143e4cdcf = rax | 2
data_143e4cd70 = u"TBasePassVertexShaderBaseType"
data_143e4cd88 = sub_140b4ede0
data_143e4cdb0 = sub_140594890
char rax_1 = data_143e4f937
data_143e4cd90 = sub_140b4ed00
data_143e4cd98 = sub_140b4e800
data_143e4cda0 = sub_140b4ead0
data_143e4cda8 = sub_140b4eb90
data_143e4cdc0 = 0x148
data_143e4cdc8 = 8
data_143e4cdcc = 0
data_143e4cdc4 = 0xffffffff
data_143e4ec68 = u"BASE"
data_143e4ec92 = 4

if ((rax_1 & 2) == 0)
    data_143e4f8f0 = sub_140b4ede0
    data_143e4f937 = rax_1 | 2
    data_143e4f8f8 = sub_140b4ed00
    data_143e4f8d8 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f918 = sub_140594890
    data_143e4f900 = sub_140b4e800
    data_143e4f908 = sub_140b4ead0
    data_143e4f910 = sub_140b4eb90
    data_143e4f928 = 0x148
    data_143e4f930 = 8
    data_143e4f934 = 0
    data_143e4f92c = 0xffffffff
    data_143e501a8 = u"ReflectionCaptureBuffer"
    data_143e501d2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e501b0 = &data_143f21520
    data_143e501b8 = data_143e4f8e0
    data_143e4f8e0 = &data_143e501a8
    data_143e501c0 = sub_140b4f380
    data_143e501c8 = 0x146
    data_143e501cc = 1
    data_143e501d0 = 0
    data_143e50da8 = u"BASE"
    data_143e50dd2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f8e0
    data_143e4f935 += 1
    data_143e50db8 = rcx_1
    data_143e4f8e0 = &data_143e50da8
    data_143e50db0 = &data_143e85cb0
    data_143e50dc0 = sub_140b4f380
    data_143e50dc8 = 0x140
    data_143e50dcc = 1
    
    if (data_143e85d14 != 0)
        data_143e4f936 += 1
    
    data_143e507a8 = u"BASE"
    data_143e507d2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f8e0
    data_143e4f935 += 1
    data_143e507b8 = rcx_2
    data_143e4f8e0 = &data_143e507a8
    data_143e507b0 = &data_143ed82c8
    data_143e507c0 = sub_140b4f380
    data_143e507c8 = 0
    data_143e507cc = 1
    
    if (data_143ed832c != 0)
        data_143e4f936 += 1
    
    sub_140b51460(&data_143e4f8d0)

int64_t rax_4 = data_143e4cd78
data_143e4cdcd += 1
bool cond:0 = data_143e4f934 == 0
data_143e4ec78 = rax_4
data_143e4ec70 = &data_143e4f8d0
data_143e4cd78 = &data_143e4ec68
data_143e4ec80 = sub_140b4f380
data_143e4ec88 = 0
data_143e4ec8c = 1

if (not(cond:0))
    data_143e4cdce += 1

sub_140b51460(&data_143e4cd68)
return &data_143e4cd68
