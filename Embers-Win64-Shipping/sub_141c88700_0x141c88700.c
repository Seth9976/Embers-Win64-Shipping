// 函数: sub_141c88700
// 地址: 0x141c88700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140b212b0(arg3, 0x10, 0)
    void* r8 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            int32_t* r8_1 = r9_2 + (rdx_3 << 3)
            
            if (((r8_1[1] ^ *(arg3 + 4)) | (*(r9_2 + (rdx_3 << 3) + 8) ^ *(arg3 + 8))
                    | (r8_1[3] ^ *(arg3 + 0xc)) | (*r8_1 ^ *arg3)) == 0)
                *arg2 = i
                return arg2
            
            i = r8_1[8]
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
