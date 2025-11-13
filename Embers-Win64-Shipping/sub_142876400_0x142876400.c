// 函数: sub_142876400
// 地址: 0x142876400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2

if (arg3 != 0x101)
    rax_2 = sub_1428736e0(arg2)

int64_t result
int64_t var_38

if (arg3 != 0x101 && rax_2 == 0)
    result = 0
else if (sub_142873820(arg2, &var_38) == 0)
    result = 0
else
    int64_t rax_4 = var_38
    
    if (rax_4 u> 0x7fffffff)
        result = 0
    else
        if (arg3 != 0x101)
            *(*(arg1 + 0xb0) + 0x140) = rax_4 - 0xc
            *(*(arg1 + 0xb0) + 0x158) = var_38 - 0xc
            rax_4 = var_38
        
        int64_t rcx_5 = sx.q(rax_4.d)
        *(arg1 + 0x98) = rcx_5
        *(arg1 + 0xa0) = 0
        
        if (arg3 == 3)
            result = 1
        else
            int32_t rbp_1
            rbp_1.b = arg3 == 0x101
            char* rax_7 = sub_142876c40(rcx_5, 0)
            
            if (rax_7 == 0)
                result = 0
            else
                memcpy(*(rax_7 + 0x58), *(*(arg1 + 0x88) + 8), (*(arg1 + 0x98)).d)
                int64_t rdx_4 = *(*(arg1 + 0xb0) + 0x140)
                
                if (arg3 == 0x101)
                    int64_t rcx_7 = 1
                    
                    if (*arg1 == 0x100)
                        rcx_7 = 3
                    
                    if (rcx_7 + rdx_4 == zx.q(*(arg1 + 0x98)))
                        goto label_142876558
                    
                    result = 0
                else if (rdx_4 + 0xc != zx.q(*(arg1 + 0x98)))
                    result = 0
                else
                label_142876558:
                    *(rax_7 + 8) = rdx_4
                    *(rax_7 + 0x10) = *(*(arg1 + 0xb0) + 0x148)
                    *rax_7 = *(*(arg1 + 0xb0) + 0x138)
                    *(rax_7 + 0x18) = 0
                    int64_t rcx_14 = *(*(arg1 + 0xb0) + 0x140)
                    *(rax_7 + 0x28) = rbp_1
                    *(rax_7 + 0x20) = rcx_14
                    *(rax_7 + 0x30) = *(arg1 + 0x460)
                    *(rax_7 + 0x38) = *(arg1 + 0x478)
                    *(rax_7 + 0x40) = *(arg1 + 0x450)
                    *(rax_7 + 0x48) = *(arg1 + 0x508)
                    *(rax_7 + 0x50) = *(*(arg1 + 0x16b0) + 2)
                    int64_t var_30 = 0
                    var_30:6.b = ((zx.d(*(rax_7 + 0x10)) * 2 - *(rax_7 + 0x28)) s>> 8).b
                    var_30:7.b = rax_7[0x10] * 2 - rax_7[0x28]
                    int64_t* rax_23 = sub_142885630(&var_30, rax_7)
                    
                    if (rax_23 != 0)
                        sub_142885740(*(*(arg1 + 0xb0) + 0x120), rax_23)
                        result = 1
                    else
                        sub_142876bc0(rax_7)
                        result = 0
__security_check_cookie(rax_1 ^ &var_58)
return result
