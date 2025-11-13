// 函数: sub_140cfb920
// 地址: 0x140cfb920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (arg2 != *(arg1 + 0xc))
    sub_140ce4f50(arg1, arg2, *(arg3 + 0x10))

arg1[4].d = 0xffffffff
*(arg1 + 0x24) = 0
int32_t rax_1 = (arg2 + 0x1f) & 0xffffffe0
arg1[3].d = 0

if (*(arg1 + 0x1c) != rax_1)
    *(arg1 + 0x1c) = rax_1
    sub_140d0bbd0(&arg1[2], 0)

int32_t r8_2

if (arg2 u< 4)
    r8_2 = 1
else
    uint32_t rax_3 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
    int32_t rcx_1
    
    if (rax_3 == 0xfffffff8)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_3 + 7)
    char r8_1
    
    if (rax_3 == 0xfffffff9)
        r8_1 = 0x20
    else
        r8_1 = 0x1f - temp0_3
    
    r8_2 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))

if (arg2 != 0)
    int32_t rax_6 = arg1[6].d
    
    if (rax_6 == 0 || rax_6 != r8_2)
        arg1[6].d = r8_2
        sub_140a30eb0(&arg1[5], 0, r8_2, 4, 0)

void* rdx_2 = arg1[5]

if ((rdx_2.b & 1) != 0)
    rdx_2 = (rdx_2 s>> 1) + &arg1[5]

int64_t result = sx.q(arg1[6].d)

if (result.d s> 0)
    int64_t result_1 = result
    result = 0xffffffff
    __builtin_memset(rdx_2, 0xffffffff, result_1 << 2)

return result
