// 函数: sub_141bdb410
// 地址: 0x141bdb410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, arg2)
int32_t i = 0

if (*(arg1 + 0x40) s> 0)
    do
        int64_t rsi_1 = sx.q(i) << 3
        
        if (sub_14077a170(*(arg1 + 0x38) + rsi_1, &arg_10) != 0)
            int32_t rdx_1 = *(arg1 + 0x40)
            int32_t rax_5 = rdx_1 - i - 1
            
            if (rax_5 s>= 1)
                rax_5 = 1
            
            if (rax_5 != 0)
                int64_t rcx_3 = *(arg1 + 0x38)
                memcpy(rcx_3 + rsi_1, rcx_3 + (sx.q(rdx_1 - rax_5) << 3), rax_5 << 3)
                rdx_1 = *(arg1 + 0x40)
            
            *(arg1 + 0x40) = rdx_1 - 1
            sub_1405c53d0(arg1 + 0x38)
            i -= 1
        
        i += 1
    while (i s< *(arg1 + 0x40))

int64_t* rbx_1 = *(arg1 + 0x30)
int64_t* rax = rbx_1

if (rbx_1 != 0)
    int32_t rax_8 = rbx_1[1].d
    
    if (rax_8 == 0)
        rbx_1 = nullptr
        rax = nullptr
    else
        rbx_1[1].d = rax_8 + 1
        rax = rbx_1

if (rax != 0)
    void* rdi_1 = *(arg1 + 0x28)
    
    if (rdi_1 != 0)
        sub_140d3a3a0(&arg_10, arg2)
        int64_t arg_18 = arg_10
        sub_1405ba8e0(rdi_1 + 0x3b0, &arg_10, &arg_18)
        int64_t rax_11 = sx.q(arg_10.d)
        
        if (rax_11.d == 0xffffffff)
            rax = nullptr
        else
            rax = rax_11 * 0x50 + *(rdi_1 + 0x3b0)
        
        void* rdx_6 = &rax[1]
        
        if (rax == 0)
            rdx_6 = nullptr
        
        if (rdx_6 != 0 && *rdx_6 == 0)
            sub_141bdb5f0(rdi_1, rdx_6)
            sub_140d3a3a0(&arg_10, arg2)
            arg_10 = arg_10
            sub_141bdb040(rdi_1 + 0x3b0, &arg_10)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
