// 函数: sub_141e84800
// 地址: 0x141e84800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* rcx_1 = arg1[8]
void* r11 = &arg1[7]
int32_t r10 = 0
int64_t rsi_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r11 = rcx_1

int32_t rdx_2 = *(r11 + ((sx.q(rax_1 + (arg2 u>> 0x20).d) & rsi_1) << 2))

if (rdx_2 != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t r9_1
    
    while (true)
        r9_1 = sx.q(rdx_2)
        int64_t* rax_5 = r9_1 * 0x38
        
        if (*(rax_5 + r8_1) == arg2)
            break
        
        rdx_2 = *(rax_5 + r8_1 + 0x30)
        
        if (rdx_2 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r10_1 = r9_1 * 0x38
        int64_t rax_9 = sx.q(*(r10_1 + r8_1 + 0x34)) & rsi_1
        void* rcx_2 = r11 + (rax_9 << 2)
        
        for (int32_t i = *(r11 + (rax_9 << 2)); i != 0xffffffff; i = *rcx_2)
            if (i == rdx_2)
                *rcx_2 = *(r10_1 + r8_1 + 0x30)
                break
            
            rcx_2 = sx.q(i) * 0x38 + 0x30 + r8_1
    
    r10 = 1
    void* r11_1 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *(sx.q(arg1[6].d) * 0x38 + *arg1) = rdx_2
    
    int32_t rcx_7 = -1
    int32_t* rax_15 = r9_1 * 0x38 + *arg1
    *rax_15 = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rcx_7 = arg1[6].d
    
    rax_15[1] = rcx_7
    *(arg1 + 0x34) += 1
    arg1[6].d = rdx_2
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx_2)
    void* rcx_8 = *(r11_1 + 0x10)
    
    if (rcx_8 != 0)
        r11_1 = rcx_8
    
    int64_t rcx_9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r11_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rdx_2.b))

return zx.q(r10)
