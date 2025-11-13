// 函数: sub_142003d30
// 地址: 0x142003d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
*arg3 = 0
uint32_t rcx = zx.d(*(arg1 + 0x30))

if (rcx == 0)
    int16_t arg_18 = arg2
    int16_t arg_8
    UnDecorator::getReferenceType(&arg_8, &arg_18, 2)
    int64_t* rax
    
    if (*(arg1 + 0x58) == 0)
        uint32_t rdx_9 = zx.d(arg_8)
        
        if (rdx_9 s>= *(arg1 + 0x120) || rdx_9 s>= *(arg1 + 0x40))
            rax = 0x7f
        else if (*(*(arg1 + 0x38) + zx.q(rdx_9.w) * 0x18 + 0xc) != 0 || rdx_9.w u< 0x20)
            rax = zx.q(arg2)
        else
            rax = 0x7f
    else
        void* const rcx_14
        
        if (*(arg1 + 0x188) == *(arg1 + 0x1b4))
        label_142003f31:
            rcx_14 = nullptr
        else
            void* r8_2 = arg1 + 0x1b8
            void* rcx_12 = *(r8_2 + 8)
            uint64_t r9_2 = zx.q(arg_8)
            
            if (rcx_12 != 0)
                r8_2 = rcx_12
            
            int32_t rax_9 = *(r8_2 + (((sx.q(*(arg1 + 0x1c8)) - 1) & r9_2) << 2))
            
            if (rax_9 == 0xffffffff)
            label_142003f31_1:
                rcx_14 = nullptr
            else
                int64_t r8_3 = *(arg1 + 0x180)
                
                while (true)
                    int64_t rdx_8 = sx.q(rax_9) * 3
                    rcx_14 = r8_3 + (rdx_8 << 2)
                    
                    if (*(r8_3 + (rdx_8 << 2)) == r9_2.w)
                        break
                    
                    rax_9 = *(rcx_14 + 4)
                    
                    if (rax_9 == 0xffffffff)
                        goto label_142003f31_2
                
                if (rax_9 == 0xffffffff)
                label_142003f31_2:
                    rcx_14 = nullptr
        
        int16_t* rax_10 = rcx_14 + 2
        
        if (rcx_14 == 0)
            rax_10 = nullptr
        
        if (rax_10 == 0)
            rax = 0x7f
        else
            rax = zx.q(*rax_10)
    
    uint64_t r8_4 = zx.q(rax.w)
    
    if (r8_4.d s< *(arg1 + 0x40))
        int64_t r10_1 = *(arg1 + 0x38)
        uint64_t r9_3 = r8_4 * 3
        rax = zx.q(*(r10_1 + (r9_3 << 3) + 0x10))
        
        if (rax.d s< *(arg1 + 0x50) && *(*(arg1 + 0x48) + (rax << 3)) != 0)
            *arg3 = _mm_cvtepi32_ps(zx.o(*(r10_1 + (r9_3 << 3) + 8))).d
            *(arg1 + 0x120)
            *arg4 = _mm_cvtepi32_ps(zx.o(
                *(*(arg1 + 0x128) + (sx.q(divs.dp.d(sx.q(r8_4.d), *(arg1 + 0x120))) << 2)))).d
else if (rcx == 1)
    void* var_c8
    sub_142411870(sub_14240f390(), &var_c8)
    
    if (var_c8 != 0)
        int128_t zmm0 = data_14399f5e0
        int32_t r8 = *(arg1 + 0x13c)
        int32_t var_b8 = 0
        int16_t var_b4_1 = 0
        int64_t var_b0_1 = 0
        int128_t var_a8_1 = zmm0
        void var_98
        sub_140d93a40(&var_98, arg1, r8, arg1 + 0x140, &var_b8)
        int64_t* rax_2 = sub_140da4220(var_c8, &var_98, 0x3f800000, &data_143e20dd8)
        char var_4c
        void var_48
        sub_140da3dd0(rax_2, &var_48, arg2, var_4c)
        int16_t var_22
        *arg3 = _mm_cvtepi32_ps(zx.o(sx.d(var_22))).d
        *arg4 = _mm_cvtepi32_ps(zx.o(sub_140da8a70(rax_2))).d
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp5_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
    
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t temp4_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
