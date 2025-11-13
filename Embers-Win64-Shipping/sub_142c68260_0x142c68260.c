// 函数: sub_142c68260
// 地址: 0x142c68260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t rsi
rsi.b = 0
int64_t r15
r15.b = 0
int32_t r14 = arg3

if (arg3 != 3)
    goto label_142c68338

int32_t rax_2 = *(arg1 + 0x2ac)
uint64_t result

if (rax_2 == 0xffffffff || *(arg1 + 0x2a8) s< rax_2)
    *(arg1 + 0x2a8) += 1
    *(arg1 + 0x4a98) = 1
    
    if (*(arg1 + 0x5e7) == 0)
        goto label_142c68338
    
    if (*(arg1 + 0x898) != 0)
        data_143ccb8a0(*(arg1 + 0x890))
        *(arg1 + 0x890) = 0
        *(arg1 + 0x898) = 0
    
    int64_t rax_3 = data_143ccb8b0(*(arg1 + 0x880))
    *(arg1 + 0x890) = rax_3
    
    if (rax_3 != 0)
        *(arg1 + 0x898) = 1
        goto label_142c68338
    
    result = 0x1b
else
    r15.b = 1
    r14 = arg3 - 2
label_142c68338:
    void var_40
    void* rdi_1
    int512_t zmm2
    
    if (sub_1425f29b0(arg2, "%15[^?&/:]://%c", &var_40) == 2)
        int64_t rdi_2 = 0
        rsi.b = 1
        char* rax_6 = sub_142c69100(arg2)
        char* rcx_5 = arg2
        
        if (*arg2 != 0)
            do
                if (rcx_5 u< rax_6)
                    rdi_2 += 1
                else
                    char rdx_1 = *rcx_5
                    
                    if (rdx_1 != 0x20)
                        rsi = zx.q(rsi.b)
                        int64_t rax_8 = rdi_2 + 2
                        
                        if (rdx_1 == 0x3f)
                            rsi = 0
                        
                        if (rdx_1 u< 0x80)
                            rax_8 = rdi_2
                        
                        rdi_2 = rax_8 + 1
                    else if (rsi.b == 0)
                        rdi_2 += 1
                    else
                        rdi_2 += 3
                
                rcx_5 = &rcx_5[1]
            while (*rcx_5 != 0)
        
        rsi.b = 1
        char* rax_9 = data_143ccb898(rdi_2 + 1)
        rdi_1 = rax_9
        
        if (rax_9 == 0)
            result = 0x1b
        else
            zmm2 = sub_142c69d10(rax_9, arg2, 0, arg4)
        label_142c683e5:
            
            if (r14 != 1)
                if (rsi.b != 0)
                    *(arg1 + 0x4b18) = 0
                
                if (*(arg1 + 0x888) != 0)
                    data_143ccb8a0(*(arg1 + 0x880))
                    *(arg1 + 0x880) = 0
                    *(arg1 + 0x888) = 0
                
                *(arg1 + 0x880) = rdi_1
                *(arg1 + 0x888) = 1
                int64_t r8_4
                int512_t zmm2_1
                r8_4, zmm2_1 =
                    sub_142c64850(arg1, "Issue another request to this URL: '%s'\n", rdi_1, zmm2)
                int32_t rcx_11 = *(arg1 + 0x4ef0)
                bool cond:1_1
                
                if (rcx_11 == 0x12d)
                    if (*(arg1 + 0x438) - 2 u<= 1)
                        cond:1_1 = (*(arg1 + 0x2b0) & 1) != 0
                    label_142c684f7:
                        
                        if (not(cond:1_1))
                            sub_142c64850(arg1, "Switch from POST to GET\n", r8_4, zmm2_1)
                            *(arg1 + 0x438) = 1
                else if (rcx_11 == 0x12e)
                    if (*(arg1 + 0x438) - 2 u<= 1)
                        cond:1_1 = (*(arg1 + 0x2b0) & 2) != 0
                        goto label_142c684f7
                else if (rcx_11 == 0x12f && *(arg1 + 0x438) != rcx_11 - 0x12e
                        && (*(arg1 + 0x2b0) & 4) == 0)
                    bool cond:2_1 = *(arg1 + 0x5e8) != 0
                    *(arg1 + 0x438) = rcx_11 - 0x12e
                    void* const r8_5 = &data_1436b441c
                    
                    if (cond:2_1)
                        r8_5 = "HEAD"
                    
                    sub_142c64850(arg1, "Disables POST, goes with %s\n", r8_5, zmm2_1)
                sub_142c6f300(arg1, 0xa)
                sub_142c6f080(arg1)
                result = 0
            else
                *(arg1 + 0x4f20) = rdi_1
                
                if (r15.b == 0)
                    result = 0
                else
                    sub_142c64760(arg1, "Maximum (%ld) redirects followed", zx.q(*(arg1 + 0x2ac)), 
                        zmm2)
                    result = zx.q(r14 + 0x2e)
    else
        void* rax_5
        rax_5, zmm2 = sub_142c68f00(*(arg1 + 0x880), arg2, arg4)
        rdi_1 = rax_5
        
        if (rax_5 != 0)
            goto label_142c683e5
        
        result = 0x1b

__security_check_cookie(rax_1 ^ &var_68)
return result
