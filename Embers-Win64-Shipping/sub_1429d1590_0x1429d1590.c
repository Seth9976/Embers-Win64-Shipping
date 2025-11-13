// 函数: sub_1429d1590
// 地址: 0x1429d1590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t r11 = arg2 * 2
int64_t rbx = sx.q(r11 + 1) << 2
void* r10 = *(rdi + 0x150)
int64_t r12 = *(rdi + 0x168) + (sx.q(*(rbx + r10)) << 2)
int32_t r13 = *(r10 + (sx.q(r11) << 2))
void* r10_1 = *(rdi + 0x138) + (sx.q(*(*(rdi + 0x108) + rbx)) << 1)
int64_t rax_8 = *(rdi + 0x1b0)
int64_t rcx_3 = sx.q(arg2)
char rax_9 = not.b(*(rax_8 + (rcx_3 << 1))) & 1
uint8_t r14 = *(rax_8 + (rcx_3 << 1)) u>> 2 & 1
uint64_t result = zx.q(*(rdi + 0xc))
int32_t rdi_1 = 0
uint8_t arg_10 = r14
int32_t arg_20 = result.d

if (r13 s> 0)
    int64_t rbp_1 = *(rdi + 0x120) + (sx.q(*(*(rdi + 0x108) + rbx)) << 2) - r12
    int16_t* rbx_1 = r10_1 - 2
    int64_t var_40_1 = rbp_1
    int32_t* r12_1 = r12 - arg3
    void* r10_2 = *(rdi + 0x180) + (sx.q(*(r10 + rbx)) << 1) - r10_1 + 2
    void* var_48_1 = r10_2
    
    do
        void* rdx = r12_1 + arg3
        void* r11_1 = *arg1
        int32_t r9_4 = *(r12_1 + arg3) * 2
        int64_t rcx_4
        rcx_4.b = *(r10_2 + rbx_1) == 0
        int64_t r15_1 = sx.q(*(*(r11_1 + 0x78) + ((rcx_4 + sx.q(r9_4)) << 2)))
        
        if (*(arg1[9] + (r15_1 << 1)) != 1)
            if (rax_9 == 0)
                int64_t rcx_13 = sx.q(r9_4 + 1)
                int32_t r9_8 =
                    *(*(r11_1 + 0xa8) + (sx.q(*(*(r11_1 + 0x90) + (rcx_13 << 2))) << 2)) * 2
                int64_t rdx_7 = *(r11_1 + 0x18)
                uint64_t rbp_2 =
                    zx.q(*(*(r11_1 + 0xc0) + (sx.q(*(*(r11_1 + 0x90) + (rcx_13 << 2))) << 1)))
                int64_t r10_5 = sx.q(r9_8 + 1) << 2
                int64_t r14_1 = arg1[3] + (sx.q(*(r10_5 + rdx_7)) << 2)
                
                if (r15_1.d
                        != *(*(r11_1 + 0x30) + ((sx.q(*(r10_5 + *(r11_1 + 0x18))) + rbp_2) << 2)))
                    uint64_t rcx_20 = 0
                    result = zx.q((rbp_2 + 1).d)
                    rbp_1 = var_40_1
                    
                    if (rbp_2.d != *(rdx_7 + (sx.q(r9_8) << 2)) - 1)
                        rcx_20 = zx.q(result.d)
                    
                    r14 = arg_10
                    *arg3 = *(r14_1 + (rcx_20 << 2))
                else
                    result = zx.q(*(r14_1 + (rbp_2 << 2)))
                    rbp_1 = var_40_1
                    r14 = arg_10
                    *arg3 = result.d
            else if (r14 == 0 || rdi_1 != r13 - 1)
                int64_t r10_4 = *(r11_1 + 0x18)
                int32_t r9_6 = *(rdx + rbp_1) * 2
                void* r11_3 = arg1[3] + (sx.q(*(r10_4 + (sx.q(r9_6 + 1) << 2))) << 2)
                uint64_t rdx_5 = zx.q(rbx_1[1])
                
                if (rdx_5.d != *(r10_4 + (sx.q(r9_6) << 2)) - 1)
                    result = zx.q(*(r11_3 + (rdx_5 << 2) + 4))
                    *arg3 = result.d
                else
                    result = zx.q(*r11_3)
                    *arg3 = result.d
            else
                int64_t r10_3 = *(r11_1 + 0x18)
                int32_t r9_5 = *(rdx + rbp_1 - 4) * 2
                int64_t r11_2 = arg1[3] + (sx.q(*(r10_3 + (sx.q(r9_5 + 1) << 2))) << 2)
                int16_t rax_19 = *rbx_1
                int32_t rcx_9
                
                if (rax_19 == 0)
                    result = sx.q(*(r10_3 + (sx.q(r9_5) << 2)) - 1)
                    rcx_9 = *(r11_2 + (result << 2))
                else
                    result = sx.q(zx.d(rax_19) - 1)
                    rcx_9 = *(r11_2 + (result << 2))
                
                *arg3 = rcx_9
            
            r10_2 = var_48_1
        else
            result = arg1[0xc]
            
            if (arg_20 != 0)
                *arg3 = *(result + (r15_1 << 2))
            else
                int64_t rcx_6 = sx.q(*(result + (r15_1 << 2)))
                result = arg1[0x12]
                *arg3 = *(result + (rcx_6 << 2))
        
        rdi_1 += 1
        rbx_1 = &rbx_1[1]
        arg3 = &arg3[1]
    while (rdi_1 s< r13)

return result
