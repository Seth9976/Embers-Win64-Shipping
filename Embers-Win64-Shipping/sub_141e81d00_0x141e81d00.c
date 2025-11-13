// 函数: sub_141e81d00
// 地址: 0x141e81d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7e8
int64_t rax_1 = __security_cookie ^ &var_7e8
int128_t* result = arg7
int128_t* result_1 = result

if (arg2 != 0 && arg3 != 0)
    int64_t rax_2 = sub_1424359b0(arg3)
    
    if (rax_2 != 0)
        result = sub_1424359b0(arg3)
    
    if (rax_2 == 0 || *(result + 1) != 0)
        void* rsi_1
        
        if (arg8 == 0)
            rsi_1 = (*(*arg2 + 0x278))(arg2)
        else
            rsi_1 = arg8 + 0x28
        
        int32_t var_7a4
        int32_t var_7b8_1 = &var_7a4
        var_7a4 = 0x3f800000
        int32_t var_7a0
        int32_t* var_7c0_1 = &var_7a0
        var_7a0 = 0
        int32_t zmm0_1
        int32_t zmm8_1
        int32_t zmm9_1
        zmm0_1, zmm8_1, zmm9_1 = sub_141e7e530(arg1, arg2, arg3, arg6, 0x3f800000, rsi_1, var_7c0_1)
        char rax_5 = sub_14236bbe0(arg2, zmm0_1)
        int32_t zmm7_1 = var_7a0
        int32_t zmm6_1 = var_7a4
        
        if (rax_5 != 0)
        label_141e81e68:
            char rax_8 = sub_14243ade0(arg3)
            void** var_778
            sub_141db66c0(&var_778)
            sub_141dd9500(&var_778, arg3)
            sub_141dd9140(&var_778, arg2)
            sub_141dd9420(&var_778, zmm9_1)
            sub_141dd8f70(&var_778, arg4)
            int64_t zmm0_2 = arg5
            
            if (zmm0_2.d f> zmm8_1)
                int32_t var_5dc_2 = zmm0_2.d
            else
                int32_t var_5dc_1 = 0
            
            char var_5f7
            char var_5f7_1 = var_5f7 | 0x10
            float var_548_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(*arg6, arg6[2]), _mm_unpacklo_ps(arg6[1], 0)[0].q)
            float var_788[0x4]
            float (* rax_9)[0x4]
            float zmm6_2
            int32_t zmm7_2
            rax_9, zmm6_2, zmm7_2 = sub_140ade170(result_1, &var_788)
            char rcx_14 = 0
            float zmm0_3[0x4] = *rax_9
            
            if (rax_8 == 0)
                rcx_14 = -0x80
            
            float var_558_1[0x4] = zmm0_3
            char var_5f7_2 = rcx_14 | (var_5f7_1 & 0x7f)
            (*(*arg2 + 0x2a8))(arg2)
            float var_57c_1 = zmm0_3[0]
            char rcx_17
            
            if (sub_14243ade0(arg3) != 0)
                if (rsi_1 == 0)
                    rcx_17 = 0
                else
                    rcx_17 = 4
            else if ((*(arg1 + 0x370) & 4) == 0 || rsi_1 == 0)
                rcx_17 = 0
            else
                rcx_17 = 4
            
            char var_5f8
            char rax_13 = (var_5f8 & 0xfb) | rcx_17
            char var_5f8_1 = rax_13
            
            if ((rax_13 & 4) != 0)
                void* const rbx_1 = 0x100
                
                if (sub_140a80ea0() != 0)
                    rbx_1 = 0xe0
                
                void* rbx_2 = rbx_1 + arg1
                void var_500
                sub_141c51970(&var_500, rsi_1)
                float var_518_1 = sub_1423648a0(rsi_1, rbx_2, zmm6_2)
                float var_51c_1 = sub_142364870(rsi_1, rbx_2, zmm6_2)[0]
            
            int32_t var_568_1 = zmm7_2
            int64_t arg_50
            void var_6d0
            
            if (arg_50 != 0)
                sub_141e6db90(&var_6d0, &var_7a4, &arg_50, nullptr)
            float var_578_1 = (*(arg2 + 0x104))[0]
            sub_141dd8f40(&var_778, arg10)
            
            if (arg9 != 0)
                int32_t* i = *arg9
                
                for (void* rdi_3 = &i[sx.q(arg9[1].d) * 8]; i != rdi_3; i = &i[8])
                    sub_141dd9200(&var_778, i)
            
            sub_141e733a0(arg1, &var_778, nullptr)
            result = sub_141db7fa0(&var_778)
        else
            if ((*(*arg2 + 0x290))(arg2) != 0)
                goto label_141e81e68
            
            var_7c0_1.d = zmm7_1
            result = sub_141e87c50(arg1, arg2, arg3, arg6, rsi_1, var_7c0_1.d, zmm6_1)
            
            if (result.b != 0)
                goto label_141e81e68

__security_check_cookie(rax_1 ^ &var_7e8)
return result
