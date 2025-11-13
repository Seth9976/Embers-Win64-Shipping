// 函数: sub_142a89520
// 地址: 0x142a89520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
uint64_t result = __security_cookie ^ &var_1b8
uint64_t result_1 = result
int32_t result_2 = 0
int32_t var_198 = 0

if (*arg4 s<= 0)
    void var_e8
    result = sub_142a4d730(arg1, &var_e8, 0x9d, &var_198)
    int32_t rcx = var_198
    
    if (rcx s> 0 || rcx == 0xffffff84)
        if (arg3 != 0)
            *arg4 = 1
    else
        char var_188[0xa0]
        
        if (result.d s> 0)
            int64_t r15
            r15.b = 1
            void* r14_1 = &var_e8
            char rbp_1 = 1
            void* rsi_1 = nullptr
            
            while (true)
                result = zx.q(*r14_1)
                
                if (result.b == 0x2d || result.b == 0x5f)
                    if (result.b != 0)
                        *r14_1 = 0
                    else
                    label_142a895f5:
                        r15.b = 0
                    
                    if (rsi_1 != 0)
                        if (*rsi_1 != 0)
                            void* rdi_1 = rsi_1
                            
                            do
                                *rdi_1 = sub_142a86220(zx.d(*rdi_1))
                                rdi_1 += 1
                            while (*rdi_1 != 0)
                        
                        int64_t rcx_2 = -1
                        
                        do
                            rcx_2 += 1
                        while (*(rsi_1 + rcx_2) != 0)
                        
                        result = zx.q((rcx_2 - 1).d)
                        
                        if (result.d u> 7)
                            break
                        
                        result = sub_142a89d60(rsi_1, rcx_2.d)
                        
                        if (result.b == 0)
                            break
                        
                        if (rbp_1 != 0)
                            result = sub_142a8a000(rsi_1, 0xffffffff)
                        
                        if (rbp_1 == 0 || result.b == 0)
                            if (result_2 s< 0x9d)
                                result = sx.q(result_2)
                                result_2 += 1
                                var_188[result] = 0x2d
                            
                            if (rbp_1 != 0)
                                if (result_2 s< 0x9d)
                                    result = sx.q(result_2)
                                    result_2 += 1
                                    var_188[result] = 0x78
                                    
                                    if (result_2 s< 0x9d)
                                        result = sx.q(result_2)
                                        result_2 += 1
                                        var_188[result] = 0x2d
                                        
                                        if (result_2 s< 0x9d)
                                            result = memcpy(&var_188[sx.q(result_2)], "lvariant", 
                                                sub_142a92b70(8, 0x9d - result_2))
                                
                                result_2 += 8
                                
                                if (result_2 s< 0x9d)
                                    result = sx.q(result_2)
                                    result_2 += 1
                                    var_188[result] = 0x2d
                                
                                rbp_1 = 0
                            
                            int64_t rdi_2 = -1
                            
                            do
                                rdi_2 += 1
                            while (*(rsi_1 + rdi_2) != 0)
                            
                            if (result_2 s< 0x9d)
                                result = memcpy(&var_188[sx.q(result_2)], rsi_1, 
                                    sub_142a92b70(rdi_2.d, 0x9d - result_2))
                            
                            result_2 += rdi_2.d
                    
                    rsi_1 = nullptr
                else
                    if (result.b == 0)
                        goto label_142a895f5
                    
                    if (rsi_1 == 0)
                        rsi_1 = r14_1
                
                r14_1 += 1
                
                if (r15.b == 0)
                    goto label_142a89735
            
            if (arg3 == 0)
            label_142a89735:
                
                if (*arg4 s<= 0)
                    result = (*(*arg2 + 8))(arg2, &var_188, zx.q(result_2))
            else
                *arg4 = 1
        else if (*arg4 s<= 0)
            result = (*(*arg2 + 8))(arg2, &var_188, zx.q(result_2))

__security_check_cookie(result_1 ^ &var_1b8)
return result
