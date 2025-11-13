// 函数: sub_1427f57d0
// 地址: 0x1427f57d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x28)
void* rax_29

if (*(r9 + 0x34) == 0)
labelid_3:
    rax_29 = nullptr
else
    int32_t rcx_3 = not.d(arg2 << 0xf) + arg2
    uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
    uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
    uint32_t r8_3 = not.d(rcx_5 << 0xb) + rcx_5
    int64_t rcx_9 = not.q(arg3 << 0x20) + arg3
    int64_t rcx_10 = rcx_9 ^ rcx_9 u>> 0x16
    int64_t rcx_11 = rcx_10 + not.q(rcx_10 << 0xd)
    int64_t rdx = (rcx_11 u>> 8 ^ rcx_11) * 9
    int64_t rdx_1 = rdx ^ rdx u>> 0xf
    int64_t rdx_2 = rdx_1 + not.q(rdx_1 << 0x1b)
    int32_t r8_4 = *(*(r9 + 0x18) + (((zx.q(((rdx_2 u>> 0x1f).d ^ rdx_2.d ^ 0xfc955b95) * 0xf4247)
        ^ zx.q(r8_3) u>> 0x10 ^ zx.q(r8_3)) & zx.q(*(r9 + 0x24) - 1)) << 2))
    
    if (r8_4 == 0xffffffff)
    label_1427f58c2:
        rax_29 = nullptr
    else
        int64_t rdx_7 = *(r9 + 8)
        
        while (true)
            uint64_t rax_25 = zx.q(r8_4)
            uint64_t rcx_16 = rax_25 * 3
            
            if (*(rdx_7 + (rcx_16 << 3)) == arg3 && *(rdx_7 + (rcx_16 << 3) + 8) == arg2)
                break
            
            r8_4 = *(*(r9 + 0x10) + (rax_25 << 2))
            
            if (r8_4 == 0xffffffff)
                goto label_1427f58c2_1
        
        if (r8_4 == 0xffffffff)
        label_1427f58c2_1:
            rax_29 = nullptr
        else
            rax_29 = rdx_7 + zx.q(r8_4) * 0x18

int32_t rax_26 = *(rax_29 + 0x10)
uint64_t rcx_19 = zx.q(rax_26) & 0x7fffffff

if ((rax_26 & 0x80000000) u<= 0)
    return zx.q(*(*(arg1 + 0x10) + (rcx_19 << 3))) + *(arg1 + 0x20)

*((zx.q(rcx_19.d) << 4) + *(arg1 + 0x18))
jump(*(**(arg1 + 0x30) + 0x50))
