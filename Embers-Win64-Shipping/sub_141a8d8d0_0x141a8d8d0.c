// 函数: sub_141a8d8d0
// 地址: 0x141a8d8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_143041850
__builtin_memcpy(&arg1[0x19], &data_143dbb1f8, 0xc)
*(arg1 + 0xd4) = 1
void var_20
void* var_50 = &var_20
void var_40
*var_50 = *Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&var_40)
*(var_50 + 4) = 0
sub_141a8fdf0(&arg1[0x1c], *var_50, 0)
sub_141a8fdd0(&arg1[0x28])
sub_141a8fdd0(&arg1[0x2a])
arg1[0x2c].d = 0x3f800000
*(arg1 + 0x164) = 0xa
arg1[0x2d].b = 1
*(arg1 + 0x169) = 0
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &arg1[0x2e])
arg1[0x2f].d = 0
*(arg1 + 0x17c) = 0
return arg1
