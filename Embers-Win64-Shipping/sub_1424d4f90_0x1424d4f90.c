// 函数: sub_1424d4f90
// 地址: 0x1424d4f90
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
    
    if (((zx.q(result[2].d) u>> 0x15).b & 1) != 0)
        int64_t rax_1 = *(arg2 + 0x20)
        void** rcx_1 = *(arg2 + 0x38)
        int64_t rdi
        rdi.b = rax_1 != 0
        *(arg2 + 0x20) = rdi + rax_1
        return sub_1420c19f0(rcx_1, rdx_1) __tailcall

*(arg2 + 0x90) = 1
return result
