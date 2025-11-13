// 函数: sub_140da74c0
// 地址: 0x140da74c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)
int64_t* r15 = arg2

if (rax.d == 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void* rcx = nullptr
int32_t r8 = 0
int32_t arg_8 = 0
int32_t rax_10

if (rax s<= 0)
label_140da7640:
    rax_10 = arg5
else
    void* rax_2 = nullptr
    int64_t var_78_1 = 0
    void* var_70_1 = nullptr
    int64_t r9 = 0
    
    while (true)
        int64_t rcx_1 = *arg1
        void* rdx = rax_2 + rcx_1
        
        if (*(rdx + 0x21) != 0)
            int32_t rbx_1 = r8 + 1
            int32_t r14_1 = 0
            int32_t r13_1 = 0
            void* rdi_1 = rax_2
            
            while (true)
                void* rbp_1 = rdi_1 + rcx_1
                void var_58
                sub_140da9d40(arg3, &var_58, rbp_1, &data_143e20dd8)
                int32_t rcx_3 = sx.d(*(rbp_1 + 0x18))
                r13_1 += rcx_3
                int16_t var_56
                r14_1 += sx.d(var_56) + rcx_3
                
                if (rbx_1 s< 0)
                    break
                
                if (rbx_1 s>= arg1[1].d)
                    break
                
                rcx_1 = *arg1
                rdi_1 += 0x68
                
                if (*(rbp_1 + 0x14) != *(rdi_1 + rcx_1 + 0x14))
                    break
                
                rbx_1 += 1
            
            rcx = rdx
            r15 = arg2
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r14_1)
            
            if (*(rcx + 0x22) u<= 1)
                r14_1 = (temp1_1 - temp0_1) s>> 1
            
            rax_10 = arg5
            
            if (arg4 s< r14_1 + rax_10)
                break
            
            r8 = arg_8
            r9 = var_78_1
            arg5 = rax_10 + r13_1
            rax_2 = var_70_1
        
        r8 += 1
        r9 += 1
        rax_2 += 0x68
        arg_8 = r8
        var_78_1 = r9
        var_70_1 = rax_2
        
        if (r9 s>= rax)
            rcx = nullptr
            goto label_140da7640_1
    
    if (*(rcx + 0x23) != 0)
        if (arg_8 - 1 s>= 0 && arg_8 - 1 s< arg1[1].d)
            rcx = sx.q(arg_8 - 1) * 0x68 + *arg1
        
    label_140da7640_1:
        rax_10 = arg5

int32_t rax_12

if (rcx == 0)
    char rdx_3 = *(sx.q(arg1[1].d) * 0x68 + *arg1 - 0x45)
    *r15 = 0
    r15[1].d = 0
    
    if (rdx_3 != 0)
        rax_12 = arg1[0xb].d
    else
        rax_12 = *(arg1 + 0x5c) + arg1[0xb].d
else
    r15[1].d = rax_10
    rax_12 = *(rcx + 0x14)
    *r15 = rcx

*(r15 + 0xc) = rax_12
return r15
