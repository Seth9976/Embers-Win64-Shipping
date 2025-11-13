// 函数: sub_142a48460
// 地址: 0x142a48460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0x1b)
    *(arg1 + 8) = 2
    int64_t rax_1
    rax_1.b = 1
    return 1

if (arg2 s<= 0x7ffffff5)
    void* rdi_2 = ((sx.q(arg2 + 1) << 1) + 0x13) & 0xfffffffffffffff0
    int32_t* rax_3 = sub_142a7dd00(rdi_2)
    
    if (rax_3 != 0)
        *rax_3 = 1
        *(arg1 + 0x18) = &rax_3[1]
        *(arg1 + 0x10) = ((rdi_2 - 4) u>> 1).d
        *(arg1 + 8) = 4
        return 1

*(arg1 + 0x18) = 0
*(arg1 + 8) = 1
*(arg1 + 0x10) = 0
return 0
