// 函数: sub_1425cf840
// 地址: 0x1425cf840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t* rdx_2
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; i = rdx_2[6])
        rdx_2 = (sx.q(i) << 5) + *arg1
        
        if (*rdx_2 == *arg3)
            if (i != 0xffffffff && rdx_2 != 0)
                return &rdx_2[2]
            
            break

return sub_1425cf7c0(arg1, rsi.d, arg3) __tailcall
