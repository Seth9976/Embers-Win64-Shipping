// 函数: sub_142444b60
// 地址: 0x142444b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x130))
    return 

*(arg1 + 0x130) = arg2

if (arg2 != 0)
    void* rax_1 = sub_141dc9840(arg2)
    
    if (rax_1 != 0)
        void* rax_2 = *(rax_1 + 0x248)
        
        if (rax_2 != 0)
            bool cond:2_1 = *rax_2 != 0
            *(rax_2 + 8) = arg2
            
            if (not(cond:2_1))
                *(sub_1424350b0(arg1, 2) + 8) = arg2

int64_t r14_1 = *(arg1 + 0x130)
int64_t rbp
rbp.b = 0
*(arg1 + 0x5ec) += 1
int32_t rax_4 = *(arg1 + 0x5e0)
int32_t rcx_2 = *(arg1 + 0x5ec)
int64_t rdi_1 = sx.q(rax_4 - 1)

if (rax_4 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_6 = *(arg1 + 0x5d8)
        
        if (*(rbx_2 + rax_6 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_3 = *(rbx_2 + rax_6)
            
            if (rcx_3 == 0)
                rbp.b = 1
            else if ((*(*rcx_3 + 0x50))(rcx_3, r14_1) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_2 = *(arg1 + 0x5ec)

*(arg1 + 0x5ec) = rcx_2 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x5d8, 0)
