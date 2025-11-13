// 函数: sub_1419711d0
// 地址: 0x1419711d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_20
int64_t rbx_1
int64_t rbp_1
int64_t rsi_1
int64_t rdi_1
uint64_t r14_1
int64_t r15_1

if (arg1[1].d != *(arg1 + 0x34))
    rbx_1 = *(arg3 + 0x48)
    void* r9_1 = &arg1[7]
    rdi_1 = *(arg3 + 0x50)
    rsi_1 = *(arg3 + 0x58)
    rbp_1 = *(arg3 + 0x60)
    r14_1 = zx.q(arg3[1].b)
    void* r8 = *(r9_1 + 8)
    r15_1 = sx.q(*arg3)
    int64_t rdx_3 = sx.q((rbx_1 u>> 0x20).d * 0x17 + rbx_1.d)
        ^ sx.q((rdi_1 u>> 0x20).d * 0x17 + rdi_1.d) ^ sx.q((rsi_1 u>> 0x20).d * 0x17 + rsi_1.d)
        ^ sx.q((rbp_1 u>> 0x20).d * 0x17 + rbp_1.d)
    
    if (r8 != 0)
        r9_1 = r8
    
    rax_20 = *(r9_1 + (((rdx_3 ^ r15_1 ^ r14_1) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_20 == 0xffffffff)
label_1419712bc:
    *arg2 = 0xffffffff
else
    int64_t r8_1 = *arg1
    
    while (true)
        int32_t* rdx_7 = sx.q(rax_20) * 0x78
        
        if (*(rdx_7 + r8_1) == r15_1.d && *(rdx_7 + r8_1 + 4) == r14_1.b
                && *(rdx_7 + r8_1 + 0x48) == rbx_1 && *(rdx_7 + r8_1 + 0x50) == rdi_1
                && *(rdx_7 + r8_1 + 0x58) == rsi_1 && *(rdx_7 + r8_1 + 0x60) == rbp_1)
            *arg2 = rax_20
            break
        
        rax_20 = *(rdx_7 + r8_1 + 0x70)
        
        if (rax_20 == 0xffffffff)
            goto label_1419712bc

return arg2
