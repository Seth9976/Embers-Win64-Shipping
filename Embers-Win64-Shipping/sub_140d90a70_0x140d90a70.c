// 函数: sub_140d90a70
// 地址: 0x140d90a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char var_188 = arg4
int32_t var_54 = 4
void* var_60 = nullptr
int32_t var_58 = 0
char var_50 = 1
sub_140de8410(*(arg2 + 0x38), arg5, &var_188)
int32_t rbp = 0
void var_180
char rbx

if (var_58 s<= 0)
label_140d90bbc:
    rbx = 0
else
    int64_t r14_1 = 0
    
    while (true)
        void* r15_1 = &var_180
        
        if (var_60 != 0)
            r15_1 = var_60
        
        void* r15_2 = r15_1 + r14_1
        int64_t* rdi_1 = *(r15_2 + 0x40)
        int64_t* rsi_1 = *(r15_2 + 0x38)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (rsi_1[0x34].d != 0)
            int64_t* rcx_1 = rsi_1[0x33]
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (rsi_1[0x34].d == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = rsi_1[0x33]
                
                rsi_1[0x32].b = (*(*rcx_2 + 0x48))(rcx_2)
        
        char rax_8
        
        if (rsi_1[0x32].b != 0)
            rax_8 = (*(*rsi_1 + 0x198))(rsi_1)
        
        if (rsi_1[0x32].b == 0 || rax_8 == 0)
            rsi_1.b = 0
        else
            rsi_1.b = 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rsi_1.b == 0 && sub_140d90a70(arg1, r15_2, arg3, zx.q(arg4)) == 0)
            rbp += 1
            r14_1 += 0x48
            
            if (rbp s>= var_58)
                goto label_140d90bbc
            
            continue
        
        sub_140d99900(arg3, r15_2)
        rbx = 1
        break

sub_140d94d20(&var_180)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(rbx)
