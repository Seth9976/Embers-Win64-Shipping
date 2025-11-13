// 函数: sub_1404e06d0
// 地址: 0x1404e06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cf9b0(arg1)
sub_1419d88e0()
int32_t rsi = 0
data_143f20530 = &data_143f217d0
data_143f20528 = 0
data_143f20520 = &data_142d54980
data_143f20538 = u"FMemcpyBufferCS"
sub_140b58260(&data_143f20540, u"FMemcpyBufferCS", 1)
sub_140b4c620(&data_143f20548, &data_143f20540)
sub_140b4c820(&data_143f20550, u"/Engine/Private/ByteBuffer.usf")
data_143f20558 = u"/Engine/Private/ByteBuffer.usf"
data_143f20560 = u"MemcpyCS"
data_143f20568 = 5
data_143f20578 = sub_1405e13f0
data_143f2056c = 0x118
data_143f20580 = sub_1419ca780
data_143f20588 = sub_1419d2b10
data_143f20590 = &data_1419d8610
data_143f20598 = sub_1405948d0
data_143f20570 = 4
data_143f205a0 = &data_143f21730
data_143f205a8 = 0
data_143f205b0 = 0
data_143f205b8 = &data_143f20520
__builtin_memset(&data_143f205c8, 0, 0x2c)
data_143f205f4 = 0x80
data_143f205f8 = 0xffffffff
data_143f205fc = 0
data_143f20608 = 0
data_143f20610 = 0
sub_140b51dc0(&data_143f217d0)
void* rax = data_143f1da58
data_143f205c0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f205a8
    rax = data_143f1da58

data_143f205a8 = rax
data_143f205b0 = &data_143f1da58
data_143f1da58 = &data_143f205a8
int64_t* arg_8 = &data_143f20520
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f20548, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f20548)
            rsi = rax_5 + rcx_1
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rsi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rsi) << 3)
*(rbx + *rax_1) = &data_143f20520
data_143f20520 = &data_142d54980
return atexit(sub_142cf25b0) __tailcall
