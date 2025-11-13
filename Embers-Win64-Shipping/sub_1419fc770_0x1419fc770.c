// 函数: sub_1419fc770
// 地址: 0x1419fc770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) = arg2
arg1[1].d = 0
*arg1 = &data_14301ec10
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3 + 1)
int32_t rax_2 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3)
int32_t rcx

if (rax_2 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0_1

*(arg1 + 0x1c) = arg3 + 1
arg1[4].d = arg4
arg1[3].d = (0x20 - rcx) & not.d(rax_2)
__builtin_memset(&arg1[5], 0, 0x18)
__builtin_memset(&arg1[0xa], 0, 0x19)
arg1[0xe] = 0
arg1[0xf] = 0
int32_t rcx_1 = arg1[4].d
arg1[2].d = rcx_1 * rcx_1 * *(arg1 + 0x1c) * *(arg1 + 0x1c)

if (arg5 s> 1)
    void*** rax_4 = j_sub_140a82f30(0x28)
    void*** rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        int32_t rcx_5 = *(arg1 + 0x1c)
        int32_t rdx_2 = arg1[4].d
        int32_t rax_5 = arg1[2].d
        rdi_1[1].d = 0xffffffff
        *(rdi_1 + 0xc) = 4
        rdi_1[2] = 0
        rdi_1[4].d = rcx_5
        *rdi_1 = &data_14301ebc8
        rdi_1[3].d = arg5
        *(rdi_1 + 0x1c) = rax_5
        *(rdi_1 + 0x24) = rdx_2
        sub_14198bc10(rdi_1)
    
    arg1[7] = rdi_1

int64_t rcx_7 = sx.q(arg1[3].d)
int64_t rax_6 = 8 * rcx_7

if (mulu.dp.q(8, rcx_7) u>> 0x40 != zx.o(0))
    rax_6 = -1

int64_t rax_7 = j_sub_140a82f30(rax_6)
int64_t count = sx.q(arg1[3].d) << 3
arg1[8] = rax_7
memset(rax_7, 0, count)
int64_t rcx_10 = sx.q(arg1[3].d)
uint64_t count_1 = 0x28 * rcx_10

if (mulu.dp.q(0x28, rcx_10) u>> 0x40 != zx.o(0))
    count_1 = -1

int64_t rax_9 = j_sub_140a82f30(count_1)
int64_t rdi_2 = rax_9

if (rax_9 == 0)
    rdi_2 = 0
else
    memset(rax_9, 0, count_1)

arg1[9] = rdi_2

if (data_143f0f21f != 0)
    uint64_t rdx_3 = zx.q(data_143f0f1a0)
    
    if (((*(&data_143f025fc + sx.q(rdx_3.d) * 0x14) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_3))
        int64_t r14 = sx.q(arg1[3].d)
        int64_t rdi_3 = sx.q(arg1[0xf].d)
        int32_t rax_14 = (rdi_3 + r14).d
        arg1[0xf].d = rax_14
        
        if (rax_14 s> *(arg1 + 0x7c))
            sub_1405a4d70(&arg1[0xe])
        
        memset(&arg1[0xe][rdi_3], 0, r14 << 3)

if (arg1[2].d s<= 0xffff)
    sub_1419f4cb0(arg1, arg5, arg6)
else
    arg1[0xd].b = 1
    sub_1419f58b0(arg1, arg5, arg6)

sub_141a06610(arg1, arg7)
return arg1
