// 函数: sub_141d485f0
// 地址: 0x141d485f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (arg2 != *(arg1 + 0xc))
    sub_140ce4fc0(arg1, arg2, *(arg3 + 0x10))

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
int32_t rax_1 = (arg2 + 0x1f) & 0xffffffe0
arg1[5].d = 0

if (*(arg1 + 0x2c) != rax_1)
    *(arg1 + 0x2c) = rax_1
    sub_140d0bc80(&arg1[2], 0)

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
    int32_t rax_6 = arg1[9].d
    
    if (rax_6 == 0 || rax_6 != r8_2)
        arg1[9].d = r8_2
        sub_1405a4aa0(&arg1[7], 0, r8_2, 4)

int64_t rcx_7 = sx.q(arg1[9].d)
void* result_1 = &arg1[7]
void* result = *(result_1 + 8)

if (rcx_7 s> 0)
    if (result != 0)
        result_1 = result
    
    result = 0xffffffff
    __builtin_memset(result_1, 0xffffffff, rcx_7 << 2)

return result
