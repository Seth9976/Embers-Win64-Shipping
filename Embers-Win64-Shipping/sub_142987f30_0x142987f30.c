// 函数: sub_142987f30
// 地址: 0x142987f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rcx = arg1->__offset(0x70).q

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1->__offset(0x78).q

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1->__offset(0x80).q

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = arg1->__offset(0xb0).q

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

sub_142988660(arg1)

if (arg1->__offset(0xd0).b != 0)
    int64_t* rcx_5 = arg1->__offset(0xd8).q
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)

sub_142986500(arg1 + 0x98)
j_sub_140a74f90(arg1->__offset(0x98).q)
sub_14297d7d0(&arg1[1])
_Mtx_destroy_in_situ(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
