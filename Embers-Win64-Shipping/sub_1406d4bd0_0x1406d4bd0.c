// 函数: sub_1406d4bd0
// 地址: 0x1406d4bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* r13 = arg2
int32_t r15 = 0
int32_t var_58 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_58_1 = 1
int32_t r12 = 0x270f
int64_t* i = *arg2
uint64_t var_50
uint64_t* arg_18

for (void* rbp_2 = &i[sx.q(arg2[1].d) * 2]; i != rbp_2; i = &i[2])
    arg_18 = &var_50
    uint64_t rcx = 0
    var_50 = 0
    int32_t rbx_1 = i[1].d
    int64_t r14_1 = *i
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_50, rbx_1, 0)
        memcpy(var_50, r14_1, rbx_1 * 2)
        rcx = var_50
    else
        int32_t var_44_1 = 0
    
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    if (rbx_2 s< r12)
        r12 = rbx_2
    
    if (rcx != 0)
        sub_140a74f90(rcx)

if (r12 s> 0)
    do
        int64_t* rbx_3 = *r13
        void* r14_4 = &rbx_3[sx.q(r13[1].d) * 2]
        
        if (rbx_3 != r14_4)
            do
                arg_18 = &var_50
                uint64_t rcx_3 = 0
                var_50 = 0
                int32_t rdi = rbx_3[1].d
                int64_t rbp_3 = *rbx_3
                
                if (rdi != 0)
                    sub_1405a4c70(&var_50, rdi, 0)
                    memcpy(var_50, rbp_3, rdi * 2)
                    rcx_3 = var_50
                else
                    int32_t var_44_2 = 0
                
                int32_t rdi_1
                
                if (rdi == 0)
                    rdi_1 = 0
                else
                    rdi_1 = rdi - 1
                
                int16_t rdi_3 = *(rcx_3 + (sx.q(rdi_1 - r15) << 1) - 2)
                
                if (rdi_3 != 0)
                    int32_t rdx_4 = arg1[1].d
                    int32_t rbp_4 = rdx_4 - 1
                    
                    if (rdx_4 s<= 0)
                        rbp_4 = 0
                    
                    int32_t rax_2
                    rax_2.b = rdx_4 s<= 0
                    int32_t rax_4 = rax_2 + 1 + rdx_4
                    arg1[1].d = rax_4
                    
                    if (rax_4 s> *(arg1 + 0xc))
                        sub_140594770(arg1)
                    
                    int64_t rcx_7 = sx.q(rbp_4)
                    *(*arg1 + (rcx_7 << 1)) = rdi_3
                    *(*arg1 + (rcx_7 << 1) + 2) = 0
                    rcx_3 = var_50
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rbx_3 = &rbx_3[2]
            while (rbx_3 != r14_4)
            
            r13 = arg2
        
        r15 += 1
    while (r15 s< r12)

int32_t i_2 = r13[1].d
int64_t* rbx_4 = *r13

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_8 = *rbx_4
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t rcx_9 = *r13

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
