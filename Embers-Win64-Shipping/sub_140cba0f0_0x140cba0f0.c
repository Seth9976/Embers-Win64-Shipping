// 函数: sub_140cba0f0
// 地址: 0x140cba0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg3

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140a6b260(arg3, 0x10)
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t* r8_5
    
    for (int32_t i = *(r10_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2)); i != 0xffffffff; 
            i = r8_5[6])
        r8_5 = (sx.q(i) << 5) + *arg1
        
        if (((r8_5[1] ^ rdi[1]) | (r8_5[2] ^ rdi[2]) | (r8_5[3] ^ rdi[3]) | (*r8_5 ^ *rdi)) == 0)
            *arg2 = i
            return arg2

*arg2 = 0xffffffff
return arg2
