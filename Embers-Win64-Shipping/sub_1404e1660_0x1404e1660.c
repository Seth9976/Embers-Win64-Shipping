// 函数: sub_1404e1660
// 地址: 0x1404e1660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d9330()
int32_t rdi = 0
data_143f1eb00 = &data_143f20d78
data_143f1eaf8 = 0
data_143f1eaf0 = &data_142d54980
data_143f1eb08 = u"FResolveDepthNonMSPS"
sub_140b58260(&data_143f1eb10, u"FResolveDepthNonMSPS", 1)
sub_140b4c620(&data_143f1eb18, &data_143f1eb10)
sub_140b4c820(&data_143f1eb20, u"/Engine/Private/ResolvePixelShader.usf")
data_143f1eb28 = u"/Engine/Private/ResolvePixelShader.usf"
data_143f1eb30 = u"MainDepthNonMS"
data_143f1eb38 = 3
data_143f1eb48 = sub_1410f18a0
data_143f1eb3c = 0x120
data_143f1eb50 = sub_1419ca9d0
data_143f1eb40 = 1
data_143f1eb58 = sub_140594850
data_143f1eb60 = sub_1412c74c0
data_143f1eb68 = sub_1405948d0
__builtin_memset(&data_143f1eb70, 0, 0x18)
data_143f1eb88 = &data_143f1eaf0
__builtin_memset(&data_143f1eb98, 0, 0x2c)
data_143f1ebc4 = 0x80
data_143f1ebc8 = 0xffffffff
data_143f1ebcc = 0
data_143f1ebd8 = 0
data_143f1ebe0 = 0
sub_140b51dc0(&data_143f20d78)
void* rax = data_143f1da58
data_143f1eb90 = 0

if (rax != 0)
    *(rax + 8) = &data_143f1eb70:8
    rax = data_143f1da58

data_143f1eb70:8 = rax
data_143f1eb80 = &data_143f1da58
data_143f1da58 = &data_143f1eb70:8
int64_t* arg_8 = &data_143f1eaf0
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f1eb18, &arg_8)
void* rax_1 = sub_1419cf430(0)
int32_t i_2 = *(rax_1 + 8)
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_2 = i & 0x80000001
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + rdi
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f1eb18)
            rdi = rax_5 + rcx_2
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rdi) << 3)
*(rbx + *rax_1) = &data_143f1eaf0
data_143f1eaf0 = &data_142d54980
return atexit(sub_142cf2610) __tailcall
