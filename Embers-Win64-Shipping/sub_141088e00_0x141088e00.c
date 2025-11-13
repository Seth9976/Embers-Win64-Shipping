// 函数: sub_141088e00
// 地址: 0x141088e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4d247

if ((rax & 2) != 0)
    return &data_143e4d1e0

data_143e4d247 = rax | 2
data_143e4d1e8 = u"TBasePassVertexShaderBaseType"
data_143e4d200 = sub_140b4ede0
data_143e4d228 = sub_140594890
char rax_1 = data_143e4fdaf
data_143e4d208 = sub_140b4ed00
data_143e4d210 = sub_140b4e800
data_143e4d218 = sub_140b4ead0
data_143e4d220 = sub_140b4eb90
data_143e4d238 = 0x148
data_143e4d240 = 8
data_143e4d244 = 0
data_143e4d23c = 0xffffffff
data_143e4ea58 = u"BASE"
data_143e4ea82 = 4

if ((rax_1 & 2) == 0)
    data_143e4fd68 = sub_140b4ede0
    data_143e4fdaf = rax_1 | 2
    data_143e4fd70 = sub_140b4ed00
    data_143e4fd50 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4fd90 = sub_140594890
    data_143e4fd78 = sub_140b4e800
    data_143e4fd80 = sub_140b4ead0
    data_143e4fd88 = sub_140b4eb90
    data_143e4fda0 = 0x148
    data_143e4fda8 = 8
    data_143e4fdac = 0
    data_143e4fda4 = 0xffffffff
    data_143e503b8 = u"ReflectionCaptureBuffer"
    data_143e503e2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e503c0 = &data_143f21520
    data_143e503c8 = data_143e4fd58
    data_143e4fd58 = &data_143e503b8
    data_143e503d0 = sub_140b4f380
    data_143e503d8 = 0x140
    data_143e503dc = 1
    data_143e503e0 = 0
    data_143e50fb8 = u"BASE"
    data_143e50fe2 = 4
    sub_141089ae0()
    int64_t rcx_1 = data_143e4fd58
    data_143e4fdad += 1
    data_143e50fc8 = rcx_1
    data_143e4fd58 = &data_143e50fb8
    data_143e50fc0 = &data_143e2e080
    data_143e50fd0 = sub_140b4f380
    data_143e50fd8 = 0x140
    data_143e50fdc = 1
    
    if (data_143e2e0e4 != 0)
        data_143e4fdae += 1
    
    data_143e509b8 = u"BASE"
    data_143e509e2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fd58
    data_143e4fdad += 1
    data_143e509c8 = rcx_2
    data_143e4fd58 = &data_143e509b8
    data_143e509c0 = &data_143ed82c8
    data_143e509d0 = sub_140b4f380
    data_143e509d8 = 0
    data_143e509dc = 1
    
    if (data_143ed832c != 0)
        data_143e4fdae += 1
    
    sub_140b51460(&data_143e4fd48)

int64_t rax_4 = data_143e4d1f0
data_143e4d245 += 1
bool cond:0 = data_143e4fdac == 0
data_143e4ea68 = rax_4
data_143e4ea60 = &data_143e4fd48
data_143e4d1f0 = &data_143e4ea58
data_143e4ea70 = sub_140b4f380
data_143e4ea78 = 0
data_143e4ea7c = 1

if (not(cond:0))
    data_143e4d246 += 1

sub_140b51460(&data_143e4d1e0)
return &data_143e4d1e0
