// 函数: sub_141819e80
// 地址: 0x141819e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    int32_t* r8_1
    
    for (int32_t i = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2)); i != 0xffffffff; 
            i = r8_1[0x14])
        r8_1 = sx.q(i) * 0x58 + *arg1
        
        if (((r8_1[1] ^ arg4[1]) | (r8_1[2] ^ arg4[2]) | (r8_1[3] ^ arg4[3]) | (*r8_1 ^ *arg4))
                == 0)
            *arg2 = i
            return arg2

*arg2 = 0xffffffff
return arg2
