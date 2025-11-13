// 函数: sub_142bdb360
// 地址: 0x142bdb360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)
int32_t rsi
rsi.b = arg2 != 0
int32_t* r13 = &arg1[(r8 * 9 + 6) * 2]
int32_t rsi_1 = rsi + 1
int32_t* rax_2 = *(r13 + 0x38)
void* rdi = *(rax_2 + 8)
int32_t r15 = *rax_2
uint32_t rbp = sub_142b91790(0x20, *((r8 + 1) * 0xcc + *(arg1 + 0x28)))

if (rbp s> 0x1e)
    rbp = 0x1e

bool cond:0 = r15 != 1

if (r15 u> 1)
    int32_t rax_6 = *arg1
    
    if (rax_6 != 0)
        int32_t rsi_2 = *(rdi + 0x10)
        uint64_t i_3 = zx.q(r15 - 1)
        
        if (rsi_2 u> rax_6)
            rsi_2 = rax_6
        
        void* rdi_1 = rdi + 0x18
        uint64_t i
        
        do
            int32_t* rdx_1 = arg1
            
            if (*(rdi_1 + 0x10) u< *arg1)
                rdx_1 = rdi_1 + 0x10
            
            int32_t rbp_1 = *rdx_1
            
            if (rbp_1 u> rsi_2)
                void* rbx_3 = (zx.q(rsi_2) << 6) + *(arg1 + 8)
                sub_142bdc1a0(r13, rdi_1)
                sub_142bdc650(r13, rbx_3, rbp_1 - rsi_2, rbp, rsi_1)
            
            r15 -= 1
            rdi_1 += 0x18
            rsi_2 = rbp_1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    cond:0 = r15 != 1

if (not(cond:0))
    int32_t rbx_4 = *arg1
    void* rdi_2 = *(arg1 + 8)
    sub_142bdc1a0(r13, *(*(r13 + 0x38) + 8))
    sub_142bdc650(r13, rdi_2, rbx_4, rbp, rsi_1)

int32_t i_2 = *arg1
int32_t* result = *(arg1 + 8)

if (i_2 != 0)
    result = &result[7]
    int32_t i_1
    
    do
        if (*(result + 0xc) != 0)
            int32_t rcx_6 = *result
            
            if ((rcx_6.b & 0x10) == 0)
                *result = rcx_6 | 0x10
        
        result = &result[0x10]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
