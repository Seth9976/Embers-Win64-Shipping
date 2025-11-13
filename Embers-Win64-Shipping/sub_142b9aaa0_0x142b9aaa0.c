// 函数: sub_142b9aaa0
// 地址: 0x142b9aaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t r12
r12.b = 0
char var_178 = r12.b
void var_f8
void* rbx = &var_f8
int64_t rax_3 = *arg1
void** const r15 = &data_14367f220
int64_t r12_1 = *(arg6 + 0x18)
void var_a8
void* r14 = &var_a8
void* r13 = &var_a8
int32_t var_188 = 2
void var_d0
void* rbp = &var_d0
int64_t* var_168 = nullptr
int64_t i_5 = 9
int64_t i_3 = 9
int64_t i

do
    *r14 = 0
    void* var_198
    
    if (arg2 == 0)
        *rbx = 0
        var_198 = rbp
        *rbx = (*r15)(arg1, arg2, r12_1, r13, var_198)
    else
        int64_t rax_4 = *(arg2 + 0x20)
        int32_t rdi_1 = 0
        int32_t rax_5
        
        if (rax_4 != 0)
            rax_5 = rax_4(arg2, 0, 0, 0, var_198)
        
        if (rax_4 == 0 || rax_5 == 0)
            *(arg2 + 0xc) = 0
        else
            rdi_1 = 0x55
        
        *rbx = rdi_1
        
        if (rdi_1 == 0)
            var_198 = rbp
            *rbx = (*r15)(arg1, arg2, r12_1, r13, var_198)
    rbp += 4
    r13 += 8
    r14 += 8
    r15 = &r15[2]
    rbx += 4
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t rbp_1 = var_188
void* const rdi_2 = &data_14367f228
char r12_2 = var_178
void* r13_1 = &var_a8
int32_t i_1 = 0
void* const var_180 = &data_14367f228
int64_t r15_1 = 0

do
    if (*rdi_2 - 3 u> 1)
        r14.b = 0
    label_142b9abfa:
        
        if (*(&var_f8 + r15_1) == 0)
            int64_t rax_9 = *r13_1
            int32_t var_138 = 4
            
            if (rax_9 == 0)
                rax_9 = *(arg6 + 0x18)
            
            int64_t var_120_1 = rax_9
            int32_t rax_11 = sub_142b96840(arg1, &var_138, &var_168)
            rbp_1 = rax_11
            
            if (r14.b != 0 && rax_11.b == 0x51)
                r12_2 = 1
            
            if (rax_11 == 0)
                int64_t* rbx_1 = var_168
                int32_t rax_13
                rax_13, arg5 = sub_142b97ac0(arg1, rbx_1, *(&var_d0 + r15_1), arg3, arg5, arg4)
                rbp_1 = rax_13
                
                if (rbx_1 != 0)
                    int64_t rax_14 = rbx_1[5]
                    int64_t rdi_3 = rbx_1[6]
                    
                    if (rax_14 != 0)
                        rax_14(rbx_1)
                    
                    (*(rdi_3 + 0x10))(rdi_3, rbx_1)
                    rdi_2 = var_180
                
                if (rbp_1 == 0)
                    break
                
                if (r14.b != 0)
                    r12_2 = 1
    else
        r14.b = 1
        
        if (r12_2 == 0)
            goto label_142b9abfa
    
    rdi_2 += 0x10
    i_1 += 1
    r13_1 += 8
    var_180 = rdi_2
    r15_1 += 4
while (i_1 u< 9)

void* rbx_2 = &var_a8
int64_t i_4 = 9
int64_t i_2

do
    int64_t rdx_4 = *rbx_2
    
    if (rdx_4 != 0)
        (*(rax_3 + 0x10))(rax_3, rdx_4)
        i_4 = i_5
        *rbx_2 = 0
    
    rbx_2 += 8
    i_2 = i_4
    i_4 -= 1
    i_5 = i_4
while (i_2 != 1)
int32_t rbp_3 = rbp_1

if (rbp_3 != 0)
    rbp_3 = 2

__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(rbp_3)
