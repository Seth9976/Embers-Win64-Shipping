// 函数: sub_142bad150
// 地址: 0x142bad150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1[0x24]
int32_t rsi = 0
int64_t r15 = arg1[0x25]
int64_t* r13 = arg1[3]
int32_t rax_1 = *(*arg1 + 0x10)
void* rdi = &rbx[4]
int32_t result
int32_t rbp_1
uint16_t r8_1

do
    rbp_1 = rsi + 1
    result = sub_142b929a0(r13, rbp_1)
    
    if (result != 0)
        return result
    
    if (rdi u> r15)
        return 0x15
    
    int32_t r11_1 = 0
    uint32_t* rdx_4 = (zx.q(rsi) << 5) + r13[0x14]
    *(rdx_4 + 8) = 0
    r8_1 = zx.w(*rbx) << 8 | zx.w(rbx[1])
    rdx_4[1].w = r8_1
    uint32_t rcx_3 = zx.d(rbx[2]) << 8 | zx.d(rbx[3])
    *rdx_4 = rcx_3
    
    if (rcx_3 s>= rax_1)
        return 0x15
    
    uint64_t rax_4 = 4
    uint16_t rcx_4 = r8_1 & 1
    
    if (rcx_4 == 0)
        rax_4 = 2
    
    uint16_t rsi_1 = r8_1 & 8
    
    if (rsi_1 != 0)
        rax_4 = zx.q(rax_4.d + 2)
    else if ((r8_1.b & 0x40) != 0)
        rax_4 = zx.q(rax_4.d + 4)
    else if (r8_1.b s< 0)
        rax_4 = zx.q(rax_4.d + 8)
    
    if (&rbx[4 + rax_4] u> r15)
        return 0x15
    
    int32_t rax_11
    
    if ((2 & r8_1.b) != 0)
        if (rcx_4 == 0)
            rdx_4[2] = sx.d(rbx[4])
            rax_11 = sx.d(rbx[5])
            goto label_142bad2bd
        
        rdi += 8
        int32_t rcx_5 = sx.d(zx.w(rbx[4]) << 8)
        uint32_t rax_7 = zx.d(rbx[5])
        rbx = &rbx[8]
        rdx_4[2] = rcx_5 | rax_7
        rdx_4[3] = sx.d(zx.w(rbx[-2]) << 8) | zx.d(rbx[-1])
    else if (rcx_4 == 0)
        rdx_4[2] = zx.d(rbx[4])
        rax_11 = zx.d(rbx[5])
    label_142bad2bd:
        rbx = &rbx[6]
        rdx_4[3] = rax_11
        rdi += 6
    else
        uint32_t rax_12 = zx.d(rbx[5])
        rdi += 8
        uint32_t rcx_9 = zx.d(rbx[4])
        rbx = &rbx[8]
        rdx_4[2] = rcx_9 << 8 | rax_12
        rdx_4[3] = zx.d(rbx[-2]) << 8 | zx.d(rbx[-1])
    int32_t rcx_17 = 0x10000
    int32_t r10_1 = 0
    int32_t r9_1 = 0x10000
    
    if (rsi_1 != 0)
        uint16_t rax_15 = zx.w(*rbx)
        rbx = &rbx[2]
        rdi += 2
        rcx_17 = (sx.d(rax_15 << 8) | zx.d(rbx[-1])) << 2
        r9_1 = rcx_17
    else if ((r8_1.b & 0x40) != 0)
        int32_t rcx_18 = sx.d(zx.w(*rbx) << 8)
        uint32_t rax_18 = zx.d(rbx[1])
        rbx = &rbx[4]
        rdi += 4
        rcx_17 = (rcx_18 | rax_18) << 2
        r9_1 = (sx.d(zx.w(rbx[-2]) << 8) | zx.d(rbx[-1])) << 2
    else if (r8_1.b s< 0)
        int32_t rcx_19 = sx.d(zx.w(*rbx) << 8) | zx.d(rbx[1])
        int32_t r10_3 = sx.d(zx.w(rbx[2]) << 8) | zx.d(rbx[3])
        int32_t r11_2 = sx.d(zx.w(rbx[4]) << 8)
        uint32_t rax_24 = zx.d(rbx[5])
        rbx = &rbx[8]
        r10_1 = r10_3 << 2
        r11_1 = (r11_2 | rax_24) << 2
        rdi += 8
        rcx_17 = rcx_19 << 2
        r9_1 = (sx.d(zx.w(rbx[-2]) << 8) | zx.d(rbx[-1])) << 2
    
    rdx_4[4] = rcx_17
    rsi = rbp_1
    rdx_4[5] = r11_1
    rdx_4[6] = r10_1
    rdx_4[7] = r9_1
while ((r8_1.b & 0x20) != 0)
r13[0x13].d = rbp_1
int32_t rax_27 = sub_1408e52d0(arg1[5])
arg1[0x24] = rbx
arg1[0x1f].d = rax_27 + rbx.d - r15.d
return result
