// 函数: sub_1414d3300
// 地址: 0x1414d3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t result = __security_cookie ^ &var_348
int64_t result_1 = result

if (data_1439b70a0 != 0 && data_1439c7a15 != 0 && *(arg3 + 0x13e8) != 0)
    int64_t* rax_1 = sub_14139bef0(arg2)
    int32_t rcx_1 = data_1439b70ac
    int32_t rax_2
    
    if (rcx_1 s>= 4)
        rax_2 = 0x800
        
        if (rcx_1 s< 0x800)
            rax_2 = rcx_1
    else
        rax_2 = 4
    
    int32_t var_314_1 = rax_2
    int32_t var_30c_1 = rax_2
    int64_t rax_3 = sx.q(*(arg1 + 0x3b0))
    int64_t var_320 = 0
    int32_t var_318_1 = 0
    int64_t* rax_4 = std::_Get_future_error_what((*U"1111")[rax_3])
    int64_t* rdi_1 = rax_4
    int64_t var_1f0_1 = data_14395da18
    void* rcx_3 = &rax_1[0x29]
    void* r14_1 = arg2 + 0x30
    int64_t var_1e8_1 = data_14395d9e8
    int64_t rdx_1 = sx.q(arg4) * 0x18
    int64_t var_1f8_1 = data_1439b54a0
    int128_t var_228
    __builtin_memset(&var_228, 0, 0x30)
    int64_t var_1cc
    __builtin_memset(&var_1cc, 0, 0x43)
    int128_t var_1e0_1 = zx.o(0)
    int16_t var_188_1 = 0
    void* var_2a8_1 = rcx_3
    int64_t var_2f8_1 = rdx_1
    int64_t i_1 = 2
    int64_t i
    
    do
        void* rax_8 = *(rcx_3 + 0x18)
        int128_t zmm1 = data_142d3f5a0
        
        if (rax_8 != 0)
            rcx_3 = rax_8
        
        void* rax_9 = *(rcx_3 + rdx_1)
        void* rax_10 = *(rax_9 + 8)
        int32_t var_a0_1 = 0
        int32_t var_9c
        __builtin_memset(&var_9c, 0xff, 0x14)
        int128_t var_88_1 = zmm1
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x1a)
        void* var_178 = rax_10
        int64_t var_170_1 = 0
        int32_t var_168_1 = 0xffffffff
        int16_t var_164_1 = 0x500
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x11)
        int32_t var_a4_1 = 0
        int16_t var_60_1
        var_60_1:1.b = *(rax_10 + 0x38) u> 1
        void var_160
        memset(&var_160, 0, 0xa8)
        sub_1410e0180(arg2, &var_178)
        int64_t rbx_4 = (*r14_1 + 1) & 0xfffffffffffffffe
        int64_t rax_11 = rbx_4 + 0x5c
        
        if (rax_11 u> *(r14_1 + 8))
            sub_140b0e3d0(r14_1, 0x5e)
            rbx_4 = (*r14_1 + 1) & 0xfffffffffffffffe
            rax_11 = rbx_4 + 0x5c
        
        *r14_1 = rax_11
        wchar16 const* const rcx_7 = u"InjectAmbientCubemapTranslucentVolumeLighting"
        wchar16 const j
        
        do
            j = *rcx_7
            *(rcx_7 + rbx_4 - u"InjectAmbientCubemapTranslucentVolumeLighting") = j
            rcx_7 = &rcx_7[1]
        while (j != 0)
        void*** rcx_10 = (*r14_1 + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_10[0x27]
        
        if (rax_12 u> *(r14_1 + 8))
            sub_140b0e3d0(r14_1, 0x140)
            rcx_10 = (*r14_1 + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_10[0x27]
        
        *r14_1 = rax_12
        void**** rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        sub_1405d11b0(rcx_10, &var_178, rbx_4)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_178)
        int64_t var_68
        *(arg2 + 0x178) = var_68:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        sub_140fdc870(arg2, &var_228)
        void* var_278
        sub_1419a2ec0(rdi_1, &var_278, &data_143f5e630, 0)
        void var_238
        int128_t* rax_16 = sub_1419a2ec0(rdi_1, &var_238, &data_143f5e530, 0)
        void* r13_1 = *rax_16
        void* r12_1 = *(rax_16 + 8)
        void* var_268
        sub_1419a2ec0(rdi_1, &var_268, &data_143ee8860, 0)
        void* rcx_19 = var_278
        void* rdi_2 = var_268
        var_228.q = data_143a2fe60
        int64_t rax_18 = 0
        
        if (rcx_19 != 0)
            int64_t rdx_11 = sx.q(*(rcx_19 + 0x10c))
            void* var_270
            int64_t* rbx_7 = *(var_270 + 0x10)
            int64_t* rax_20 = rbx_7[3]
            
            if (rax_20[rdx_11] == 0)
                sub_1419ccf30(rbx_7, rdx_11.d)
                rax_20 = rbx_7[3]
            
            rax_18 = rax_20[rdx_11]
        
        var_228:8.q = rax_18
        int64_t rax_21 = 0
        
        if (r13_1 != 0)
            int64_t* rbx_8 = *(r12_1 + 0x10)
            int64_t rdx_12 = sx.q(*(r13_1 + 0x10c))
            int64_t* rax_22 = rbx_8[3]
            
            if (rax_22[rdx_12] == 0)
                sub_1419ccf30(rbx_8, rdx_12.d)
                rax_22 = rbx_8[3]
            
            rax_21 = rax_22[rdx_12]
        
        int128_t var_208_1
        var_208_1:8.q = rax_21
        int64_t rax_23 = 0
        
        if (rdi_2 != 0)
            int64_t rdx_13 = sx.q(*(rdi_2 + 0x10c))
            void* var_260
            int64_t* rbx_9 = *(var_260 + 0x10)
            int64_t* rax_25 = rbx_9[3]
            
            if (rax_25[rdx_13] == 0)
                sub_1419ccf30(rbx_9, rdx_13.d)
                rax_25 = rbx_9[3]
            
            rax_23 = rax_25[rdx_13]
        
        var_208_1.q = rax_23
        int32_t var_1d0_1 = 1
        sub_1419870b0(arg2, &var_228, 2)
        void* rcx_24 = var_278
        int32_t var_294_1 = rax_2
        int64_t var_288 = rax_2.q
        int32_t var_280_1 = rax_2
        sub_1412f1e20(rcx_24, arg2, &var_320, &var_288)
        
        if (r13_1 != 0)
            sub_14137f4a0(r13_1, arg2, var_318_1)
        
        void* rdx_17 = arg3
        int32_t r15_3 = 0
        int32_t r12_2 = *(rdx_17 + 0x13e8)
        
        if (r12_2 != 0)
            void* rcx_26 = rdi_2
            void* r13_2 = rdx_17 + 0x1320
            int16_t* rax_27 = rcx_26 + 0x118
            
            do
                int64_t rdi_4 = *(arg2 + 0x1a0)
                void* rbx_10 = *(r13_2 + 0xc0)
                sub_141080ac0(rcx_26, arg2, rdi_4, *(rdx_17 + 0x10))
                void* rdx_19 = r13_2
                
                if (rbx_10 != 0)
                    rdx_19 = rbx_10
                
                j_sub_141082830(rax_27, arg2, rdi_4, rdx_19 + sx.q(r15_3) * 0x18)
                int128_t var_258 = var_320.o
                int64_t var_248_1 = rax_2.q
                sub_14243f510(arg2, &var_258)
                rcx_26 = rdi_2
                r15_3 += 1
                rdx_17 = arg3
            while (r15_3 u< r12_2)
            
            r14_1 = arg2 + 0x30
        
        void*** rcx_32 = (*r14_1 + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_32[2]
        
        if (rax_29 u> *(r14_1 + 8))
            sub_140b0e3d0(r14_1, 0x18)
            rcx_32 = (*r14_1 + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_32[2]
        
        *r14_1 = rax_29
        *(arg2 + 0x14) += 1
        int128_t zmm1_1 = data_142d3f800
        int128_t var_2e8_1 = data_142d57d10
        **(arg2 + 8) = rcx_32
        int128_t zmm0_2 = data_142d57920
        *(arg2 + 8) = &rcx_32[1]
        rcx_32[1] = 0
        *rcx_32 = &data_142d549b8
        *(arg2 + 0x1c4) = 0
        *(arg2 + 0x178) = 0
        int64_t r15_4 = *(rax_9 + 0x10)
        int64_t* rdi_6 = *(rax_9 + 8)
        void*** rbx_13 = (*r14_1 + 7) & 0xfffffffffffffff8
        int128_t var_2d8_1 = zmm1_1
        void* rax_32 = &rbx_13[0xa]
        
        if (rax_32 u> *(r14_1 + 8))
            sub_140b0e3d0(r14_1, 0x58)
            rbx_13 = (*r14_1 + 7) & 0xfffffffffffffff8
            rax_32 = &rbx_13[0xa]
        
        *r14_1 = rax_32
        int64_t* rax_33 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_33 = rbx_13
        *(arg2 + 8) = &rbx_13[1]
        rbx_13[1] = 0
        *rbx_13 = &data_142d56628
        rbx_13[2].d = var_2e8_1.d
        __builtin_memset(rbx_13 + 0x14, 0xff, 0x20)
        *(rbx_13 + 0x34) = zmm0_2:4.d
        rbx_13[7].d = zmm0_2:8.d
        *(rbx_13 + 0x3c) = zmm0_2:0xc.d
        rbx_13[8] = rdi_6
        rbx_13[9] = r15_4
        
        if ((*(*rdi_6 + 8))(rdi_6) == 0)
            int64_t* rcx_38 = rbx_13[8]
            
            if ((*(*rcx_38 + 0x18))(rcx_38) == 0)
                int64_t* rcx_39 = rbx_13[8]
                
                if ((*(*rcx_39 + 0x20))(rcx_39) == 0)
                    int64_t* rcx_40 = rbx_13[8]
                    (*(*rcx_40 + 0x10))(rcx_40)
        
        int64_t* rcx_41 = rbx_13[9]
        
        if ((*(*rcx_41 + 8))(rcx_41) == 0)
            int64_t* rcx_42 = rbx_13[9]
            
            if ((*(*rcx_42 + 0x18))(rcx_42) == 0)
                int64_t* rcx_43 = rbx_13[9]
                
                if ((*(*rcx_43 + 0x20))(rcx_43) == 0)
                    int64_t* rcx_44 = rbx_13[9]
                    (*(*rcx_44 + 0x10))(rcx_44)
        
        int64_t var_70
        result = sub_1405d1550(&var_70)
        rcx_3 = var_2a8_1
        rdx_1 = var_2f8_1 + 8
        i = i_1
        i_1 -= 1
        rdi_1 = rax_4
        var_2f8_1 = rdx_1
    while (i != 1)

__security_check_cookie(result_1 ^ &var_348)
return result
