// 函数: sub_1418d8e20
// 地址: 0x1418d8e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x1538)

if (arg2 u<= 1)
    arg2 = 1

char r10 = 0
uint64_t r12_2 = zx.q(arg2 + 0xff) & 0xffffff00
int32_t rbp_1 = rbp - 1
int32_t arg_10

if (rbp - 1 s>= 0)
    arg_10 = 4
    int64_t r13_1 = sx.q(rbp_1) << 3
    int64_t r12_3 = r13_1
    int32_t temp3_1
    
    do
        int32_t rdx = 0
        void* rbx_1 = *(*(arg1 + 0x1530) + r13_1)
        int32_t r9_1 = *(rbx_1 + 0x40)
        uint64_t r8_2 = zx.q(r9_1) u>> 6
        
        if (r8_2 != 0)
            int64_t* rcx = *(rbx_1 + 0x58)
            
            while (*rcx == 0)
                rdx += 1
                rcx = &rcx[1]
                
                if (sx.q(rdx) u>= r8_2)
                    goto label_1418d8ece
            
            goto label_1418d8eef
        
    label_1418d8ece:
        int64_t rdx_1 = 1 << (r9_1.b & 0x3f)
        
        if (rdx_1 == 1 || (*(*(rbx_1 + 0x58) + (r8_2 << 3)) & (rdx_1 - 1)) == 0)
        label_1418d8f81:
            int32_t rdx_7 = *(arg1 + 0x1538)
            int32_t rax_9 = rdx_7 - rbp_1 - 1
            
            if (rax_9 s>= 1)
                rax_9 = 1
            
            if (rax_9 != 0)
                int64_t rcx_7 = *(arg1 + 0x1530)
                memcpy(rcx_7 + r12_3, rcx_7 + (sx.q(rdx_7 - rax_9) << 3), rax_9 << 3)
                rdx_7 = *(arg1 + 0x1538)
            
            *(arg1 + 0x1538) = rdx_7 - 1
            sub_1405c53d0(arg1 + 0x1530)
            int64_t rsi_1 = sx.q(*(arg1 + 0x1548))
            int32_t rax_12 = (rsi_1 + 1).d
            bool cond:2_1 = rax_12 s<= *(arg1 + 0x154c)
            *(arg1 + 0x1548) = rax_12
            
            if (not(cond:2_1))
                sub_1405a4d70(arg1 + 0x1540)
            
            r10 = 1
            *(*(arg1 + 0x1540) + (rsi_1 << 3)) = rbx_1
            *(rbx_1 + 0x3c) = data_14399fa54
        else
        label_1418d8eef:
            
            if (*(rbx_1 + 0x78) + 0xa u< data_14399fa54)
                int32_t i = 0
                
                if (*(rbx_1 + 0x60) s> 0)
                    int64_t* r11_1 = nullptr
                    int32_t r10_1 = 0
                    
                    do
                        int64_t* rcx_6 = *(rbx_1 + 0x58)
                        int32_t r9_2 = 0
                        uint64_t j = *(rcx_6 + r11_1)
                        
                        if (j != 0)
                            do
                                if ((j.b & 1) != 0)
                                    int64_t r8_3 = sx.q(r10_1 + r9_2) << 3
                                    void* rdx_4 = *(r8_3 + *(rbx_1 + 0x48))
                                    int32_t rcx_4 = 0
                                    bool cond:4_1 = *(rdx_4 + 0x38) == 3
                                    *(rdx_4 + 0x30) = 0
                                    
                                    if (cond:4_1)
                                        rcx_4 = 4
                                    
                                    *(rdx_4 + 0x38) = rcx_4
                                    *(rdx_4 + 0x28) = 0xffffffff
                                    *(r8_3 + *(rbx_1 + 0x48)) = 0
                                
                                r9_2 += 1
                                j u>>= 1
                            while (j != 0)
                            
                            rcx_6 = *(rbx_1 + 0x58)
                        
                        *(r11_1 + rcx_6) = j
                        i += 1
                        r11_1 = &r11_1[1]
                        r10_1 += 0x40
                    while (i s< *(rbx_1 + 0x60))
                
                goto label_1418d8f81
        
        r12_3 -= 8
        r13_1 -= 8
        temp3_1 = rbp_1
        rbp_1 -= 1
    while (temp3_1 - 1 s>= 0)

