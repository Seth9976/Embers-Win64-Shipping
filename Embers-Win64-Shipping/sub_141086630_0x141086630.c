// 函数: sub_141086630
// 地址: 0x141086630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4ce9f

if ((rax & 2) != 0)
    return &data_143e4ce38

data_143e4ce9f = rax | 2
data_143e4ce40 = u"TBasePassVertexShaderBaseType"
data_143e4ce58 = sub_140b4ede0
data_143e4ce80 = sub_140594890
char rax_1 = data_143e4fa07
data_143e4ce60 = sub_140b4ed00
data_143e4ce68 = sub_140b4e800
data_143e4ce70 = sub_140b4ead0
data_143e4ce78 = sub_140b4eb90
data_143e4ce90 = 0x148
data_143e4ce98 = 8
data_143e4ce9c = 0
data_143e4ce94 = 0xffffffff
data_143e4ec08 = u"BASE"
data_143e4ec32 = 4

if ((rax_1 & 2) == 0)
    data_143e4f9c0 = sub_140b4ede0
    data_143e4fa07 = rax_1 | 2
    data_143e4f9c8 = sub_140b4ed00
    data_143e4f9a8 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f9e8 = sub_140594890
    data_143e4f9d0 = sub_140b4e800
    data_143e4f9d8 = sub_140b4ead0
    data_143e4f9e0 = sub_140b4eb90
    data_143e4f9f8 = 0x148
    data_143e4fa00 = 8
    data_143e4fa04 = 0
    data_143e4f9fc = 0xffffffff
    data_143e50208 = u"ReflectionCaptureBuffer"
    data_143e50232 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50210 = &data_143f21520
    data_143e50218 = data_143e4f9b0
    data_143e4f9b0 = &data_143e50208
    data_143e50220 = sub_140b4f380
    data_143e50228 = 0x146
    data_143e5022c = 1
    data_143e50230 = 0
    data_143e50e08 = u"BASE"
    data_143e50e32 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f9b0
    data_143e4fa05 += 1
    data_143e50e18 = rcx_1
    data_143e4f9b0 = &data_143e50e08
    data_143e50e10 = &data_143e85cb0
    data_143e50e20 = sub_140b4f380
    data_143e50e28 = 0x140
    data_143e50e2c = 1
    
    if (data_143e85d14 != 0)
        data_143e4fa06 += 1
    
    data_143e50808 = u"BASE"
    data_143e50832 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f9b0
    data_143e4fa05 += 1
    data_143e50818 = rcx_2
    data_143e4f9b0 = &data_143e50808
    data_143e50810 = &data_143ed82c8
    data_143e50820 = sub_140b4f380
    data_143e50828 = 0
    data_143e5082c = 1
    
    if (data_143ed832c != 0)
        data_143e4fa06 += 1
    
    sub_140b51460(&data_143e4f9a0)

int64_t rax_4 = data_143e4ce48
data_143e4ce9d += 1
bool cond:0 = data_143e4fa04 == 0
data_143e4ec18 = rax_4
data_143e4ec10 = &data_143e4f9a0
data_143e4ce48 = &data_143e4ec08
data_143e4ec20 = sub_140b4f380
data_143e4ec28 = 0
data_143e4ec2c = 1

if (not(cond:0))
    data_143e4ce9e += 1

sub_140b51460(&data_143e4ce38)
return &data_143e4ce38
