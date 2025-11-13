// 函数: sub_140d90c10
// 地址: 0x140d90c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char var_180 = arg4
int32_t var_4c = 4
int32_t rsi = 0
void* var_58 = nullptr
int32_t var_50 = 0
char var_48 = 1
sub_140de8410(*(arg2 + 0x38), arg5, &var_180)
void var_178
char rbx

if (var_50 s<= 0)
label_140d90cfe:
    rbx = 0
else
    int64_t rbp_1 = 0
    
    while (true)
        void* r15_1 = &var_178
        
        if (var_58 != 0)
            r15_1 = var_58
        
        void* r15_2 = r15_1 + rbp_1
        int64_t* rdi_1 = *(r15_2 + 0x40)
        int64_t r12_1 = *(r15_2 + 0x38)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t r14_1 = *arg1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (r14_1 != r12_1 && sub_140d90c10(arg1, r15_2, arg3, zx.q(arg4), arg3) == 0)
            rsi += 1
            rbp_1 += 0x48
            
            if (rsi s>= var_50)
                goto label_140d90cfe
            
            continue
        
        sub_140d99900(arg3, r15_2)
        rbx = 1
        break

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(rbx)
