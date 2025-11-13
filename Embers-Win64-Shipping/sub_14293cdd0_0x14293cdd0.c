// 函数: sub_14293cdd0
// 地址: 0x14293cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rax_2 = sub_142891ee0()
int32_t result_1 = 0
int64_t* r14 = nullptr
uint64_t result

if (rax_2 != 0)
    if (*(arg2 + 0x40) != 0)
        if (sub_14296bb40(rax_2, arg3, *(arg2 + 0x10)) != 0)
            int32_t rax_4
            
            if (*(arg2 + 0x50) != 0)
                rax_4 = sub_14293d0c0(arg2, 0)
            
            if (*(arg2 + 0x50) == 0 || rax_4 != 0)
                int32_t var_88
                void var_78
                
                if (sub_14296c880(arg2) s< 0)
                    int64_t* rax_12 = *(arg2 + 0x50)
                    
                    if (rax_12 == 0)
                        int64_t rax_19 = sub_1428a6730(sx.q(sub_142896de0(*(arg2 + 0x40))))
                        
                        if (rax_19 != 0)
                            int32_t rax_20 = sub_14292e860(rax_2, rax_19, &var_88, *(arg2 + 0x40))
                            
                            if (rax_20 != 0)
                                sub_1428f2e40(*(arg2 + 0x28), rax_19, var_88)
                                result_1 = 1
                            else
                                sub_1428a5670(rax_20 + 0x2e, 0x96, 0x8b, "crypto\cms\cms_sd.c", 
                                    0x25c)
                                sub_1428a6780(rax_19)
                        else
                            sub_1428a5670(0x2e, 0x96, 0x41, "crypto\cms\cms_sd.c", 0x258)
                    else
                        r14 = rax_12
                        
                        if (sub_1428918e0(rax_2, &var_78, &var_88) != 0)
                            int64_t rcx_11 = sx.q(sub_142896de0(*(arg2 + 0x40)))
                            int64_t var_80 = rcx_11
                            int64_t rax_15 = sub_1428a6730(rcx_11)
                            
                            if (rax_15 != 0)
                                int32_t var_98
                                var_98.q = zx.q(var_88)
                                
                                if (sub_1428bda10(r14, rax_15, &var_80, &var_78, var_98) s> 0)
                                    sub_1428f2e40(*(arg2 + 0x28), rax_15, var_80.d)
                                    result_1 = 1
                                else
                                    sub_1428a6780(rax_15)
                            else
                                sub_1428a5670(0x2e, 0x96, 0x41, "crypto\cms\cms_sd.c", 0x24b)
                else if (sub_1428918e0(rax_2, &var_78, &var_88) != 0
                        && sub_14296c830(arg2, 0x33, 4, &var_78, var_88) != 0
                        && sub_14296c830(arg2, 0x32, 6, **(*(arg1 + 8) + 0x10), 0xffffffff) s> 0
                        && sub_14293c920(arg2) != 0)
                    result_1 = 1
    else
        sub_1428a5670(0x2e, 0x96, 0x85, "crypto\cms\cms_sd.c", 0x222)
    
    sub_142891ea0(rax_2)
    sub_1428bcda0(r14)
    result = zx.q(result_1)
else
    sub_1428a5670((rax_2 + 0x2e).d, 0x96, (rax_2 + 0x41).d, "crypto\cms\cms_sd.c", 0x21d)
    result = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
