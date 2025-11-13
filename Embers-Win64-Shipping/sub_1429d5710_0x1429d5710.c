// 函数: sub_1429d5710
// 地址: 0x1429d5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x50))
int64_t rbx = rdx
int32_t arg_8 = *(arg1 + 0x18)
int64_t rsi = sx.q(*(arg1 + 0x38) + rdx.d)

if (rdx s< rsi)
    do
        void* rdx_1 = *(arg1 + 0x10)
        int64_t rdi_1 = *(rdx_1 + 0x1b0)
        int16_t r10_1 = *(rdi_1 + (rbx << 1))
        
        if ((0x40 & r10_1.b) != 0)
            int64_t r9_1 = *(arg1 + 0xc0)
            int64_t r8_1 = sx.q(*(*(arg1 + 0x138) + (rbx << 2)) * 2)
            
            if ((*(rbx + *(arg1 + 0x180)) & 1) == 0)
                int64_t rcx_5 = *(rdx_1 + 0xf0)
                int32_t rdx_4 = zx.d(*(sx.q(*(r9_1 + (r8_1 << 2) + 4)) + rcx_5)) u>> 3 & 1
                int16_t rax_13 = 0
                int32_t r8_4 = zx.d(*(sx.q(*(r9_1 + (r8_1 << 2))) + rcx_5)) u>> 3 & 1
                
                if (r8_4 != neg.d(rdx_4))
                    rax_13 = 0x40
                
                *(rdi_1 + (rbx << 1)) = rax_13 | (r10_1 & 0xffbf)
                int16_t rax_14 = sub_1429c8d30(&arg_8, (zx.o(0)).d, r8_4 + rdx_4)
                *(rdi_1 + (rbx << 1)) &= 0xf87f
                *(rdi_1 + (rbx << 1)) |= (rax_14 & 0xf) << 7
            else
                int64_t rax_5 = sx.q(*(r9_1 + (r8_1 << 2)))
                int64_t rax_7
                
                if (rax_5.d == 0xffffffff || (*(rax_5 + *(rdx_1 + 0xf0)) & 8) == 0)
                    rax_7 = sx.q(*(r9_1 + (r8_1 << 2) + 4))
                
                int16_t rax_9
                
                if ((rax_5.d == 0xffffffff || (*(rax_5 + *(rdx_1 + 0xf0)) & 8) == 0)
                        && (rax_7.d == 0xffffffff || (*(rax_7 + *(rdx_1 + 0xf0)) & 8) == 0))
                    rax_9 = 0
                else
                    rax_9 = 0x40
                
                int16_t rcx_4 = (*(rdi_1 + (rbx << 1)) & 0xffbf) | rax_9
                int16_t rax_10 = 1
                
                if ((0x40 & rcx_4.b) != 0)
                    rax_10 = 4
                
                *(rdi_1 + (rbx << 1)) = rax_10 << 7 | (rcx_4 & 0xf87f)
        
        rbx += 1
    while (rbx s< rsi)

int64_t rcx_7 = sx.q(*(arg1 + 0x54))
int64_t rbx_1 = rcx_7
uint64_t result = zx.q(*(arg1 + 0x3c) + rcx_7.d)
int64_t r12 = sx.q(result.d)

if (rcx_7 s< r12)
    do
        void* r15_1 = *(arg1 + 8)
        int64_t r8_6 = sx.q(*(*(arg1 + 0x138) + (rbx_1 << 2)))
        result = *(r15_1 + 0x1b0)
        char rdx_5 = (*(result + (r8_6 << 1))).b
        
        if ((rdx_5 & 0x60) != 0)
            void* rsi_1 = *(arg1 + 0x10)
            int64_t rdi_2 = *(rsi_1 + 0x1b0)
            
            if ((rdx_5 & 0x20) == 0 || (*(rdi_2 + (rbx_1 << 1)) & 0x20) != 0)
                result.b = 0
            else
                result.b = 1
            
            if ((0x40 & rdx_5) != 0 || result.b != 0)
                int32_t r11_1 = 0
                int32_t r10_2 = 0
                
                if (((*(rsi_1 + 0x170) - *(rsi_1 + 0x168)) s>> 2).d s<= 0)
                    int64_t rdx_7 = *(r15_1 + 0x150)
                    int32_t r8_8 = r8_6.d * 2
                    int64_t r9_3 = sx.q(r8_8 + 1)
                    int32_t* r14_1 = *(r15_1 + 0x168) + (sx.q(*(rdx_7 + (r9_3 << 2))) << 2)
                    int32_t i_5 = *(rdx_7 + (sx.q(r8_8) << 2))
                    void* r8_9 = *(r15_1 + 0x180) + (sx.q(*(*(r15_1 + 0x150) + (r9_3 << 2))) << 1)
                    
                    if (i_5 s> 0)
                        uint64_t i_3 = zx.q(i_5)
                        uint64_t i
                        
                        do
                            int32_t rax_30 = *r14_1
                            r14_1 = &r14_1[1]
                            r8_9 += 2
                            uint32_t rdx_8 = zx.d(*(sx.q(*(*(arg1 + 0xc0) + (sx.q(rax_30 * 2) << 2)
                                + (zx.q(*(r8_9 - 2)) << 2))) + *(rsi_1 + 0xf0)))
                            r10_2 += rdx_8 u>> 3 & 1
                            r11_1 += rdx_8 u>> 2 & 1
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                else
                    int64_t rdx_6 = *(rsi_1 + 0x150)
                    int32_t* r8_7 = *(rsi_1 + 0x168) + (sx.q(*(rdx_6 + (rbx_1 << 3) + 4)) << 2)
                    int32_t i_4 = *(rdx_6 + (rbx_1 << 3))
                    
                    if (i_4 s> 0)
                        uint64_t i_2 = zx.q(i_4)
                        uint64_t i_1
                        
                        do
                            int64_t rax_21 = sx.q(*r8_7)
                            r8_7 = &r8_7[1]
                            uint32_t rcx_9 = zx.d(*(rax_21 + *(rsi_1 + 0xf0)))
                            r10_2 += rcx_9 u>> 3 & 1
                            r11_1 += rcx_9 u>> 2 & 1
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                
                *(rdi_2 + (rbx_1 << 1)) &= 0xffbf
                result = 0
                
                if (r10_2 s> 0)
                    result.w = 0x40
                
                *(rdi_2 + (rbx_1 << 1)) |= result.w
                
                if ((*(rdi_2 + (rbx_1 << 1)) & 0x30) == 0)
                    result.w = sub_1429c8d30(&arg_8, (zx.o(0)).d, r10_2 + r11_1).w & 0xf
                    *(rdi_2 + (rbx_1 << 1)) &= 0xf87f
                    result.w <<= 7
                    *(rdi_2 + (rbx_1 << 1)) |= result.w
        
        rbx_1 += 1
    while (rbx_1 s< r12)

return result
