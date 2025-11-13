// 函数: sub_140f6bcb0
// 地址: 0x140f6bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c8) != 0)
    return 

*(arg1 + 0x2c8) = 1
uint64_t rsi_1 = *(arg1 + 0x2b8)
*(arg1 + 0x2b8) = 0
int32_t r14_1 = *(arg1 + 0x2c4)
int32_t i_1 = *(arg1 + 0x2c0)
int32_t var_1c_1 = r14_1
*(arg1 + 0x2c0) = 0
uint64_t var_28 = rsi_1
sub_140e0f7b0(arg1 + 0x2b8, 0)

if (i_1 != 0)
    uint64_t rbx_1 = rsi_1
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rbx_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_20_1 = 0

if (r14_1 != 0)
    sub_140638c50(&var_28, 0)
    rsi_1 = var_28

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

*(arg1 + 0x2c8) = 0
