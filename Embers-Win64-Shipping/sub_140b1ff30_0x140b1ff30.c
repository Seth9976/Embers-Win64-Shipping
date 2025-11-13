// 函数: sub_140b1ff30
// 地址: 0x140b1ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
double zmm6[0x2] = arg2
int64_t* rdi_5

if (arg2[0] <= 0.0 || arg2[0] >= 2147483647.0)
    void var_d0
    char* var_a8
    char** rax_35
    int64_t zmm6_2
    rax_35, zmm6_2 = sub_140a96390(&var_a8, 
        _vfprintf_p_l(&var_d0, Invalid FPS specified: {0} (out of bounds)", FFrameRate"))
    int32_t var_68_1 = 3
    char var_40_1 = 0
    int32_t* var_190 = nullptr
    int32_t var_188_1 = 1
    sub_1405a4b40(&var_190, 1, 0)
    int32_t* rcx_23 = var_190
    *rcx_23 = var_68_1
    *(rcx_23 + 8) = zmm6_2
    *(rcx_23 + 8) = zmm6_2
    rcx_23[2] = zmm6_2.d
    *(rcx_23 + 8) = zmm6_2
    rcx_23[0xa].b = 0
    int64_t* var_50
    
    if (var_40_1 != 0)
        int64_t var_58
        *(rcx_23 + 0x10) = var_58
        *(rcx_23 + 0x18) = var_50
        
        if (var_50 != 0)
            var_50[1].d += 1
        
        int32_t var_48
        rcx_23[8] = var_48
        rcx_23[0xa].b = 1
    
    char* var_128 = *rax_35
    void* rax_43 = rax_35[1]
    void* var_120_1 = rax_43
    
    if (rax_43 != 0)
        *(rax_43 + 8) += 1
    
    void var_e8
    int64_t* rax_44 = sub_140aac870(&var_e8, &var_128, &var_190)
    int64_t var_150 = *rax_44
    int64_t* rcx_26 = rax_44[1]
    
    if (rcx_26 != 0)
        rcx_26[1].d += 1
    
    int32_t var_140_1 = rax_44[2].d
    int64_t* var_e0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t rax_48 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (rax_48 == 1)
                (*(*var_e0 + 8))(var_e0, 1)
    
    sub_140596f50(&var_190)
    
    if (var_40_1 != 0)
        char var_40_2 = 0
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_52 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_52 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    int64_t* rdi_8 = rax_35[1]
    
    if (rdi_8 != 0)
        rdi_8[1].d -= 1
        
        if (rdi_8[1].d == 1)
            (**rdi_8)(rdi_8)
            int32_t rax_56 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (rax_56 == 1)
                (*(*rdi_8 + 8))(rdi_8, 1)
    
    int64_t* var_170 = &var_150
    sub_140aca4f0(arg1, &var_170)
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            (**rcx_26)(rcx_26)
            int32_t rax_60 = *(rcx_26 + 0xc)
            *(rcx_26 + 0xc) -= 1
            
            if (rax_60 == 1)
                (*(*rcx_26 + 8))(rcx_26, 1)
    
    int64_t* var_c8
    rdi_5 = var_c8
label_140b2043c:
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rbx_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, zx.q(rbx_1))
else
    double zmm0[0x2] = arg2
    zmm0[0] = zmm0[0] + 0.5
    int64_t rcx = int.q(zmm0[0])
    
    if (rcx != -0x8000000000000000)
        arg2 = zx.o(0)
        arg2[0] = float.d(rcx)
        
        if (not(arg2[0] == zmm0[0]))
            uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
            zmm0 = zx.o(0)
            zmm0[0] = float.d(rcx - (zx.q(temp0_2) & 1))
    
    if (not(zmm0[0] == zmm6[0]))
        void var_100
        char* var_b8
        char** rax_5
        int64_t zmm6_1
        rax_5, zmm6_1 = sub_140a96390(&var_b8, 
            _vfprintf_p_l(&var_100, 
                Fractional FPS specified: {0}.\nPlease use x/y notation to define such framerates.", 
            FFrameRate"))
        int32_t var_98_1 = 3
        char var_70_1 = 0
        int32_t* var_1a0 = nullptr
        int32_t var_198_1 = 1
        sub_1405a4b40(&var_1a0, 1, 0)
        int32_t* rcx_5 = var_1a0
        *rcx_5 = var_98_1
        *(rcx_5 + 8) = zmm6_1
        *(rcx_5 + 8) = zmm6_1
        rcx_5[2] = zmm6_1.d
        *(rcx_5 + 8) = zmm6_1
        rcx_5[0xa].b = 0
        int64_t* var_80
        
        if (var_70_1 != 0)
            int64_t var_88
            *(rcx_5 + 0x10) = var_88
            *(rcx_5 + 0x18) = var_80
            
            if (var_80 != 0)
                var_80[1].d += 1
            
            int32_t var_78
            rcx_5[8] = var_78
            rcx_5[0xa].b = 1
        
        char* var_138 = *rax_5
        void* rax_13 = rax_5[1]
        void* var_130_1 = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        void var_118
        int64_t* rax_14 = sub_140aac870(&var_118, &var_138, &var_1a0)
        int64_t var_168 = *rax_14
        int64_t* rax_16 = rax_14[1]
        
        if (rax_16 != 0)
            rax_16[1].d += 1
        
        int32_t var_158_1 = rax_14[2].d
        int64_t* var_110
        
        if (var_110 != 0)
            var_110[1].d -= 1
            
            if (var_110[1].d == 1)
                (**var_110)(var_110)
                int32_t rax_20 = *(var_110 + 0xc)
                *(var_110 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_110 + 8))(var_110, 1)
        
        sub_140596f50(&var_1a0)
        
        if (var_70_1 != 0)
            char var_70_2 = 0
            
            if (var_80 != 0)
                var_80[1].d -= 1
                
                if (var_80[1].d == 1)
                    (**var_80)(var_80)
                    int32_t rax_24 = *(var_80 + 0xc)
                    *(var_80 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*var_80 + 8))(var_80, 1)
        
        int64_t* rdi_3 = rax_5[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_28 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* var_180 = &var_168
        sub_140aca4f0(arg1, &var_180)
        
        if (rax_16 != 0)
            rax_16[1].d -= 1
            
            if (rax_16[1].d == 1)
                (**rax_16)(rax_16)
                int32_t rax_32 = *(rax_16 + 0xc)
                *(rax_16 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rax_16 + 8))(rax_16, 1)
        
        int64_t* var_f8
        rdi_5 = var_f8
        goto label_140b2043c
    
    int32_t rcx_18 = int.d(zmm0[0])
    int32_t var_1a4_1 = 1
    int32_t var_1a8
    int32_t* var_178 = &var_1a8
    var_1a8 = rcx_18
    sub_140b07c30(arg1, &var_178)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
