// 函数: sub_141778c10
// 地址: 0x141778c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg2 + 0x10)

if (r10 == 1 && *(arg2 + 0x38) != 0)
    r10 = 0

int32_t rcx = *(arg2 + 0x14)

if (rcx == 1 && *(arg2 + 0x38) != 0)
    rcx = 0

int32_t r8 = *(arg2 + 0x18)

if (r8 == 1 && *(arg2 + 0x38) != 0)
    r8 = 0

uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
uint64_t var_58
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (r10 == 2)
    if (rcx != r10)
        goto label_141778d49
    
    if (r8 != r10)
    label_141778f2d:
        zmm0 = zx.o(*arg4)
        int32_t rax = arg4[1].d
        uint128_t zmm8
        uint128_t var_38_1 = zmm8
        uint64_t var_68_1 = zmm0.q
        uint128_t zmm9
        uint128_t var_48_1 = zmm9
        int32_t var_60_4 = rax
        
        if (r10 != 2)
            zmm0 = *(arg3 + 8)
            zmm3 = *arg3
            zmm5 = *(arg3 + 0xc)
            zmm1.d = zmm0.d f+ zmm0.d
            zmm4 = *(arg3 + 4)
            zmm7 = var_68_1.d
            zmm2 = zmm4 ^ data_142d3f780
            zmm8 = var_60_4
            zmm2.d = zmm2.d f+ zmm2.d
            zmm9 = *(arg2 + 0x1c)
            zmm0.d = zmm0.d f* zmm1.d
            zmm6.d = zmm5.d f* zmm1.d
            zmm4.d = zmm4.d f* zmm2.d
            zmm5.d = zmm5.d f* zmm2.d
            zmm4.d = zmm4.d f- zmm0.d
            zmm0.d = zmm3.d f* zmm2.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm6.d = zmm6.d f- zmm0.d
            zmm4.d = zmm4.d f+ 1f
            zmm5.d = zmm5.d f+ zmm3.d
            zmm3 = var_68_1:4.d
            zmm2.d = zmm6.d f* zmm3.d
            zmm0.d = zmm7.d f* zmm4.d
            zmm1.d = zmm5.d f* zmm8.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (r10 != 0)
                zmm0 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
            
            int32_t var_50_4
            
            if (r10 == 0 || zmm0.d f< zmm9.d)
                zmm0.d = zmm2.d f* zmm4.d
                zmm1.d = zmm2.d f* zmm6.d
                zmm2.d = zmm2.d f* zmm5.d
                zmm7.d = zmm7.d f- zmm0.d
                zmm3.d = zmm3.d f- zmm1.d
                zmm8.d = zmm8.d f- zmm2.d
            label_14177905c:
                var_50_4 = zmm8.d
                var_58:4.d = zmm3.d
                var_58.d = zmm7.d
            else
                zmm4.d = zmm4.d f* zmm9.d
                zmm6.d = zmm6.d f* zmm9.d
                zmm5.d = zmm5.d f* zmm9.d
                
                if (not(zmm2.d f< zmm9.d))
                    zmm7.d = zmm7.d f- zmm4.d
                    zmm3.d = zmm3.d f- zmm6.d
                    zmm8.d = zmm8.d f- zmm5.d
                    goto label_14177905c
                
                zmm4.d = zmm4.d f+ zmm7.d
                zmm6.d = zmm6.d f+ zmm3.d
                zmm5.d = zmm5.d f+ zmm8.d
                var_58.d = zmm4.d
                var_58:4.d = zmm6.d
                var_50_4 = zmm5.d
            
            zmm0 = zx.o(var_58)
            rax = var_50_4
            var_68_1 = zmm0.q
            var_60_4 = rax
        
        if (rcx != 2)
            zmm2 = *arg3
            zmm8 = *(arg3 + 8)
            zmm4 = *(arg3 + 4)
            zmm1.d = zmm2.d f+ zmm2.d
            zmm9 = *(arg3 + 0xc)
            zmm3 = zmm8 ^ data_142d3f780
            zmm6 = var_60_4
            zmm3.d = zmm3.d f+ zmm3.d
            zmm7 = *(arg2 + 0x1c)
            zmm5 = zmm9
            zmm2.d = zmm2.d f* zmm1.d
            zmm0.d = zmm4.d f* zmm1.d
            zmm8.d = zmm8.d f* zmm3.d
            zmm9.d = zmm9.d f* zmm1.d
            zmm4.d = zmm4.d f* zmm3.d
            zmm8.d = zmm8.d f- zmm2.d
            zmm5.d = zmm5.d f* zmm3.d
            zmm3 = var_68_1:4.d
            zmm9.d = zmm9.d f- zmm4.d
            zmm4 = var_68_1.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm8.d = zmm8.d f+ 1f
            zmm1.d = zmm9.d f* zmm6.d
            zmm0.d = zmm4.d f* zmm5.d
            zmm2.d = zmm8.d f* zmm3.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (rcx != 0)
                zmm0 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
            
            int32_t var_50_5
            
            if (rcx == 0 || zmm0.d f< zmm7.d)
                zmm0.d = zmm2.d f* zmm5.d
                zmm1.d = zmm2.d f* zmm8.d
                zmm2.d = zmm2.d f* zmm9.d
                zmm4.d = zmm4.d f- zmm0.d
                zmm3.d = zmm3.d f- zmm1.d
                zmm6.d = zmm6.d f- zmm2.d
            label_141779194:
                var_50_5 = zmm6.d
                var_58:4.d = zmm3.d
                var_58.d = zmm4.d
            else
                zmm5.d = zmm5.d f* zmm7.d
                zmm0.d = zmm7.d f* zmm8.d
                zmm1.d = zmm7.d f* zmm9.d
                
                if (not(zmm2.d f< zmm7.d))
                    zmm4.d = zmm4.d f- zmm5.d
                    zmm3.d = zmm3.d f- zmm0.d
                    zmm6.d = zmm6.d f- zmm1.d
                    goto label_141779194
                
                zmm5.d = zmm5.d f+ zmm4.d
                zmm0.d = zmm0.d f+ zmm3.d
                zmm1.d = zmm1.d f+ zmm6.d
                var_58.d = zmm5.d
                var_58:4.d = zmm0.d
                var_50_5 = zmm1.d
            
            zmm0 = zx.o(var_58)
            rax = var_50_5
            var_68_1 = zmm0.q
            var_60_4 = rax
        
        if (r8 != 2)
            zmm4 = *(arg3 + 4)
            zmm8 = *arg3
            zmm1 = *(arg3 + 8)
            zmm2.d = zmm4.d f+ zmm4.d
            zmm9 = *(arg3 + 0xc)
            zmm3 = zmm8 ^ data_142d3f780
            zmm0 = zmm1
            zmm6 = var_60_4
            zmm3.d = zmm3.d f+ zmm3.d
            zmm1.d = zmm1.d f* zmm2.d
            zmm4.d = zmm4.d f* zmm2.d
            zmm5.d = zmm9.d f* zmm2.d
            zmm8.d = zmm8.d f* zmm3.d
            zmm0.d = zmm0.d f* zmm3.d
            zmm9.d = zmm9.d f* zmm3.d
            zmm8.d = zmm8.d f- zmm4.d
            zmm4 = var_68_1.d
            zmm5.d = zmm5.d f- zmm0.d
            zmm3 = var_68_1:4.d
            zmm9.d = zmm9.d f+ zmm1.d
            zmm8.d = zmm8.d f+ 1f
            zmm0.d = zmm4.d f* zmm5.d
            zmm2.d = zmm9.d f* zmm3.d
            zmm1.d = zmm8.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (r8 != 0)
                zmm7 = *(arg2 + 0x1c)
                zmm0 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
            
            int32_t var_50_6
            
            if (r8 == 0 || zmm0.d f< zmm7.d)
                zmm0.d = zmm2.d f* zmm5.d
                zmm1.d = zmm2.d f* zmm9.d
                zmm2.d = zmm2.d f* zmm8.d
                zmm4.d = zmm4.d f- zmm0.d
                zmm3.d = zmm3.d f- zmm1.d
                zmm6.d = zmm6.d f- zmm2.d
            label_1417792cd:
                var_50_6 = zmm6.d
                var_58:4.d = zmm3.d
                var_58.d = zmm4.d
            else
                zmm5.d = zmm5.d f* zmm7.d
                zmm0.d = zmm7.d f* zmm9.d
                zmm1.d = zmm7.d f* zmm8.d
                
                if (not(zmm2.d f< zmm7.d))
                    zmm4.d = zmm4.d f- zmm5.d
                    zmm3.d = zmm3.d f- zmm0.d
                    zmm6.d = zmm6.d f- zmm1.d
                    goto label_1417792cd
                
                zmm5.d = zmm5.d f+ zmm4.d
                zmm0.d = zmm0.d f+ zmm3.d
                zmm1.d = zmm1.d f+ zmm6.d
                var_58.d = zmm5.d
                var_58:4.d = zmm0.d
                var_50_6 = zmm1.d
            
            zmm0 = zx.o(var_58)
            rax = var_50_6
        
        *arg1 = zmm0.q
        arg1[1].d = rax
    else
    label_141778c87:
        *arg1 = *arg4
        arg1[1].d = arg4[1].d
