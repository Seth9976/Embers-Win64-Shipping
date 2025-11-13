// 函数: sub_1420b2220
// 地址: 0x1420b2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
void* rax_2 = sub_1423de540(data_143f5b298, arg1, 1)
int32_t* rbx = nullptr
*arg3 = 0
*arg4 = 0
*arg5 = zx.o(0)
int32_t result

if (rax_2 == 0)
    void var_2b0
    sub_140b58170(&var_2b0, "Blueprint", (rax_2 + 1).d)
    void var_208
    int64_t* rax_3 =
        _vfprintf_p_l(&var_208, BeginDrawCanvasToRenderTarget: WorldContextObject is not valid.", 
        KismetRenderingLibrary")
    void var_238
    void var_170
    sub_140ae44d0(sub_140accdf0(&var_170, &var_2b0), &var_238, rax_3)
    int64_t* var_230
    
    if (var_230 != 0)
        var_230[1].d -= 1
        
        if (var_230[1].d == 1)
            (**var_230)(var_230)
            int32_t temp2_1 = *(var_230 + 0xc)
            *(var_230 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_230 + 8))(var_230, zx.q((rax_2 + 1).d))
    
    result = sub_140acd9c0(&var_170)
    int64_t* var_200
    
    if (var_200 != 0)
        result = var_200[1].d
        var_200[1].d -= 1
        
        if (result == 1)
            result = (**var_200)(var_200)
            int32_t rbx_3 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (rbx_3 == 1)
                result = (*(*var_200 + 8))(var_200, zx.q(rbx_3))
else if (arg2 == 0)
    void var_280
    sub_140b58170(&var_280, "Blueprint", (arg2 + 1).d)
    uint64_t var_2e8
    
    if (arg1 != 0)
        sub_140d21e10(arg1, &var_2e8, 0)
    else
        var_2e8 = 0
        int32_t var_2e0_1 = 0
        sub_1405947f0(&var_2e8, (arg2 + 5).d)
        int32_t rax_9 = var_2e0_1 + 5
        var_2e0_1 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_2e8)
        
        UnDecorator::getReferenceType(var_2e8, u"None", 0xa)
    
    void var_f8
    int64_t* rax_10 = sub_140aae2f0(&var_f8, &var_2e8)
    void var_1d8
    char* var_190
    char** rax_12 = sub_140a96390(&var_190, 
        _vfprintf_p_l(&var_1d8, 
            BeginDrawCanvasToRenderTarget[{0}]: TextureRenderTarget must be non-null.", 
        KismetRenderingLibrary"))
    int64_t rcx_18 = *rax_10
    int64_t* rcx_19 = rax_10[1]
    int32_t var_b0_1 = 4
    
    if (rcx_19 != 0)
        rcx_19[1].d += 1
    
    int32_t rax_13 = rax_10[2].d
    char var_88_1 = 1
    int32_t* var_2a0 = nullptr
    int32_t var_298_1 = 1
    sub_1405a4b40(&var_2a0, 1, 0)
    int32_t* rcx_21 = var_2a0
    *rcx_21 = var_b0_1
    int64_t var_a8
    *(rcx_21 + 8) = var_a8
    *(rcx_21 + 8) = var_a8
    rcx_21[2] = var_a8.d
    *(rcx_21 + 8) = var_a8
    rcx_21[0xa].b = 0
    
    if (var_88_1 != 0)
        *(rcx_21 + 0x10) = rcx_18
        *(rcx_21 + 0x18) = rcx_19
        
        if (rcx_19 != 0)
            rcx_19[1].d += 1
        
        rcx_21[8] = rax_13
        rcx_21[0xa].b = 1
    
    char* var_258 = *rax_12
    void* rax_21 = rax_12[1]
    void* var_250_1 = rax_21
    
    if (rax_21 != 0)
        *(rax_21 + 8) += 1
    
    void var_1f0
    int64_t* rax_22 = sub_140aac870(&var_1f0, &var_258, &var_2a0)
    int64_t var_270 = *rax_22
    int64_t* rcx_24 = rax_22[1]
    
    if (rcx_24 != 0)
        rcx_24[1].d += 1
    
    int32_t var_260_1 = rax_22[2].d
    int64_t* var_1e8
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_26 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
    
    sub_140596f50(&var_2a0)
    
    if (var_88_1 != 0)
        char var_88_2 = 0
        
        if (rcx_19 != 0)
            rcx_19[1].d -= 1
            
            if (rcx_19[1].d == 1)
                (**rcx_19)(rcx_19)
                int32_t rax_30 = *(rcx_19 + 0xc)
                *(rcx_19 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rcx_19 + 8))(rcx_19, 1)
    
    int64_t* rdi_4 = rax_12[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_34 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* rdi_5 = rax_10[1]
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_38 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    void var_228
    void var_148
    sub_140ae44d0(sub_140accdf0(&var_148, &var_280), &var_228, &var_270)
    int64_t* var_220
    
    if (var_220 != 0)
        var_220[1].d -= 1
        
        if (var_220[1].d == 1)
            (**var_220)(var_220)
            int32_t temp5_1 = *(var_220 + 0xc)
            *(var_220 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_220 + 8))(var_220, 1)
    
    result = sub_140acd9c0(&var_148)
    
    if (rcx_24 != 0)
        result = rcx_24[1].d
        rcx_24[1].d -= 1
        
        if (result == 1)
            (**rcx_24)(rcx_24)
            result = *(rcx_24 + 0xc)
            *(rcx_24 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_24 + 8))(rcx_24, 1)
    
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        result = var_1d0[1].d
        var_1d0[1].d -= 1
        
        if (result == 1)
            result = (**var_1d0)(var_1d0)
            int32_t rbx_4 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rbx_4 == 1)
                result = (*(*var_1d0 + 8))(var_1d0, zx.q(rbx_4))
    
    uint64_t rcx_43 = var_2e8
    
    if (rcx_43 != 0)
        result = sub_140a74f90(rcx_43)
