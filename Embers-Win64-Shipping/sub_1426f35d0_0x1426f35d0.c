// 函数: sub_1426f35d0
// 地址: 0x1426f35d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143478880

if (((arg1[1].d u>> 4).b & 1) != 0)
    void* rbx_1 = arg1[2]
    
    if ((*(rbx_1 + 0xcc) & 1) == 0)
        int64_t rsi_1 = sx.q(data_143f72228)
        int32_t rax_2 = (rsi_1 + 1).d
        bool cond:0_1 = rax_2 s<= data_143f7222c
        data_143f72228 = rax_2
        
        if (not(cond:0_1))
            sub_1405a4d70(&data_143f72220)
        
        *(data_143f72220 + (rsi_1 << 3)) = rbx_1

*arg1 = &data_1434792a8
return arg1
