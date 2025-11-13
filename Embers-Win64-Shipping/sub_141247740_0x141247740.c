// 函数: sub_141247740
// 地址: 0x141247740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg6
void* rcx = *rsi
int32_t rax_1

if (rcx != 0 && *(rcx + 0x30) s>= 0 && *(rcx + 0x34) s>= 0 && *(rcx + 0x38) s>= 0)
    rax_1 = *(rcx + 0x3c)

int32_t* result
void* var_a8
uint128_t var_58

if (rcx == 0 || *(rcx + 0x30) s< 0 || *(rcx + 0x34) s< 0 || *(rcx + 0x38) s< 0 || rax_1 s<= 0
        || rax_1 != arg3 || *(rcx + 0x181) != arg4)
    j_sub_140a74f90(rcx)
    result = sub_141223260(arg1, arg3, arg2, arg4, arg5)
    *rsi = result
    
    if (result[0xc] s>= 0 && result[0xd] s>= 0 && result[0xe] s>= 0 && result[0xf] s> 0)
        sub_141225e10(arg1 + 0x30, &arg6, &result[0xc])
        int64_t rax_20 = sx.q(arg6.d)
        void* const rdx_16
        
        if (rax_20.d == 0xffffffff)
            rdx_16 = nullptr
        else
            rdx_16 = (rax_20 << 6) + *(arg1 + 0x30)
        
        var_58 = *(rdx_16 + 0xc)
        int128_t var_48_2 = *(rdx_16 + 0x1c)
        uint64_t var_38_2 = *(rdx_16 + 0x2c)
        int32_t var_30_2 = *(rdx_16 + 0x34)
        void* rax_22 = *rsi
        void* var_28_2 = rax_22
        var_a8 = rax_22 + 0x30
        uint128_t* var_a0_2 = &var_58
        sub_141213a00(arg7, &arg6, &var_a8, nullptr)
    
    result.b = 1
else
    int32_t rax_2 = *(rcx + 0x38)
    int32_t rax_3 = *(arg1 + 0x38)
    int64_t var_c8 = *(rcx + 0x30)
    int32_t* rdx_5
    
    if (rax_3 == *(arg1 + 0x64))
    label_14124784a:
        rdx_5 = nullptr
    else
        int32_t rax_4 = sub_140b212b0(&var_c8, 0xc, 0)
        void* rcx_2 = *(arg1 + 0x70)
        void* r8 = arg1 + 0x68
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_6 = *(r8 + (((sx.q(*(arg1 + 0x78)) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_14124784a_1:
            rdx_5 = nullptr
        else
            while (true)
                rdx_5 = (sx.q(rax_6) << 6) + *(arg1 + 0x30)
                
                if (*rdx_5 == var_c8.d && rdx_5[1] == var_c8:4.d && rdx_5[2] == rax_2)
                    break
                
                rax_6 = rdx_5[0xe]
                
                if (rax_6 == 0xffffffff)
                    goto label_14124784a_2
            
            if (rax_6 == 0xffffffff)
            label_14124784a_2:
                rdx_5 = nullptr
    
    char var_f8
    int64_t var_b8
    var_f8.q = &var_b8
    sub_14121e360(arg1, arg2, rdx_5[6], &var_c8, var_f8)
    result = *rsi
    int32_t var_b0
    int64_t zmm1_1
    int64_t zmm2_1
    
    if (*(result + 0x182) != 0 || data_143e813bc != 0)
    label_141247974:
        zmm2_1 = var_c8
        zmm1_1 = var_b8
        int32_t var_b0_1 = var_b0
        *(rdx_5 + 0x1c) = zmm2_1
        *(rdx_5 + 0x28) = zmm1_1
        rdx_5[0xc] = var_b0
        rdx_5[9] = rax_2
        int32_t var_c0_2 = rax_2
        void* rcx_5 = *rsi
        var_b8 = zmm1_1
        var_c8 = zmm2_1
        int32_t r8_3 = *(rcx_5 + 0x3c)
        int32_t var_90_1 = *(rcx_5 + 0x38)
        var_f8.q = &var_b8
        int64_t var_98 = *(rcx_5 + 0x30)
        uint64_t var_88
        uint64_t var_78
        uint64_t var_68
        sub_14121e700(arg1, &var_98, r8_3, &var_c8, var_f8, &var_78, &var_88, &var_68, &var_a8)
        int64_t* r8_4 = *rsi
        int32_t rdx_8 = r8_4[7].d
        int32_t rcx_7 = *(r8_4 + 0x3c)
        var_98 = r8_4[6]
        *r8_4 = var_88
        int32_t var_80
        r8_4[1].d = var_80
        *(r8_4 + 0xc) = var_78
        uint128_t zmm0_2 = zx.o(var_68)
        int32_t var_70
        *(r8_4 + 0x14) = var_70
        r8_4[3] = zmm0_2.q
        int32_t var_60
        r8_4[4].d = var_60
        *(r8_4 + 0x24) = var_a8
        int32_t var_a0
        *(r8_4 + 0x2c) = var_a0
        r8_4[6].d = var_98.d
        r8_4[7].d = rdx_8
        *(r8_4 + 0x34) = (var_98 u>> 0x20).d
        *(r8_4 + 0x183) = arg5
        *(r8_4 + 0x3c) = rcx_7
        *(r8_4 + 0x182) = 0
        *(r8_4 + 0x181) = arg4
        int128_t zmm1_2 = *(rdx_5 + 0x1c)
        int32_t var_30_1 = rdx_5[0xd]
        int64_t rax_18 = *rsi
        var_58 = *(rdx_5 + 0xc)
        int64_t var_28_1 = rax_18
        uint64_t var_38_1 = *(rdx_5 + 0x2c)
        uint128_t* var_a0_1 = &var_58
        int128_t var_48_1 = zmm1_2
        var_a8 = &rdx_5[3]
        sub_141213a00(arg7, &arg6, &var_a8, nullptr)
        sub_1405a7050(arg8, rsi)
        result.b = 1
    else
        uint32_t zmm0_1[0x4] = rdx_5[7]
        zmm0_1[0] = zmm0_1[0] f- var_c8.d
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm0_1 = rdx_5[8]
        zmm0_1[0] = zmm0_1[0] f- var_c8:4.d
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm0_1 = rdx_5[9]
        zmm0_1[0] = zmm0_1[0] f- rax_2
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm0_1 = rdx_5[0xa]
        zmm0_1[0] = zmm0_1[0] f- var_b8.d
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm0_1 = rdx_5[0xb]
        zmm0_1[0] = zmm0_1[0] f- var_b8:4.d
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm0_1 = rdx_5[0xc]
        zmm0_1[0] = zmm0_1[0] f- var_b0
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141247974
        
        zmm2_1.d = result[0x39].d f- result[0x11]
        zmm1_1.d = result[0x38].d f- result[0x10]
        zmm0_1 = result[0x3a]
        zmm0_1[0] = zmm0_1[0] f- result[0x12]
        zmm2_1.d = zmm2_1.d f* zmm2_1.d
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1[0]
        
        if (zmm2_1.d f> 9.99999975e-06f)
            sub_1405a7050(arg8, rsi)
            result.b = 1
        else
            result.b = 0
return result
