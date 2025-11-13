// 函数: sub_1422c68b0
// 地址: 0x1422c68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x40))
int32_t rcx = arg2[1].d

if (result.d s> rcx)
    arg2[1].d = result.d
    
    if (result.d s> *(arg2 + 0xc))
        result = sub_140adefe0(arg2)
else if (result.d s< rcx && result.d != rcx)
    arg2[1].d = result.d
    result = sub_1422cf990(arg2)

uint64_t r10 = 0

if (*(arg1 + 0x40) u> 0)
    do
        int64_t rbp_1 = 0
        int64_t r15_1 = sx.q(r10.d) * 0x24
        int64_t r14_1 = r15_1
        int32_t r11_1 = 2
        int64_t i_1 = 3
        int64_t i
        
        do
            uint32_t rax_3
            uint32_t rcx_5
            
            if (*(arg1 + 0x21) == 0)
                rcx_5 = *(arg1 + 0x24)
                int32_t rax_4
                rax_4.b = *(arg1 + 0x28) != 0
                rax_3 = (rax_4 + 2) * rcx_5 * r10.d
            else
                int32_t rdx_1 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                rax_3 = rdx_1 u>> 8
                rcx_5 = zx.d(rdx_1.b)
            
            uint64_t rsi_1 = zx.q(r11_1 - 2)
            uint32_t rdx_2
            
            if (rsi_1.d u>= rcx_5)
                rdx_2 = 0
            else
                int64_t rcx_7 = zx.q(rax_3) + *(arg1 + 0x38)
                
                if (*(arg1 + 0x28) == 0)
                    rdx_2 = zx.d(*(rsi_1 + rcx_7))
                else
                    rdx_2 = zx.d(*(rcx_7 + (rsi_1 << 1)))
            
            *(r14_1 + *arg2) = rdx_2.w
            uint32_t rcx_9
            uint64_t r8_2
            
            if (*(arg1 + 0x21) == 0)
                rcx_9 = *(arg1 + 0x24)
                int32_t r8_3
                r8_3.b = *(arg1 + 0x28) != 0
                r8_2 = zx.q((r8_3 + 2) * rcx_9 * r10.d)
            else
                rdx_2 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                r8_2 = zx.q(rdx_2 u>> 8)
                rcx_9 = zx.d(rdx_2.b)
            
            if (rsi_1.d u>= rcx_9)
                rdx_2.b = 0
            else
                int32_t rax_9
                rax_9.b = *(arg1 + 0x28) != 0
                rdx_2 = zx.d(*(zx.q(rcx_9 * (rax_9 + 1) + rsi_1.d) + *(arg1 + 0x38) + r8_2))
            
            *(r15_1 + rbp_1 + *arg2 + 0x18) = rdx_2.b
            uint32_t rax_14
            uint32_t rcx_15
            
            if (*(arg1 + 0x21) == 0)
                rcx_15 = *(arg1 + 0x24)
                int32_t rax_15
                rax_15.b = *(arg1 + 0x28) != 0
                rax_14 = (rax_15 + 2) * rcx_15 * r10.d
            else
                int32_t rdx_3 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                rax_14 = rdx_3 u>> 8
                rcx_15 = zx.d(rdx_3.b)
            
            uint64_t r9_1 = zx.q(r11_1 - 1)
            uint32_t rdx_4
            
            if (r9_1.d u>= rcx_15)
                rdx_4 = 0
            else
                int64_t rcx_17 = zx.q(rax_14) + *(arg1 + 0x38)
                
                if (*(arg1 + 0x28) == 0)
                    rdx_4 = zx.d(*(r9_1 + rcx_17))
                else
                    rdx_4 = zx.d(*(rcx_17 + (r9_1 << 1)))
            
            *(r14_1 + *arg2 + 2) = rdx_4.w
            uint32_t rcx_19
            uint64_t r8_7
            
            if (*(arg1 + 0x21) == 0)
                rcx_19 = *(arg1 + 0x24)
                int32_t r8_8
                r8_8.b = *(arg1 + 0x28) != 0
                r8_7 = zx.q((r8_8 + 2) * rcx_19 * r10.d)
            else
                rdx_4 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                r8_7 = zx.q(rdx_4 u>> 8)
                rcx_19 = zx.d(rdx_4.b)
            
            if (r9_1.d u>= rcx_19)
                rdx_4.b = 0
            else
                int32_t rax_20
                rax_20.b = *(arg1 + 0x28) != 0
                rdx_4 = zx.d(*(zx.q((rsi_1 + 1).d + (rax_20 + 1) * rcx_19) + *(arg1 + 0x38) + r8_7))
            
            *(r15_1 + rbp_1 + *arg2 + 0x19) = rdx_4.b
            uint32_t rax_26
            uint32_t rcx_25
            
            if (*(arg1 + 0x21) == 0)
                rcx_25 = *(arg1 + 0x24)
                int32_t rax_27
                rax_27.b = *(arg1 + 0x28) != 0
                rax_26 = (rax_27 + 2) * rcx_25 * r10.d
            else
                int32_t rdx_5 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                rax_26 = rdx_5 u>> 8
                rcx_25 = zx.d(rdx_5.b)
            
            uint32_t rdx_6
            
            if (r11_1 u>= rcx_25)
                rdx_6 = 0
            else
                int64_t rcx_27 = zx.q(rax_26) + *(arg1 + 0x38)
                uint64_t rax_30 = zx.q(r11_1)
                
                if (*(arg1 + 0x28) == 0)
                    rdx_6 = zx.d(*(rax_30 + rcx_27))
                else
                    rdx_6 = zx.d(*(rcx_27 + (rax_30 << 1)))
            
            *(r14_1 + *arg2 + 4) = rdx_6.w
            uint32_t rcx_29
            uint64_t r8_12
            
            if (*(arg1 + 0x21) == 0)
                rcx_29 = *(arg1 + 0x24)
                int32_t r8_13
                r8_13.b = *(arg1 + 0x28) != 0
                r8_12 = zx.q((r8_13 + 2) * rcx_29 * r10.d)
            else
                rdx_6 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                r8_12 = zx.q(rdx_6 u>> 8)
                rcx_29 = zx.d(rdx_6.b)
            
            if (r11_1 u>= rcx_29)
                rdx_6.b = 0
            else
                int32_t rax_33
                rax_33.b = *(arg1 + 0x28) != 0
                rdx_6 =
                    zx.d(*(zx.q((rsi_1 + 2).d + (rax_33 + 1) * rcx_29) + *(arg1 + 0x38) + r8_12))
            
            *(r15_1 + rbp_1 + *arg2 + 0x1a) = rdx_6.b
            uint32_t rax_39
            uint32_t rcx_35
            
            if (*(arg1 + 0x21) == 0)
                rcx_35 = *(arg1 + 0x24)
                int32_t rax_40
                rax_40.b = *(arg1 + 0x28) != 0
                rax_39 = (rax_40 + 2) * rcx_35 * r10.d
            else
                int32_t rdx_7 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                rax_39 = rdx_7 u>> 8
                rcx_35 = zx.d(rdx_7.b)
            
            uint64_t r9_2 = zx.q(r11_1 + 1)
            uint32_t rdx_8
            
            if (r9_2.d u>= rcx_35)
                rdx_8 = 0
            else
                int64_t rcx_37 = zx.q(rax_39) + *(arg1 + 0x38)
                
                if (*(arg1 + 0x28) == 0)
                    rdx_8 = zx.d(*(r9_2 + rcx_37))
                else
                    rdx_8 = zx.d(*(rcx_37 + (r9_2 << 1)))
            
            *(r14_1 + *arg2 + 6) = rdx_8.w
            uint32_t rcx_39
            uint64_t r8_17
            
            if (*(arg1 + 0x21) == 0)
                rcx_39 = *(arg1 + 0x24)
                int32_t r8_18
                r8_18.b = *(arg1 + 0x28) != 0
                r8_17 = zx.q((r8_18 + 2) * rcx_39 * r10.d)
            else
                rdx_8 = *(zx.q((r10 << 2).d) + *(arg1 + 0x78))
                r8_17 = zx.q(rdx_8 u>> 8)
                rcx_39 = zx.d(rdx_8.b)
            
            if (r9_2.d u>= rcx_39)
                rdx_8.b = 0
            else
                int32_t rax_45
                rax_45.b = *(arg1 + 0x28) != 0
                rdx_8 =
                    zx.d(*(zx.q((rsi_1 + 3).d + (rax_45 + 1) * rcx_39) + *(arg1 + 0x38) + r8_17))
            
            result = *arg2
            int64_t rcx_43 = r15_1 + rbp_1
            r11_1 += 4
            rbp_1 += 4
            r14_1 += 8
            *(rcx_43 + result + 0x1b) = rdx_8.b
            i = i_1
            i_1 -= 1
        while (i != 1)
        r10 = zx.q(r10.d + 1)
    while (r10.d u< *(arg1 + 0x40))

return result
