// 函数: sub_14122ec00
// 地址: 0x14122ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b212b0(arg2, 0xc, 0)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t r11 = 0
int64_t rsi_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t rdx = *(r10 + ((sx.q(rax_1) & rsi_1) << 2))

if (rdx != 0xffffffff)
    void* r9_1 = *arg1
    int64_t r8_2
    
    while (true)
        r8_2 = sx.q(rdx) << 6
        
        if (*(r8_2 + r9_1) == *arg2 && *(r8_2 + r9_1 + 4) == *(arg2 + 4)
                && *(r8_2 + r9_1 + 8) == *(arg2 + 8))
            break
        
        rdx = *(r8_2 + r9_1 + 0x38)
        
        if (rdx == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_9 = sx.q(*(r8_2 + r9_1 + 0x3c)) & rsi_1
        void* rcx_3 = r10 + (rax_9 << 2)
        
        for (int32_t i = *(r10 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_3)
            if (i == rdx)
                *rcx_3 = *(r8_2 + r9_1 + 0x38)
                break
            
            rcx_3 = r9_1 + 0x38 + (sx.q(i) << 6)
    
    r11 = 1
    void* r10_1 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *((sx.q(arg1[6].d) << 6) + *arg1) = rdx
    
    int32_t* rcx_8 = *arg1
    int32_t rax_14 = -1
    rcx_8[sx.q(rdx) * 0x10] = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rax_14 = arg1[6].d
    
    rcx_8[sx.q(rdx) * 0x10 + 1] = rax_14
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx)
    void* rcx_9 = *(r10_1 + 0x10)
    
    if (rcx_9 != 0)
        r10_1 = rcx_9
    
    int64_t rcx_10 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r10_1 + (rcx_10 << 2)) &= not.d(rol.d(1, rdx.b))

return zx.q(r11)
