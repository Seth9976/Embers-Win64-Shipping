// 函数: sub_142be18c0
// 地址: 0x142be18c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x28)
int32_t r8 = *(arg1 + 0x2c)
void* rdi = *(arg1 + 0x18)
int32_t arg_8 = 0

if (i_1 + 1 u> r8)
    *(arg1 + 0x38) = arg2
    int64_t rax_2 = sub_142b99a90(arg2, 4, r8, i_1 + 1, *(arg1 + 0x30), &arg_8)
    bool cond:0_1 = arg_8 != 0
    *(arg1 + 0x30) = rax_2
    
    if (cond:0_1)
        return 0
    
    *(arg1 + 0x2c) = i_1 + 1

uint32_t* rsi_1 = *(arg1 + 0x30)

if (i_1 != 0)
    void* rdx = rdi + 7
    char* r12_1 = rdi + 9
    char* r13_1 = rdi + 8
    void* r8_1 = rdi + 6
    int32_t i
    
    do
        uint32_t rax_3 = zx.d(r13_1[3])
        r13_1 = &r13_1[0xb]
        r12_1 = &r12_1[0xb]
        uint32_t r14_5 = (zx.d(*(rdx + 3)) << 8 | rax_3) << 8 | zx.d(r12_1[-8])
        arg_8.q = rdx + 0xb
        uint64_t rcx_7 =
            zx.q(((zx.d(*(r8_1 + 7)) << 8 | zx.d(*(rdx + 7))) << 8 | zx.d(r13_1[-4])) << 8)
            | zx.q(r12_1[-4])
        uint32_t rdi_7 = ((zx.d(*(r8_1 + 0xb)) << 8 | zx.d(*(rdx + 0xb))) << 8 | zx.d(*r13_1)) << 8
            | zx.d(*r12_1)
        int32_t rax_11
        
        if (rcx_7.d != 0)
            rax_11 = sub_142be8ca0(rcx_7 + *(arg1 + 0x18), arg3)
        
        if (rcx_7.d != 0 && rax_11 != 0)
            *rsi_1 = r14_5
            rsi_1 = &rsi_1[1]
        else if (rdi_7 != 0 && sub_142be8d40(zx.q(rdi_7) + *(arg1 + 0x18), arg3) != 0)
            *rsi_1 = r14_5
            rsi_1 = &rsi_1[1]
        
        rdx = arg_8.q
        r8_1 += 0xb
        i = i_1
        i_1 -= 1
    while (i != 1)

*rsi_1 = 0
return *(arg1 + 0x30)
