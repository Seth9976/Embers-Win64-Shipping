// 函数: sub_140f3c6a0
// 地址: 0x140f3c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2d0) = *(arg2 + 0x1b0)
*(arg1 + 0x2e0) = *(arg2 + 0x1c0)
int32_t zmm0_1 = sub_140692f90(arg1 + 0x2e8, arg2 + 0x1c8)
int32_t i = 0
*(arg1 + 0x2f8) = 0

if (*(arg2 + 0x1e8) != 0)
    int64_t* rcx_1 = *(arg2 + 0x1e0)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        int64_t* rcx_2
        
        if (*(arg2 + 0x1e8) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg2 + 0x1e0)
        
        (*(*rcx_2 + 0x48))(rcx_2)
        *(arg2 + 0x1d8) = zmm0_1

zmm0_1 = *(arg2 + 0x1d8)
int32_t var_38 = zmm0_1
*(arg1 + 0x300) = zmm0_1
char var_34 = 1
int64_t var_30 = 0
int32_t var_28 = 0
*(arg1 + 0x304) = 1
sub_140692f90(arg1 + 0x308, &var_30)
int32_t zmm0_2 = sub_140745b20(&var_30)

if (*(arg2 + 0x200) != 0)
    int64_t* rcx_5 = *(arg2 + 0x1f8)
    
    if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
        int64_t* rcx_6
        
        if (*(arg2 + 0x200) == 0)
            rcx_6 = nullptr
        else
            rcx_6 = *(arg2 + 0x1f8)
        
        (*(*rcx_6 + 0x48))(rcx_6)
        *(arg2 + 0x1f0) = zmm0_2

zmm0_2 = *(arg2 + 0x1f0)
int32_t var_38_1 = zmm0_2
*(arg1 + 0x318) = zmm0_2
char var_34_1 = 1
var_30 = 0
int32_t var_28_1 = 0
*(arg1 + 0x31c) = 1
sub_140692f90(arg1 + 0x320, &var_30)
sub_140745b20(&var_30)
uint64_t result = zx.q(*(arg2 + 0x1a8))

if (result.d s> *(arg1 + 0x2c4))
    sub_140638c50(arg1 + 0x2b8, result.d)
    result = zx.q(*(arg2 + 0x1a8))

if (result.d s> 0)
    void** r15_1 = nullptr
    
    do
        if (*(arg1 + 0x2c8) == 0)
            int64_t rbp_1 = sx.q(*(arg1 + 0x2c0))
            void* rsi_1 = *(r15_1 + *(arg2 + 0x1a0))
            int32_t rax_8 = (rbp_1 + 1).d
            *(arg1 + 0x2c0) = rax_8
            
            if (rax_8 s> *(arg1 + 0x2c4))
                sub_140638870(arg1 + 0x2b8)
            
            *(*(arg1 + 0x2b8) + (rbp_1 << 3)) = rsi_1
            result = *(arg1 + 0x2b0)
            
            if (result != 0 && *(rsi_1 + 8) != result)
                *(rsi_1 + 8) = result
                result = sub_140de7bf0(rsi_1)
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< *(arg2 + 0x1a8))

return result
