// 函数: sub_140b4ff10
// 地址: 0x140b4ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg3
void* rbx = arg1

if (*(arg1 + 0xa08) != *(arg1 + 0xa2c))
    int32_t rax_1 = sub_140a6b260(arg3, 0x10)
    void* r9_1 = *(rbx + 0xab0)
    void* r10_1 = rbx + 0xa30
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(*(rbx + 0xab8)) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        void* rcx_1 = *(rbx + 0xa00)
        
        if (rcx_1 != 0)
            rbx = rcx_1
        
        do
            int64_t rdx = sx.q(i) * 5
            void* r8_3 = rbx + (rdx << 3)
            
            if (((*(r8_3 + 4) ^ rsi[1]) | (*(rbx + (rdx << 3) + 8) ^ rsi[2])
                    | (*(r8_3 + 0xc) ^ rsi[3]) | (*r8_3 ^ *rsi)) == 0)
                *arg2 = i
                return arg2
            
            i = *(r8_3 + 0x20)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
