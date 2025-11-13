// 函数: sub_140375a30
// 地址: 0x140375a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t r9 = *arg2
int64_t* rbp = arg2[2]
int64_t rax_2 = *rbp
uint64_t r10 = zx.q(*(rbp + 0x14))
*(arg1 + 0x149c) = 0x23d00000000
int32_t rbx = -1
uint64_t rbp_1 = 0

if (r10.d s> 0)
    do
        if (*(r9 + (rbp_1 << 2)) == 0)
            *(r9 + (rbp_1 << 2) + 2) = 0
        else
            int64_t rdi_1 = sx.q(*(arg1 + 0x149c))
            *(arg1 + 0x149c) = rdi_1.d + 1
            *(arg1 + (rdi_1 << 2) + 0xbac) = rbp_1.d
            *(arg1 + rbp_1 + 0x14a4) = 0
            rbx = rbp_1.d
        
        rbp_1 += 1
    while (r10 != rbp_1)
    
    rbp_1 = zx.q(*(arg1 + 0x149c))

if (r10.d s<= 0 || rbp_1.d s<= 1)
    do
        int32_t rdi_2 = rbx + 1
        bool cond:0_1 = rbx s>= 2
        
        if (rbx s< 2)
            rbx = rdi_2
        
        if (cond:0_1)
            rdi_2 = 0
        
        *(arg1 + 0x149c) = (rbp_1 + 1).d
        *(arg1 + (sx.q(rbp_1.d) << 2) + 0xbac) = rdi_2
        int64_t rbp_3 = sx.q(rdi_2)
        *(r9 + (rbp_3 << 2)) = 1
        *(arg1 + rbp_3 + 0x14a4) = 0
        *(arg1 + 0x1700) -= 1
        
        if (rax_2 != 0)
            *(arg1 + 0x1704) -= zx.d(*(rax_2 + (rbp_3 << 2) + 2))
        
        rbp_1 = zx.q(*(arg1 + 0x149c))
    while (rbp_1.d s< 2)

arg2[1].d = rbx
uint64_t rax_3 = zx.q(*(arg1 + 0x149c))
int64_t r8

if (rax_3.d s>= 2)
    uint64_t r14_2 = rax_3 u>> 1
    
    while (true)
        int32_t r11_1 = *(arg1 + (r14_2 << 2) + 0xba8)
        uint32_t rbx_1 = (r14_2 * 2).d
        uint64_t rbp_5 = r14_2
        
        if (rbx_1 s<= rax_3.d)
            int64_t r15_1 = sx.q(r11_1)
            uint32_t rsi_3 = r14_2.d
            uint32_t rdi_3
            
            while (true)
                int64_t rax_4
                
                if (rbx_1 s>= rax_3.d)
                    rax_4 = sx.q(rbx_1)
                    rdi_3 = rbx_1
                else
                    uint32_t rbp_7 = rbx_1 | 1
                    int64_t r12_1 = sx.q(rbp_7)
                    int64_t r13_2 = sx.q(*(arg1 + (r12_1 << 2) + 0xba8))
                    rax_4 = sx.q(rbx_1)
                    r8 = sx.q(*(arg1 + (rax_4 << 2) + 0xba8))
                    int16_t rdi_4 = *(r9 + (r8 << 2))
                    int16_t temp2_1 = *(r9 + (r13_2 << 2))
                    
                    if (temp2_1 u< rdi_4)
                        rax_4 = r12_1
                        rdi_3 = rbp_7
                    else if (temp2_1 != rdi_4)
                        rdi_3 = rbx_1
                    else
                        rdi_3 = rbx_1
                        
                        if (*(arg1 + r13_2 + 0x14a4) u<= *(arg1 + r8 + 0x14a4))
                            rax_4 = r12_1
                            rdi_3 = rbp_7
                
                int32_t rax_5 = *(arg1 + (rax_4 << 2) + 0xba8)
                int64_t rbp_8 = sx.q(rax_5)
                int16_t rbx_2 = *(r9 + (rbp_8 << 2))
                int16_t temp5_1 = *(r9 + (r15_1 << 2))
                
                if (temp5_1 u< rbx_2 ||
                        (temp5_1 == rbx_2 && *(arg1 + r15_1 + 0x14a4) u<= *(arg1 + rbp_8 + 0x14a4)))
                    rdi_3 = rsi_3
                    break
                
                *(arg1 + (sx.q(rsi_3) << 2) + 0xba8) = rax_5
                rbx_1 = rdi_3 * 2
                rax_3 = zx.q(*(arg1 + 0x149c))
                rsi_3 = rdi_3
                
                if (rbx_1 s> rax_3.d)
                    break
                
                continue
            
            rbp_5 = sx.q(rdi_3)
        
        *(arg1 + (rbp_5 << 2) + 0xba8) = r11_1
        rax_3 = zx.q(*(arg1 + 0x149c))
        uint64_t temp0_1 = r14_2
        r14_2 -= 1
        
        if (temp0_1 s<= 1)
            break

