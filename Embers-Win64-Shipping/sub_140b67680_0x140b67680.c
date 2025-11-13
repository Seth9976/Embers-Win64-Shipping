// 函数: sub_140b67680
// 地址: 0x140b67680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rsi = 0

if (sub_140b74110(6, 2) == 0)
label_140b67808:
    wchar16 localeName[0x58]
    
    if (GetUserDefaultLocaleName(&localeName, 0x55) == 0)
        sub_140a47130(arg1)
    else
        *arg1 = 0
        arg1[1] = 0
        
        if (localeName[0] != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (localeName[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(arg1, rbx_3.d + 1)
                rsi = arg1[1].d
            
            int32_t rax_9 = rbx_3.d + 1 + rsi
            arg1[1].d = rax_9
            
            if (rax_9 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            UnDecorator::getReferenceType(*arg1, &localeName, (rbx_3.d + 1) * 2)
else
    uint32_t pulNumLanguages = 0
    uint32_t pcchLanguagesBuffer = 0
    
    if (GetUserPreferredUILanguages(8, &pulNumLanguages, nullptr, &pcchLanguagesBuffer) == 0)
        goto label_140b67808
    
    int64_t pcchLanguagesBuffer_1 = sx.q(pcchLanguagesBuffer)
    wchar16* pwszLanguagesBuffer = nullptr
    wchar16* pwszLanguagesBuffer_1 = nullptr
    int64_t var_e8_1 = 0
    int32_t temp0_1 = pcchLanguagesBuffer_1.d
    
    if (temp0_1 s> 0)
        var_e8_1.d = pcchLanguagesBuffer_1.d
        sub_140594770(&pwszLanguagesBuffer_1)
        pwszLanguagesBuffer = pwszLanguagesBuffer_1
        memset(pwszLanguagesBuffer, 0, pcchLanguagesBuffer_1 * 2)
    else if (temp0_1 s< 0)
        int32_t r14_2 = neg.d(pcchLanguagesBuffer_1.d)
        
        if (r14_2 != 0)
            int32_t r14_3 = neg.d(r14_2)
            
            if (r14_3 != pcchLanguagesBuffer_1.d)
                memmove(pcchLanguagesBuffer_1 * 2, nullptr, (r14_3 - pcchLanguagesBuffer_1.d) * 2)
            
            var_e8_1.d = r14_3
            sub_1405a50a0(&pwszLanguagesBuffer_1)
            pwszLanguagesBuffer = pwszLanguagesBuffer_1
    
    if (GetUserPreferredUILanguages(8, &pulNumLanguages, pwszLanguagesBuffer, &pcchLanguagesBuffer)
            == 0)
        if (pwszLanguagesBuffer != 0)
            sub_140a74f90(pwszLanguagesBuffer)
        
        goto label_140b67808
    
    *arg1 = 0
    arg1[1] = 0
    
    if (pwszLanguagesBuffer != 0)
        if (*pwszLanguagesBuffer != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (pwszLanguagesBuffer[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(arg1, rbx_1.d + 1)
                rsi = arg1[1].d
            
            int32_t rax_7 = rsi + rbx_1.d + 1
            arg1[1].d = rax_7
            
            if (rax_7 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            UnDecorator::getReferenceType(*arg1, pwszLanguagesBuffer, (rbx_1.d + 1) * 2)
        
        sub_140a74f90(pwszLanguagesBuffer)

__security_check_cookie(rax_1 ^ &var_118)
return arg1
