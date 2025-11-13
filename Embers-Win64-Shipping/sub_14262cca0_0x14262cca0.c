// 函数: sub_14262cca0
// 地址: 0x14262cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = arg2
*(arg1 + 0x48) = 0
int64_t rax_2 = j_sub_1426075c0(zx.q(arg2 << 6), 0)
*(arg1 + 0x40) = rax_2

if (rax_2 != 0)
    memset(rax_2, 0, sx.q(*(arg1 + 0x38)) << 6)
    *(arg1 + 0x4c) = arg3
    *(arg1 + 0x58) = 0
    rax_2 = j_sub_1426075c0(zx.q(arg3 * 0x1c), 0)
    *(arg1 + 0x50) = rax_2
    
    if (rax_2 != 0)
        memset(rax_2, 0, sx.q(*(arg1 + 0x4c)) * 0x1c)
        *(arg1 + 0x28) = arg4
        rax_2 = j_sub_1426075c0(zx.q(arg4 * 0x84), 0)
        *(arg1 + 0x30) = rax_2
        
        if (rax_2 != 0)
            memset(rax_2, 0, sx.q(*(arg1 + 0x28)) * 0x84)
            int64_t rax_3
            rax_3.b = 1
            return rax_3

rax_2.b = 0
return rax_2
