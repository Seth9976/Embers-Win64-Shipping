// 函数: sub_1429867b0
// 地址: 0x1429867b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* result = *(arg1 + 0x18)
int32_t rbx
int32_t r12
int32_t r15_1

if (*(*(arg1 + 0x10) + 0x40) != 0)
    rbx = *(result + 0x34)
    r15_1 = *(result + 0x30) - 1
    r12 = -1
else
    rbx = *(result + 0x30)
    r15_1 = *(result + 0x34) + 1
    r12 = 1

int32_t var_50
int64_t arg_10

while (rbx != r15_1)
    void* rdx_1 = *(arg1 + 0x10)
    arg_10 = *(*(rdx_1 + 0x88) + (sx.q(rbx - *(rdx_1 + 0x4c)) << 3)) + *(*(arg1 + 0x18) + 8)
    uint64_t rsi_1 = 0
    
    while (true)
        void* rdi_1 = *(arg1 + 0x10)
        int64_t r8_2 = *(rdi_1 + 0xa8)
        int64_t rax_7
        int64_t rdx_2
        rdx_2:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rdi_1 + 0xb0) - r8_2)
        int64_t rdx_3 = rdx_2 s>> 3
        
        if (zx.q(rsi_1.d) u>= rdx_3 + (rdx_3 u>> 0x3f))
            break
        
        int32_t* r10_3 = rsi_1 * 0x30 + r8_2
        int32_t rcx_3 = r10_3[9]
        int32_t r8_3
        
        if (rbx s< 0)
            int32_t rax_16
            
            if (rcx_3 s< 0)
                rax_16 = not.d(rcx_3) - rbx
            else
                rax_16 = rcx_3 - rbx - 1
            
            r8_3 = neg.d(divs.dp.d(sx.q(rax_16), rcx_3))
        else
            r8_3 = divs.dp.d(sx.q(rbx), rcx_3)
        
        if (rbx == r8_3 * rcx_3)
            int32_t r8_6 = r10_3[8]
            int32_t rdx_9 = *(rdi_1 + 0x44)
            int32_t r11_1
            
            if (rdx_9 s< 0)
                int32_t rax_25
                
                if (r8_6 s< 0)
                    rax_25 = not.d(rdx_9) - r8_6
                else
                    rax_25 = r8_6 - rdx_9 - 1
                
                r11_1 = neg.d(divs.dp.d(sx.q(rax_25), r8_6))
            else
                r11_1 = divs.dp.d(sx.q(rdx_9), r8_6)
            
            int32_t rdx_16 = *(rdi_1 + 0x48)
            int32_t r8_7
            
            if (rdx_16 s< 0)
                int32_t rax_33
                
                if (r8_6 s< 0)
                    rax_33 = not.d(rdx_16) - r8_6
                else
                    rax_33 = r8_6 - rdx_16 - 1
                
                r8_7 = neg.d(divs.dp.d(sx.q(rax_33), r8_6))
            else
                r8_7 = divs.dp.d(sx.q(rdx_16), r8_6)
            
            if (r10_3[0xa].b == 0)
                int32_t rax_38
                
                if (rbx s< 0)
                    int32_t rax_41
                    
                    if (rcx_3 s< 0)
                        rax_41 = not.d(rcx_3) - rbx
                    else
                        rax_41 = rcx_3 - rbx - 1
                    
                    rax_38 = neg.d(divs.dp.d(sx.q(rax_41), rcx_3))
                else
                    rax_38 = divs.dp.d(sx.q(rbx), rcx_3)
                
                int64_t rcx_7 = *(r10_3 + 0x18) * sx.q(rax_38) + *(r10_3 + 8)
                int64_t r9_2 = *(r10_3 + 0x10)
                int64_t arg_18 = sx.q(r11_1) * r9_2 + rcx_7
                var_50 = *r10_3
                sub_1429a3db0(&arg_10, &arg_18, sx.q(r8_7) * r9_2 + rcx_7, r9_2, *(rdi_1 + 0xa0), 
                    var_50)
            else
                sub_1429a5fb0(&arg_10, *(rdi_1 + 0xa0), *r10_3, sx.q(r8_7 - r11_1 + 1))
                rsi_1 = zx.q(rsi_1.d + 1)
                continue
        
        rsi_1 = zx.q(rsi_1.d + 1)
    
    result = *(arg1 + 0x18)
    int64_t rcx_9 = arg_10
    
    if (*(result + 0x20) u< rcx_9)
        *(result + 0x20) = rcx_9
    
    rbx += r12

void* rcx_10 = *(arg1 + 0x18)

if (rbx s< *(rcx_10 + 0x28) || rbx s> *(rcx_10 + 0x2c))
    *(rcx_10 + 0x10) = *(rcx_10 + 8)
    void* rcx_11 = *(arg1 + 0x18)
    *(rcx_11 + 0x18) = *(rcx_11 + 0x20) - *(rcx_11 + 8)
    void* rdx_29 = *(arg1 + 0x18)
    int64_t* rcx_12 = *(rdx_29 + 0x38)
    
    if (rcx_12 != 0)
        int32_t rax_55 = (*(*rcx_12 + 0x18))(rcx_12, *(rdx_29 + 0x10), zx.q(*(rdx_29 + 0x18)), 
            zx.q(*(rdx_29 + 0x28)), &arg_10, var_50, -2)
        void* rdx_31 = *(arg1 + 0x18)
        int32_t r8_16 = *(rdx_31 + 0x18)
        
        if (rax_55 s>= r8_16)
            void* rcx_14 = *(arg1 + 0x10)
            
            if (*(rcx_14 + 0xa0) == 0)
                int64_t* var_58_1
                var_58_1.d = r8_16
                sub_142986590(rcx_14, rdx_31, *(rdx_31 + 0x28), *(rdx_31 + 0x2c))
        else
            *(rdx_31 + 0x18) = rax_55
            *(*(arg1 + 0x18) + 0x10) = arg_10
    
    result = *(arg1 + 0x18)
    *(result + 0x40) = 0

return result
