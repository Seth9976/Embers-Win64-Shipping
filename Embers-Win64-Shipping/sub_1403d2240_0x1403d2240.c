// 函数: sub_1403d2240
// 地址: 0x1403d2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s> 5)
    return 

uint64_t rsi_1 = zx.q(*(arg1 + 0x13))
int64_t r12_1
uint64_t r15_1

if (rsi_1 == 4)
    int32_t r9_2 = *arg1
    r12_1 = sx.q(arg3)
    r15_1 = zx.q(*(&data_1436ae8f0 + (r12_1 << 2)))
    
    if (r15_1.d u< r9_2)
        uint64_t r8_1 = zx.q(*(&data_1436ae910 + (r12_1 << 2)))
        uint32_t rsi_3 = (r15_1 << 2).d
        int32_t rax_2 = 4
        int32_t rbx_2 = 0
        int32_t rdx_5 = r15_1.d
        char* r11_1 = arg2
        
        do
            rbx_2 |= (zx.d(arg2[zx.q(rdx_5) u>> 1]) u>> (not.b(rsi_3.b) & 4) & 0xf) << rax_2.b
            
            if (rax_2 == 0)
                *r11_1 = rbx_2.b
                r11_1 = &r11_1[1]
                rbx_2 = 0
                rax_2 = 4
            else
                rax_2 -= 4
            
            rdx_5 += r8_1.d
            rsi_3 += (r8_1 << 2).d
        while (rdx_5 u< r9_2)
        
        if (rax_2 != 4)
            *r11_1 = rbx_2.b
else if (rsi_1.b == 2)
    int32_t r9_3 = *arg1
    r12_1 = sx.q(arg3)
    r15_1 = zx.q(*(&data_1436ae8f0 + (r12_1 << 2)))
    
    if (r15_1.d u< r9_3)
        int32_t r8_2 = *(&data_1436ae910 + (r12_1 << 2))
        uint32_t rsi_4 = (r15_1 * 2).d
        int32_t rdx_6 = 0
        int32_t rax_3 = 6
        int32_t rbx_7 = r15_1.d
        char* r11_2 = arg2
        
        do
            rdx_6 |= (zx.d(arg2[zx.q(rbx_7) u>> 2]) u>> (not.b(rsi_4.b) & 6) & 3) << rax_3.b
            
            if (rax_3 == 0)
                *r11_2 = rdx_6.b
                r11_2 = &r11_2[1]
                rax_3 = 6
                rdx_6 = 0
            else
                rax_3 -= 2
            
            rbx_7 += r8_2
            rsi_4 += r8_2 * 2
        while (rbx_7 u< r9_3)
        
        if (rax_3 != 6)
            *r11_2 = rdx_6.b
else if (rsi_1.b != 1)
    int32_t rbp_2 = *arg1
    r12_1 = sx.q(arg3)
    r15_1 = zx.q(*(&data_1436ae8f0 + (r12_1 << 2)))
    
    if (r15_1.d u< rbp_2)
        uint64_t rsi_5 = rsi_1 u>> 3
        int32_t rdi_3 = *(&data_1436ae910 + (r12_1 << 2))
        int32_t r12_2 = r15_1.d
        char* rbx_8 = arg2
        
        do
            void* rdx_13 = zx.q(r12_2) * rsi_5 + arg2
            
            if (rbx_8 != rdx_13)
                memcpy(rbx_8, rdx_13, rsi_5.d)
            
            rbx_8 = &rbx_8[rsi_5]
            r12_2 += rdi_3
        while (r12_2 u< rbp_2)
else
    int32_t r9_1 = *arg1
    r12_1 = sx.q(arg3)
    r15_1 = zx.q(*(&data_1436ae8f0 + (r12_1 << 2)))
    
    if (r15_1.d u< r9_1)
        int32_t r8 = *(&data_1436ae910 + (r12_1 << 2))
        int32_t rdx = 0
        int32_t rax_1 = 7
        int32_t rsi_2 = r15_1.d
        char* rbx_1 = arg2
        
        do
            rdx |= (zx.d(arg2[zx.q(rsi_2) u>> 3]) u>> (not.b(rsi_2.b) & 7) & 1) << rax_1.b
            
            if (rax_1 == 0)
                *rbx_1 = rdx.b
                rbx_1 = &rbx_1[1]
                rax_1 = 7
                rdx = 0
            else
                rax_1 -= 1
            
            rsi_2 += r8
        while (rsi_2 u< r9_1)
        
        if (rax_1 != 7)
            *rbx_1 = rdx.b

int32_t rcx_13 = *(&data_1436ae910 + (r12_1 << 2))
uint64_t rax = zx.q(divu.dp.d(0:(not.d(r15_1.d) + *arg1 + rcx_13), rcx_13))
*arg1 = rax.d
uint64_t rcx_14 = zx.q(*(arg1 + 0x13))
uint64_t rcx_16

if (rcx_14 u< 8)
    rcx_16 = (rcx_14 * rax + 7) u>> 3
else
    rcx_16 = (rcx_14 u>> 3) * rax

*(arg1 + 8) = rcx_16