int64_t r14_3 = sx.q(r10.d)

while (true)
    int64_t r10_1 = sx.q(*(arg1 + 0xbac))
    int32_t rdi_5 = (rax_3 - 1).d
    *(arg1 + 0x149c) = rdi_5
    int64_t rbp_11 = sx.q(rax_3.d)
    int32_t r11_2 = *(arg1 + (rbp_11 << 2) + 0xba8)
    *(arg1 + 0xbac) = r11_2
    int64_t rax_6 = 1
    
    if (rbp_11.d s>= 3)
        int64_t r15_2 = sx.q(r11_2)
        int32_t rax_7 = 1
        int32_t rbx_4 = 2
        int32_t rsi_4
        
        while (true)
            int64_t rdi_6
            
            if (rbx_4 s>= rdi_5)
                rdi_6 = sx.q(rbx_4)
                rsi_4 = rbx_4
            else
                int32_t rbp_13 = rbx_4 | 1
                int64_t r12_2 = sx.q(rbp_13)
                int64_t r13_4 = sx.q(*(arg1 + (r12_2 << 2) + 0xba8))
                rdi_6 = sx.q(rbx_4)
                r8 = sx.q(*(arg1 + (rdi_6 << 2) + 0xba8))
                int16_t rsi_5 = *(r9 + (r8 << 2))
                int16_t temp1_1 = *(r9 + (r13_4 << 2))
                
                if (temp1_1 u< rsi_5)
                    rdi_6 = r12_2
                    rsi_4 = rbp_13
                else if (temp1_1 != rsi_5)
                    rsi_4 = rbx_4
                else
                    rsi_4 = rbx_4
                    
                    if (*(arg1 + r13_4 + 0x14a4) u<= *(arg1 + r8 + 0x14a4))
                        rdi_6 = r12_2
                        rsi_4 = rbp_13
            
            int32_t rdi_7 = *(arg1 + (rdi_6 << 2) + 0xba8)
            int64_t rbp_14 = sx.q(rdi_7)
            int16_t rbx_5 = *(r9 + (rbp_14 << 2))
            int16_t temp4_1 = *(r9 + (r15_2 << 2))
            
            if (temp4_1 u< rbx_5 ||
                    (temp4_1 == rbx_5 && *(arg1 + r15_2 + 0x14a4) u<= *(arg1 + rbp_14 + 0x14a4)))
                rsi_4 = rax_7
                break
            
            *(arg1 + (sx.q(rax_7) << 2) + 0xba8) = rdi_7
            rbx_4 = rsi_4 * 2
            rdi_5 = *(arg1 + 0x149c)
            rax_7 = rsi_4
            
            if (rbx_4 s> rdi_5)
                break
            
            continue
        
        rax_6 = sx.q(rsi_4)
    
    *(arg1 + (rax_6 << 2) + 0xba8) = r11_2
    int64_t rax_9 = sx.q(*(arg1 + 0xbac))
    int64_t rbp_15 = sx.q(*(arg1 + 0x14a0))
    *(arg1 + 0x14a0) = rbp_15.d - 1
    *(arg1 + (rbp_15 << 2) + 0xba4) = r10_1.d
    int64_t rbp_16 = sx.q(*(arg1 + 0x14a0))
    *(arg1 + 0x14a0) = rbp_16.d - 1
    *(arg1 + (rbp_16 << 2) + 0xba4) = rax_9.d
    *(r9 + (r14_3 << 2)) = *(r9 + (rax_9 << 2)) + *(r9 + (r10_1 << 2))
    r8.b = *(arg1 + r10_1 + 0x14a4)
    int32_t rbx_8
    rbx_8.b = *(arg1 + rax_9 + 0x14a4)
    
    if (r8.b u>= rbx_8.b)
        rbx_8 = r8.d
    
    rbx_8.b += 1
    *(arg1 + r14_3 + 0x14a4) = rbx_8.b
    *(r9 + (rax_9 << 2) + 2) = r14_3.w
    *(r9 + (r10_1 << 2) + 2) = r14_3.w
    *(arg1 + 0xbac) = r14_3.d
    int32_t rdi_8 = *(arg1 + 0x149c)
    int64_t rax_10 = 1
    
    if (rdi_8 s>= 2)
        int32_t r15_3 = 1
        int32_t rbx_9 = 2
        int32_t rbp_18
        
        while (true)
            int64_t rdi_9
            
            if (rbx_9 s>= rdi_8)
                rdi_9 = sx.q(rbx_9)
                rbp_18 = rbx_9
            else
                int32_t rsi_7 = rbx_9 | 1
                int64_t r10_2 = sx.q(rsi_7)
                int64_t r11_4 = sx.q(*(arg1 + (r10_2 << 2) + 0xba8))
                rdi_9 = sx.q(rbx_9)
                r8 = sx.q(*(arg1 + (rdi_9 << 2) + 0xba8))
                int16_t rbp_19 = *(r9 + (r8 << 2))
                int16_t temp3_1 = *(r9 + (r11_4 << 2))
                
                if (temp3_1 u< rbp_19)
                    rdi_9 = r10_2
                    rbp_18 = rsi_7
                else if (temp3_1 != rbp_19)
                    rbp_18 = rbx_9
                else
                    rbp_18 = rbx_9
                    
                    if (*(arg1 + r11_4 + 0x14a4) u<= *(arg1 + r8 + 0x14a4))
                        rdi_9 = r10_2
                        rbp_18 = rsi_7
            
            int32_t rbx_10 = *(arg1 + (rdi_9 << 2) + 0xba8)
            int64_t rdi_10 = sx.q(rbx_10)
            int16_t rsi_8 = *(r9 + (rdi_10 << 2))
            int16_t temp6_1 = *(r9 + (r14_3 << 2))
            
            if (temp6_1 u< rsi_8 ||
                    (temp6_1 == rsi_8 && *(arg1 + r14_3 + 0x14a4) u<= *(arg1 + rdi_10 + 0x14a4)))
                rbp_18 = r15_3
                break
            
            *(arg1 + (sx.q(r15_3) << 2) + 0xba8) = rbx_10
            rbx_9 = rbp_18 * 2
            rdi_8 = *(arg1 + 0x149c)
            r15_3 = rbp_18
            
            if (rbx_9 s> rdi_8)
                break
            
            continue
        
        rax_10 = sx.q(rbp_18)
    
    *(arg1 + (rax_10 << 2) + 0xba8) = r14_3.d
    r14_3 += 1
    rax_3 = zx.q(*(arg1 + 0x149c))
    
    if (rax_3.d s<= 1)
        break

