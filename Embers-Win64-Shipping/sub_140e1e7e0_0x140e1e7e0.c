// 函数: sub_140e1e7e0
// 地址: 0x140e1e7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* rbx = nullptr
char var_180 = data_1439ae51c
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 4
char var_48 = 0
(*(*arg1 + 0x238))(arg1, arg3, &var_180)
void var_178
int32_t rbx_4

if (var_50 s<= 0)
    rbx_4 = arg6
else
    void* r14_1 = &var_178
    
    if (var_58 != 0)
        r14_1 = var_58
    
    void var_218
    void var_1a8
    sub_140dd9fa0(&var_218, (*(*arg1 + 0x200))(arg1, &var_1a8))
    float zmm0[0x4] = *arg7
    char var_1f0_1 = 1
    int128_t zmm1 = arg7[1]
    int64_t var_1e8 = 0
    float var_258[0x4] = zmm0
    int32_t var_1e0_1 = 0
    zmm0 = arg7[2]
    int128_t var_248 = zmm1
    float var_238[0x4] = zmm0
    
    if (arg1[0x69].d != 0)
        int64_t* rcx_2 = arg1[0x68]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (arg1[0x69].d != 0)
                rbx = arg1[0x68]
            
            float var_228[0x4]
            (*(*rbx + 0x48))(rbx, &var_228)
            *(arg1 + 0x328) = var_228
    
    zmm0 = var_258[0]
    zmm1 = var_258[1]
    zmm0[0] = zmm0[0] f* arg1[0x65].d
    zmm1.d = zmm1.d f* *(arg1 + 0x32c)
    var_258[0] = zmm0[0]
    zmm0 = var_258[2]
    zmm0[0] = zmm0[0] f* arg1[0x66].d
    var_258[1] = zmm1.d
    zmm1.d = var_258[3].d f* *(arg1 + 0x334)
    var_258[2] = zmm0[0]
    var_258[3] = zmm1.d
    int128_t* rax_10 = sub_140e11270(&var_218, zmm1)
    uint32_t rdx_4 = zx.d(rax_10[1].b)
    
    if (rdx_4 != 0)
        if (rdx_4 == 1)
            rax_10 = *(rax_10 + 0x18)
        else if (rdx_4 == 3)
            rax_10 = &var_238
        else
            rax_10 = &var_248
    
    float zmm4_1[0x4] = *rax_10
    float zmm0_1[0x4] = var_258
    float temp0_2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    temp0_3[0] = temp0_3[0] * 0.600000024f
    float temp0_4[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    float var_1c8_1[0x4] = zmm4_1
    float temp0_5[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    temp0_5[0] = temp0_2[0]
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
    temp0_6[0] = temp0_4[0]
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
    temp0_7[0] = temp0_3[0]
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
    var_238 = temp0_8
    float var_1b8_1[0x4] = temp0_8
    float var_1d8[0x4] = zmm0_1
    sub_140745b20(&var_1e8)
    int64_t* var_1f8
    
    if (var_1f8 != 0)
        var_1f8[1].d -= 1
        
        if (var_1f8[1].d == 1)
            (**var_1f8)(var_1f8)
            int32_t temp3_1 = *(var_1f8 + 0xc)
            *(var_1f8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_1f8 + 8))(var_1f8, 1)
    
    int64_t* var_188
    
    if (var_188 != 0)
        var_188[1].d -= 1
        
        if (var_188[1].d == 1)
            (**var_188)(var_188)
            int32_t temp4_1 = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_188 + 8))(var_188, 1)
    
    int128_t zmm1_2 = arg2[1]
    int64_t* rbx_3 = *(r14_1 + 0x38)
    var_258 = *arg2
    float zmm0_2[0x4] = arg2[2]
    var_248 = zmm1_2
    var_248:8.q = arg1
    var_238 = zmm0_2
    rbx_4 = sub_140e1f680(rbx_3, &var_258, r14_1, arg4, arg5, arg6 + 1, &var_1d8, 
        sub_140e25600(arg1, arg8))

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rbx_4)
