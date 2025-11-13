// 函数: sub_1415072b0
// 地址: 0x1415072b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
char i = arg2

if (arg2 u< 0x10)
    uint32_t i_1 = zx.d(arg2)
    
    do
        int32_t rax_3 = (rbx & 0xffffff) | i_1 << 0x18
        int32_t rdx = (rax_3 u>> 0x10 ^ rax_3) * 0x85ebca6b
        int32_t rcx_6 = (rdx u>> 0xd ^ rdx) * 0xc2b2ae35
        
        for (int32_t j = *(*(arg1 + 0x28)
                + (((zx.q(rcx_6) u>> 0x10 ^ zx.q(rcx_6.w)) & zx.q(*(arg1 + 0x1c))) << 2)); 
                j != 0xffffffff; j = *(*(arg1 + 0x30) + (zx.q(j) << 2)))
            if (*(*(arg1 + 8) + sx.q(j) * 0x10) == rax_3)
                if (j != 0xffffffff)
                    return zx.q(j)
                
                break
        
        i += 1
        i_1 = zx.d(i)
        rbx &= 0xffffffff << (i_1.b * (*(arg1 + 4)).b)
    while (i u< 0x10)

return 0xffffffff
