// 函数: sub_142221070
// 地址: 0x142221070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa9) = 1
void* rcx = *(arg1 + 0x30)
void* rdi = *(rcx + 0x88)
void* rdx = **(rdi + 0x1310)

if (rdx != 0 && (*(rdx + 0x30) & 2) == 0)
    void** var_128
    sub_141f79620(&var_128, rdx, 0)
    char arg_8 = 9
    int64_t* var_120
    char* rdx_1 = *var_120
    
    if (&rdx_1[1] u> var_120[1])
        var_128[0x2a](&var_128, &arg_8, 1)
    else
        arg_8 = *rdx_1
        *var_120 += 1
    
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_4 = **(rdi + 0x1310)
    void arg_10
    (*(*rcx_4 + 0x2c8))(rcx_4, &arg_10, &var_128, r9_1)
    sub_141f7bb50(&var_128)
    rcx = *(arg1 + 0x30)

rdx.b = 1
jump(*(**(rcx + 0x88) + 0x2a8))