else if (r10 != 1)
label_141778d49:
    
    if (rcx != 1 || r8 != rcx)
        if (r10 != 1)
            goto label_141778f2d
        
        goto label_141778df7
    
    zmm0 = *(arg3 + 8)
    zmm6 = *(arg3 + 4)
    zmm5 = *arg3
    zmm3.d = zmm0.d f+ zmm0.d
    zmm2 = *(arg3 + 0xc)
    zmm4 = zmm6 ^ data_142d3f780
    zmm4.d = zmm4.d f+ zmm4.d
    zmm0.d = zmm0.d f* zmm3.d
    zmm1.d = zmm2.d f* zmm3.d
    zmm6.d = zmm6.d f* zmm4.d
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f* zmm3.d
    zmm3 = *(arg2 + 0x1c)
    zmm1.d = zmm1.d f- zmm0.d
    zmm6.d = zmm6.d f+ 1f
    zmm2.d = zmm2.d f+ zmm5.d
    var_58 = (_mm_unpacklo_ps(zmm6, zmm1.q)).q
    int32_t var_50_1 = zmm2.d
    sub_141778550(arg1, arg4, &var_58, zmm3.d, r10)
else if (rcx != r10)
label_141778df7:
    
    if (r8 != 1)
        if (rcx != 1)
            goto label_141778f2d
        
        goto label_141778e9b
    
    zmm4 = *arg3
    zmm3 = *(arg3 + 0xc)
    zmm7 = *(arg3 + 8)
    zmm1.d = zmm4.d f+ zmm4.d
    zmm6 = *(arg3 + 4)
    zmm2 = zmm3
    zmm5 = zmm7 ^ data_142d3f780
    zmm5.d = zmm5.d f+ zmm5.d
    zmm0.d = zmm6.d f* zmm1.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm2.d = zmm2.d f* zmm5.d
    zmm4.d = zmm4.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm7.d = zmm7.d f- zmm4.d
    zmm3.d = zmm3.d f- zmm6.d
    zmm7.d = zmm7.d f+ 1f
    int32_t var_60_2 = zmm3.d
    zmm3 = *(arg2 + 0x1c)
    var_58 = (_mm_unpacklo_ps(zmm2, zmm7.q)).q
    int32_t var_50_2 = var_60_2
    sub_141778550(arg1, arg4, &var_58, zmm3.d, rcx)
