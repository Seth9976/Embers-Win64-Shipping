// 函数: sub_14247f8d0
// 地址: 0x14247f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x30) = 0
int64_t* rax

if (*(arg2 + 0x20) == 0)
    int64_t* r8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8[4]
    rax = sub_140d30490(arg2, 0, r8)
else
    rax = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* rdx_1 = *(arg2 + 0x30)

if (rdx_1 != 0)
    rax = *(rdx_1 + 8)
    
    if (((rax[2] u>> 0x2e).b & 1) != 0)
        int64_t rax_2 = *(arg2 + 0x20)
        void* rcx_1 = *(arg2 + 0x38)
        int64_t rdi
        rdi.b = rax_2 != 0
        *(arg2 + 0x20) = rdi + rax_2
        int32_t rax_3 = sub_141e9ffa0(rcx_1, rdx_1)
        *arg3 = rax_3
        return rax_3

*(arg2 + 0x90) = 1
return rax
