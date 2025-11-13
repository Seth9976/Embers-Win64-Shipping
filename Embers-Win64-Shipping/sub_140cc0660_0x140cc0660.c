// 函数: sub_140cc0660
// 地址: 0x140cc0660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int64_t r15 = arg3

if (test_bit(arg4, 0x1a))
label_140cc0827:
    int64_t* r14_1 = *(arg1 + 0x78)
    
    if (sub_140cec0e0(r14_1, arg4.b, arg6) != 0 && arg2 != 0)
        return (*(*r14_1 + 0xa8))(r14_1, arg2, r15, zx.q(arg4) | 0x8000000, arg5, arg6)
else
    arg3.b = 1
    int16_t* var_28 = nullptr
    int32_t var_20_1 = 0
    void* result_1 = sub_140ce37a0(arg2, &var_28, arg3.b)
    
    if (result_1 == 0)
        int16_t* rcx_13 = var_28
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        goto label_140cc0827
    
    int16_t* const _String = &data_142d40450
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_20_1 != 0)
        rdx_1 = var_28
    
    uint128_t var_38
    int64_t* rax_1 = sub_140b58260(&var_38, rdx_1, 1)
    int32_t rax_2 = sub_140bddcb0(*(arg1 + 0x80), *rax_1, 4)
    
    if (rax_2 != 0xffffffff)
    label_140cc07dd:
        int64_t* rcx_11 = *(arg1 + 0x78)
        int64_t r9_1 = *rcx_11
        (*(r9_1 + 0x148))(rcx_11, r15, *(*(*(arg1 + 0x80) + 0x40) + sx.q(rax_2) * 0x10 + 8), r9_1)
        result = result_1
    else
        if (sub_140a24720(&var_28) != 0)
            int16_t* i = var_28
            int64_t r8 = sx.q(var_20_1)
            void* rcx_4 = &i[r8]
            void* rax_4 = rcx_4 - 2
            
            if (r8.d == 0)
                rax_4 = rcx_4
            
            for (; i != rax_4; i = &i[1])
                if (*i == 0x2e)
                    goto label_140cc077e
            
            if (r8.d != 0)
                _String = var_28
            
            int64_t i_1 = _wtoi64(_String)
            void* rcx_6 = *(arg1 + 0x80)
            rax_2 = 0
            int64_t rdx_3 = sx.q(*(rcx_6 + 0x48))
            
            if (rdx_3.d s> 0)
                int64_t* rcx_8 = *(rcx_6 + 0x40) + 8
                int64_t rdx_4 = 0
                
                while (*rcx_8 != i_1)
                    rax_2 += 1
                    rdx_4 += 1
                    rcx_8 = &rcx_8[2]
                    
                    if (rdx_4 s>= rdx_3)
                        goto label_140cc077e
                
                if (rax_2 != 0xffffffff)
                    goto label_140cc07dd
        
    label_140cc077e:
        uint128_t zmm0_1 = *(arg1 + 0x10)
        var_38 = zmm0_1
        char rax_5 = _mm_bsrli_si128(zmm0_1, 8).b
        void* rcx_9
        
        if (rax_5 != 0)
        label_140cc07b5:
            rcx_9 = var_38.q
        label_140cc07ba:
            
            if (rcx_9 != 0 && sub_140d3cb50(rcx_9) != 0)
                sub_140baa940()
        else
            while (true)
                rcx_9 = var_38.q
                
                if (rcx_9 == 0)
                    break
                
                zmm0_1 = *(rcx_9 + 0x10)
                var_38 = zmm0_1
                rax_5 = _mm_bsrli_si128(zmm0_1, 8).b
                
                if (rax_5 != 0)
                    goto label_140cc07b5
            
            if (rax_5 != 0)
                goto label_140cc07ba
    
    int16_t* rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

return result