else if (r8 != r10)
label_141778e9b:
    zmm6 = *(arg3 + 4)
    zmm7 = *arg3
    zmm2 = *(arg3 + 8)
    zmm3.d = zmm6.d f+ zmm6.d
    zmm5 = *(arg3 + 0xc)
    zmm4 = zmm7 ^ data_142d3f780
    zmm4.d = zmm4.d f+ zmm4.d
    zmm1.d = zmm5.d f* zmm3.d
    zmm6.d = zmm6.d f* zmm3.d
    zmm0.d = zmm2.d f* zmm4.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm2.d = zmm2.d f* zmm3.d
    zmm1.d = zmm1.d f- zmm0.d
    zmm3 = *(arg2 + 0x1c)
    zmm7.d = zmm7.d f- zmm6.d
    zmm5.d = zmm5.d f* zmm4.d
    zmm7.d = zmm7.d f+ 1f
    zmm5.d = zmm5.d f+ zmm2.d
    int32_t var_50_3 = zmm7.d
    var_58 = (_mm_unpacklo_ps(zmm1, zmm5.q)).q
    sub_141778550(arg1, arg4, &var_58, zmm3.d, r8)
else
    zmm4 = *(arg4 + 4)
    zmm3 = *arg4
    zmm5 = arg4[1].d
    zmm6 = *(arg2 + 0x1c)
    zmm0.d = zmm4.d f* zmm4.d
    zmm2.d = zmm3.d f* zmm3.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    zmm0 = _mm_sqrt_ss(0, zmm2.d)
    
    if (zmm0.d f>= zmm6.d)
        if (zmm0.d f<= 9.99999994e-09f)
            goto label_141778c87
        
        zmm2.d = 1f f/ zmm0.d
        zmm0.d = zmm2.d f* zmm3.d
        zmm1.d = zmm2.d f* zmm4.d
        zmm2.d = zmm2.d f* zmm5.d
        zmm0.d = zmm0.d f* zmm6.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f* zmm6.d
        zmm3.d = zmm3.d f- zmm0.d
        zmm4.d = zmm4.d f- zmm1.d
        zmm5.d = zmm5.d f- zmm2.d
        *arg1 = zmm3.d
        *(arg1 + 4) = zmm4.d
        arg1[1].d = zmm5.d
    else
        *arg1 = 0
        arg1[1].d = 0
return arg1
