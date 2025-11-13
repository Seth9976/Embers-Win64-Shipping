// 函数: sub_1426e04f0
// 地址: 0x1426e04f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426b3560(arg1, arg2)
int64_t* rsi = *(arg1 + 0x10)
void* rdi = rsi[0x23]

if (rdi == 0)
    (*(*rsi + 0x390))(rsi)
    rdi = rsi[0x23]

if ((*(arg1 + 0x98) & 1) != 0 && rdi != 0)
    int64_t var_18
    sub_1426ab930(&var_18, arg1, sub_14272f680(), rdi + 0x88)
    int32_t var_10
    
    if (var_10 != 0 && var_10 != 1)
        sub_140a20ba0(arg2, &data_143469950, 3)
        int32_t r8_3
        
        if (var_10 == 0)
            r8_3 = 0
        else
            r8_3 = var_10 - 1
        
        sub_140a20ba0(arg2, var_18, r8_3)
    
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
