// 函数: sub_140caa690
// 地址: 0x140caa690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    int32_t i = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r10_2 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 5
            int32_t* r8 = r10_2 + (rdx << 3)
            
            if (((r8[1] ^ arg4[1]) | (*(r10_2 + (rdx << 3) + 8) ^ arg4[2]) | (r8[3] ^ arg4[3])
                    | (*r8 ^ *arg4)) == 0)
                *arg2 = i
                return arg2
            
            i = r8[8]
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
