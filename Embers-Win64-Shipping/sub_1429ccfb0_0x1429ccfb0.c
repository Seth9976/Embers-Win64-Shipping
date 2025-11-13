// 函数: sub_1429ccfb0
// 地址: 0x1429ccfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4)
int64_t rbx = sx.q(*(arg1 + 8))
sub_1429cd2b0(arg1 + 0x138, (*(arg1 + 0x128) - *(arg1 + 0x120)) s>> 2)
sub_1429cd2b0(arg1 + 0x180, (*(arg1 + 0x170) - *(arg1 + 0x168)) s>> 2)
int64_t result = sub_1429cd2b0(arg1 + 0xc0, (*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2)
int32_t j = 0
int64_t r15 = 0
int64_t r14 = rbx

if (rbx.d s> 0)
    do
        int64_t rax_1 = *(arg1 + 0x108)
        int32_t rbx_1 = -1
        int64_t rdx_9 = sx.q(*(rax_1 + (r15 << 3) + 4))
        int32_t i_6 = *(rax_1 + (r15 << 3))
        int32_t* rsi_1 = *(arg1 + 0x120) + (rdx_9 << 2)
        result = *(arg1 + 0x138)
        void* rdi_1 = result + (rdx_9 << 1)
        
        if (i_6 s> 0)
            uint64_t i_3 = zx.q(i_6)
            uint64_t i
            
            do
                int32_t r10_1 = *rsi_1
                int64_t r9_1 = *(arg1 + 0x18)
                int32_t r8_1 = r10_1 * 2
                int64_t r14_1 = *(arg1 + 0x30) + (sx.q(*(r9_1 + (sx.q(r8_1 + 1) << 2))) << 2)
                void* rdx_11
                
                if (r10_1 != rbx_1)
                    rdx_11 = nullptr
                else
                    rdx_11 = (zx.q(*(rdi_1 - 2)) << 2) + 4
                
                int64_t rcx_6 = r14_1 + (sx.q(*(r9_1 + (sx.q(r8_1) << 2))) << 2)
                void* rax_7 = rdx_11 + r14_1
                
                if (rax_7 != rcx_6)
                    while (*rax_7 != j)
                        rax_7 += 4
                        
                        if (rax_7 == rcx_6)
                            break
                
                result = (rax_7 - r14_1) s>> 2
                *rdi_1 = result.w
                rdi_1 += 2
                rbx_1 = *rsi_1
                rsi_1 = &rsi_1[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
            r14 = rbx
        
        j += 1
        r15 += 1
    while (r15 s< r14)

int32_t rdi_2 = 0
int64_t rbp_1 = 0

if (r14 s> 0)
    do
        int64_t rax_9 = *(arg1 + 0x150)
        int64_t rdx_12 = sx.q(*(rax_9 + (rbp_1 << 3) + 4))
        int32_t result_1 = *(rax_9 + (rbp_1 << 3))
        int64_t rbx_2 = *(arg1 + 0x168) + (rdx_12 << 2)
        int64_t r11 = *(arg1 + 0x180) + (rdx_12 << 1)
        int64_t rdx_13 = 0
        
        if (result_1 s> 0)
            uint64_t i_4 = zx.q(result_1)
            uint64_t i_1
            
            do
                int32_t r9_2 = *(rbx_2 + (rdx_13 << 2))
                int64_t rcx_8 = sx.q(r9_2 * 2)
                int64_t rax_13 = *(arg1 + 0x78)
                int32_t r8_2 = *(rax_13 + (rcx_8 << 2) + 4)
                int16_t rax_14
                
                if (*(rax_13 + (rcx_8 << 2)) != r8_2)
                    rax_14.b = rdi_2 == r8_2
                else if (rdx_13 == 0 || r9_2 != *(rbx_2 + (rdx_13 << 2) - 4))
                    rax_14 = 0
                else
                    rax_14 = 1
                
                *(r11 + (rdx_13 << 1)) = rax_14
                rdx_13 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        result = zx.q(*(arg1 + 0x14))
        
        if (result.d s< result_1)
            result = zx.q(result_1)
        
        rdi_2 += 1
        rbp_1 += 1
        *(arg1 + 0x14) = result.d
    while (rbp_1 s< r14)

int64_t r12 = sx.q(rax)
int32_t j_1 = 0
int64_t r15_1 = 0

if (r12 s> 0)
    do
        int64_t rax_15 = *(arg1 + 0x90)
        int32_t rbp_2 = -1
        int64_t rdx_14 = sx.q(*(rax_15 + (r15_1 << 3) + 4))
        int32_t i_7 = *(rax_15 + (r15_1 << 3))
        int32_t* rdi_3 = *(arg1 + 0xa8) + (rdx_14 << 2)
        result = *(arg1 + 0xc0)
        int16_t* rbx_3 = result + (rdx_14 << 1)
        
        if (i_7 s> 0)
            uint64_t i_5 = zx.q(i_7)
            uint64_t i_2
            
            do
                int32_t r10_2 = *rdi_3
                int64_t r9_3 = *(arg1 + 0x18)
                int32_t r8_3 = r10_2 * 2
                int64_t rsi_2 = *(arg1 + 0x48) + (sx.q(*(r9_3 + (sx.q(r8_3 + 1) << 2))) << 2)
                void* rdx_16
                
                if (r10_2 != rbp_2)
                    rdx_16 = nullptr
                else
                    rdx_16 = (zx.q(rbx_3[-1]) << 2) + 4
                
                int64_t rcx_12 = rsi_2 + (sx.q(*(r9_3 + (sx.q(r8_3) << 2))) << 2)
                void* rax_21 = rdx_16 + rsi_2
                
                if (rax_21 != rcx_12)
                    while (*rax_21 != j_1)
                        rax_21 += 4
                        
                        if (rax_21 == rcx_12)
                            break
                
                result = (rax_21 - rsi_2) s>> 2
                *rbx_3 = result.w
                rbx_3 = &rbx_3[1]
                rbp_2 = *rdi_3
                rdi_3 = &rdi_3[1]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        j_1 += 1
        r15_1 += 1
    while (r15_1 s< r12)

return result
