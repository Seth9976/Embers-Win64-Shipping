// 函数: sub_142057a60
// 地址: 0x142057a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143f43078
int32_t result_3 = *(arg1 + 0x668)
int64_t r12 = arg4
int64_t* r9 = arg2
int64_t var_88 = 0
int64_t* rsi = arg3
void* rdi = arg1
int64_t rbp = 0
uint32_t r11 = result_3 - 1

if (*(rax + 4) s<= r11)
    r11 = *(rax + 4)

uint32_t rdx = zx.d(*(*(arg1 + 0x150) + 0x5f))
uint32_t rax_2 = r11

if (r11 s< 0)
    rax_2 = 0

if (rax_2 s>= rdx)
    rdx = rax_2

int64_t r14 = sx.q(rdx)

if (r11 s>= 0)
    result_3 = r11 + 1

uint32_t var_a4 = rdx
int64_t result = sx.q(result_3)
int64_t var_78 = r14
int64_t result_2 = result

if (r14 s< result)
    int32_t* r10_2 = r12 + 0x108 + (r14 << 2)
    int32_t* var_60_1 = r10_2
    
    do
        int32_t i = 0
        result = *(rdi + 0x150)
        int32_t i_1 = 0
        void* r11_1 = *(*result + (r14 << 3))
        void* var_58_1 = r11_1
        
        if (rsi[2].d s> 0)
            int64_t* rcx_1 = rsi
            result = rsi + 0x25
            int64_t* var_80_1 = rcx_1
            int64_t result_1 = result
            
            do
                int32_t j = 0
                int32_t j_1 = 0
                
                if (*(r11_1 + 0x30) s> 0)
                    int64_t rcx_3 = sx.q(rdx) << 4
                    int64_t var_68_1 = rcx_3
                    
                    do
                        char rax_4 = *(rsi + 0x2a)
                        void* const r15_1 = 8
                        
                        if (rax_4 == 0)
                            r15_1 = 0x88
                        
                        int64_t* r15_3 = r15_1 + rcx_3 + r12
                        int32_t rdx_1 = r15_3[1].d
                        
                        if (rdx_1 != 0)
                            int32_t k_2 = 1
                            int32_t* rax_5 = &r10_2[8]
                            int32_t r12_1 = 0
                            int64_t r14_1 = 0
                            
                            if (rax_4 == 0)
                                rax_5 = r10_2
                            
                            int32_t rax_6 = *rax_5
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rdx_1)
                            int32_t rax_10 = (temp1_1 - temp0_1) s>> 1
                            int32_t r13_1 = rax_10
                            
                            if (*(rsi + 0x29) == 0)
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_10 + 0x3f)
                                k_2 = (temp3_1 + (temp2_1 & 0x3f)) s>> 6
                            
                            char var_a8_1 = 0
                            
                            if (k_2 s> 0)
                                uint64_t k_1 = zx.q(k_2)
                                uint64_t k
                                
                                do
                                    int32_t rax_16 = sub_14081f8e0(r9, 1)
                                    uint128_t* rbx_1 = *(*arg2 + (sx.q(rax_16 s/ 0x66) << 3))
                                        + zx.q(rax_16 s% 0x66) * 0xa0
                                    uint8_t r8_4 = *(rdi + 0x36)
                                    
                                    if ((r8_4 & 4) == 0)
                                    label_142057c94:
                                        r8_4 u>>= 4
                                    else
                                        int64_t* r10_3 = *(rdi + 0x70)
                                        int64_t* rcx_9 = r10_3
                                        void* rdx_9 = &r10_3[sx.q(*(rdi + 0x78))]
                                        
                                        if (r10_3 == rdx_9)
                                        label_142057c94_1:
                                            r8_4 u>>= 4
                                        else
                                            while (*rcx_9 != *(rsi[3] + 0x240))
                                                rcx_9 = &rcx_9[1]
                                                
                                                if (rcx_9 == rdx_9)
                                                    goto label_142057c94_2
                                            
                                            if (((rcx_9 - r10_3) s>> 3).d == 0xffffffff)
                                            label_142057c94_2:
                                                r8_4 u>>= 4
                                            else
                                                r8_4 = *(rdi + 0x37)
                                    
                                    if (sub_14238e9c0(rdi, var_a4, 0, j_1, r8_4 & 7, *result_1, 1, 
                                            rbx_1) != 0)
                                        uint128_t* r8_5 = rbx_1
                                        int64_t rcx_12 = *(*(rdi + 0x660) + (var_78 << 3))
                                        *(rbx_1 + 0x78) = rcx_12
                                        uint128_t* rax_25 = *(rbx_1 + 0x68)
                                        
                                        if (rax_25 != 0)
                                            r8_5 = rax_25
                                        
                                        int64_t rax_27 = *var_80_1
                                        *(r8_5 + 0x64) &= 0xfffffe00
                                        r8_5[2].q = rax_27
                                        r8_5[6].d = 0x3f800000
                                        *(r8_5 + 0x5c) = 0
                                        *(r8_5 + 0x64) |= (sbb.d(rcx_12.d, rcx_12.d, rax_4 != 0)
                                            & 0x10) | (var_a4 & 0xf)
                                        *r8_5 = *(rdi + 0x140)
                                        *(rbx_1 + 0x9c) |= 0x10000
                                        int32_t rax_32 = *(rbx_1 + 0x9c)
                                        int32_t rcx_20 =
                                            ((zx.d(*result_1) << 0x12 ^ rax_32) & 0x40000) ^ rax_32
                                        *(rbx_1 + 0x9c) = rcx_20
                                        int32_t rdx_16 =
                                            ((zx.d(*result_1) << 0x11 ^ rcx_20) & 0x20000) ^ rcx_20
                                        *(rbx_1 + 0x9c) = rdx_16
                                        *(rbx_1 + 0x9c) =
                                            ((zx.d(*(rdi + 0x3c)) << 5 ^ rdx_16) & 0x20) ^ rdx_16
                                        
                                        if (var_a8_1 == 0)
                                            var_a8_1 = 1
                                            rbp += zx.q(*(r8_5 + 0x44)) * sx.q(rax_6)
                                            var_88 = rbp
                                        
                                        if (*(rsi + 0x29) == 0)
                                            int32_t rbp_1 = 0x40
                                            
                                            if (r13_1 s<= 0x40)
                                                rbp_1 = r13_1
                                            
                                            if (rbp_1 s> *(rbx_1 + 0x74))
                                                sub_141a14950(rbx_1, rbp_1)
                                            
                                            int32_t rsi_1 = 0
                                            
                                            if (rbp_1 != 0)
                                                do
                                                    uint128_t* r8_6
                                                    
                                                    if (rsi_1 != 0)
                                                        int64_t rdi_1 = sx.q(rbx_1[7].d)
                                                        int32_t rax_45 = (rdi_1 + 1).d
                                                        rbx_1[7].d = rax_45
                                                        
                                                        if (rax_45 s> *(rbx_1 + 0x74))
                                                            sub_14083a750(rbx_1, rdi_1.d)
                                                        
                                                        uint128_t* r9_3 = *(rbx_1 + 0x68)
                                                        uint128_t* r8_7 = rbx_1
                                                        
                                                        if (r9_3 != 0)
                                                            r8_7 = r9_3
                                                        
                                                        int64_t rcx_27 = rdi_1 * 0x68
                                                        r8_6 = r8_7 + rcx_27
                                                        
                                                        if (r8_7 == neg.q(rcx_27))
                                                            r8_6 = nullptr
                                                        else
                                                            *(r8_6 + 0x3c) &= 0xf8000000
                                                            *(r8_6 + 0x64) &= 0xfffff800
                                                            __builtin_memset(r8_6, 0, 0x3c)
                                                            *(r8_6 + 0x48) = 1
                                                            *(r8_6 + 0x58) = 0xffffffff
                                                            *(r8_6 + 0x5c) = 0
                                                            r8_6[6].d = 0x3f800000
                                                            r9_3 = *(rbx_1 + 0x68)
                                                        
                                                        uint128_t* rax_46 = rbx_1
                                                        
                                                        if (r9_3 != 0)
                                                            rax_46 = r9_3
                                                        
                                                        *r8_6 = *rax_46
                                                        r8_6[1] = rax_46[1]
                                                        r8_6[2] = rax_46[2]
                                                        r8_6[3] = rax_46[3]
                                                        r8_6[4] = rax_46[4]
                                                        r8_6[5] = rax_46[5]
                                                        r8_6[6].q = rax_46[6].q
                                                    else
                                                        uint128_t* rax_44 = *(rbx_1 + 0x68)
                                                        r8_6 = rbx_1
                                                        
                                                        if (rax_44 != 0)
                                                            r8_6 = rax_44
                                                    
                                                    int32_t rcx_28 = *(*r15_3 + (r14_1 << 2))
                                                    *(r8_6 + 0x58) = rcx_28
                                                    int64_t rax_49 = r14_1 + 2
                                                    int32_t temp11_1 = r13_1
                                                    r13_1 -= 1
                                                    *(r8_6 + 0x48) =
                                                        *(*r15_3 + (r14_1 << 2) + 4) - rcx_28 + 1
                                                    
                                                    if (temp11_1 == 1)
                                                        rax_49 = r14_1
                                                    
                                                    r14_1 = rax_49
                                                    int32_t rax_50 = r12_1 + 2
                                                    
                                                    if (r13_1 == 0)
                                                        rax_50 = r12_1
                                                    
                                                    rsi_1 += 1
                                                    r12_1 = rax_50
                                                while (rsi_1 u< rbp_1)
                                                
                                                rdi = arg1
                                            
                                            rbp = var_88
                                            rsi = arg3
                                        else
                                            int32_t temp8_1
                                            int32_t temp9_1
                                            temp8_1:temp9_1 = sx.q(r15_3[1].d)
                                            *(r8_5 + 0x48) = (temp9_1 - temp8_1) s>> 1
                                            int64_t rax_43 = *r15_3
                                            *(r8_5 + 0x64) |= 0x400
                                            *(r8_5 + 0x18) = rax_43
                                        
                                        if (rbp s< sx.q(*(data_143f431e8 + 4)))
                                            sub_1422dd2a0(arg2, rsi[4].d, rbx_1)
                                    
                                    k = k_1
                                    k_1 -= 1
                                    r9 = arg2
                                while (k != 1)
                                j = j_1
                                r10_2 = var_60_1
                                r11_1 = var_58_1
                            
                            r12 = arg4
                            rcx_3 = var_68_1
                        
                        j += 1
                        j_1 = j
                    while (j s< *(r11_1 + 0x30))
                    
                    result = result_1
                    rdx = var_a4
                    rcx_1 = var_80_1
                    i = i_1
                
                i += 1
                result += 1
                rcx_1 = &rcx_1[1]
                i_1 = i
                result_1 = result
                var_80_1 = rcx_1
            while (i s< rsi[2].d)
            
            r14 = var_78
        
        rdx += 1
        r14 += 1
        r10_2 = &r10_2[1]
        var_a4 = rdx
        var_78 = r14
        var_60_1 = r10_2
    while (r14 s< result_2)

return result
