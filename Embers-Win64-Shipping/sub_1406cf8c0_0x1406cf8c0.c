// 函数: sub_1406cf8c0
// 地址: 0x1406cf8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t rbp = sx.q(arg2)
int32_t i_1

if (arg2 s>= 0)
    i_1 = arg1[1].d

if (arg2 s< 0 || rbp.d s> i_1 - 1)
    int32_t i_5 = arg1[1].d
    int64_t* rbx_3 = *arg1
    
    if (i_5 != 0)
        int32_t i
        
        do
            int64_t rcx_12 = *rbx_3
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            rbx_3 = &rbx_3[2]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
label_1406cfb07:
    int64_t rcx_13 = *arg1
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    return 

if (arg3 s< 1 || arg3 s> i_1 - 1)
    if (rbp.d s< i_1)
        int64_t r15_7 = rbp << 4
        
        do
            int64_t* r13_3 = *arg1
            int64_t rdi_7 = sx.q(arg4[1].d)
            int32_t rax = (rdi_7 + 1).d
            arg4[1].d = rax
            
            if (rax s> *(arg4 + 0xc))
                sub_1405a4f90(arg4)
            
            int64_t* rdi_9 = (rdi_7 << 4) + *arg4
            int64_t* var_38_3 = rdi_9
            *rdi_9 = 0
            int32_t r12_2 = *(r13_3 + r15_7 + 8)
            int64_t r13_4 = *(r13_3 + r15_7)
            rdi_9[1].d = r12_2
            
            if (r12_2 != 0)
                sub_1405a4c70(rdi_9, r12_2, 0)
                memcpy(*rdi_9, r13_4, r12_2 * 2)
            else
                *(rdi_9 + 0xc) = 0
            
            rbp = zx.q(rbp.d + 1)
            r15_7 += 0x10
            i_1 = arg1[1].d
        while (rbp.d s< i_1)
    
    int64_t* rbx_2 = *arg1
    
    if (i_1 != 0)
        int32_t i_2
        
        do
            int64_t rcx_11 = *rbx_2
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rbx_2 = &rbx_2[2]
            i_2 = i_1
            i_1 -= 1
        while (i_2 != 1)
    
    goto label_1406cfb07

if (rbp.d s> arg3)
    sub_140597000(arg1)
else if (rbp.d != arg3)
    int64_t rbp_2 = sx.q(arg3)
    
    if (rbp u< rbp_2)
        int64_t r15_5 = rbp << 4
        int64_t i_4 = rbp_2 - rbp
        int64_t i_3
        
        do
            int64_t* r13_1 = *arg1
            int64_t rdi_4 = sx.q(arg4[1].d)
            int32_t rax_3 = (rdi_4 + 1).d
            arg4[1].d = rax_3
            
            if (rax_3 s> *(arg4 + 0xc))
                sub_1405a4f90(arg4)
            
            int64_t* rdi_6 = (rdi_4 << 4) + *arg4
            int64_t* var_38_2 = rdi_6
            *rdi_6 = 0
            int32_t r12_1 = *(r13_1 + r15_5 + 8)
            int64_t r13_2 = *(r13_1 + r15_5)
            rdi_6[1].d = r12_1
            
            if (r12_1 != 0)
                sub_1405a4c70(rdi_6, r12_1, 0)
                memcpy(*rdi_6, r13_2, r12_1 * 2)
            else
                *(rdi_6 + 0xc) = 0
            
            r15_5 += 0x10
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
    
    sub_140597000(arg1)
else
    int64_t* r15_3 = (sx.q(arg3) << 4) + *arg1
    int64_t rdi_1 = sx.q(arg4[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg4[1].d = rax_1
    
    if (rax_1 s> *(arg4 + 0xc))
        sub_1405a4f90(arg4)
    
    int64_t* rdi_3 = (rdi_1 << 4) + *arg4
    int64_t* var_38_1 = rdi_3
    *rdi_3 = 0
    int32_t rbx_1 = r15_3[1].d
    int64_t rbp_1 = *r15_3
    rdi_3[1].d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(rdi_3, rbx_1, 0)
        memcpy(*rdi_3, rbp_1, rbx_1 * 2)
    else
        *(rdi_3 + 0xc) = 0
    
    sub_140597000(arg1)
