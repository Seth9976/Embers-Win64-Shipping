// 函数: sub_14263fdd0
// 地址: 0x14263fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int64_t* rdx_2
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; 
            i = rdx_2[3].d)
        rdx_2 = (sx.q(i) << 5) + *arg1
        
        if (*rdx_2 == *arg3)
            if (i != 0xffffffff && rdx_2 != 0)
                return &rdx_2[1]
            
            break

int64_t* arg_20 = arg3
int32_t arg_8
sub_14263fbc0(arg1, &arg_8, rsi.d, &arg_20, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
