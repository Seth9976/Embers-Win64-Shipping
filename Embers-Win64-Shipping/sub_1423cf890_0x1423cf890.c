// 函数: sub_1423cf890
// 地址: 0x1423cf890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
arg1[1] = 0
arg1[3].d = 0xffffffff
*(arg1 + 0x1c) = 4
*arg1 = &data_14333f488
arg1[2] = &data_14333f638
arg1[4] = 0
arg1[5] = 0
arg1[6] = arg2
arg1[7] = &data_143328318
arg1[8] = &data_142f18c08
arg1[9] = 0
sub_1405ab8c0(&arg1[0xa])
arg1[7] = &data_14333f420
arg1[8] = &data_14333f428
arg1[0xa] = &data_14333f468
__builtin_memset(&arg1[0xd], 0, 0x48)
arg1[0x17].d &= 0xffffffc9
*(arg1 + 0xb4) = data_143a30338
*(arg1 + 0xbc) = 0
int64_t* rcx_1 = arg1[6]
*(arg1 + 0xc4) = 0
arg1[0x16].d = 5

if (rcx_1 != 0 && (*(*rcx_1 + 0x108))(rcx_1) != 0)
    rbp = 1

arg1[0x17].d &= 0xfffffffe
arg1[0x17].d |= rbp
j_sub_140a1b080()
int64_t var_18
sub_140a2e390(&var_18, u"Build: %s", u"++UE4+Release-4.25-CL-14469661")

if (&arg1[4] == &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = arg1[4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[4] = var_18
    int32_t var_10
    arg1[5].d = var_10
    int32_t var_c
    *(arg1 + 0x2c) = var_c

arg1[0x17].d &= 0xfffffff7
return arg1
