// 函数: sub_14199d7d0
// 地址: 0x14199d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_20 = 0
int32_t i_2 = 0
int32_t rdi = 0
sub_140b1f640(arg2, u"Pooled Render Targets:")
int32_t r14 = *(arg1 + 0x18)
i_2 = 0
int16_t* var_88
int32_t var_80
int16_t* var_78
int32_t var_70
int16_t* var_68
int32_t var_60
int64_t* arg_18
int64_t zmm0_1

if (r14 s> 0)
    int64_t* rsi_1 = nullptr
    arg_18 = nullptr
    int32_t i_3
    
    do
        int64_t* rsi_2 = *(rsi_1 + *(arg1 + 0x10))
        
        if (rsi_2 != 0)
            int16_t* const r12_1
            
            if (data_143f0f1c7 == 0)
                r12_1 = &data_142d40450
            else
                rdi |= 1
                sub_140a2e390(&var_68, Frames since last discard: %d", 
                    zx.q(data_14399fa54 - rsi_2[0x1e].d))
                r12_1 = &data_142d40450
                
                if (var_60 != 0)
                    r12_1 = var_68
            
            int16_t* const r15_1
            
            if (*(rsi_2 + 0xb4) == 0)
                r15_1 = u"     "
            else
                rdi |= 2
                sub_140a2e390(&var_78, u"[%3d]", zx.q(rsi_2[0x16].d))
                r15_1 = &data_142d40450
                
                if (var_70 != 0)
                    r15_1 = var_78
            
            uint64_t r8_4 = zx.q(*(rsi_2 + 0xac))
            int16_t* const r14_1
            
            if (r8_4.d u<= 1)
                r14_1 = u"    "
                
                if (*(rsi_2 + 0xb5) != 0)
                    r14_1 = u"cube"
            else
                rdi |= 4
                sub_140a2e390(&var_88, u"x%3d", r8_4)
                r14_1 = &data_142d40450
                
                if (var_80 != 0)
                    r14_1 = var_88
            
            int32_t rbx_1 = rsi_2[0x18].d
            int32_t rax_3 = (*(*rsi_2 + 0x20))(rsi_2)
            int16_t* const rdx = &data_142d40450
            *(rsi_2 + 0xa4)
            int16_t* const var_90_1 = r12_1
            
            if ((rbx_1 u>> 0x1f).b != 0)
                rdx = u"(transient)"
            
            int16_t* const var_98_1 = rdx
            zmm0_1.d = float.s(zx.q((rax_3 + 0x3ff) u>> 0xa))
            int64_t var_a0_1 = (&data_1439c85e0)[sx.q(*(rsi_2 + 0xbc)) * 5]
            int64_t var_a8_1 = rsi_2[0x1a]
            uint32_t var_b0_1 = zx.d(*(rsi_2 + 0xb6))
            zmm0_1.d = zmm0_1.d f* 0.0009765625f
            int16_t* const var_b8_1 = r15_1
            int16_t* const var_c0_1 = r14_1
            int32_t var_c8_1 = rsi_2[0x15].d
            sub_140b1f700(arg2,   %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s) %s %s", 
                _mm_cvtps_pd(zmm0_1))
            
            if ((rdi.b & 4) != 0)
                int16_t* rcx_7 = var_88
                rdi &= 0xfffffffb
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
            
            if ((rdi.b & 2) != 0)
                int16_t* rcx_8 = var_78
                rdi &= 0xfffffffd
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
            
            if ((rdi.b & 1) != 0)
                int16_t* rcx_9 = var_68
                rdi &= 0xfffffffe
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
        
        i_3 = i_2 + 1
        r14 = *(arg1 + 0x18)
        rsi_1 = &arg_18[1]
        i_2 = i_3
        arg_18 = rsi_1
    while (i_3 s< r14)
    rbx = 0

int32_t r15_2 = 0
int32_t r12_2 = 0
int32_t i = 0

if (r14 != 0)
    do
        int64_t* rbx_3 = *(*(arg1 + 0x10) + (sx.q(i) << 3))
        
        if (rbx_3 != 0)
            uint32_t rax_14 = ((*(*rbx_3 + 0x20))(rbx_3) + 0x3ff) u>> 0xa
            r12_2 += rax_14
            
            if (rbx_3[0x1c].b != 0 || rbx_3[0x11].d != 1)
                r15_2 += rax_14
        
        i += 1
    while (i u< *(arg1 + 0x18))
    
    rbx = 0

