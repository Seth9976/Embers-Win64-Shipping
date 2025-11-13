// 函数: sub_141828940
// 地址: 0x141828940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1
int64_t* rax_1 = arg1[1]
int64_t* rdi_3

if (rax_1 == 0 || **arg2 u>= *rax_1)
    int64_t rdi_2 = sx.q(arg1[3].d)
    int32_t rax_15 = rdi_2.d + arg4
    arg1[3].d = rax_15
    
    if (rax_15 s> *(arg1 + 0x1c))
        sub_1405daba0(&arg1[2])
    
    memcpy(rdi_2 + arg1[2], arg3, arg4)
    rdi_3 = arg1
else
    int64_t r12_1 = 0
    int32_t rsi_1 = 0
    int32_t rdx_1 = arg1[3].d + arg4
    int64_t var_80 = 0
    int64_t var_78_1 = 0
    
    if (rdx_1 s> 0)
        sub_1405c5510(&var_80, rdx_1)
        r8 = arg1
        rsi_1 = var_78_1.d
        r12_1 = var_80
    
    int64_t* i = *r8
    void* r14_1 = nullptr
    int32_t rcx_1 = 0
    int32_t rbx = 0
    void* var_70 = nullptr
    int64_t r13_1 = 0
    int32_t var_64_1 = 0
    
    for (; i != 0; i = i[3])
        int64_t rax_2 = *i
        int64_t rax_3 = i[1]
        int64_t r15_1 = sx.q(rbx)
        int64_t var_48_1 = r8[2]
        rbx = (r15_1 + 1).d
        int64_t var_58_1 = r13_1
        
        if (rbx s> rcx_1)
            sub_1405c4e40(&var_70)
            rcx_1 = var_64_1
            r8 = arg1
            r14_1 = var_70
        
        int64_t rax_6 = r15_1 << 5
        *(rax_6 + r14_1) = rax_2.o
        *(rax_6 + r14_1 + 0x10) = rax_3.o
        r13_1 += i[1]
    
    int64_t r13_2 = 0
    int64_t* i_1 = *arg2
    
    if (i_1 != 0)
        do
            int64_t rax_7 = *i_1
            int64_t r15_2 = sx.q(rbx)
            int64_t rax_8 = i_1[1]
            int64_t var_58_2 = r13_2
            rbx = (r15_2 + 1).d
            int64_t var_48_2 = arg3
            
            if (rbx s> rcx_1)
                sub_1405c4e40(&var_70)
                rcx_1 = var_64_1
                r14_1 = var_70
            
            int64_t rax_10 = r15_2 << 5
            *(rax_10 + r14_1) = rax_7.o
            *(rax_10 + r14_1 + 0x10) = rax_8.o
            r13_2 += i_1[1]
            i_1 = i_1[3]
        while (i_1 != 0)
        
        rsi_1 = var_78_1.d
    
    sub_14181b9c0(r14_1, rbx, 0, arg1.b)
    void* i_2 = (sx.q(rbx) << 5) + r14_1
    
    if (r14_1 != i_2)
        void* rbx_1 = r14_1 + 8
        int32_t r14_2 = var_78_1:4.d
        
        do
            uint32_t count = *(rbx_1 + 8)
            int64_t r15_4 = *(rbx_1 + 0x10) + *rbx_1
            int64_t rdi_1 = sx.q(rsi_1)
            rsi_1 = rdi_1.d + count
            var_78_1.d = rsi_1
            
            if (rsi_1 s> r14_2)
                sub_1405daba0(&var_80)
                rsi_1 = var_78_1.d
                r12_1 = var_80
                r14_2 = var_78_1:4.d
            
            memcpy(r12_1 + rdi_1, r15_4, count)
            rbx_1 += 0x20
        while (rbx_1 - 8 != i_2)
        
        r14_1 = var_70
    
    rdi_3 = arg1
    
    if (&rdi_3[2] != &var_80)
        int64_t rcx_7 = rdi_3[2]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rdi_3[2] = r12_1
        r12_1 = 0
        rdi_3[3].d = rsi_1
        *(rdi_3 + 0x1c) = var_78_1:4.d
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

return sub_1418283e0(rdi_3, arg2, 0) __tailcall
