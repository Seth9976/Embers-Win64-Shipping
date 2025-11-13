// 函数: sub_1404e13d0
// 地址: 0x1404e13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d9190()
int32_t rdi = 0
data_143f1e9f0 = &data_143f20d10
data_143f1e9e8 = 0
data_143f1e9e0 = &data_142d54980
data_143f1e9f8 = u"FResolveDepth8XPS"
sub_140b58260(&data_143f1ea00, u"FResolveDepth8XPS", 1)
sub_140b4c620(&data_143f1ea08, &data_143f1ea00)
sub_140b4c820(&data_143f1ea10, u"/Engine/Private/ResolvePixelShader.usf")
data_143f1ea18 = u"/Engine/Private/ResolvePixelShader.usf"
data_143f1ea20 = u"MainDepth"
data_143f1ea28 = 3
data_143f1ea38 = sub_1410f18a0
data_143f1ea2c = 0x120
data_143f1ea40 = sub_1419ca930
data_143f1ea30 = 1
data_143f1ea48 = sub_1419d2dd0
data_143f1ea50 = sub_1419d8660
data_143f1ea58 = sub_1405948d0
__builtin_memset(&data_143f1ea60, 0, 0x18)
data_143f1ea78 = &data_143f1e9e0
__builtin_memset(&data_143f1ea88, 0, 0x2c)
data_143f1eab4 = 0x80
data_143f1eab8 = 0xffffffff
data_143f1eabc = 0
data_143f1eac8 = 0
data_143f1ead0 = 0
sub_140b51dc0(&data_143f20d10)
void* rax = data_143f1da58
data_143f1ea80 = 0

if (rax != 0)
    *(rax + 8) = &data_143f1ea60:8
    rax = data_143f1da58

data_143f1ea60:8 = rax
data_143f1ea70 = &data_143f1da58
data_143f1da58 = &data_143f1ea60:8
int64_t* arg_8 = &data_143f1e9e0
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f1ea08, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f1ea08)
            rdi = rax_5 + rcx_2
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rdi) << 3)
*(rbx + *rax_1) = &data_143f1e9e0
data_143f1e9e0 = &data_142d54980
return atexit(sub_142cf2600) __tailcall