int32_t rax_13 = *(arg1 + 0xbac)
int64_t rbp_20 = sx.q(*(arg1 + 0x14a0))
*(arg1 + 0x14a0) = rbp_20.d - 1
*(arg1 + (rbp_20 << 2) + 0xba4) = rax_13
int64_t r10_3 = *arg2
int32_t r8_1 = arg2[1].d
int64_t* rax_14 = arg2[2]
int64_t rdx = *rax_14
int64_t rdx_1 = rax_14[1]
int32_t rdi_11 = rax_14[2].d
int64_t r11_5 = sx.q(rax_14[3].d)
__builtin_memset(arg1 + 0xb88, 0, 0x20)
*(r10_3 + (sx.q(*(arg1 + (sx.q(*(arg1 + 0x14a0)) << 2) + 0xba8)) << 2) + 2) = 0
int32_t rax_17 = *(arg1 + 0x14a0)

if (rax_17 + 1 s<= 0x23c)
    int64_t rbp_21 = 0
    int32_t i_3 = 0
    
    do
        int64_t rbx_12 = sx.q(*(arg1 + (sx.q(rax_17 + 1) << 2) + 0xba8 + (rbp_21 << 2)))
        uint32_t r14_4 = zx.d(*(r10_3 + (zx.q(*(r10_3 + (rbx_12 << 2) + 2)) << 2) + 2))
        uint64_t rax_21
        rax_21.b = r11_5.d s<= r14_4
        int32_t r14_5
        
        if (r11_5.d s> r14_4)
            r14_5 = r14_4 + 1
        else
            r14_5 = r11_5.d
        
        int32_t rsi_9
        rsi_9.b = rax_21.b
        *(r10_3 + (rbx_12 << 2) + 2) = r14_5.w
        
        if (rbx_12.d s<= r8_1)
            int64_t rax_22 = sx.q(r14_5)
            *(arg1 + (rax_22 << 1) + 0xb88) += 1
            int32_t r15_4 = 0
            
            if (rbx_12.d s>= rdi_11)
                r15_4 = *(rdx_1 + (sx.q(rbx_12.d - rdi_11) << 2))
            
            uint32_t r12_4 = zx.d(*(r10_3 + (rbx_12 << 2)))
            *(arg1 + 0x1700) += (r14_5 + r15_4) * r12_4
            
            if (rdx != 0)
                *(arg1 + 0x1704) += (r15_4 + zx.d(*(rdx + (rbx_12 << 2) + 2))) * r12_4
        
        i_3 += rsi_9
        rbp_21 += 1
    while (0x23c - rax_17 != rbp_21.d)
    
    if (i_3 != 0)
        int16_t i_4
        int32_t i
        
        do
            void* rbp_22 = arg1 + (r11_5 << 1) + 0xb88
            int64_t rsi_10 = 0x100000000 + (r11_5 << 0x20)
            int16_t j
            
            do
                rsi_10 += -0x100000000
                j = *(rbp_22 - 2)
                rbp_22 -= 2
            while (j == 0)
            
            *rbp_22 = j - 1
            int64_t rsi_11 = rsi_10 s>> 0x1f
            *(arg1 + rsi_11 + 0xb88) += 2
            i_4 = *(arg1 + (r11_5 << 1) + 0xb88) - 1
            *(arg1 + (r11_5 << 1) + 0xb88) = i_4
            i = i_3
            i_3 -= 2
        while (i s> 2)
        
        if (r11_5.d != 0)
            int32_t rsi_12 = 0x23d
            
            while (true)
                uint32_t i_1 = zx.d(i_4)
            label_1403760da:
                int64_t rbp_24 = 0
                
                while (i_1 != 0)
                    int64_t rbx_13 = sx.q(*(arg1 + 0xba4 + (sx.q(rsi_12) << 2) + (rbp_24 << 2)))
                    rbp_24 -= 1
                    
                    if (rbx_13.d s<= r8_1)
                        rsi_12 += rbp_24.d
                        uint32_t rdx_5 = zx.d(*(r10_3 + (rbx_13 << 2) + 2))
                        int32_t rax_31 = r11_5.d
                        
                        if (rax_31 != rdx_5)
                            *(arg1 + 0x1700) += (rax_31 - rdx_5) * zx.d(*(r10_3 + (rbx_13 << 2)))
                            *(r10_3 + (rbx_13 << 2) + 2) = r11_5.w
                        
                        i_1 -= 1
                        goto label_1403760da
                
                if ((r11_5 - 1).d == 0)
                    break
                
                i_4 = *(arg1 + (r11_5 << 1) + 0xb86)
                r11_5 -= 1

