// 函数: sub_1411c8180
// 地址: 0x1411c8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142f35248
__builtin_memset(&arg1[2], 0, 0x18)
arg1[5].d = 0x200
void var_818
memcpy(&var_818, &data_142f38c80, 0x800)
arg1[4].d = 0x200
sub_140638750(&arg1[3], 0x200, *(arg1 + 0x24))
memcpy(arg1[3], &var_818, 0x800)
__security_check_cookie(rax_1 ^ &var_838)
return arg1
