// 函数: sub_1404e1140
// 地址: 0x1404e1140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d8ff0()
int32_t rdi = 0
data_143f1e8e0 = &data_143f20ca8
data_143f1e8d8 = 0
data_143f1e8d0 = &data_142d54980
data_143f1e8e8 = u"FResolveDepth4XPS"
sub_140b58260(&data_143f1e8f0, u"FResolveDepth4XPS", 1)
sub_140b4c620(&data_143f1e8f8, &data_143f1e8f0)
sub_140b4c820(&data_143f1e900, u"/Engine/Private/ResolvePixelShader.usf")
data_143f1e908 = u"/Engine/Private/ResolvePixelShader.usf"
data_143f1e910 = u"MainDepth"
data_143f1e918 = 3
data_143f1e928 = sub_1410f18a0
data_143f1e91c = 0x120
data_143f1e930 = sub_1419ca930
data_143f1e920 = 1
data_143f1e938 = sub_1419d2d70
data_143f1e940 = sub_1419d8660
data_143f1e948 = sub_1405948d0
__builtin_memset(&data_143f1e950, 0, 0x18)
data_143f1e968 = &data_143f1e8d0
__builtin_memset(&data_143f1e978, 0, 0x2c)
data_143f1e9a4 = 0x80
data_143f1e9a8 = 0xffffffff
data_143f1e9ac = 0
data_143f1e9b8 = 0
data_143f1e9c0 = 0
sub_140b51dc0(&data_143f20ca8)
void* rax = data_143f1da58
data_143f1e970 = 0

if (rax != 0)
    *(rax + 8) = &data_143f1e950:8
    rax = data_143f1da58

data_143f1e950:8 = rax
data_143f1e960 = &data_143f1da58
data_143f1da58 = &data_143f1e950:8
int64_t* arg_8 = &data_143f1e8d0
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f1e8f8, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f1e8f8)
            rdi = rax_5 + rcx_2
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rdi) << 3)
*(rbx + *rax_1) = &data_143f1e8d0
data_143f1e8d0 = &data_142d54980
return atexit(sub_142cf25f0) __tailcall