int16_t rax_36 = *(arg1 + 0xb88) * 2
int16_t var_66 = rax_36
int16_t rdx_9 = (*(arg1 + 0xb8a) + rax_36) * 2
int16_t var_64 = rdx_9
int16_t rdx_12 = (*(arg1 + 0xb8c) + rdx_9) * 2
int16_t var_62 = rdx_12
int16_t rdx_15 = (*(arg1 + 0xb8e) + rdx_12) * 2
int16_t var_60 = rdx_15
int16_t rdx_18 = (*(arg1 + 0xb90) + rdx_15) * 2
int16_t var_5e = rdx_18
int16_t rdx_21 = (*(arg1 + 0xb92) + rdx_18) * 2
int16_t var_5c = rdx_21
int16_t rdx_24 = (*(arg1 + 0xb94) + rdx_21) * 2
int16_t var_5a = rdx_24
int16_t rdx_27 = (*(arg1 + 0xb96) + rdx_24) * 2
int16_t var_58 = rdx_27
int16_t rdx_30 = (*(arg1 + 0xb98) + rdx_27) * 2
int16_t var_56 = rdx_30
int16_t rdx_33 = (*(arg1 + 0xb9a) + rdx_30) * 2
int16_t var_54 = rdx_33
uint64_t rdx_35 = zx.q(zx.d(*(arg1 + 0xb9c)) + zx.d(rdx_33))
uint16_t var_52 = (rdx_35 * 2).w
int32_t rax_50 = (zx.d(*(arg1 + 0xb9e)) + (rdx_35 << 1).d) * 2
int16_t var_50 = rax_50.w
rax_50.w += *(arg1 + 0xba0)
int32_t rax_51 = rax_50 * 2
int16_t var_4e = rax_51.w
rax_51.w += *(arg1 + 0xba2)
int32_t rax_52 = rax_51 * 2
int16_t var_4c = rax_52.w
rax_52.w += *(arg1 + 0xba4)
int32_t result = rax_52 * 2
int16_t var_4a = result.w

