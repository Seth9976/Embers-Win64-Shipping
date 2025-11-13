// 函数: sub_1426fd140
// 地址: 0x1426fd140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60
int64_t* rax = sub_142702210(arg1, &var_60)
int64_t r14 = sx.q(arg2[1].d)
int32_t r9 = (r14 + 1).d
arg2[1].d = r9

if (r9 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_3 = (r14 << 4) + *arg2
*rcx_3 = 0
*rcx_3 = *rax
*rax = 0
rcx_3[1].d = rax[1].d
*(rcx_3 + 0xc) = *(rax + 0xc)
rax[1] = 0
int64_t rcx_4 = var_60

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rsi_1 = sx.q(arg3[1].d)
int32_t rax_4 = (rsi_1 + 1).d
arg3[1].d = rax_4

if (rax_4 s> *(arg3 + 0xc))
    sub_1405a4cf0(arg3)

int64_t result = *arg3
*(result + (rsi_1 << 2)) = 0

if (*(arg1 + 0x1b8) == 3)
    void* rsi_2 = *(arg1 + 0x100)
    int64_t* r12_1 = *arg2
    
    if (rsi_2 == 0)
        sub_140a20ba0(r12_1, u" (invalid path)", 0xf)
    else
        char rax_5 = (*(rsi_2 + 0x98)).b
        int32_t r13_1
        
        if ((rax_5 & 2) != 0)
            r13_1 = *(rsi_2 + 0x30)
        
        if ((rax_5 & 2) == 0 || r13_1 s<= 1 || (rax_5 & 1) == 0)
            r13_1 = -1
        
        char rax_7
        int32_t* rcx_6
        
        if (*(rsi_2 + 0x70) != data_143f71450.d)
            rcx_6 = *(rsi_2 + 0x78)
            
            if (rcx_6 != 0)
                rax_7 = sub_14268a5a0(rcx_6, &data_143f71450)
        
        if (*(rsi_2 + 0x70) == data_143f71450.d || (rcx_6 != 0 && rax_7 != 0))
            r14.b = 1
        else
            r14.b = 0
        
        char rax_8 = sub_140d3e110(arg1 + 0xf0)
        void* const rcx_8 = nullptr
        
        if (r14.b != 0)
            rcx_8 = rsi_2
        
        if (rcx_8 != 0)
            sub_140a20ba0(r12_1, u" (direct)", 9)
        else
            *(arg1 + 0x1e4)
            int16_t* const rcx_9 = &data_142d40450
            
            if (rax_8 != 0)
                rcx_9 = u" (custom NavLink)"
            
            int16_t* const var_80_1 = rcx_9
            int64_t var_88
            var_88.d = r13_1
            sub_140a2e390(&var_60, u" (%d..%d/%d)%s", zx.q(*(arg1 + 0x1e0) + 1))
            int32_t var_58
            int32_t r8_3
            
            if (var_58 == 0)
                r8_3 = 0
            else
                r8_3 = var_58 - 1
            
            sub_140a20ba0(r12_1, var_60, r8_3)
            int64_t rcx_12 = var_60
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
    
    float arg_18 = 0f
    float arg_20 = 0f
    uint32_t var_68 = 0
    bool arg_10 = false
    bool arg_8 = false
    sub_1426f70f0(arg1, &arg_18, &arg_20, &var_68, &arg_8, &arg_10, &arg_8)
    var_60 = 0
    int64_t var_58_1 = 0
    sub_1405947f0(&var_60, 4)
    int32_t r15_1 = var_58_1:4.d
    int32_t r14_1 = var_58_1.d + 4
    var_58_1.d = r14_1
    
    if (r14_1 s> r15_1)
        sub_140594770(&var_60)
        r15_1 = var_58_1:4.d
        r14_1 = var_58_1.d
    
    int64_t r12_2 = var_60
    UnDecorator::getReferenceType(r12_2, &data_14347e1c0, 8)
    int64_t rsi_3 = sx.q(arg2[1].d)
    int32_t rax_9 = (rsi_3 + 1).d
    arg2[1].d = rax_9
    
    if (rax_9 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rax_12 = (rsi_3 << 4) + *arg2
    *rax_12 = r12_2
    rax_12[1].d = r14_1
    *(rax_12 + 0xc) = r15_1
    int64_t rsi_4 = sx.q(arg3[1].d)
    int32_t rax_13 = (rsi_4 + 1).d
    arg3[1].d = rax_13
    
    if (rax_13 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int64_t rax_14 = *arg3
    float zmm2_1[0x2] = _mm_cvtps_pd(arg_18)
    *(rax_14 + (rsi_4 << 2)) = 1
    sub_140a2e390(&var_60, u"%.2f", zmm2_1)
    int64_t rsi_5 = sx.q(arg2[1].d)
    int32_t rax_15 = (rsi_5 + 1).d
    arg2[1].d = rax_15
    
    if (rax_15 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rcx_25 = (rsi_5 << 4) + *arg2
    *rcx_25 = 0
    *rcx_25 = var_60
    var_60 = 0
    rcx_25[1].d = var_58_1.d
    *(rcx_25 + 0xc) = var_58_1:4.d
    int64_t rcx_26 = var_60
    int64_t var_58_2 = 0
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t rsi_6 = sx.q(arg3[1].d)
    int32_t rax_19 = (rsi_6 + 1).d
    arg3[1].d = rax_19
    
    if (rax_19 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int64_t rax_20 = *arg3
    var_60 = 0
    int64_t var_58_3 = 0
    *(rax_20 + (rsi_6 << 2)) = 3
    sub_1405947f0(&var_60, 7)
    int32_t r15_2 = var_58_3:4.d
    int32_t rsi_7 = var_58_3.d + 7
    var_58_3.d = rsi_7
    
    if (rsi_7 s> r15_2)
        sub_140594770(&var_60)
        r15_2 = var_58_3:4.d
        rsi_7 = var_58_3.d
    
    int64_t r12_3 = var_60
    UnDecorator::getReferenceType(r12_3, u"dist2D", 0xe)
    int64_t r14_2 = sx.q(arg2[1].d)
    int32_t rax_21 = (r14_2 + 1).d
    arg2[1].d = rax_21
    
    if (rax_21 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rax_24 = (r14_2 << 4) + *arg2
    *rax_24 = r12_3
    rax_24[1].d = rsi_7
    *(rax_24 + 0xc) = r15_2
    int64_t rsi_8 = sx.q(arg3[1].d)
    int32_t rax_25 = (rsi_8 + 1).d
    arg3[1].d = rax_25
    
    if (rax_25 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int64_t rax_26 = *arg3
    zmm2_1 = _mm_cvtps_pd(arg_20)
    *(rax_26 + (rsi_8 << 2)) = 1
    sub_140a2e390(&var_60, u"%.0f", zmm2_1)
    int64_t rsi_9 = sx.q(arg2[1].d)
    int32_t rax_27 = (rsi_9 + 1).d
    arg2[1].d = rax_27
    
    if (rax_27 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rcx_37 = (rsi_9 << 4) + *arg2
    *rcx_37 = 0
    *rcx_37 = var_60
    var_60 = 0
    rcx_37[1].d = var_58_3.d
    *(rcx_37 + 0xc) = var_58_3:4.d
    int64_t rcx_38 = var_60
    int64_t var_58_4 = 0
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    int64_t rsi_10 = sx.q(arg3[1].d)
    int32_t r14_4 = sbb.d(r14_2.d, r14_2.d, arg_10 != 0) + 3
    int32_t rax_32 = (rsi_10 + 1).d
    arg3[1].d = rax_32
    
    if (rax_32 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int64_t rax_33 = *arg3
    var_60 = 0
    int64_t var_58_5 = 0
    *(rax_33 + (rsi_10 << 2)) = r14_4
    sub_1405947f0(&var_60, 6)
    int32_t r15_3 = var_58_5:4.d
    int32_t rsi_11 = var_58_5.d + 6
    var_58_5.d = rsi_11
    
    if (rsi_11 s> r15_3)
        sub_140594770(&var_60)
        r15_3 = var_58_5:4.d
        rsi_11 = var_58_5.d
    
    int64_t r12_4 = var_60
    UnDecorator::getReferenceType(r12_4, u"distZ", 0xc)
    int64_t r14_5 = sx.q(arg2[1].d)
    int32_t rax_34 = (r14_5 + 1).d
    arg2[1].d = rax_34
    
    if (rax_34 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rax_37 = (r14_5 << 4) + *arg2
    *rax_37 = r12_4
    rax_37[1].d = rsi_11
    *(rax_37 + 0xc) = r15_3
    int64_t rsi_12 = sx.q(arg3[1].d)
    int32_t rax_38 = (rsi_12 + 1).d
    arg3[1].d = rax_38
    
    if (rax_38 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int64_t rax_39 = *arg3
    zmm2_1 = _mm_cvtps_pd(var_68)
    *(rax_39 + (rsi_12 << 2)) = 1
    sub_140a2e390(&var_60, u"%.0f", zmm2_1)
    int64_t rsi_13 = sx.q(arg2[1].d)
    int32_t rax_40 = (rsi_13 + 1).d
    arg2[1].d = rax_40
    
    if (rax_40 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rcx_49 = (rsi_13 << 4) + *arg2
    *rcx_49 = 0
    *rcx_49 = var_60
    var_60 = 0
    rcx_49[1].d = var_58_5.d
    *(rcx_49 + 0xc) = var_58_5:4.d
    int64_t rcx_50 = var_60
    int64_t var_58_6 = 0
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rsi_15 = sbb.d(rsi_13.d, rsi_13.d, arg_8 != 0) + 3
    int32_t rax_45 = (rdi_1 + 1).d
    arg3[1].d = rax_45
    
    if (rax_45 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    result = *arg3
    *(result + (rdi_1 << 2)) = rsi_15

return result
