// 函数: sub_142c45490
// 地址: 0x142c45490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
int64_t rax_1 = __security_cookie ^ &var_48
uint64_t result = *(arg1 + 0x98)
var_48 = arg2

if (*(result + 8) == 0)
    int32_t r11_1 = 0
    int32_t rbx_1 = 0
    int64_t rsi_1 = *(arg1 + 0x40)
    int64_t rdi_1 = 0
    int64_t i_5 = 4
    int32_t r14_1 = *(arg1 + 0x34)
    int32_t r15_2 = *(arg1 + 0x38) - 1
    int32_t var_40[0x4]
    int64_t i
    
    do
        int32_t r10_1 = *(rdi_1 + "lositiniidemanif2dem2nif3nif")
        int32_t r8_1 = 0
        int32_t rdx = r15_2
        void* rax_6
        
        if (r15_2 s>= 0)
            uint64_t rcx
            
            while (true)
                uint64_t rax_3 = zx.q((rdx + r8_1) u>> 1)
                rcx = zx.q(rax_3.d)
                int32_t r9_1 = *(rsi_1 + rax_3 * 0x24)
                int32_t rax_5
                
                if (r10_1 u>= r9_1)
                    rax_5.b = r10_1 u> r9_1
                
                if (r10_1 u< r9_1 || rax_5 s< 0)
                    rdx = (rcx - 1).d
                else
                    if (rax_5 s<= 0)
                        break
                    
                    r8_1 = (rcx + 1).d
                
                if (r8_1 s> rdx)
                    goto label_142c45553
            
            rax_6 = rsi_1 + rcx * 0x24
        
        int32_t result_1
        
        if (r15_2 s< 0 || rax_6 == 0)
        label_142c45553:
            result_1 = 0
        else
            result_1 = *(rax_6 + 0x1c)
        
        result = 0
        
        if (result_1 != r14_1)
            result = zx.q(result_1)
        
        *(&var_40 + rdi_1) = result.d
        rbx_1 |= result.d
        rdi_1 += 4
        i = i_5
        i_5 -= 1
    while (i != 1)
    void* r13_1 = var_48
    
    if (rbx_1 != 0)
        void* r15_3 = *(r13_1 + 0x70)
        uint64_t r14_2 = zx.q((i_5 + 4).d)
        int32_t rbp_1 = *(r13_1 + 0x60)
        int32_t rbx_2 = not.d(rbx_1)
        int32_t rsi_2 = 0
        
        if (rbp_1 != 0)
            result = 0
            
            do
                result = zx.q(result.d + 1)
                
                if (result.d u>= rbp_1)
                    break
            while (*(r15_3 + 0xf) == *(r15_3 + result * 0x14 + 0xf))
            
            if (rbp_1 != 0)
                do
                    uint64_t rdx_2 = zx.q(rsi_2) * 5
                    
                    switch (zx.d(*(r15_3 + (rdx_2 << 2) + 0xf)) & 0xf)
                        case 0, 5, 7
                            r14_2 = 4
                        case 1, 2, 3, 4, 6
                            if (r14_2.d == 3 || r14_2.d == 0)
                                rdi_1.b = 1
                                
                                if (r11_1 u< rsi_2)
                                    int64_t rcx_6 = 4
                                    
                                    if (r14_2.d == 3)
                                        rcx_6 = 8
                                    
                                    int32_t r9_2 = *(&var_40 + rcx_6)
                                    uint64_t i_4 = zx.q(rsi_2 - r11_1)
                                    void* r8_5 = r15_3 + ((zx.q(r11_1) * 5 + 1) << 2)
                                    uint64_t i_1
                                    
                                    do
                                        int32_t rcx_8 = *r8_5
                                        r8_5 += 0x14
                                        *(r8_5 - 0x14) = (rcx_8 & rbx_2) | r9_2
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                            else
                                rdi_1.b = 0
                            
                            char temp2_1 = rdi_1.b
                            rdi_1.b = neg.b(rdi_1.b)
                            r14_2 = zx.q(sbb.d(r14_2.d, r14_2.d, temp2_1 != 0)) & 3
                            
                            if (rsi_2 u< result.d)
                                int32_t r9_3 = var_40[r14_2]
                                void* rdx_6 = r15_3 + (rdx_2 << 2) + 4
                                uint64_t i_6 = zx.q(result.d - rsi_2)
                                uint64_t i_2
                                
                                do
                                    int32_t rcx_11 = *rdx_6
                                    rdx_6 += 0x14
                                    *(rdx_6 - 0x14) = (rcx_11 & rbx_2) | r9_3
                                    i_2 = i_6
                                    i_6 -= 1
                                while (i_2 != 1)
                    
                    int64_t r8_7 = *(r13_1 + 0x70)
                    r11_1 = rsi_2
                    rsi_2 = result.d
                    char i_3 = *(r8_7 + result * 0x14 + 0xf)
                    
                    do
                        result = zx.q(result.d + 1)
                        
                        if (result.d u>= *(r13_1 + 0x60))
                            break
                    while (i_3 == *(r8_7 + result * 0x14 + 0xf))
                while (rsi_2 u< rbp_1)

__security_check_cookie(rax_1 ^ &var_48)
return result