if (rbx s>= 0)
    int64_t i_2 = 0
    
    do
        uint64_t rcx_7 = zx.q(*(r9 + (i_2 << 2) + 2))
        
        if (rcx_7 != 0)
            void var_68
            result = zx.d(*(&var_68 + (rcx_7 << 1)))
            *(&var_68 + (rcx_7 << 1)) = result.w + 1
            int32_t rdi_15 = rcx_7.d & 3
            uint32_t rbp_25 = 0
            
            if ((rcx_7 - 1).d u>= 3)
                int32_t j_3 = rdi_15 - rcx_7.d
                rbp_25 = 0
                int32_t j_1
                
                do
                    rcx_7 = zx.q((result u>> 3 & 1) + (((result u>> 2 & 1)
                        | ((result & 2) + (((result & 1) | rbp_25) << 2))) << 1))
                    result u>>= 4
                    rbp_25 = (rcx_7 * 2).d
                    j_1 = j_3
                    j_3 += 4
                while (j_1 != 0xfffffffc)
                
                if (rdi_15 != 0)
                    goto label_1403762d3
            else if (rdi_15 != 0)
            label_1403762d3:
                int32_t j_4 = neg.d(rdi_15)
                int32_t j_2
                
                do
                    rcx_7 = (zx.q(result) & 1) | zx.q(rbp_25)
                    result u>>= 1
                    rbp_25 = (rcx_7 * 2).d
                    j_2 = j_4
                    j_4 += 1
                while (j_2 != 0xffffffff)
            
            *(r9 + (i_2 << 2)) = rcx_7.w
        
        i_2 += 1
    while (i_2 != zx.q(rbx + 1))

__security_check_cookie(rax_1 ^ &var_a8)
return result
