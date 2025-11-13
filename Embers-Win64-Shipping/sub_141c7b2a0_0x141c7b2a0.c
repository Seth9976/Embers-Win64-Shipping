// 函数: sub_141c7b2a0
// 地址: 0x141c7b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
uint64_t var_38 = __security_cookie ^ &var_278
int32_t result_2 = arg2
uint64_t r15 = zx.q(arg4)
uint64_t result

if (*(arg1 + 0xc) u< arg2)
    if (arg3 != 0)
        int32_t rax_1
        
        if (arg2 == 0)
            rax_1 = -1
        label_141c7b300:
            int32_t rcx_2 = rax_1 u>> 0x10 | rax_1
            int32_t rcx_3 = rcx_2 | rcx_2 u>> 8
            int32_t rcx_4 = rcx_3 | rcx_3 u>> 4
            int32_t rcx_5 = rcx_4 | rcx_4 u>> 2
            result_2 = (rcx_5 u>> 1 | rcx_5) + 1
        else
            rax_1 = arg2 - 1
            
            if ((arg2 & rax_1) != 0)
                goto label_141c7b300
    
    uint64_t result_4 = zx.q(r15.d * result_2)
    uint64_t result_1
    uint64_t result_3
    
    if (arg5 != 0)
        result = sub_141c79a80(result_4, &result_1)
        result_3 = result
        
        if (result != 0)
            arg5(result, *arg1, zx.q(arg1[1].d))
            int64_t rcx_13 = *arg1
            
            if (rcx_13 != 0)
                sub_141c799d0(rcx_13)
            
            result = result_1
            goto label_141c7b433
        
        result.b = 0
    else
        char rcx_6 = (*arg1).b
        char _Buffer[0x200]
        
        if ((rcx_6 & 7) != 0)
            char const* const var_250_1 = "crnd_realloc: bad ptr"
            int32_t var_258_1 = 0x7a1
            _fwprintf_s_l(&_Buffer, 0x200, "%s(%u): Assertion failure: "%s"\n", 
                "ThirdParty\Crunch\include\crn_decomp.h")
            puts(&_Buffer)
            result.b = 0
        else if (result_4 u<= 0x7fff0000)
            arg4.b = 1
            int32_t var_258
            var_258.q = data_143f353f0
            result_1 = result_4
            result_3 = data_143a16d80(rcx_6, result_4, &result_1, arg4, var_258)
            result = result_1
            
            if (result_3 == 0)
                result.b = 0
            else
            label_141c7b433:
                *arg1 = result_3
                
                if (result u<= result_4)
                    result = zx.q(result_2)
                else
                    result = divu.dp.q(0:result, r15)
                
                *(arg1 + 0xc) = result.d
                result.b = 1
        else
            char const* const var_250_2 = "crnd_malloc: size too big"
            int32_t var_258_2 = 0x7a1
            _fwprintf_s_l(&_Buffer, 0x200, "%s(%u): Assertion failure: "%s"\n", 
                "ThirdParty\Crunch\include\crn_decomp.h")
            puts(&_Buffer)
            result.b = 0
else
    result.b = 1

__security_check_cookie(var_38 ^ &var_278)
return result
