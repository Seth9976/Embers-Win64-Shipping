// 函数: sub_140abfb60
// 地址: 0x140abfb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0xc)
*(arg1 + 0xc) -= 1

if (rdi == 1 && arg1 != 0)
    if ((*(arg1 + 0x19) & 1) != 0)
        sub_140a74f90(*arg1)
    
    int64_t rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        sub_140abfb60(rcx_1)
    
    j_sub_140a74f90(arg1)

return zx.q(rdi - 1)
