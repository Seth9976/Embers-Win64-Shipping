// 函数: sub_140f59770
// 地址: 0x140f59770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_138 = *(arg4 + 0x50)
char var_134 = 1

if (sub_140e19910(arg1, *(arg4 + 0xc), &var_138, arg5) == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t var_68 = arg1[0x70].d
    char var_64_1 = 1
    char var_60_1 = 1
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_140e23ec0(arg1, &var_68)
    sub_140745b20(&var_58)
    
    if (arg1[0x7a].d != 0)
        int64_t* rcx_2 = arg1[0x79]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg1[0x7a].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0x79]
            
            (*(*rcx_3 + 0x50))(rcx_3)
    
    int64_t rbx_1 = *arg1
    int128_t zmm0_1
    int512_t zmm1
    zmm0_1, zmm1 = sub_140f5a560(arg1, arg3, arg4 + 0x18)
    zmm1.o = zmm0_1
    (*(rbx_1 + 0x240))(arg1, zmm1)
    sub_140f5be70(arg1)
    char var_128 = 1
    int64_t var_120_1 = 0
    int64_t var_118_1 = 0
    int32_t var_74
    int32_t var_74_1 = (var_74 & 0xffffff01) | 1
    char var_108_1 = 0
    int64_t var_100
    __builtin_memset(&var_100, 0, 0x88)
    int32_t var_78_1 = 0x20702
    sub_140596b00(arg2, &var_128)
    sub_140597700(&var_128)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
