// 函数: sub_140f0bc00
// 地址: 0x140f0bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (arg1[0x34].d != 0)
    int64_t* rcx = arg1[0x33]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x34].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x33]
        
        arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)

if (arg1[0x32].b != 0)
    int64_t* rcx_2 = data_143e29f28
    
    if ((*(*rcx_2 + 0xa0))(rcx_2, arg4) == 0)
        char rsi_1 = *(arg1 + 0x5b3)
        (*(*arg1 + 0x260))(arg1)
        char rax_9 = *(arg1 + 0x5b2)
        char var_f8
        char* rdx_1
        
        if (rax_9 == 2 || (rax_9 == 0 && (rsi_1 & 2) != 0))
            rdx_1 = sub_140efc890(arg1, &var_f8, arg5)
        else
            int32_t var_44
            int32_t var_44_1 = var_44 & 0xffffff00
            rdx_1 = &var_f8
            var_f8 = 1
            int64_t var_f0_1 = 0
            int64_t var_e8_1 = 0
            char var_d8_1 = 0
            int64_t var_d0
            __builtin_memset(&var_d0, 0, 0x88)
            int32_t var_48_1 = 0x20702
        
        sub_1405979f0(arg2, rdx_1)
        sub_140597700(&var_f8)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
