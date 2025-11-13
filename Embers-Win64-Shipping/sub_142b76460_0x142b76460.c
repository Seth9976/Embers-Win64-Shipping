// 函数: sub_142b76460
// 地址: 0x142b76460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t result = __security_cookie ^ &var_108
int64_t result_1 = result
int64_t rbx = sx.q(arg3)
int64_t rdi = sx.q(arg2)

if (*arg7 s<= 0)
    int16_t rcx = *(arg1 + 0x18)
    int32_t rbp_1 = 0
    uint64_t rsi_1 = 0
    int32_t rax_2
    
    if (rcx s< 0)
        rax_2 = *(arg1 + 0x1c)
    else
        rax_2 = sx.d(rcx) s>> 5
    
    int16_t rdx
    
    if (rdi.d u>= rax_2)
        rdx = -1
    else
        void* rcx_1 = arg1 + 0x1a
        
        if ((rcx.b & 2) == 0)
            rcx_1 = *(arg1 + 0x28)
        
        rdx = *(rcx_1 + (rdi << 1))
    
    int32_t r8 = (rdi + 1).d
    
    if (rdx != 0x2d)
        if (rdx == 0x2b)
            goto label_142b76503
        
    label_142b7654a:
        int32_t var_e8
        
        if (rdx != 0x221e)
            if (0x30 u> rdx)
            label_142b76608:
                int32_t rbx_1 = rbx.d - rdi.d
                
                if (rbx_1 s>= 0x80)
                    result = sub_142b77300(arg1, arg6, rdi.d)
                    *arg7 = 0x10107
                else
                    int32_t var_e0_1 = 0
                    char _String[0x80]
                    sub_142a49990(arg1 + 0x10, rdi.d, rbx_1, &_String, 0x80)
                    int64_t rax_11 = -1
                    
                    do
                        rax_11 += 1
                    while (_String[rax_11] != 0)
                    
                    if (rax_11.d s< rbx_1)
                        result = sub_142b77300(arg1, arg6, rdi.d)
                        *arg7 = 0x10107
                    else
                        char* _EndPtr
                        strtod(&_String, &_EndPtr)
                        
                        if (_EndPtr == &_String[sx.q(rbx_1)])
                            var_e8.q = arg7
                            result = sub_142b74c00(arg1, arg5, rdi.d, rbx_1.w, var_e8)
                        else
                            result = sub_142b77300(arg1, arg6, rdi.d)
                            *arg7 = 0x10107
            else
                int64_t r9_1 = sx.q(r8)
                
                while (true)
                    if (rdx u> 0x39)
                        goto label_142b76608
                    
                    rsi_1 = zx.q(zx.d(rdx) - 0x30 + ((rsi_1 * 5).d << 1))
                    
                    if (rsi_1.d s> rbp_1 + 0x7fff)
                        goto label_142b76608
                    
                    if (r9_1 == rbx)
                        int32_t var_e0
                        var_e0.q = arg7
                        int16_t rax_14 = (neg.d(rsi_1.d)).w
                        
                        if (rbp_1 == 0)
                            rax_14 = rsi_1.w
                        
                        result = sub_142b74dc0(arg1, 0xc, rdi.d, rbx.w - rdi.w, rax_14, var_e0)
                        break
                    
                    int16_t rcx_6 = *(arg1 + 0x18)
                    int32_t rax_8
                    
                    if (rcx_6 s< 0)
                        rax_8 = *(arg1 + 0x1c)
                    else
                        rax_8 = sx.d(rcx_6) s>> 5
                    
                    int16_t rax_10
                    
                    if (r8 u>= rax_8)
                        rax_10 = -1
                    else
                        void* rax_9 = arg1 + 0x1a
                        
                        if ((rcx_6.b & 2) == 0)
                            rax_9 = *(arg1 + 0x28)
                        
                        rax_10 = *(rax_9 + (r9_1 << 1))
                    
                    r8 += 1
                    r9_1 += 1
                    rdx = rax_10
                    
                    if (0x30 u> rax_10)
                        goto label_142b76608
        else if (arg4 == 0 || r8 != rbx.d)
            result = sub_142b77300(arg1, arg6, rdi.d)
            *arg7 = 0x10107
        else
            arg5 = sub_142a4bba0()
            
            if (rbp_1 != 0)
                arg5 ^= data_142d8e3c0
            
            var_e8.q = arg7
            result = sub_142b74c00(arg1, arg5, rdi.d, (rbx.d - rdi.d).w, var_e8)
    else
        rbp_1 = 1
    label_142b76503:
        
        if (r8 != rbx.d)
            int16_t rcx_2 = *(arg1 + 0x18)
            int32_t rax_4
            
            if (rcx_2 s< 0)
                rax_4 = *(arg1 + 0x1c)
            else
                rax_4 = sx.d(rcx_2) s>> 5
            
            if (r8 u>= rax_4)
                rdx = -1
            else
                void* rcx_3 = arg1 + 0x1a
                
                if ((rcx_2.b & 2) == 0)
                    rcx_3 = *(arg1 + 0x28)
                
                rdx = *(rcx_3 + (sx.q(r8) << 1))
            
            r8 += 1
            goto label_142b7654a
        
        result = sub_142b77300(arg1, arg6, rdi.d)
        *arg7 = 0x10107

__security_check_cookie(result_1 ^ &var_108)
return result
