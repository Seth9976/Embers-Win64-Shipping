// 函数: sub_141f6d360
// 地址: 0x141f6d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x430)

if (rcx == 0)
    return 

int64_t var_28
sub_1423118a0(rcx, &var_28)
int32_t i = 0
int32_t rbx_1 = 0
int32_t var_20

if (var_20 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* r14_1 = *(rsi_1 + var_28)
        
        if (r14_1 != 0)
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_2 = (rbp_1 + 1).d
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_14083a7e0(arg2)
            
            int64_t* rdx_2 = *arg2 + rbp_1 * 0xc
            
            if (rdx_2 != 0)
                *rdx_2 = *(r14_1 + 0x28)
                rdx_2[1].b = 2
        
        rbx_1 += 1
        rsi_1 = &rsi_1[1]
    while (rbx_1 s< var_20)

void* rax = *(arg1 + 0x430)

if (*(rax + 0x1b0) s> 0)
    int64_t* r14_2 = nullptr
    
    do
        int64_t rsi_2 = sx.q(arg2[1].d)
        int64_t rbx_3 = *(r14_2 + *(rax + 0x1a8))
        int32_t rax_5 = (rsi_2 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_14083a7e0(arg2)
        
        int64_t* rdx_4 = *arg2 + rsi_2 * 0xc
        
        if (rdx_4 != 0)
            *rdx_4 = rbx_3
            rdx_4[1].b = 1
        
        rax = *(arg1 + 0x430)
        i += 1
        r14_2 += 0xc
    while (i s< *(rax + 0x1b0))

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)
