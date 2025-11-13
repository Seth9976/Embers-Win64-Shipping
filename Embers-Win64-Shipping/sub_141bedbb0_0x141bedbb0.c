// 函数: sub_141bedbb0
// 地址: 0x141bedbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int64_t* rbx = arg1[0x22]
float temp0[0x4] = _mm_unpacklo_ps(arg1[0x21].d, *(arg1 + 0x10c))
char var_20 = 1
int64_t var_18 = 0
int32_t var_10 = 0
int64_t var_28 = temp0.q
rbx[0x55] = temp0.q
rbx[0x56].b = 1
sub_140692f90(&rbx[0x57], &var_18)
sub_140e19ef0(rbx, 1)
return sub_140745b20(&var_18)
