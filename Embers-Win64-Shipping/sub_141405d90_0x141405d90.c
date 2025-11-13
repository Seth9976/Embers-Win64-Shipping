// 函数: sub_141405d90
// 地址: 0x141405d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int32_t var_98

if (sub_1419cae50(arg2, data_143ec50b0) == 0)
    int32_t rsi_1 = arg2[5].d
    int32_t rcx_5 = 0
    int32_t r8 = 0
    var_98 = 0
    int32_t var_94_1 = 1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rsi_1 != 0)
        void* rax_4 = arg2[4]
        void* r9_1 = &arg2[2]
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rsi_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141405ed8:
            int32_t rax_11 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_94_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_84_1.d = r8 - rax_12 + 0x1f
            
            if (r8 - rax_12 + 0x1f s> rsi_1)
                var_84_1.d = rsi_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_5)
                r8 += 0x20
                rcx_5 += 1
                var_84_1:4.d = r8
                var_98 = rcx_5
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141405ed8
            
            var_84_1.d = rsi_1
    
    int32_t rdx_7 = arg2[5].d
    double zmm2[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2
    int32_t r12_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int128_t var_48_1 = var_98.o
    int32_t r8_3 = rdx_7 s>> 5
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_88_2 = r12_1
    var_84_1.d = rdx_7
    int128_t var_78 = arg2.o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_7 != rsi_1)
        void* rax_14 = arg2[4]
        void* r10_1 = &arg2[2]
        
        if (rax_14 != 0)
            r10_1 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_1 - 1)
        int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
        
        if (rdx_11 != 0)
        label_141405fa2:
            int32_t rax_21 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t r11_1
            
            if (rax_21 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rsi_1)
                var_84_1.d = rsi_1
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_1 + (rcx_10 << 2) + 4)
                var_88_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141405fa2
            
            var_84_1.d = rsi_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t rcx_12 = var_78.q
        
        if (result.d == (var_88_2.q u>> 0x20).d && var_68_1.q == &arg2[2] && rcx_12 == arg2)
            result.b = 1
            goto label_1414060a3
        
        int64_t* rax_24 = (result << 5) + *rcx_12
        
        if (*(rax_24 + 0x16) u> 1)
            int16_t* const r8_4
            
            if (rax_24[1].d == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *rax_24
            
            sub_140a2e390(&var_98, 
                Invalid ray tracing shader parameter '%s'. Only uniform buffers and loose data ", r8_4)
            int64_t rsi_4 = sx.q(arg3[1].d)
            int32_t rax_27 = (rsi_4 + 1).d
            arg3[1].d = rax_27
            
            if (rax_27 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            int64_t* rcx_18 = (rsi_4 << 4) + *arg3
            *rcx_18 = 0
            *rcx_18 = var_98.q
            var_98.q = 0
            rcx_18[1].d = (&arg2[2]).d
            *(rcx_18 + 0xc) = (&arg2[2]):4.d
            int64_t rcx_19 = var_98.q
            int64_t var_90_2 = 0
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            break
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
else
    var_98.q = 0
    int64_t var_90 = 0
    sub_1405947f0(&var_98, 0x4a)
    int32_t rsi = var_90:4.d
    int32_t rbx_1 = var_90.d + 0x4a
    var_90.d = rbx_1
    
    if (rbx_1 s> rsi)
        sub_140594770(&var_98)
        rsi = var_90:4.d
        rbx_1 = var_90.d
    
    int64_t r15_1 = var_98.q
    UnDecorator::getReferenceType(r15_1, 
        Ray tracing closest hit shaders cannot read from the SceneTexturesStruct.", 0x94)
    int64_t r14 = sx.q(arg3[1].d)
    int32_t rax_1 = (r14 + 1).d
    arg3[1].d = rax_1
    
    if (rax_1 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    result = (r14 << 4) + *arg3
    *result = r15_1
    result[1].d = rbx_1
    *(result + 0xc) = rsi
result.b = 0
label_1414060a3:
return result
