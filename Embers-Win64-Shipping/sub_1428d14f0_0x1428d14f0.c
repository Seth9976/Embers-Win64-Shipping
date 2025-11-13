// 函数: sub_1428d14f0
// 地址: 0x1428d14f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i_1 = arg3
char* r14 = arg2

if (*(arg1 + 0x38) != 0)
    return 0xfffffffe

int64_t rcx_1 = *(arg1 + 0x30) + arg3

if (rcx_1 u> 0x2000000000000000 || rcx_1 u< arg3)
    return 0xffffffff

void* rbx = arg1 + 0x40
int32_t rsi = *(arg1 + 0x174)
*(arg1 + 0x30) = rcx_1
void* r12_1

if (rsi == 0)
    r12_1 = arg1 + 0x60
label_1428d15b5:
    int64_t r15_2 = i_1 & 0xfffffffffffffff0
    
    if (r15_2 != 0)
        sub_1428d2a90(rbx, r12_1, r14, r15_2)
        r14 = &r14[r15_2]
        i_1 -= r15_2
    
    if (i_1 != 0)
        rsi = i_1.d
        int64_t i
        
        do
            *rbx ^= *(r14 - arg1 + rbx - 0x40)
            rbx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    while (i_1 != 0)
        char rax_2 = *r14
        rbx = arg1 + 0x40
        uint64_t rcx_2 = zx.q(rsi)
        r14 = &r14[1]
        i_1 -= 1
        *(rcx_2 + rbx) ^= rax_2
        rsi = (rsi + 1) & 0xf
        
        if (rsi == 0)
            r12_1 = arg1 + 0x60
            sub_1428d2c70(rbx, r12_1)
            goto label_1428d15b5
    
    if (rsi == 0)
        r12_1 = arg1 + 0x60
        sub_1428d2c70(rbx, r12_1)
        goto label_1428d15b5
*(arg1 + 0x174) = rsi
return 0
