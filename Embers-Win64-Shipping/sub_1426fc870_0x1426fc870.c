// 函数: sub_1426fc870
// 地址: 0x1426fc870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x278) != 0)
    return sub_1426fd140(arg1, arg2, arg3)

int64_t var_68
int64_t* rax_1
uint128_t zmm6
rax_1, zmm6 = sub_142702210(arg1, &var_68)
int64_t rsi = sx.q(arg2[1].d)
int32_t rcx = (rsi + 1).d
arg2[1].d = rcx

if (rcx s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_4 = (rsi << 4) + *arg2
*rcx_4 = 0
*rcx_4 = *rax_1
*rax_1 = 0
rcx_4[1].d = rax_1[1].d
*(rcx_4 + 0xc) = *(rax_1 + 0xc)
rax_1[1] = 0
int64_t rcx_5 = var_68

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t r15_1 = sx.q(arg3[1].d)
int32_t rax_5 = (r15_1 + 1).d
arg3[1].d = rax_5

if (rax_5 s> *(arg3 + 0xc))
    sub_1405a4cf0(arg3)

*(*arg3 + (r15_1 << 2)) = 0
void* rax_7 = *(arg1 + 0xa8)

if (rax_7 == 0)
    rax_7 = sub_141ee69e0(arg1)

void* const result
void* rcx_9
result, rcx_9 = sub_1426fbe40(rax_7)
float var_60
int32_t var_5c
int32_t arg_8

if (result != 0)
    sub_140ba6bd0(result + 0x78, &arg_8, arg1 + 0x258)
    int64_t rax_8 = sx.q(arg_8)
    
    if (rax_8.d == 0xffffffff)
        result = nullptr
    else
        result = rax_8 * 0x38 + *(result + 0x78)
    
    rcx_9 = result + 8
    
    if (result == 0)
        rcx_9 = nullptr
    
    if (rcx_9 == 0 || *(rcx_9 + 0x18) s< 0)
        var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0xb)
        int32_t r12_1 = var_5c
        int32_t r15_3 = var_60_1 + 0xb
        
        if (r15_3 s> r12_1)
            sub_140594770(&var_68)
            r12_1 = var_5c
        
        UnDecorator::getReferenceType(var_68, u"simulation", 0x16)
        int64_t r13_1 = sx.q(arg2[1].d)
        int32_t rax_10 = (r13_1 + 1).d
        arg2[1].d = rax_10
        
        if (rax_10 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_13 = (r13_1 << 4) + *arg2
        *rax_13 = var_68
        rax_13[1].d = r15_3
        *(rax_13 + 0xc) = r12_1
        int64_t r15_4 = sx.q(arg3[1].d)
        int32_t rax_14 = (r15_4 + 1).d
        arg3[1].d = rax_14
        
        if (rax_14 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        int64_t rax_15 = *arg3
        var_68 = 0
        var_60 = 0f
        *(rax_15 + (r15_4 << 2)) = 1
        sub_1405947f0(&var_68, 0xb)
        int32_t r12_2 = var_5c
        float r15_5 = var_60 i+ 0xb
        var_60 = r15_5
        
        if (r15_5 s> r12_2)
            sub_140594770(&var_68)
            r12_2 = var_5c
            r15_5 = var_60
        
        UnDecorator::getReferenceType(var_68, u"NOT ACTIVE", 0x16)
        int64_t r13_2 = sx.q(arg2[1].d)
        int32_t rax_16 = (r13_2 + 1).d
        arg2[1].d = rax_16
        
        if (rax_16 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_19 = (r13_2 << 4) + *arg2
        *rax_19 = var_68
        rax_19[1].d = r15_5
        *(rax_19 + 0xc) = r12_2
        void* r15_6 = sx.q(arg3[1].d)
        int32_t rax_20 = (r15_6 + 1).d
        arg3[1].d = rax_20
        
        if (rax_20 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        result = *arg3
        *(result + (r15_6 << 2)) = 2

if (*(arg1 + 0x1b8) == 3)
    void* r15_7 = *(arg1 + 0x100)
    int64_t* r12_3 = *arg2
    
    if (r15_7 != 0)
        int32_t r13_3 = *(r15_7 + 0x70)
        
        if (r13_3 == data_143f71588.d)
            rcx_9.b = 1
        else
            rcx_9 = *(r15_7 + 0x78)
            
            if (rcx_9 == 0)
                rcx_9.b = 0
            else
                char rax_21
                rax_21, rcx_9 = sub_14268a5a0(rcx_9, &data_143f71588)
                
                if (rax_21 != 0)
                    rcx_9.b = 1
                else
                    rcx_9.b = 0
        
        void* const rax_22 = nullptr
        
        if (rcx_9.b != 0)
            rax_22 = r15_7
        
        if (rax_22 == 0)
            if (r13_3 == data_143f71450.d)
                rcx_9.b = 1
            else
                rcx_9 = *(r15_7 + 0x78)
                
                if (rcx_9 == 0)
                    rcx_9.b = 0
                else
                    char rax_23
                    rax_23, rcx_9 = sub_14268a5a0(rcx_9, &data_143f71450)
                    
                    if (rax_23 != 0)
                        rcx_9.b = 1
                    else
                        rcx_9.b = 0
            
            void* rax_24 = nullptr
            
            if (rcx_9.b != 0)
                rax_24 = r15_7
            
            wchar16 const* const rdx_11
            int32_t r8_4
            
            if (rax_24 == 0)
                r8_4 = 0xf
                rdx_11 = u" (unknown path)"
            else
                r8_4 = 9
                rdx_11 = u" (direct)"
            
            sub_140a20ba0(r12_3, rdx_11, r8_4)
        else
            *(arg1 + 0x290)
            sub_140a2e390(&var_68, u" (path:%d, visited:%d)", zx.q(*(arg1 + 0x28c)))
            int32_t r8_3
            
            if (var_60 == 0)
                r8_3 = 0
            else
                r8_3 = var_60 i- 1
            
            sub_140a20ba0(r12_3, var_68, r8_3)
            int64_t rcx_25 = var_68
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
    
    void* rax_25 = *(arg1 + 0xe8)
    int32_t var_80 = 0
    int32_t var_7c = 0
    int64_t* rcx_27 = *(rax_25 + 0xa0)
    (*(*rcx_27 + 0x560))(rcx_27, &var_80, &var_7c)
    int32_t rsi_3
    
    if ((*(arg1 + 0x275) & 0x20) == 0)
        uint128_t var_48_1 = zmm6
        void* rcx_52 = *(*(arg1 + 0xe8) + 0xb0)
        int64_t var_74
        float var_6c_1
        
        if (rcx_52 == 0)
            float rax_52 = data_143b58090
            var_74 = data_143b58088
            var_6c_1 = rax_52
        else
            float zmm1_1[0x4] = *(rcx_52 + 0x1d0)
            var_74.d = zmm1_1[0]
            float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            temp0_5[0] = temp0_5[0] f- *(rcx_52 + 0x114)
            var_74:4.d = temp0_4[0]
            var_6c_1 = temp0_5[0]
        
        float zmm6_1[0x4] = sub_141e912d0(arg1 + 0x148, &var_74)
        int64_t zmm2_2
        zmm2_2.d = var_74.d.d f- zmm6_1[0]
        float zmm1_2 = var_6c_1 - var_6c_1
        float zmm7_1 = var_74:4.d
        float zmm0_2[0x4] = zmm6_1
        var_68 = zmm6_1.q
        zmm6_1 = var_80
        zmm6_1[0] = zmm6_1[0] * 5f
        var_68 = 0
        zmm7_1 = zmm7_1 - _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0]
        zmm2_2.d = zmm2_2.d f* zmm2_2.d
        int32_t var_60_6 = 0
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm7_1 = zmm7_1 * zmm7_1 f+ zmm2_2.d + zmm1_2 * zmm1_2
        sub_1405947f0(&var_68, 9)
        int32_t r13_6 = var_5c
        int32_t r12_6 = var_60_6 + 9
        var_60_6 = r12_6
        
        if (r12_6 s> r13_6)
            sub_140594770(&var_68)
            r13_6 = var_5c
            r12_6 = var_60_6
        
        int64_t r15_12 = var_68
        UnDecorator::getReferenceType(r15_12, u"distance", 0x12)
        int64_t r14_8 = sx.q(arg2[1].d)
        int32_t rax_54 = (r14_8 + 1).d
        arg2[1].d = rax_54
        
        if (rax_54 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_57 = (r14_8 << 4) + *arg2
        *rax_57 = r15_12
        rax_57[1].d = r12_6
        *(rax_57 + 0xc) = r13_6
        int64_t r14_9 = sx.q(arg3[1].d)
        int32_t rax_58 = (r14_9 + 1).d
        arg3[1].d = rax_58
        
        if (rax_58 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        int64_t rax_59 = *arg3
        int64_t temp0_7 = _mm_sqrt_ss((zx.o(0)).q.d, zmm7_1)
        *(rax_59 + (r14_9 << 2)) = 1
        sub_140a2e390(&var_68, u"%.0f", _mm_cvtps_pd(temp0_7))
        int64_t r14_10 = sx.q(arg2[1].d)
        int32_t rax_60 = (r14_10 + 1).d
        arg2[1].d = rax_60
        
        if (rax_60 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_63 = (r14_10 << 4) + *arg2
        *rcx_63 = 0
        *rcx_63 = var_68
        var_68 = 0
        rcx_63[1].d = var_60_6
        *(rcx_63 + 0xc) = var_5c
        int64_t rcx_64 = var_68
        int64_t var_60_7 = 0
        
        if (rcx_64 != 0)
            sub_140a74f90(rcx_64)
        
        int32_t rsi_1
        rsi_1.b = zmm6_1[0] > zmm7_1
        rsi_3 = rsi_1 + 2
    else
        float var_78 = 0f
        float var_88 = 0f
        uint32_t var_84 = 0
        bool arg_20 = false
        arg_8.b = 0
        sub_1426f70f0(arg1, &var_78, &var_88, &var_84, &arg_8, &arg_20, &arg_8)
        var_68 = 0
        int32_t var_60_2 = 0
        sub_1405947f0(&var_68, 7)
        int32_t r12_4 = var_5c
        int32_t r14_1 = var_60_2 + 7
        var_60_2 = r14_1
        
        if (r14_1 s> r12_4)
            sub_140594770(&var_68)
            r12_4 = var_5c
            r14_1 = var_60_2
        
        int64_t r13_4 = var_68
        UnDecorator::getReferenceType(r13_4, u"dist2D", 0xe)
        int64_t r15_8 = sx.q(arg2[1].d)
        int32_t rax_27 = (r15_8 + 1).d
        arg2[1].d = rax_27
        
        if (rax_27 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_30 = (r15_8 << 4) + *arg2
        *rax_30 = r13_4
        rax_30[1].d = r14_1
        *(rax_30 + 0xc) = r12_4
        int64_t r14_2 = sx.q(arg3[1].d)
        int32_t rax_31 = (r14_2 + 1).d
        arg3[1].d = rax_31
        
        if (rax_31 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        int64_t rax_32 = *arg3
        float temp0_1[0x2] = _mm_cvtps_pd(var_88)
        *(rax_32 + (r14_2 << 2)) = 1
        sub_140a2e390(&var_68, u"%.0f", temp0_1)
        int64_t r14_3 = sx.q(arg2[1].d)
        int32_t rax_33 = (r14_3 + 1).d
        arg2[1].d = rax_33
        
        if (rax_33 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_38 = (r14_3 << 4) + *arg2
        *rcx_38 = 0
        *rcx_38 = var_68
        var_68 = 0
        rcx_38[1].d = var_60_2
        *(rcx_38 + 0xc) = var_5c
        int64_t rcx_39 = var_68
        int64_t var_60_3 = 0
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        int64_t r14_4 = sx.q(arg3[1].d)
        int32_t r15_10 = sbb.d(r15_8.d, r15_8.d, arg_20 != 0) + 3
        int32_t rax_38 = (r14_4 + 1).d
        arg3[1].d = rax_38
        
        if (rax_38 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        int64_t rax_39 = *arg3
        var_68 = 0
        int32_t var_60_4 = 0
        *(rax_39 + (r14_4 << 2)) = r15_10
        sub_1405947f0(&var_68, 6)
        int32_t r12_5 = var_5c
        int32_t r14_5 = var_60_4 + 6
        var_60_4 = r14_5
        
        if (r14_5 s> r12_5)
            sub_140594770(&var_68)
            r12_5 = var_5c
            r14_5 = var_60_4
        
        int64_t r13_5 = var_68
        UnDecorator::getReferenceType(r13_5, u"distZ", 0xc)
        int64_t r15_11 = sx.q(arg2[1].d)
        int32_t rax_40 = (r15_11 + 1).d
        arg2[1].d = rax_40
        
        if (rax_40 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_43 = (r15_11 << 4) + *arg2
        *rax_43 = r13_5
        rax_43[1].d = r14_5
        *(rax_43 + 0xc) = r12_5
        int64_t r14_6 = sx.q(arg3[1].d)
        int32_t rax_44 = (r14_6 + 1).d
        arg3[1].d = rax_44
        
        if (rax_44 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        int64_t rax_45 = *arg3
        float temp0_3[0x2] = _mm_cvtps_pd(var_84)
        *(rax_45 + (r14_6 << 2)) = 1
        sub_140a2e390(&var_68, u"%.0f", temp0_3)
        int64_t r14_7 = sx.q(arg2[1].d)
        int32_t rax_46 = (r14_7 + 1).d
        arg2[1].d = rax_46
        
        if (rax_46 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_50 = (r14_7 << 4) + *arg2
        *rcx_50 = 0
        *rcx_50 = var_68
        var_68 = 0
        rcx_50[1].d = var_60_4
        *(rcx_50 + 0xc) = var_5c
        int64_t rcx_51 = var_68
        int64_t var_60_5 = 0
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
        
        rsi_3 = sbb.d(0, 0, arg_8.b != 0) + 3
    
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rax_64 = (rdi_1 + 1).d
    arg3[1].d = rax_64
    
    if (rax_64 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    result = *arg3
    *(result + (rdi_1 << 2)) = rsi_3

return result
