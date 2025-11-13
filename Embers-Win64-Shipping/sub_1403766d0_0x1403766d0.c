// 函数: sub_1403766d0
// 地址: 0x1403766d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

uint32_t r10_1 = zx.d(*(arg2 + 2))
int16_t temp0_1 = r10_1.w
uint64_t rax
rax.b = temp0_1 == 0
int32_t rcx = 7

if (temp0_1 == 0)
    rcx = 0x8a

int32_t rsi_1 = 4 - rax.d
int64_t i = 0
uint32_t rbx_1 = -1
int32_t r12_1 = 0

do
    uint32_t r14_1 = r10_1
    r10_1 = zx.d(*(arg2 + (i << 2) + 6))
    i += 1
    int32_t rbp_1 = r12_1 + 1
    
    if (rbp_1 s>= rcx || r14_1 != r10_1)
        if (rbp_1 s>= rsi_1)
            int32_t r9_14
            
            if (r14_1 != 0)
                int32_t r9_2
                
                if (r14_1 != rbx_1)
                    uint64_t rax_4 = zx.q(r14_1)
                    uint32_t rsi_8 = zx.d(*(arg1 + (rax_4 << 2) + 0xaa6))
                    int32_t r9_6 = *(arg1 + 0x1714)
                    uint32_t rbx_7 = zx.d(*(arg1 + (rax_4 << 2) + 0xaa4))
                    uint16_t rbp_5 = (rbx_7 << r9_6.b).w | *(arg1 + 0x1710)
                    *(arg1 + 0x1710) = rbp_5
                    
                    if (r9_6 s<= 0x10 - rsi_8)
                        r9_2 = r9_6 + rsi_8
                    else
                        char* rax_5 = *(arg1 + 0x10)
                        uint64_t rcx_9 = zx.q(*(arg1 + 0x28))
                        *(arg1 + 0x28) = (rcx_9 + 1).d
                        rax_5[rcx_9] = rbp_5.b
                        rax_5.b = *(arg1 + 0x1711)
                        char* rcx_10 = *(arg1 + 0x10)
                        uint64_t rbp_6 = zx.q(*(arg1 + 0x28))
                        *(arg1 + 0x28) = (rbp_6 + 1).d
                        rcx_10[rbp_6] = rax_5.b
                        int32_t rax_6 = *(arg1 + 0x1714)
                        rcx_10.b = 0x10
                        rcx_10.b = 0x10 - rax_6.b
                        *(arg1 + 0x1710) = (rbx_7 u>> rcx_10.b).w
                        r9_2 = rsi_8 + rax_6 - 0x10
                    
                    *(arg1 + 0x1714) = r9_2
                else
                    r9_2 = *(arg1 + 0x1714)
                    r12_1 = rbp_1
                
                uint32_t rbx_11 = zx.d(*(arg1 + 0xae6))
                uint32_t rbp_8 = zx.d(*(arg1 + 0xae4))
                uint16_t rsi_13 = (rbp_8 << r9_2.b).w | *(arg1 + 0x1710)
                *(arg1 + 0x1710) = rsi_13
                int32_t r9_12
                
                if (r9_2 s<= 0x10 - rbx_11)
                    r9_12 = r9_2 + rbx_11
                else
                    char* rax_11 = *(arg1 + 0x10)
                    uint64_t rcx_15 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_15 + 1).d
                    rax_11[rcx_15] = rsi_13.b
                    rax_11.b = *(arg1 + 0x1711)
                    char* rcx_16 = *(arg1 + 0x10)
                    uint64_t rdi_12 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_12 + 1).d
                    rcx_16[rdi_12] = rax_11.b
                    int32_t rax_12 = *(arg1 + 0x1714)
                    rcx_16.b = 0x10
                    rcx_16.b = 0x10 - rax_12.b
                    uint16_t rbp_9 = (rbp_8 u>> rcx_16.b).w
                    *(arg1 + 0x1710) = rbp_9
                    r9_12 = rbx_11 + rax_12 - 0x10
                    rsi_13 = rbp_9
                
                uint32_t rdi_13 = zx.d(r12_1.w - 3)
                *(arg1 + 0x1714) = r9_12
                int16_t rsi_15 = rsi_13 | (rdi_13 << r9_12.b).w
                *(arg1 + 0x1710) = rsi_15
                
                if (r9_12 s< 0xf)
                    r9_14 = r9_12 + 2
                else
                    rax = *(arg1 + 0x10)
                    uint64_t rcx_18 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_18 + 1).d
                    *(rax + rcx_18) = rsi_15.b
                    rax.b = *(arg1 + 0x1711)
                    int64_t rcx_19 = *(arg1 + 0x10)
                    uint64_t rbp_11 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rbp_11 + 1).d
                    *(rcx_19 + rbp_11) = rax.b
                    int32_t r9_13 = *(arg1 + 0x1714)
                    rcx_19.b = 0x10
                    rcx_19.b = 0x10 - r9_13.b
                    *(arg1 + 0x1710) = (rdi_13 u>> rcx_19.b).w
                    r9_14 = r9_13 - 0xe
            else if (rbp_1 s> 0xa)
                uint32_t rbp_7 = zx.d(*(arg1 + 0xaee))
                int32_t r9_8 = *(arg1 + 0x1714)
                uint32_t rbx_9 = zx.d(*(arg1 + 0xaec))
                uint16_t rsi_10 = (rbx_9 << r9_8.b).w | *(arg1 + 0x1710)
                *(arg1 + 0x1710) = rsi_10
                int32_t r9_10
                
                if (r9_8 s<= 0x10 - rbp_7)
                    r9_10 = r9_8 + rbp_7
                else
                    char* rax_8 = *(arg1 + 0x10)
                    uint64_t rcx_12 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_12 + 1).d
                    rax_8[rcx_12] = rsi_10.b
                    rax_8.b = *(arg1 + 0x1711)
                    char* rcx_13 = *(arg1 + 0x10)
                    uint64_t rdi_10 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_10 + 1).d
                    rcx_13[rdi_10] = rax_8.b
                    int32_t rax_9 = *(arg1 + 0x1714)
                    rcx_13.b = 0x10
                    rcx_13.b = 0x10 - rax_9.b
                    uint16_t rbx_10 = (rbx_9 u>> rcx_13.b).w
                    *(arg1 + 0x1710) = rbx_10
                    r9_10 = rax_9 + rbp_7 - 0x10
                    rsi_10 = rbx_10
                
                uint32_t rdi_17 = zx.d(r12_1.w - 0xa)
                *(arg1 + 0x1714) = r9_10
                int16_t rsi_17 = rsi_10 | (rdi_17 << r9_10.b).w
                *(arg1 + 0x1710) = rsi_17
                
                if (r9_10 s< 0xa)
                    r9_14 = r9_10 + 7
                else
                    rax = *(arg1 + 0x10)
                    uint64_t rcx_24 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_24 + 1).d
                    *(rax + rcx_24) = rsi_17.b
                    rax.b = *(arg1 + 0x1711)
                    char* rcx_25 = *(arg1 + 0x10)
                    uint64_t rbp_15 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rbp_15 + 1).d
                    rcx_25[rbp_15] = rax.b
                    int32_t r9_16 = *(arg1 + 0x1714)
                    rcx_25.b = 0x10
                    rcx_25.b = 0x10 - r9_16.b
                    *(arg1 + 0x1710) = (rdi_17 u>> rcx_25.b).w
                    r9_14 = r9_16 - 9
            else
                uint32_t rbp_3 = zx.d(*(arg1 + 0xaea))
                int32_t r9_3 = *(arg1 + 0x1714)
                uint32_t rbx_5 = zx.d(*(arg1 + 0xae8))
                uint16_t rsi_6 = (rbx_5 << r9_3.b).w | *(arg1 + 0x1710)
                *(arg1 + 0x1710) = rsi_6
                int32_t r9_5
                
                if (r9_3 s<= 0x10 - rbp_3)
                    r9_5 = r9_3 + rbp_3
                else
                    char* rax_2 = *(arg1 + 0x10)
                    uint64_t rcx_6 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_6 + 1).d
                    rax_2[rcx_6] = rsi_6.b
                    rax_2.b = *(arg1 + 0x1711)
                    char* rcx_7 = *(arg1 + 0x10)
                    uint64_t rdi_5 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_5 + 1).d
                    rcx_7[rdi_5] = rax_2.b
                    int32_t rax_3 = *(arg1 + 0x1714)
                    rcx_7.b = 0x10
                    rcx_7.b = 0x10 - rax_3.b
                    uint16_t rbx_6 = (rbx_5 u>> rcx_7.b).w
                    *(arg1 + 0x1710) = rbx_6
                    r9_5 = rax_3 + rbp_3 - 0x10
                    rsi_6 = rbx_6
                
                uint32_t rdi_15 = zx.d(r12_1.w - 2)
                *(arg1 + 0x1714) = r9_5
                int16_t rsi_16 = rsi_6 | (rdi_15 << r9_5.b).w
                *(arg1 + 0x1710) = rsi_16
                
                if (r9_5 s< 0xe)
                    r9_14 = r9_5 + 3
                else
                    rax = *(arg1 + 0x10)
                    uint64_t rcx_21 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rcx_21 + 1).d
                    *(rax + rcx_21) = rsi_16.b
                    rax.b = *(arg1 + 0x1711)
                    int64_t rcx_22 = *(arg1 + 0x10)
                    uint64_t rbp_13 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rbp_13 + 1).d
                    *(rcx_22 + rbp_13) = rax.b
                    int32_t r9_15 = *(arg1 + 0x1714)
                    rcx_22.b = 0x10
                    rcx_22.b = 0x10 - r9_15.b
                    *(arg1 + 0x1710) = (rdi_15 u>> rcx_22.b).w
                    r9_14 = r9_15 - 0xd
            
            *(arg1 + 0x1714) = r9_14
        else
            uint64_t r9_1 = zx.q(r14_1)
            int32_t rcx_1 = *(arg1 + 0x1714)
            int32_t j_1 = not.d(r12_1)
            int32_t j
            
            do
                uint32_t rbp_2 = zx.d(*(arg1 + (r9_1 << 2) + 0xaa6))
                rax = zx.q(*(arg1 + (r9_1 << 2) + 0xaa4))
                int16_t rbx_3 = (rax.d << rcx_1.b).w | *(arg1 + 0x1710)
                *(arg1 + 0x1710) = rbx_3
                
                if (rcx_1 s<= 0x10 - rbp_2)
                    rcx_1 += rbp_2
                else
                    char* rcx_2 = *(arg1 + 0x10)
                    uint64_t rdi_2 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_2 + 1).d
                    rcx_2[rdi_2] = rbx_3.b
                    char rcx_3 = *(arg1 + 0x1711)
                    int64_t rsi_3 = *(arg1 + 0x10)
                    uint64_t rdi_3 = zx.q(*(arg1 + 0x28))
                    *(arg1 + 0x28) = (rdi_3 + 1).d
                    *(rsi_3 + rdi_3) = rcx_3
                    int32_t rsi_4 = *(arg1 + 0x1714)
                    *(arg1 + 0x1710) = (rax.d u>> (0x10 - rsi_4.b)).w
                    rcx_1 = rsi_4 + rbp_2 - 0x10
                
                *(arg1 + 0x1714) = rcx_1
                j = j_1
                j_1 += 1
            while (j != 0xffffffff)
        
        rbp_1 = 0
        
        if (r10_1.w == 0)
            rcx = 0x8a
            rsi_1 = 3
        else
            int32_t rcx_26
            rcx_26.b = r14_1 == r10_1
            rsi_1 = 4 - rcx_26
            rcx = rcx_26 ^ 7
    else
        r14_1 = rbx_1
    
    rbx_1 = r14_1
    r12_1 = rbp_1
while (i != zx.q(arg3 + 1))
