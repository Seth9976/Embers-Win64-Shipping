// 函数: sub_140b160d0
// 地址: 0x140b160d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg3

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140a6b260(arg3, 0x10)
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 9
            int32_t* r8_3 = r9_2 + (rdx << 2)
            
            if (((r8_3[1] ^ rdi[1]) | (*(r9_2 + (rdx << 2) + 8) ^ rdi[2]) | (r8_3[3] ^ rdi[3])
                    | (*r8_3 ^ *rdi)) == 0)
                *arg2 = i
                return arg2
            
            i = r8_3[7]
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
