// 函数: sub_141231620
// 地址: 0x141231620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t rbx
rbx.b = 0
int64_t* var_1b8
sub_1407453e0(&var_1b8, *(arg1 + 8) + 0xee8)
void* result_1
void* result = result_1
int32_t i_4
int32_t i = i_4

if (i s< *(result + 0x18))
    int32_t var_1b0
    int32_t var_1ac
    int32_t var_1a0
    
    do
        void* r8 = *(*var_1b8 + sx.q(i) * 0x30 + 0x20)
        void* rcx_3 = sx.q(*(r8 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
        int64_t rax_4
        
        if (*(rcx_3 + 0x28) s> 0 || *(rcx_3 + 0x38) s> 0 || *(*(r8 + 0x20) + 0x128) != 0)
            rax_4.b = 1
        else
            rax_4.b = 0
        
        rbx.b |= rax_4.b
        var_1a0 &= not.d(var_1ac)
        sub_14059bdd0(&var_1b0)
        result = result_1
        i = i_4
    while (i s< *(result + 0x18))
    
    if (rbx.b != 0)
        sub_140b33630("RenderForwardShadingShadowProjections")
        sub_1413934a0(&data_143ec4c60, arg2, arg3)
        
        if (arg5 != 0)
            sub_1413934a0(&data_143ec4c60, arg2, arg4)
        
        int128_t zmm1_1 = data_142d3f5a0
        int64_t rcx_6 = *(*arg3 + 8)
        int64_t var_178 = rcx_6
        int32_t var_a0_1 = 0
        int32_t var_9c
        __builtin_memset(&var_9c, 0xff, 0x14)
        int128_t var_88_1 = zmm1_1
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x1a)
        int64_t var_170_1 = 0
        int32_t var_168_1 = 0xffffffff
        int16_t var_164_1 = 0x900
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x11)
        int32_t var_a4_1 = 0
        int16_t var_60
        var_60:1.b = *(rcx_6 + 0x38) u> 1
        void var_160
        memset(&var_160, 0, 0xa8)
        sub_1410e0180(arg2, &var_178)
        int64_t* r15_1 = arg2 + 0x30
        int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_8 = rbx_3 + 0x56
        
        if (rax_8 u> r15_1[1])
            sub_140b0e3d0(r15_1, 0x58)
            rbx_3 = (*r15_1 + 1) & 0xfffffffffffffffe
            rax_8 = rbx_3 + 0x56
        
        wchar16 const* const rcx_10 = u"RenderForwardShadingShadowProjectionsClear"
        *r15_1 = rax_8
        wchar16 const i_1
        
        do
            i_1 = *rcx_10
            *(rcx_10 + rbx_3 - u"RenderForwardShadingShadowProjectionsClear") = i_1
            rcx_10 = &rcx_10[1]
        while (i_1 != 0)
        void*** rcx_13 = (*r15_1 + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_13[0x27]
        
        if (rax_9 u> r15_1[1])
            sub_140b0e3d0(r15_1, 0x140)
            rcx_13 = (*r15_1 + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_13[0x27]
        
        *r15_1 = rax_9
        void**** rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        sub_1405d11b0(rcx_13, &var_178, rbx_3)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_178)
        int64_t var_68
        *(arg2 + 0x178) = var_68:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        sub_141096650(arg2)
        int64_t var_70
        sub_1405d1550(&var_70)
        
        if (arg5 != 0)
            int128_t zmm1_2 = data_142d3f5a0
            int64_t rcx_20 = *(*arg4 + 8)
            var_178 = rcx_20
            int32_t var_a0_2 = 0
            int32_t var_9c_1
            __builtin_memset(&var_9c_1, 0xff, 0x14)
            int128_t var_88_2 = zmm1_2
            int64_t var_78_1
            __builtin_memset(&var_78_1, 0, 0x1a)
            int64_t var_170_2 = 0
            int32_t var_168_2 = 0xffffffff
            int16_t var_164_2 = 0x900
            int64_t var_b8_1
            __builtin_memset(&var_b8_1, 0, 0x11)
            int32_t var_a4_2 = 0
            int16_t var_60_1
            var_60_1:1.b = *(rcx_20 + 0x38) u> 1
            memset(&var_160, 0, 0xa8)
            sub_1410e0180(arg2, &var_178)
            int64_t rbx_8 = (*r15_1 + 1) & 0xfffffffffffffffe
            int64_t rax_14 = rbx_8 + 0x66
            
            if (rax_14 u> r15_1[1])
                sub_140b0e3d0(r15_1, 0x68)
                rbx_8 = (*r15_1 + 1) & 0xfffffffffffffffe
                rax_14 = rbx_8 + 0x66
            
            wchar16 const* const rcx_24 = u"RenderForwardShadingShadowSubPixelProjectionsClear"
            *r15_1 = rax_14
            wchar16 const i_2
            
            do
                i_2 = *rcx_24
                *(rcx_24 + rbx_8 - u"RenderForwardShadingShadowSubPixelProjectionsClear") = i_2
                rcx_24 = &rcx_24[1]
            while (i_2 != 0)
            void*** rcx_27 = (*r15_1 + 7) & 0xfffffffffffffff8
            void* rax_15 = &rcx_27[0x27]
            
            if (rax_15 u> r15_1[1])
                sub_140b0e3d0(r15_1, 0x140)
                rcx_27 = (*r15_1 + 7) & 0xfffffffffffffff8
                rax_15 = &rcx_27[0x27]
            
            *r15_1 = rax_15
            void**** rax_16 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_16 = rcx_27
            *(arg2 + 8) = &rcx_27[1]
            sub_1405d11b0(rcx_27, &var_178, rbx_8)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_178)
            int64_t var_68_1
            *(arg2 + 0x178) = var_68_1:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            sub_141096650(arg2)
            sub_1405d1550(&var_70)
        
        sub_1407453e0(&var_1b8, *(arg1 + 8) + 0xee8)
        int32_t i_3 = i_4
        
        if (i_3 s< *(result_1 + 0x18))
            do
                void* rbx_11 = *(*var_1b8 + sx.q(i_3) * 0x30 + 0x20)
                void* r14_2 = sx.q(*(rbx_11 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
                
                if (*(r14_2 + 0x28) s> 0)
                    char var_1c0 = arg5.b
                    char var_1c8_1 = 0
                    sub_1414998e0(arg1, arg2, rbx_11, *arg3, *arg4, 1)
                    
                    if (arg5 != 0)
                        sub_1411e9c30(arg2, arg1 + 0xa0, rbx_11, arg5, *arg3)
                
                sub_1410afa70(arg1, arg2, rbx_11, *arg3, r14_2 + 0x30, 1)
                void* rax_26 = *(rbx_11 + 0x20)
                char rdx_23 = *(rax_26 + 0x138) & 8
                int32_t rcx_39
                
                if (rdx_23 == 0)
                    rcx_39 = *(rbx_11 + 0x60)
                else
                    rcx_39 = *(rax_26 + 0xfc)
                
                if (rcx_39 s>= 0)
                    int32_t rcx_40
                    
                    if (rdx_23 == 0)
                        rcx_40 = *(rbx_11 + 0x60)
                    else
                        rcx_40 = *(rax_26 + 0xfc)
                    
                    if (rcx_40 s< 4 && (*(arg1 + 0x38) & 0x10000000) != 0)
                        sub_141233420(arg1, arg2, rbx_11, *arg3, *(rax_26 + 0x128), 1, 1, 0)
                
                var_1a0 &= not.d(var_1ac)
                sub_14059bdd0(&var_1b0)
                i_3 = i_4
            while (i_3 s< *(result_1 + 0x18))
            
            r15_1 = arg2 + 0x30
        
        void* rax_31 = *arg3
        var_1b8.o = data_142d57d10
        void*** rbx_14 = (*r15_1 + 7) & 0xfffffffffffffff8
        int128_t zmm0_1 = data_142d57920
        result_1.o = data_142d3f800
        int64_t r14_3 = *(rax_31 + 0x10)
        int64_t* rdi_1 = *(rax_31 + 8)
        void* rax_32 = &rbx_14[0xa]
        
        if (rax_32 u> r15_1[1])
            sub_140b0e3d0(r15_1, 0x58)
            rbx_14 = (*r15_1 + 7) & 0xfffffffffffffff8
            rax_32 = &rbx_14[0xa]
        
        *r15_1 = rax_32
        int64_t* rax_33 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_33 = rbx_14
        *(arg2 + 8) = &rbx_14[1]
        rbx_14[1] = 0
        *rbx_14 = &data_142d56628
        rbx_14[2].d = var_1b8.d
        *(rbx_14 + 0x14) = var_1b8:4.d
        rbx_14[3].d = var_1b0
        *(rbx_14 + 0x1c) = var_1ac
        rbx_14[4].d = result_1.d
        *(rbx_14 + 0x24) = result_1:4.d
        rbx_14[5].d = var_1a0
        *(rbx_14 + 0x2c) = i_4
        rbx_14[6].d = zmm0_1.d
        *(rbx_14 + 0x34) = zmm0_1:4.d
        rbx_14[7].d = zmm0_1:8.d
        *(rbx_14 + 0x3c) = zmm0_1:0xc.d
        rbx_14[8] = rdi_1
        rbx_14[9] = r14_3
        
        if ((*(*rdi_1 + 8))(rdi_1) == 0)
            int64_t* rcx_45 = rbx_14[8]
            
            if ((*(*rcx_45 + 0x18))(rcx_45) == 0)
                int64_t* rcx_46 = rbx_14[8]
                
                if ((*(*rcx_46 + 0x20))(rcx_46) == 0)
                    int64_t* rcx_47 = rbx_14[8]
                    (*(*rcx_47 + 0x10))(rcx_47)
        
        int64_t* rcx_48 = rbx_14[9]
        
        if ((*(*rcx_48 + 8))(rcx_48) == 0)
            int64_t* rcx_49 = rbx_14[9]
            
            if ((*(*rcx_49 + 0x18))(rcx_49) == 0)
                int64_t* rcx_50 = rbx_14[9]
                
                if ((*(*rcx_50 + 0x20))(rcx_50) == 0)
                    int64_t* rcx_51 = rbx_14[9]
                    (*(*rcx_51 + 0x10))(rcx_51)
        
        if (arg5 != 0)
            var_1b8.o = data_142d57d10
            void* rax_62 = *arg4
            void*** rbx_19 = (*r15_1 + 7) & 0xfffffffffffffff8
            zmm0_1 = data_142d57920
            result_1.o = data_142d3f800
            int64_t r14_4 = *(rax_62 + 0x10)
            int64_t* rdi_2 = *(rax_62 + 8)
            void* rax_63 = &rbx_19[0xa]
            
            if (rax_63 u> r15_1[1])
                sub_140b0e3d0(r15_1, 0x58)
                rbx_19 = (*r15_1 + 7) & 0xfffffffffffffff8
                rax_63 = &rbx_19[0xa]
            
            *r15_1 = rax_63
            int64_t* rax_64 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_64 = rbx_19
            *(arg2 + 8) = &rbx_19[1]
            rbx_19[1] = 0
            *rbx_19 = &data_142d56628
            rbx_19[2].d = var_1b8.d
            *(rbx_19 + 0x14) = var_1b8:4.d
            rbx_19[3].d = var_1b0
            *(rbx_19 + 0x1c) = var_1ac
            rbx_19[4].d = result_1.d
            *(rbx_19 + 0x24) = result_1:4.d
            rbx_19[5].d = var_1a0
            *(rbx_19 + 0x2c) = i_4
            rbx_19[6].d = zmm0_1.d
            *(rbx_19 + 0x34) = zmm0_1:4.d
            rbx_19[7].d = zmm0_1:8.d
            *(rbx_19 + 0x3c) = zmm0_1:0xc.d
            rbx_19[8] = rdi_2
            rbx_19[9] = r14_4
            
            if ((*(*rdi_2 + 8))(rdi_2) == 0)
                int64_t* rcx_54 = rbx_19[8]
                
                if ((*(*rcx_54 + 0x18))(rcx_54) == 0)
                    int64_t* rcx_55 = rbx_19[8]
                    
                    if ((*(*rcx_55 + 0x20))(rcx_55) == 0)
                        int64_t* rcx_56 = rbx_19[8]
                        (*(*rcx_56 + 0x10))(rcx_56)
            
            int64_t* rcx_57 = rbx_19[9]
            
            if ((*(*rcx_57 + 8))(rcx_57) == 0)
                int64_t* rcx_58 = rbx_19[9]
                
                if ((*(*rcx_58 + 0x18))(rcx_58) == 0)
                    int64_t* rcx_59 = rbx_19[9]
                    
                    if ((*(*rcx_59 + 0x20))(rcx_59) == 0)
                        int64_t* rcx_60 = rbx_19[9]
                        (*(*rcx_60 + 0x10))(rcx_60)
        
        result = sub_140b37f60("RenderForwardShadingShadowProjections")

__security_check_cookie(rax_1 ^ &var_1f8)
return result
