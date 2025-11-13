// 函数: sub_142a6a710
// 地址: 0x142a6a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t rdi

if (((rbp - 4).d & 0xfffffffa) != 0 || rbp.d == 9)
    rdi.b = 0
else
    rdi.b = 1

int32_t r14

if (rbp.d != 3 || *(arg1 + 0x84) s> *(arg1 + 0xc4))
    r14 = (*(*arg1 + 0x118))()
else
    r14 = arg1[0xa].d

int32_t rsi = 1
arg1[0xb].d = r14
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1
int32_t r15

if (*(arg1 + 0xb) != 0 || arg1[0x11].d != 0)
    r15 = *(arg1 + 0x14)
else
    int64_t r8_1 = *arg1
    r15 = (*(r8_1 + 0x148))(arg1, zx.q(r14), r8_1)

int32_t r13 = 0
uint64_t r8_2 = 0

if (rdi.b != 0)
    r8_2 = zx.q(r15)

int32_t rax_6 = (*(*arg1 + 0x100))(arg1, zx.q(r14), r8_2, zx.q(rdi.b))
int32_t r12 = rax_6

if (rbp.d == 5)
    bool cond:3_1
    
    if (*(arg1 + 0xb) != 0)
        cond:3_1 = *(arg1 + 0x94) s<= 0
    else
        int32_t temp1_1 = *(arg1 + 0x94)
        cond:3_1 = temp1_1 s<= 0
        
        if (temp1_1 == 0)
            int64_t r9_1 = *arg1
            return zx.q((*(r9_1 + 0x150))(arg1, zx.q(r14), zx.q(r15), r9_1) + r12)
    
    if (not(cond:3_1))
        rsi = arg1[4].d
    
    return zx.q(rsi + r12)

if (rbp.d == 6)
    return zx.q(*(arg1 + 0x24) + r12)

int32_t rdi_1 = arg1[0x20].d
char rax_11 = (int.d(sub_142a4b9c0(_mm_cvtepi32_pd(zx.q(rax_6 + 1)) f+ 1.0, 7.0))).b
uint32_t rax_12 = zx.d((rax_11 s>> 7 & 7) + rax_11 + 1)
int32_t rax_13 = rax_12 - rdi_1
int32_t r15_1 = rax_13 + 7

if (rax_12 - rdi_1 s>= 0)
    r15_1 = rax_13

int32_t rax_14 = sub_142a6a360(arg1)
int32_t rdi_4 = rax_14 - r15_1 + 1
int32_t rcx_9

if (rbp.d != 8)
    int32_t rsi_2 = r15_1
    
    if (rbp.d == 3)
        if (*(arg1 + 0xb) != 0 || *(arg1 + 0xc4) != 0)
            if (sub_142a6b7a0(arg1, &data_14363e840) != 0x11 && *(arg1 + 0xc4) != 1)
                goto label_142a6a92d
        else
        label_142a6a92d:
            int32_t rsi_3 = arg1[3].d
            int32_t rax_24 = (*(*arg1 + 0x100))(arg1, zx.q(r14 + 1), 0, 0, arg3)
            arg3 = _mm_cvtepi32_pd(zx.q(rax_24 + 1))
            uint32_t rcx_14 = zx.d(sub_142a6b1c0(arg3.q))
            int32_t rcx_15 = rcx_14 - rdi_1
            int32_t rdx_9 = rcx_15 + 7
            
            if (rcx_14 - rdi_1 s>= 0)
                rdx_9 = rcx_15
            
            rsi_2 = r15_1
            double zmm0_2
            
            if (rsi_3 != 1)
                if (rsi_3 s>= (*(*arg1 + 0x90))(arg1, 3))
                    int32_t rdx_10 = rdi_4 + 7
                    
                    if (7 - r15_1 s>= zx.d(*(arg1 + 0x104)))
                        rdx_10 = rdi_4
                    
                    if (rsi_3 * 7 - 7 + r12 + rdx_10 s> rax_24)
                        int32_t rax_32 = (*(*arg1 + 0x100))(arg1, zx.q(r14 - 1), 0, 0)
                        r12 = rax_32
                        zmm0_2 = _mm_cvtepi32_pd(zx.q(rax_32 + 1))
                        goto label_142a6aa25
            else if (rdx_9 s> 0 && 7 - rdx_9 s>= zx.d(*(arg1 + 0x104)))
                r12 = rax_24
                zmm0_2 = arg3.q
            label_142a6aa25:
                uint32_t rax_35 = zx.d(sub_142a6b1c0(zmm0_2))
                int32_t rax_36 = rax_35 - rdi_1
                rsi_2 = rax_36 + 7
                
                if (rax_35 - rdi_1 s>= 0)
                    rsi_2 = rax_36
                
                rdi_4 = rax_14 - rsi_2 + 1
    
    int32_t rdx_12 = rdi_4 + 7
    
    if (7 - rsi_2 s>= zx.d(*(arg1 + 0x104)))
        rdx_12 = rdi_4
    
    rcx_9 = *(arg1 + (rbp << 2) + 0xc) * 7 - 7 + rdx_12
else
    int32_t rbp_1 = rdi_4 + 7
    
    if (rdi_4 s>= 1)
        rbp_1 = rdi_4
    
    if (arg1[0x14].d s> 0)
        rsi = *(arg1 + 0x2c)
    
    if (arg1[0x14].d s<= 0 || rsi s>= 0)
        rcx_9 = rbp_1 - 7 + rsi * 7
    else
        if (arg1[0x11].d s> 0)
            r13 = *(arg1 + 0x14)
        
        rcx_9 =
            (rsi + 1 + ((*(*arg1 + 0x108))(arg1, zx.q(r14), zx.q(r13)) - rbp_1) s/ 7) * 7 + rbp_1

return zx.q(rcx_9 + r12)
