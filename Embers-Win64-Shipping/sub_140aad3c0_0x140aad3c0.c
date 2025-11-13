// 函数: sub_140aad3c0
// 地址: 0x140aad3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char r9
char rdi = r9
sub_140a54810()
void* rsi = *arg3
int32_t r15 = 0
void* r13_2 = (sx.q(arg3[1].d) << 6) + rsi

if (rsi != r13_2)
    void* rdi_1 = rsi + 0x28
    
    do
        int64_t* rbx_1 = *(rdi_1 - 8)
        int64_t* r15_1 = *(rdi_1 - 0x10)
        int64_t* var_60 = r15_1
        int32_t var_70_1 = 4
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t var_50_1 = *rdi_1
        char var_48_1 = 1
        sub_140abd990(&var_60)
        int32_t rcx_2 = *((*(*r15_1 + 0x10))(r15_1) + 8)
        int32_t rax_5 = r15
        r15 = rax_5 - 1 + rcx_2
        
        if (rcx_2 == 0)
            r15 = rax_5
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_8 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi += 0x40
        rdi_1 += 0x40
    while (rsi != r13_2)
    
    rdi = r9

int32_t var_a0 = 4
sub_1405d9400()
int64_t var_90 = data_143cd6fd8
int64_t* rcx_6 = data_143cd6fe0

if (rcx_6 != 0)
    rcx_6[1].d += 1

int32_t var_80 = data_143cd6fe8
int32_t* var_d8 = &var_a0
int32_t** var_a8 = &var_d8
int64_t (* var_c8)(int64_t* arg1, int64_t* arg2, int32_t* arg3) = sub_140aa3c10
int64_t* var_b0
int64_t** var_c0 = &var_b0
char var_b3 = arg4
char var_78 = 1
var_b0 = arg3
int32_t var_b8 = r15
char var_b4 = rdi
sub_140aacb40(arg1, arg2, &var_c8)

if (var_78 != 0)
    char var_78_1 = 0
    
    if (rcx_6 != 0)
        rcx_6[1].d -= 1
        
        if (rcx_6[1].d == 1)
            (**rcx_6)(rcx_6)
            int32_t r14_1 = *(rcx_6 + 0xc)
            *(rcx_6 + 0xc) -= 1
            
            if (r14_1 == 1)
                int64_t r8_2 = *rcx_6
                (*(r8_2 + 8))(rcx_6, zx.q(r14_1), r8_2)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
