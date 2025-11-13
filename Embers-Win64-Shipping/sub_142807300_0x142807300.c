// 函数: sub_142807300
// 地址: 0x142807300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1].d = arg3

if (*(arg1 + 0x5c) != 0)
    int32_t rcx_3 = not.d(arg3 << 0xf) + arg3
    uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
    uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
    uint64_t rax_9 = zx.q(not.d(rcx_5 << 0xb) + rcx_5)
    int32_t i =
        *(*(arg1 + 0x40) + (((zx.q(rax_9.d) u>> 0x10 ^ rax_9) & zx.q(*(arg1 + 0x4c) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *(arg1 + 0x30)
        
        do
            if (*(r8 + zx.q(i) * 0x10) == arg3)
                if (i != 0xffffffff)
                    uint64_t rcx_12 = zx.q(i) << 4
                    void* rcx_13 = rcx_12 + r8
                    
                    if (rcx_12 != neg.q(r8))
                        int64_t rax_13 = *(rcx_13 + 8)
                        *arg2 = rax_13
                        *(rcx_13 + 8) = arg2
                        return rax_13
                
                break
            
            i = *(*(arg1 + 0x38) + (zx.q(i) << 2))
        while (i != 0xffffffff)

int32_t arg_8 = arg3
char arg_18
int32_t* rax_12 = sub_142807890(arg1 + 0x20, &arg_8, &arg_18)

if (arg_18 == 0 && rax_12 != 0)
    *rax_12 = arg3
    *(rax_12 + 8) = arg2

return rax_12
