// 函数: sub_142917400
// 地址: 0x142917400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t result_1 = 0
int64_t rbp = 0
int64_t r9
int64_t var_b0 = r9
int64_t rdx = 0
int64_t r14 = sx.q(sub_1428916c0(arg1))
uint64_t i_1 = divu.dp.q(rdx:arg6, r14)
uint64_t i = i_1 + 1

if (modu.dp.q(rdx:arg6, r14) == 0)
    i = i_1

int64_t result

if (i u> 0xff || arg5 == 0)
    result = 0
else
    int64_t* rax_5 = sub_1428be080()
    
    if (rax_5 == 0)
        result = 0
    else
        void var_98
        
        if (sub_1428be280(rax_5, arg2, arg3, arg1, nullptr) != 0)
            int32_t rsi_1 = 1
            
            if (i u>= 1)
                do
                    char var_c8_1 = rsi_1.b
                    
                    if (rsi_1 u> 1)
                        if (sub_1428be280(rax_5, 0, 0, nullptr, nullptr) == 0)
                            goto label_142917590
                        
                        if (sub_1428be4d0(rax_5) == 0)
                            goto label_142917590
                    
                    if (sub_1428be4d0(rax_5) == 0)
                        goto label_142917590
                    
                    if (sub_1428be4d0(rax_5) == 0)
                        goto label_142917590
                    
                    if (sub_1428be1d0(rax_5, &var_98, nullptr) == 0)
                        goto label_142917590
                    
                    int64_t rdi_1 = arg6 - rbp
                    
                    if (r14 + rbp u<= arg6)
                        rdi_1 = r14
                    
                    memcpy(arg5 + rbp, &var_98, rdi_1.d)
                    rsi_1 += 1
                    rbp += rdi_1
                while (zx.q(rsi_1) u<= i)
            
            result_1 = arg5
        
    label_142917590:
        sub_1428b8960(&var_98, 0x40)
        sub_1428be000(rax_5)
        result = result_1

__security_check_cookie(rax_1 ^ &var_f8)
return result
