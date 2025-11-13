// 函数: sub_1404e20a0
// 地址: 0x1404e20a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cfb20(arg1)
sub_1419d9a90()
int32_t rsi = 0
data_143f20630 = &data_143f218e0
data_143f20628 = 0
data_143f20620 = &data_142d54980
data_143f20638 = u"FScatterCopyCS"
sub_140b58260(&data_143f20640, u"FScatterCopyCS", 1)
sub_140b4c620(&data_143f20648, &data_143f20640)
sub_140b4c820(&data_143f20650, u"/Engine/Private/ByteBuffer.usf")
data_143f20658 = u"/Engine/Private/ByteBuffer.usf"
data_143f20660 = u"ScatterCopyCS"
data_143f20668 = 5
data_143f20678 = sub_1405e13f0
data_143f2066c = 0x118
data_143f20680 = sub_1419caca0
data_143f20688 = sub_1419d2b10
data_143f20690 = &data_1419d8610
data_143f20698 = sub_1405948d0
data_143f20670 = 4
data_143f206a0 = &data_143f21840
data_143f206a8 = 0
data_143f206b0 = 0
data_143f206b8 = &data_143f20620
__builtin_memset(&data_143f206c8, 0, 0x2c)
data_143f206f4 = 0x80
data_143f206f8 = 0xffffffff
data_143f206fc = 0
data_143f20708 = 0
data_143f20710 = 0
sub_140b51dc0(&data_143f218e0)
void* rax = data_143f1da58
data_143f206c0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f206a8
    rax = data_143f1da58

data_143f206a8 = rax
data_143f206b0 = &data_143f1da58
data_143f1da58 = &data_143f206a8
int64_t* arg_8 = &data_143f20620
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f20648, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f20648)
            rsi = rax_5 + rcx_1
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rsi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rsi) << 3)
*(rbx + *rax_1) = &data_143f20620
data_143f20620 = &data_142d54980
return atexit(sub_142cf2650) __tailcall
