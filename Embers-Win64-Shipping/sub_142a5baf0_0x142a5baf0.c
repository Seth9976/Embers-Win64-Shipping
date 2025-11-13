// 函数: sub_142a5baf0
// 地址: 0x142a5baf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t var_28_1 = -2
int64_t* rbx_1 = arg2
void* rsi_1 = *(arg1 + 0x170)

if (rsi_1 != 0)
    rbx_1 = nullptr
    int64_t arg_18 = 0
    int64_t* rcx = *(rsi_1 + 8)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    *(rsi_1 + 8) = arg2
    int32_t arg_10 = 0
    sub_142a5f4f0(arg1, &arg_10)

if (rbx_1 != 0)
    (**rbx_1)(rbx_1, 1)
