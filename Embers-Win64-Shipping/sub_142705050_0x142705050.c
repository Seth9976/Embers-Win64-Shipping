// 函数: sub_142705050
// 地址: 0x142705050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rdx = *(arg1 + 0xe8)

if (rdx == 0 || (*(*arg2 + 0x678))(arg2, rdx + 0xf0).b == 0)
    return 

int64_t rax = *(arg1 + 0xa8)
*(arg1 + 0xf8) = arg2
void* const rsi_1

if (rax != 0)
label_1427050bb:
    rsi_1 = *(rax + 0x120)
    
    if (rsi_1 == 0)
        rsi_1 = nullptr
    else
        void* rax_2 = sub_14269bba0()
        void* rdx_2 = *(rsi_1 + 0x10)
        rax = sx.q(*(rax_2 + 0x38))
        
        if (rax.d s> *(rdx_2 + 0x38))
            rsi_1 = nullptr
        else if (*(*(rdx_2 + 0x30) + (rax << 3)) != rax_2 + 0x30)
            rsi_1 = nullptr
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_1427050bb
    
    rsi_1 = nullptr

int32_t rdi_1 = *(rsi_1 + 0xc8)
int32_t rdi_2 = rdi_1 - 1

if (rdi_1 - 1 s< 0)
    return 

int64_t r14_2 = sx.q(rdi_2) << 4
int64_t r15_1 = r14_2
int32_t temp1_1

do
    int32_t* rbp_2 = *(rsi_1 + 0xc0) + r14_2
    int64_t rax_3
    rax_3.b = arg1 == sub_140d3c6e0(rbp_2)
    
    if (rax_3.b == 0)
        int32_t rbx_2 = rbp_2[3]
        char rax_4 = sub_140b5b8a0(rbp_2[2], 0)
        
        if ((rbx_2 == 0 & rax_4) == 0)
            rax = sub_140d3c740(rbp_2, 1)
        
        if ((rbx_2 == 0 & rax_4) != 0 || rax == 0)
            rax = 1
        else
            rax.b = 0
    
    if (rax_3.b != 0 || rax.b != 0)
        int32_t rdx_8 = *(rsi_1 + 0xc8)
        int32_t rcx_8 = rdx_8 - rdi_2 - 1
        
        if (rcx_8 s>= 1)
            rcx_8 = 1
        
        if (rcx_8 != 0)
            int64_t rax_5 = *(rsi_1 + 0xc0)
            memcpy(r15_1 + rax_5, (sx.q(rdx_8 - rcx_8) << 4) + rax_5, rcx_8 << 4)
            rdx_8 = *(rsi_1 + 0xc8)
        
        *(rsi_1 + 0xc8) = rdx_8 - 1
        sub_1405a5010(rsi_1 + 0xc0)
    
    r15_1 -= 0x10
    r14_2 -= 0x10
    temp1_1 = rdi_2
    rdi_2 -= 1
while (temp1_1 - 1 s>= 0)
