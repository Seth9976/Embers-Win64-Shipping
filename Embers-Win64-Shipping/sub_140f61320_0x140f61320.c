// 函数: sub_140f61320
// 地址: 0x140f61320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6c8
int64_t rax_1 = __security_cookie ^ &var_6c8

if (arg2 == 0)
    void var_6a8
    sub_140f1f1e0(&var_6a8)
    int64_t var_508
    *(arg1 + 0x6f0) = var_508
    sub_140f24700(&var_6a8)
else
    *(arg1 + 0x6f0) = arg2

if (*(arg1 + 0x690) == 0)
    int64_t* rcx_2 = *(arg1 + 0x698)
    
    if (rcx_2 != 0)
        sub_140f61420(rcx_2, *(arg1 + 0x6f0) + 0x320)

if (*(arg1 + 0x6b8) == 0)
    int64_t* rcx_3 = *(arg1 + 0x6c0)
    
    if (rcx_3 != 0)
        sub_140f61420(rcx_3, *(arg1 + 0x6f0) + 0x320)

int64_t rcx_4 = *(arg1 + 0x6f0)
*(arg1 + 0x6f8) = rcx_4 + 8
*(arg1 + 0x700) = rcx_4 + 0x90
*(arg1 + 0x708) = rcx_4 + 0x118
*(arg1 + 0x710) = rcx_4 + 0x1a0
__security_check_cookie(rax_1 ^ &var_6c8)
return rcx_4 + 0x1a0
