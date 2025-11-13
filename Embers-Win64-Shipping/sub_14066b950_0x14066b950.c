// 函数: sub_14066b950
// 地址: 0x14066b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 1

if (arg2 u>= 4)
    uint32_t r10_2 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(r10_2 + 8)
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(r10_2 + 7)
    rdx = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)

int32_t rax

if (arg2 s> 0)
    rax = arg1[9].d
    
    if (rax == 0 || rax s< rdx)
    label_14066b9ca:
        arg1[9].d = rdx
        sub_140637680(arg1)
        int64_t rax_2
        rax_2.b = 1
        return rax_2
    
    if (rax s> rdx && arg3 != 0)
        goto label_14066b9ca

rax.b = 0
return rax