else
    int64_t var_2c8
    
    if (*(arg2 + 0x78) != 0)
        sub_1420e4140(rax_2)
        *arg5 = arg2
        *arg3 = sub_142436070(rax_2)
        uint128_t zmm0_3 = zx.o(*(arg2 + 0xc4))
        uint128_t zmm1_3 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0xc0)))
        zmm0_3 = _mm_cvtepi32_ps(zmm0_3)
        *arg4 = zmm1_3.d
        *(arg4 + 4) = zmm0_3.d
        void* rax_86 = sub_140cbe180(arg2)
        int32_t* rax_87 = j_sub_140a82f30(0x110)
        
        if (rax_87 != 0)
            if (rax_86 != 0)
                rbx = rax_86 + 0x48
            
            rbx = sub_1423fa990(rax_87, rbx, 0, rax_2, zx.d(*(rax_2 + 0x118)), 1, 0x3f800000)
        
        sub_1424131e0(*arg3, *(arg2 + 0xc0), *(arg2 + 0xc4), 0, rbx)
        sub_142424300(*arg3)
        int64_t rax_90 = j_sub_140a82f30(1)
        *(arg5 + 8) = rax_90
        var_2c8 = *(arg2 + 0x18)
        int64_t var_2c0_2 = rax_90
        char rax_91 = sub_140a80f40()
        
        if (rax_91 != 0)
            result = sub_1423c02c0(rax_86 + 0x58, &data_143f02b98)
        else if (data_143f138f4 != rax_91)
        label_1420b2bdf:
            void var_c8
            void** rax_93 = sub_1420b9f50(&var_c8, nullptr, 0xff)
            void* rcx_87 = *rax_93
            *(rcx_87 + 0x10) = var_2c8.o
            *(rcx_87 + 0x20) = rax_86
            void* rcx_88 = *rax_93
            int32_t r8_8 = rax_93[2].d
            int64_t* rdx_25 = rax_93[1]
            int64_t* rbx_6 = *(rcx_88 + 0x30)
            int64_t* var_2a8_1 = rbx_6
            int32_t* rdi_16 = &rbx_6[9]
            
            if (rbx_6 != 0)
                *rdi_16 += 1
                rbx_6 = var_2a8_1
            
            result = sub_140778000(rcx_88, rdx_25, r8_8, 1)
            
            if (rbx_6 != 0)
                int32_t rbx_7 = *rdi_16
                *rdi_16 -= 1
                
                if (rbx_7 == 1)
                    result = sub_140a2f6e0(var_2a8_1)
        else if (data_143de5480 == rax_91)
            result = sub_1423c02c0(rax_86 + 0x58, &data_143f02b98)
        else
            uint32_t rax_92
            rax_92.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_92.b == 0)
                goto label_1420b2bdf
            
            result = sub_1423c02c0(rax_86 + 0x58, &data_143f02b98)
    else
        void var_278
        sub_140b58170(&var_278, "Blueprint", 1)
        uint64_t var_2d8
        
        if (arg1 != 0)
            sub_140d21e10(arg1, &var_2d8, 0)
        else
            var_2d8 = 0
            int32_t var_2d0_1 = 0
            sub_1405947f0(&var_2d8, (arg1 + 5).d)
            int32_t rax_47 = var_2d0_1 + 5
            var_2d0_1 = rax_47
            
            if (rax_47 s> 0)
                sub_140594770(&var_2d8)
            
            UnDecorator::getReferenceType(var_2d8, u"None", 0xa)
        
        void var_e0
        int64_t* rax_48 = sub_140aae2f0(&var_e0, &var_2d8)
        void var_1a8
        char* var_180
        char** rax_50 = sub_140a96390(&var_180, 
            _vfprintf_p_l(&var_1a8, 
                BeginDrawCanvasToRenderTarget[{0}]: render target has been released.", 
            KismetRenderingLibrary"))
        int64_t rcx_52 = *rax_48
        int64_t* rcx_53 = rax_48[1]
        int32_t var_80_1 = 4
        
        if (rcx_53 != 0)
            rcx_53[1].d += 1
        
        int32_t rax_51 = rax_48[2].d
        char var_58_1 = 1
        int32_t* var_290 = nullptr
        int32_t var_288_1 = 1
        sub_1405a4b40(&var_290, 1, 0)
        int32_t* rcx_55 = var_290
        *rcx_55 = var_80_1
        int64_t var_78
        *(rcx_55 + 8) = var_78
        *(rcx_55 + 8) = var_78
        rcx_55[2] = var_78.d
        *(rcx_55 + 8) = var_78
        rcx_55[0xa].b = 0
        
        if (var_58_1 != 0)
            *(rcx_55 + 0x10) = rcx_52
            *(rcx_55 + 0x18) = rcx_53
            
            if (rcx_53 != 0)
                rcx_53[1].d += 1
            
            rcx_55[8] = rax_51
            rcx_55[0xa].b = 1
        
        char* var_248 = *rax_50
        void* rax_59 = rax_50[1]
        void* var_240_1 = rax_59
        
        if (rax_59 != 0)
            *(rax_59 + 8) += 1
        
        void var_1c0
        int64_t* rax_60 = sub_140aac870(&var_1c0, &var_248, &var_290)
        var_2c8 = *rax_60
        int64_t* rcx_58 = rax_60[1]
        
        if (rcx_58 != 0)
            rcx_58[1].d += 1
        
        int64_t var_2b8
        var_2b8.d = rax_60[2].d
        int64_t* var_1b8
        
        if (var_1b8 != 0)
            var_1b8[1].d -= 1
            
            if (var_1b8[1].d == 1)
                (**var_1b8)(var_1b8)
                int32_t rax_64 = *(var_1b8 + 0xc)
                *(var_1b8 + 0xc) -= 1
                
                if (rax_64 == 1)
                    (*(*var_1b8 + 8))(var_1b8, 1)
        
        sub_140596f50(&var_290)
        
        if (var_58_1 != 0)
            char var_58_2 = 0
            
            if (rcx_53 != 0)
                rcx_53[1].d -= 1
                
                if (rcx_53[1].d == 1)
                    (**rcx_53)(rcx_53)
                    int32_t rax_68 = *(rcx_53 + 0xc)
                    *(rcx_53 + 0xc) -= 1
                    
                    if (rax_68 == 1)
                        (*(*rcx_53 + 8))(rcx_53, 1)
        
        int64_t* rdi_11 = rax_50[1]
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t rax_72 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (rax_72 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        int64_t* rdi_12 = rax_48[1]
        
        if (rdi_12 != 0)
            rdi_12[1].d -= 1
            
            if (rdi_12[1].d == 1)
                (**rdi_12)(rdi_12)
                int32_t rax_76 = *(rdi_12 + 0xc)
                *(rdi_12 + 0xc) -= 1
                
                if (rax_76 == 1)
                    (*(*rdi_12 + 8))(rdi_12, 1)
        
        void var_218
        void var_120
        sub_140ae44d0(sub_140accdf0(&var_120, &var_278), &var_218, &var_2c8)
        int64_t* var_210
        
        if (var_210 != 0)
            var_210[1].d -= 1
            
            if (var_210[1].d == 1)
                (**var_210)(var_210)
                int32_t temp6_1 = *(var_210 + 0xc)
                *(var_210 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_210 + 8))(var_210, 1)
        
        result = sub_140acd9c0(&var_120)
        
        if (rcx_58 != 0)
            result = rcx_58[1].d
            rcx_58[1].d -= 1
            
            if (result == 1)
                (**rcx_58)(rcx_58)
                result = *(rcx_58 + 0xc)
                *(rcx_58 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rcx_58 + 8))(rcx_58, 1)
        
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            result = var_1a0[1].d
            var_1a0[1].d -= 1
            
            if (result == 1)
                result = (**var_1a0)(var_1a0)
                int32_t rbx_5 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (rbx_5 == 1)
                    result = (*(*var_1a0 + 8))(var_1a0, zx.q(rbx_5))
        
        uint64_t rcx_77 = var_2d8
        
        if (rcx_77 != 0)
            result = sub_140a74f90(rcx_77)

__security_check_cookie(rax_1 ^ &var_328)
return result
