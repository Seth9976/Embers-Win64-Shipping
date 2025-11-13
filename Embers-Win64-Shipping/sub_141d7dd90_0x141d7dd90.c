// 函数: sub_141d7dd90
// 地址: 0x141d7dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* result

if (*(arg1 + 0x50) == 2 || *((zx.q((data_143de5458).d) & 1) + arg1 + 0x51) == 1)
    int64_t var_f8
    sub_140d3a3a0(&var_f8, arg1)
    int128_t zmm0_1 = *(arg1 + 0x6c)
    int32_t var_bc_1 = 0x80
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    sub_1405af100(&var_e8, arg3)
    int64_t rax_4 = var_f8
    void*** rax_5 = sub_140a82f30(0x70, 8)
    int64_t* rdx_2 = &rax_5[3]
    *rax_5 = &data_1432341a0
    rax_5[1] = 0
    rax_5[2] = 0
    rdx_2[2] = 0
    rdx_2[3].d = 0
    *(rdx_2 + 0x1c) = 0x80
    int64_t* rcx_2 = rdx_2[2]
    
    if (rcx_2 != 0)
        rdx_2 = rcx_2
    
    *rdx_2 = 0
    rdx_2[1] = 0
    rax_5[7].d = 0xffffffff
    *(rax_5 + 0x3c) = 0
    rax_5[9] = 0
    rax_5[0xa].d = 0
    sub_1405af100(&rax_5[1], &var_e8)
    rax_5[0xd] = rax_4
    *(rax_5 + 0x58) = zmm0_1
    *rax_5 = &data_1432341c0
    int64_t (* var_78)(int64_t* arg1, int64_t* arg2)
    int64_t (* rax_7)(int64_t* arg1, int64_t* arg2) = var_78
    
    if (rax_5 != -8)
        rax_7 = j_sub_141d75900
    
    var_78 = rax_7
    char rax_8 = sub_14106dc60(arg2, &var_78, arg5, arg4)
    
    if (var_78 != 0)
        void var_58
        void*** rcx_5 = &var_58
        
        if (rax_5 != 0)
            rcx_5 = rax_5
        
        void** rdx_6 = *rcx_5
        rdx_6[2](rcx_5, rdx_6)
    
    if (rax_8 != 0)
        *(arg1 + 0x68)
        *(arg1 + 0x68) += 1
    
    result = sub_1405ae080(&var_e8)
else
    int128_t var_108
    var_108.q = 0
    arg2.b = 2
    result = sub_140d23f50(u"Capture protocol is not currently capturing frames.", arg2.b)

__security_check_cookie(rax_1 ^ &var_128)
return result
