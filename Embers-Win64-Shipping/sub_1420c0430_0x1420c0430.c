// 函数: sub_1420c0430
// 地址: 0x1420c0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t zmm3 = 0x3e7ad7f29abcaf48
double zmm0[0x2] = zx.o(0)
int64_t zmm2 = fconvert.d(arg2)
zmm0[0] = float.d(-0x8000000000000000)
zmm0[0] = zmm0[0] f* zmm3

if (zmm2 f>= zmm0[0])
    zmm0 = zx.o(0)
    zmm0[0] = float.d(0x7fffffffffffffff)
    zmm0[0] = zmm0[0] f* zmm3
    
    if (zmm2 f<= zmm0[0])
        zmm0 = zx.o(0)
        zmm0[0] = fconvert.d(arg2 * 10000000f + 0.5f)
        int64_t rcx_18 = int.q(zmm0[0])
        
        if (rcx_18 != -0x8000000000000000 && not(float.d(rcx_18) f== zmm0[0]))
            uint32_t temp0_6 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
            zmm0 = zx.o(0)
            zmm0[0] = float.d(rcx_18 - (zx.q(temp0_6) & 1))
        
        *arg1 = int.q(zmm0[0])
    else
        float var_60_1 = arg2
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x2c)
        int32_t var_bc_1 = 0x80
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        int32_t var_68 = 2
        char var_40_1 = 0
        int64_t var_178 = 0
        int32_t var_170_1 = 0
        sub_1405947f0(&var_178, 0xd)
        int32_t rax_6 = var_170_1 + 0xd
        var_170_1 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_178)
        
        UnDecorator::getReferenceType(var_178, u"SecondsValue", 0x1a)
        int64_t* var_150 = &var_178
        int32_t* var_148_1 = &var_68
        void var_164
        sub_140b91dc0(&var_e8, &var_164, &var_150, nullptr)
        int64_t rcx_13 = var_178
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (var_40_1 != 0)
            char var_40_2 = 0
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t rdi_2 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        (*(*var_50 + 8))(var_50, zx.q(rdi_2))
        
        *arg1 = 0x7fffffffffffffff
        int32_t var_a0_2 = 0
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
        
        sub_140acd610(&var_e8)
else
    float var_90_1 = arg2
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    int32_t var_98 = 2
    char var_70_1 = 0
    int64_t var_188 = 0
    int32_t var_180_1 = 0
    sub_1405947f0(&var_188, 0xd)
    int32_t rax_2 = var_180_1 + 0xd
    var_180_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"SecondsValue", 0x1a)
    int64_t* var_160 = &var_188
    int32_t* var_158_1 = &var_98
    void var_168
    sub_140b91dc0(&var_138, &var_168, &var_160, nullptr)
    int64_t rcx_4 = var_188
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    if (var_70_1 != 0)
        char var_70_2 = 0
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t rdi_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_80 + 8))(var_80, zx.q(rdi_1))
    
    *arg1 = -0x8000000000000000
    int32_t var_f0_2 = 0
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
    
    sub_140acd610(&var_138)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
