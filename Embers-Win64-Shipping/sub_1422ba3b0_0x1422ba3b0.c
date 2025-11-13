// 函数: sub_1422ba3b0
// 地址: 0x1422ba3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 

int32_t rdi_1 = arg2

do
    int64_t rbx_1 = sx.q(arg4[1].d)
    void* rbp_3 = (sx.q(rdi_1) << 5) + *(arg1 + 0x38)
    int32_t rax_1 = (rbx_1 + 1).d
    arg4[1].d = rax_1
    
    if (rax_1 s> *(arg4 + 0xc))
        sub_1405a4f90(arg4)
    
    int64_t rax = *arg4
    int64_t r15_2 = rbx_1 << 4
    *(r15_2 + rax) = rdi_1
    *(r15_2 + rax + 8) = 0
    
    if (*(rbp_3 + 0x1c) == 0)
        int64_t* rax_2 = j_sub_140a82f30(0x10)
        int64_t* rbx_2 = rax_2
        
        if (rax_2 == 0)
            rbx_2 = nullptr
        else
            *rax_2 = 0
            rax_2[1] = 0
        
        int64_t* rdx_3 = *arg4 + 8 + r15_2
        void var_38
        
        if (rdx_3 != &var_38)
            int64_t* r14_1 = *rdx_3
            *rdx_3 = rbx_2
            
            if (r14_1 != 0)
                sub_1422b5180(r14_1)
                j_sub_140a74f90(r14_1)
        else if (rbx_2 != 0)
            sub_1422b5180(rbx_2)
            j_sub_140a74f90(rbx_2)
        
        sub_1422ba3b0(arg1, zx.q(rdi_1 + 1), zx.q(zx.d(*(rbp_3 + 8)) - 1), *(r15_2 + *arg4 + 8))
        rdi_1 = zx.d(*(rbp_3 + 8)) - 1
    
    rdi_1 += 1
while (rdi_1 s< arg3)
