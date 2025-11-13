// 函数: sub_140f0b4f0
// 地址: 0x140f0b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
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

char rax_7

if (arg1[0x32].b != 0)
    int64_t* rcx_2 = data_143e29f28
    rax_7 = (*(*rcx_2 + 0xa0))(rcx_2, arg4)

char var_108
char* rdx_2

if (arg1[0x32].b == 0 || rax_7 != 0)
    rdx_2 = sub_140dc0fb0(arg1, &var_108, arg3, arg4)
else
    int64_t rdx_1 = *arg1
    (*(rdx_1 + 0x258))(arg1, rdx_1)
    rdx_2 = &var_108
    
    if (*(arg1 + 0x5b2) != 1)
        int32_t var_54
        int32_t var_54_1 = var_54 & 0xffffff00
        var_108 = 1
        int64_t var_100_1 = 0
        int64_t var_f8_1 = 0
        char var_e8_1 = 0
        int64_t var_e0
        __builtin_memset(&var_e0, 0, 0x88)
        int32_t var_58_1 = 0x20702
    else
        rdx_2 = sub_140efc890(arg1, rdx_2, arg5)

sub_1405979f0(arg2, rdx_2)
sub_140597700(&var_108)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
