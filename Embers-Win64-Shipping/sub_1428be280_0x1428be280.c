// 函数: sub_1428be280
// 地址: 0x1428be280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t result_1 = 0
int32_t* rax_2 = *arg1
int32_t* rbp = arg4
int64_t rdi = sx.q(arg3)
int32_t r15 = 0
uint64_t result

if (arg4 != 0)
    if (arg4 == rax_2 || (arg2 != 0 && arg3 s>= 0))
        r15 = 1
        *arg1 = arg4
        goto label_1428be2f1
    
    result = 0
else if (rax_2 == 0)
    result = 0
else
    rbp = rax_2
label_1428be2f1:
    
    if (arg2 == 0)
        char var_e8[0x90]
        
        if (r15 == 0)
        label_1428be49e:
            
            if (sub_142891c70(arg1[1], arg1[2]) != 0)
                result_1 = 1
        else
        label_1428be3c7:
            void* rax_9 = arg1 - &var_e8
            
            for (int64_t i = 0; i s< 0x90; )
                void* rcx_10 = &var_e8[i]
                i += 2
                *rcx_10 = *(rax_9 + 0x24 + rcx_10) ^ 0x36
                *(rcx_10 + 1) = *(rax_9 + 0x25 + rcx_10) ^ 0x36
            
            if (sub_1428919c0(arg1[2], rbp, arg5) != 0)
                int32_t rax_13 = sub_1406bc1c0(rbp)
                
                if (sub_142891c10(arg1[2], &var_e8, sx.q(rax_13)) != 0)
                    for (int64_t i_1 = 0; i_1 s< 0x90; )
                        void* rcx_14 = &var_e8[i_1]
                        i_1 += 2
                        *rcx_14 = *(rax_9 + 0x24 + rcx_14) ^ 0x5c
                        *(rcx_14 + 1) = *(rax_9 + 0x25 + rcx_14) ^ 0x5c
                    
                    if (sub_1428919c0(arg1[3], rbp, arg5) != 0)
                        int32_t rax_18 = sub_1406bc1c0(rbp)
                        
                        if (sub_142891c10(arg1[3], &var_e8, sx.q(rax_18)) != 0)
                            goto label_1428be49e
        
        if (r15 != 0)
            sub_1428b8960(&var_e8, 0x90)
        
        result = zx.q(result_1)
    else
        r15 = 1
        int32_t rax_3 = sub_1406bc1c0(rbp)
        
        if (rax_3 s> 0x90)
            result = 0
        else
            int32_t* rsi_1
            
            if (rax_3 s>= rdi.d)
                if (rdi.d u<= 0x90)
                    memcpy(arg1 + 0x24, arg2, rdi.d)
                    rsi_1 = &arg1[4]
                    *rsi_1 = rdi.d
                label_1428be391:
                    int32_t rcx_7 = *rsi_1
                    
                    if (rcx_7 != 0x90)
                        memset(arg1 + 0x24 + zx.q(rcx_7), 0, zx.q(0x90 - rcx_7))
                    
                    goto label_1428be3c7
                
                result = 0
            else if (sub_1428919c0(arg1[1], rbp, arg5) == 0)
                result = 0
            else if (sub_142891c10(arg1[1], arg2, rdi) == 0)
                result = 0
            else
                rsi_1 = &arg1[4]
                
                if (sub_1428918e0(arg1[1], arg1 + 0x24, rsi_1) != 0)
                    goto label_1428be391
                
                result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
