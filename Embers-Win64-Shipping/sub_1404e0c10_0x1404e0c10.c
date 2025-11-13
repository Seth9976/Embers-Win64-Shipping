// 函数: sub_1404e0c10
// 地址: 0x1404e0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cf840(arg1)
sub_1419d8b60()
int32_t rsi = 0
data_143f20430 = &data_143f216c0
data_143f20428 = 0
data_143f20420 = &data_142d54980
data_143f20438 = u"FMemsetBufferCS"
sub_140b58260(&data_143f20440, u"FMemsetBufferCS", 1)
sub_140b4c620(&data_143f20448, &data_143f20440)
sub_140b4c820(&data_143f20450, u"/Engine/Private/ByteBuffer.usf")
data_143f20458 = u"/Engine/Private/ByteBuffer.usf"
data_143f20460 = u"MemsetBufferCS"
data_143f20468 = 5
data_143f20478 = sub_1405e13f0
data_143f2046c = 0x118
data_143f20480 = sub_1419ca8b0
data_143f20488 = sub_1419d2c80
data_143f20490 = &data_1419d8610
data_143f20498 = sub_1405948d0
data_143f20470 = 4
data_143f204a0 = &data_143f21620
data_143f204a8 = 0
data_143f204b0 = 0
data_143f204b8 = &data_143f20420
__builtin_memset(&data_143f204c8, 0, 0x2c)
data_143f204f4 = 0x80
data_143f204f8 = 0xffffffff
data_143f204fc = 0
data_143f20508 = 0
data_143f20510 = 0
sub_140b51dc0(&data_143f216c0)
void* rax = data_143f1da58
data_143f204c0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f204a8
    rax = data_143f1da58

data_143f204a8 = rax
data_143f204b0 = &data_143f1da58
data_143f1da58 = &data_143f204a8
int64_t* arg_8 = &data_143f20420
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f20448, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f20448)
            rsi = rax_5 + rcx_1
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rsi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rsi) << 3)
*(rbx + *rax_1) = &data_143f20420
data_143f20420 = &data_142d54980
return atexit(sub_142cf25d0) __tailcall
