// 函数: sub_140f72060
// 地址: 0x140f72060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3b0) = *(arg2 + 0x1b0)
*(arg1 + 0x3b1) = *(arg2 + 0x1b1)
sub_140692f90(arg1 + 0x3b8, arg2 + 0x1b8)
*(arg1 + 0x3f8) = *(arg2 + 0x1c8)
*(arg1 + 0x3f9) = *(arg2 + 0x1c9)
*(arg1 + 0x3fa) = *(arg2 + 0x1ca)
*(arg1 + 0x3fb) = *(arg2 + 0x1cb)
*(arg1 + 0x3fc) = *(arg2 + 0x1cc)
*(arg1 + 0x3fd) = *(arg2 + 0x1ce)
*(arg1 + 0x3fe) = *(arg2 + 0x1cd)
*(arg1 + 0x390) = *(arg2 + 0x1d0)
void* rsi = *(arg2 + 0x1d8)
int64_t* rcx_1 = *(arg1 + 0x398)

if (rsi != rcx_1)
    if (rsi != 0)
        *(rsi + 0xc) += 1
        rcx_1 = *(arg1 + 0x398)
    
    if (rcx_1 != 0)
        int32_t temp0_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)
    
    *(arg1 + 0x398) = rsi

*(arg1 + 0x3c8) = *(arg2 + 0x1e0)
*(arg1 + 0x3d0) = *(arg2 + 0x1e8)
sub_140692f90(arg1 + 0x3d8, arg2 + 0x1f0)
return sub_140de1b90(arg1 + 0x2b8, arg2 + 0x1a0) __tailcall
