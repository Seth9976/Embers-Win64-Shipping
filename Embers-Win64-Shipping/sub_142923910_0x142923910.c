// 函数: sub_142923910
// 地址: 0x142923910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* rdi = arg5
int32_t* var_a8 = rdi
int32_t rbx = 0
int64_t* rax_2 = sub_142891ee0()
int32_t r13 = -1
void var_98

if (rax_2 != 0)
    int32_t rax_3 = sub_1428916c0(rdi)
    
    if (rax_3 s>= 0)
        int32_t rbp_1 = 0
        
        if (arg2 s> 0)
            do
                char var_b5_1 = rbp_1.b
                char var_b7_1 = (rbp_1 s>> 0x10).b
                char var_b8 = (rbp_1 s>> 0x18).b
                char var_b6_1 = (rbp_1 s>> 8).b
                
                if (sub_1428919c0(rax_2, rdi, nullptr) == 0)
                    goto label_142923a7b
                
                if (sub_142891c10(rax_2, arg3, sx.q(arg4)) == 0)
                    goto label_142923a7b
                
                if (sub_142891c10(rax_2, &var_b8, 4) == 0)
                    goto label_142923a7b
                
                int32_t rdi_1 = rax_3 + rbx
                
                if (rdi_1 s> arg2)
                    if (sub_1428918e0(rax_2, &var_98, nullptr) == 0)
                        goto label_142923a7b
                    
                    memcpy(sx.q(rbx) + arg1, &var_98, arg2 - rbx)
                    rbx = arg2
                else
                    if (sub_1428918e0(rax_2, sx.q(rbx) + arg1, nullptr) == 0)
                        goto label_142923a7b
                    
                    rbx = rdi_1
                
                rdi = var_a8
                rbp_1 += 1
            while (rbx s< arg2)
        
        r13 = 0

label_142923a7b:
sub_1428b8960(&var_98, 0x40)
sub_142891ea0(rax_2)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(r13)
