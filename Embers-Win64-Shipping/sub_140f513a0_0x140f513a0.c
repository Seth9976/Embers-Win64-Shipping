// 函数: sub_140f513a0
// 地址: 0x140f513a0
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
char rax_3 = (*(*arg1 + 0x1b0))()
char rax_5

if (rax_3 != 0)
    int64_t* rcx = data_143e29f28
    rax_5 = (*(*rcx + 0xa0))(rcx, arg4)

char var_108
char* rdx_1

if (rax_3 == 0 || rax_5 != 0 || *(arg1 + 0x3b2) == 0)
    rdx_1 = sub_140dc0fb0(arg1, &var_108, arg3, arg4)
else
    if (arg1[0x76].b != 0)
        sub_140f5be70(arg1)
    else
        arg1[0x76].b = 1
        sub_140910050(&arg1[0x7b])
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    rdx_1 = &var_108
    var_108 = 1
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x88)
    int32_t var_58_1 = 0x20702

sub_1405979f0(arg2, rdx_1)
sub_140597700(&var_108)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
