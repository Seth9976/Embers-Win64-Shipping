// 函数: sub_140fb5840
// 地址: 0x140fb5840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t var_140_1 = 0
    int64_t (* var_148)(void* arg1) = sub_140fb6180
    int64_t (* var_158)(void* arg1) = sub_140fc3290
    int32_t var_150_1 = 0
    char r14_1
    
    if (arg5 == 0)
        r14_1 = 0
    else
        r14_1 = *sub_140eff7d0(arg1 + 0x478)
    
    var_148.o = var_148.o
    var_158.o = var_158.o
    uint128_t var_138 = *(arg1 + 0x3d8)
    int128_t var_128 = zx.o(0)
    void var_118
    int64_t* rax_6 = sub_140f94540(&var_118, arg1, &var_148)
    void var_108
    int64_t* rax_7 = sub_140f94540(&var_108, arg1, &var_158)
    sub_140fbc360(&var_158, &var_138, data_1439b49a8, r14_1, rax_7, rax_6, &var_128, 0)
    uint128_t zmm0_1 = var_158.o
    var_138 = zmm0_1
    int64_t* rbx_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    char var_f8 = 1
    int512_t zmm1_1
    zmm1_1.o = zx.o(0)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x88)
    int32_t var_48_1 = 0x20702
    sub_140596b00(arg2, sub_140f9fe40(&var_f8, &var_138))
    sub_140597700(&var_f8)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t r8_3 = *rbx_2
            (*r8_3)(rbx_2, zmm1_1, r8_3)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_4 = *rbx_2
                (*(r8_4 + 8))(rbx_2, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_198)
return arg2
