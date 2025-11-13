// 函数: sub_140fc88b0
// 地址: 0x140fc88b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
*arg2 = 0
arg2[1] = 0
int16_t rax = *(arg1 + 8)

if (rax == 2)
    int32_t rdi = *(arg1 + 0xc)
    arg2[1].d = 1
    sub_1405daba0(arg2)
    **arg2 = rdi.b
    uint8_t* rsi_1 = sx.q(arg2[1].d)
    int32_t rax_2 = (&rsi_1[1]).d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    rsi_1[*arg2] = (rdi u>> 8).b
    int64_t rsi_2 = sx.q(arg2[1].d)
    int32_t rax_4 = (rsi_2 + 1).d
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    *(rsi_2 + *arg2) = (rdi u>> 0x10).b
    int64_t rsi_3 = sx.q(arg2[1].d)
    int32_t rax_6 = (rsi_3 + 1).d
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    *(rsi_3 + *arg2) = (rdi u>> 0x18).b
else if (rax == 0x17)
    do
        int64_t rsi_4 = sx.q(arg2[1].d)
        int32_t rax_8 = (rsi_4 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        char rax_9 = *(i + arg1 + 0x10)
        i += 1
        *(rsi_4 + *arg2) = rax_9
    while (i s< 0x10)

return arg2
