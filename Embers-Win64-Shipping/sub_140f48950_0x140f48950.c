// 函数: sub_140f48950
// 地址: 0x140f48950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x408)

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx = *(arg1 + 0x398)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x398)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 + 0x390) = arg3

int64_t var_18
(*(*rsi + 0x28))(rsi, &var_18, arg1 + 0x390)
sub_140aae2f0(arg2, &var_18)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
