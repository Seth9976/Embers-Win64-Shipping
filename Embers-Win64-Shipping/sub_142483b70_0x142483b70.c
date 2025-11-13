// 函数: sub_142483b70
// 地址: 0x142483b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x30) = 0
int64_t* result

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    result = sub_140d30490(arg2, 0, r8_1)
else
    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* rdx_1 = *(arg2 + 0x30)

if (rdx_1 != 0)
    result = *(rdx_1 + 8)
    
    if (((result[2] u>> 0x2f).b & 1) != 0)
        int64_t rax_1 = *(arg2 + 0x20)
        int64_t* rcx_1 = *(arg2 + 0x38)
        int64_t rdi
        rdi.b = rax_1 != 0
        *(arg2 + 0x20) = rdi + rax_1
        return sub_141ea0640(rcx_1, rdx_1) __tailcall

*(arg2 + 0x90) = 1
return result