int32_t var_c8_2 = r14
int64_t* r14_2 = arg2
zmm0_1.d = float.s(zx.q(r15_2))
int64_t zmm1
zmm1.d = float.s(zx.q(r12_2))
zmm0_1.d = zmm0_1.d f* 0.0009765625f
zmm1.d = zmm1.d f* 0.0009765625f
_mm_cvtps_pd(zmm0_1)
sub_140b1f700(r14_2, u"%.3fMB total, %.3fMB used, %d render targets", _mm_cvtps_pd(zmm1))
sub_140b1f640(r14_2, u"Deferred Render Targets:")
int32_t i_1 = 0
i_2 = 0
int64_t zmm0_2

if (*(arg1 + 0x28) s> 0)
    int64_t* rcx_14 = nullptr
    arg_18 = nullptr
    
    do
        int64_t* rsi_4 = *(rcx_14 + *(arg1 + 0x20))
        
        if (rsi_4 != 0)
            int16_t* r12_3
            
            if (data_143f0f1c7 == 0)
                r12_3 = &data_142d40450
            else
                rdi |= 8
                sub_140a2e390(&var_88, Frames since last discard: %d", 
                    zx.q(data_14399fa54 - rsi_4[0x1e].d))
                r12_3 = &data_142d40450
                
                if (var_80 != 0)
                    r12_3 = var_88
            
            int16_t* r15_3
            
            if (*(rsi_4 + 0xb4) == 0)
                r15_3 = u"     "
            else
                rdi |= 0x10
                sub_140a2e390(&var_78, u"[%3d]", zx.q(rsi_4[0x16].d))
                r15_3 = &data_142d40450
                
                if (var_70 != 0)
                    r15_3 = var_78
            
            uint64_t r8_12 = zx.q(*(rsi_4 + 0xac))
            int16_t* r14_3
            
            if (r8_12.d u<= 1)
                r14_3 = u"    "
                
                if (*(rsi_4 + 0xb5) != 0)
                    r14_3 = u"cube"
            else
                rdi |= 0x20
                sub_140a2e390(&var_68, u"x%3d", r8_12)
                r14_3 = &data_142d40450
                
                if (var_60 != 0)
                    r14_3 = var_68
            
            int32_t rbx_4 = rsi_4[0x18].d
            int32_t rax_19 = (*(*rsi_4 + 0x20))(rsi_4)
            int16_t* const rdx_1 = &data_142d40450
            *(rsi_4 + 0xa4)
            int16_t* var_90_2 = r12_3
            
            if ((rbx_4 u>> 0x1f).b != 0)
                rdx_1 = u"(transient)"
            
            int16_t* const var_98_2 = rdx_1
            zmm0_2.d = float.s(zx.q((rax_19 + 0x3ff) u>> 0xa))
            int64_t var_a0_2 = (&data_1439c85e0)[sx.q(*(rsi_4 + 0xbc)) * 5]
            int64_t var_a8_2 = rsi_4[0x1a]
            uint32_t var_b0_2 = zx.d(*(rsi_4 + 0xb6))
            zmm0_2.d = zmm0_2.d f* 0.0009765625f
            int16_t* var_b8_2 = r15_3
            int16_t* var_c0_2 = r14_3
            r14_2 = arg2
            int32_t var_c8_3 = rsi_4[0x15].d
            sub_140b1f700(r14_2,   %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s) %s %s", 
                _mm_cvtps_pd(zmm0_2))
            
            if ((rdi.b & 0x20) != 0)
                int16_t* rcx_21 = var_68
                rdi &= 0xffffffdf
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
            
            if ((rdi.b & 0x10) != 0)
                int16_t* rcx_22 = var_78
                rdi &= 0xffffffef
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
            
            if ((rdi.b & 8) != 0)
                int16_t* rcx_23 = var_88
                rdi &= 0xfffffff7
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
            
            rcx_14 = arg_18
            i_1 = i_2
            rbx = arg_20 + (((*(*rsi_4 + 0x20))(rsi_4) + 0x3ff) u>> 0xa)
            arg_20 = rbx
        
        i_1 += 1
        rcx_14 = &rcx_14[1]
        i_2 = i_1
        arg_18 = rcx_14
    while (i_1 s< *(arg1 + 0x28))

zmm0_2.d = float.s(zx.q(rbx))
zmm0_2.d = zmm0_2.d f* 0.0009765625f
return sub_140b1f700(r14_2, u"%.3fMB Deferred total", _mm_cvtps_pd(zmm0_2)) __tailcall
