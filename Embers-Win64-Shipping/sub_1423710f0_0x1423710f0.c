// 函数: sub_1423710f0
// 地址: 0x1423710f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if ((arg1[0xe].b & 3) == 0)
    int32_t i = data_143f59380
    
    if (i s<= 0)
        i = 0
    
    int32_t i_1 = *(arg1 + 0x6c)
    
    if (i_1 s> 0)
        if (i s<= 0)
            i = i_1
        else if (i_1 s<= i)
            i = i_1
    
    if (i s> 0)
        int32_t rax_1 = arg1[6].d
        int32_t rsi_1 = rax_1 - 1
        
        if (rax_1 s> i)
            do
                (*(*arg1 + 0x2d0))(arg1, zx.q(rsi_1))
                rsi_1 -= 1
            while (arg1[6].d s> i)

sub_142361fb0(arg1)
return sub_142361f00(arg1) __tailcall
