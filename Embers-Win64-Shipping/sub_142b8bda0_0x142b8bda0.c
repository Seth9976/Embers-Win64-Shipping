// 函数: sub_142b8bda0
// 地址: 0x142b8bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_8 = arg1[3]
int32_t rax_1

if (rax_8 == 0)
    void* rax_2 = arg1[1]
    *(rax_2 + 8) += arg2
    void* rdx_1 = *arg1
    void* r8_1 = arg1[1]
    int16_t rax_3 = *(rdx_1 + 8)
    
    if (rax_3 s< 0)
        rax_1 = *(rdx_1 + 0xc)
    else
        rax_1 = sx.d(rax_3) s>> 5
    
    if (*(r8_1 + 8) s> rax_1)
        int16_t rax_5 = *(rdx_1 + 8)
        
        if (rax_5 s>= 0)
            int32_t rax_7 = sx.d(rax_5) s>> 5
            *(r8_1 + 8) = rax_7
            return rax_7
        
        rax_1 = *(rdx_1 + 0xc)
        *(r8_1 + 8) = rax_1
else
    arg1[4].d += arg2
    int16_t rdx = *(rax_8 + 8)
    
    if (rdx s< 0)
        rax_1 = *(rax_8 + 0xc)
    else
        rax_1 = sx.d(rdx) s>> 5
    
    if (arg1[4].d == rax_1)
        arg1[3] = 0

return rax_1
