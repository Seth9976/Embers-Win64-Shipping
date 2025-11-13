// 函数: sub_1404e2340
// 地址: 0x1404e2340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cfb20(arg1)
sub_1419d9bd0()
int32_t rsi = 0
data_143f20830 = &data_143f219b0
data_143f20828 = 0
data_143f20820 = &data_142d54980
data_143f20838 = u"FScatterCopyTextureCS"
sub_140b58260(&data_143f20840, u"FScatterCopyTextureCS", 1)
sub_140b4c620(&data_143f20848, &data_143f20840)
sub_140b4c820(&data_143f20850, u"/Engine/Private/ByteBuffer.usf")
data_143f20858 = u"/Engine/Private/ByteBuffer.usf"
data_143f20860 = u"ScatterCopyCS"
data_143f20868 = 5
data_143f20878 = sub_1405e13f0
data_143f2086c = 0x118
data_143f20880 = sub_1419cad20
data_143f20888 = sub_1419d2bb0
data_143f20890 = sub_140889610
data_143f20898 = sub_1405948d0
data_143f20870 = 4
data_143f208a0 = &data_143f21840
data_143f208a8 = 0
data_143f208b0 = 0
data_143f208b8 = &data_143f20820
__builtin_memset(&data_143f208c8, 0, 0x2c)
data_143f208f4 = 0x80
data_143f208f8 = 0xffffffff
data_143f208fc = 0
data_143f20908 = 0
data_143f20910 = 0
sub_140b51dc0(&data_143f219b0)
void* rax = data_143f1da58
data_143f208c0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f208a8
    rax = data_143f1da58

data_143f208a8 = rax
data_143f208b0 = &data_143f1da58
data_143f1da58 = &data_143f208a8
int64_t* arg_8 = &data_143f20820
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f20848, &arg_8)
void* rax_1 = sub_1419cf430(0)
int32_t i_2 = *(rax_1 + 8)
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + rsi
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f20848)
            rsi = rax_5 + rcx_1
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rsi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rsi) << 3)
*(rbx + *rax_1) = &data_143f20820
data_143f20820 = &data_142d54980
return atexit(sub_142cf2660) __tailcall
