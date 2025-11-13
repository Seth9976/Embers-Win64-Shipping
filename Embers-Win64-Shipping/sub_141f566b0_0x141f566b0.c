// 函数: sub_141f566b0
// 地址: 0x141f566b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
int32_t i
i.b = 0
void* rcx = *(arg1 + 0x430)

if (rcx != 0)
    int64_t rbx_1 = sx.q(sub_14078ee20(rcx + 0x188, &arg_10))
    
    if (rbx_1.d != 0xffffffff)
        i = sub_14078ee20(*(arg1 + 0x430) + 0x188, &arg_18)
        int32_t i_1 = i
        
        if (i != 0xffffffff && rbx_1.d s> i)
            int64_t r8_1 = *(*(arg1 + 0x430) + 0x1a8)
            i = *(r8_1 + rbx_1 * 0xc + 8)
            
            do
                if (i == i_1)
                    i.b = 1
                    return i
                
                i = *(r8_1 + sx.q(i) * 0xc + 8)
            while (i != 0xffffffff)
    
    i.b = 0

return i
