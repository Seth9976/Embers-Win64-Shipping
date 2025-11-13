// 函数: sub_140d21950
// 地址: 0x140d21950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr

if (arg2 != 0 && ((*(arg2 + 0xcc) u>> 0xe).b & 1) != 0 && arg2 != sub_140cbe090())
    void* i = *(arg1 + 0x10)
    
    if (((*(arg2 + 0xcc) u>> 7).b & 1) != 0)
        while (i != 0)
            for (int32_t j = 0; j s>= 0; j += 1)
                if (j s>= *(i + 0x1e0))
                    break
                
                int64_t r11_1 = *(i + 0x1d8)
                int64_t j_1 = sx.q(j)
                int64_t rcx_2 = j_1 * 2
                
                if (*(r11_1 + (rcx_2 << 3) + 0xc) == 0)
                    void* rcx_3 = *(r11_1 + (rcx_2 << 3))
                    int64_t rdx_3 = sx.q(*(arg2 + 0x38))
                    
                    if (rdx_3.d s<= *(rcx_3 + 0x38)
                            && *(*(rcx_3 + 0x30) + (rdx_3 << 3)) == arg2 + 0x30)
                        rbx = sx.q(*(r11_1 + j_1 * 0x10 + 8)) + arg1
                        break
            
            i = *(i + 0x40)
            
            if (rbx != 0)
                break
    else if (sub_140be1130(i, arg2) != 0)
        return arg1

return rbx