int32_t rax_15 = *(arg1 + 0x1548)

if (rax_15 s> 0)
    if (r10 != 0)
        arg_10.b = 0
        sub_1418ccfb0(*(arg1 + 0x1540), rax_15)
        rax_15 = *(arg1 + 0x1548)
    
    int32_t r9_3 = 0
    
    if (rax_15 s> 0)
        void** r10_2 = *(arg1 + 0x1540)
        int64_t i_1 = 0
        void** rcx_12 = r10_2
        
        do
            if (r12_2.d u<= *(*rcx_12 + 0x20))
                int32_t rdx_13 = *(arg1 + 0x1548)
                int64_t rax_22 = sx.q(r9_3)
                int64_t rsi_3 = r10_2[rax_22]
                int32_t rax_24 = rdx_13 - r9_3
                
                if (rax_24 != 1)
                    memmove(&r10_2[rax_22], &r10_2[sx.q(r9_3 + 1)], (rax_24 - 1) << 3)
                    rdx_13 = *(arg1 + 0x1548)
                
                *(arg1 + 0x1548) = rdx_13 - 1
                sub_1405c53d0(arg1 + 0x1540)
                int64_t rdi_1 = sx.q(*(arg1 + 0x1538))
                int32_t rcx_20 = (rdi_1 + 1).d
                *(arg1 + 0x1538) = rcx_20
                
                if (rcx_20 s> *(arg1 + 0x153c))
                    sub_1405a4d70(arg1 + 0x1530)
                
                *(*(arg1 + 0x1530) + (rdi_1 << 3)) = rsi_3
                return rsi_3
            
            r9_3 += 1
            i_1 += 1
            rcx_12 = &rcx_12[1]
        while (i_1 s< sx.q(rax_15))

void*** rax_17 = j_sub_140a82f30(0x80)
void*** rbx_2 = rax_17

if (rax_17 == 0)
    rbx_2 = nullptr
else
    sub_1418cfd70(rax_17, arg1, r12_2.d, 0)
    rbx_2[7].d = 0
    *rbx_2 = &data_142feee98
    *(rbx_2 + 0x3c) = 0xffffffff
    rbx_2[8].d = 0
    __builtin_memset(&rbx_2[9], 0, 0x28)
    rbx_2[0xe] = -1
    rbx_2[0xf].d = 0xffffffff
    int64_t rbp_2 = sx.q(rbx_2[0xc].d)
    uint32_t r14_3 = r12_2.d u>> 6
    int32_t rax_18 = r14_3 + rbp_2.d
    rbx_2[0xc].d = rax_18
    
    if (rax_18 s> *(rbx_2 + 0x64))
        sub_1405a4d70(&rbx_2[0xb])
    
    memset(&rbx_2[0xb][rbp_2], 0, zx.q(r14_3) << 3)
    int64_t rsi_2 = sx.q(rbx_2[0xa].d)
    int32_t rax_20 = (rsi_2 + r12_2).d
    rbx_2[0xa].d = rax_20
    
    if (rax_20 s> *(rbx_2 + 0x54))
        sub_1405a4d70(&rbx_2[9])
    
    memset(&rbx_2[9][rsi_2], 0, sx.q(r12_2.d) << 3)

int64_t rsi_4 = sx.q(*(arg1 + 0x1538))
int32_t rcx_23 = (rsi_4 + 1).d
*(arg1 + 0x1538) = rcx_23

if (rcx_23 s> *(arg1 + 0x153c))
    sub_1405a4d70(arg1 + 0x1530)

*(*(arg1 + 0x1530) + (rsi_4 << 3)) = rbx_2
return rbx_2
