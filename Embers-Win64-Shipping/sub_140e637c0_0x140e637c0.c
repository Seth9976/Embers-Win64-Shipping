// 函数: sub_140e637c0
// 地址: 0x140e637c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rax_1 = *arg3
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    int32_t r9_1 = arg3[3].d
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i = *(r8 + ((((zx.q(r9_1) & 1) ^ sx.q(rax_3)) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r10_1 = *arg1
        
        do
            int64_t r8_2 = sx.q(i) * 6
            
            if (*(r10_1 + (r8_2 << 3)) == *arg3)
                char rcx_6 = (*(r10_1 + (r8_2 << 3) + 0x18)).b
                
                if (((rcx_6 ^ r9_1.b) & 1) == 0 && ((rcx_6 ^ r9_1.b) & 2) == 0
                        && ((rcx_6 ^ r9_1.b) & 4) == 0 && ((rcx_6 ^ r9_1.b) & 8) == 0)
                    *arg2 = i
                    return arg2
            
            i = *(r10_1 + (r8_2 << 3) + 0x28)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
