// 函数: sub_141dda780
// 地址: 0x141dda780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(sub_141dcdc50(arg1) - 1)

if (result.d u<= 1)
    arg1[0xb].b |= 0x40
    int64_t rax_2 = (*(*arg1 + 0x150))(arg1)
    result = sub_1423de4b0(data_143f5b298, rax_2)
    
    if (result != 0)
        int64_t* i = *(result + 0x220)
        
        for (void* rsi_3 = &i[sx.q(*(result + 0x228)) * 2]; i != rsi_3; i = &i[2])
            int64_t* rcx_2 = *i
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x3e0))(rcx_2, arg1)
                
                if (result.b != 0)
                    int64_t* rcx_3 = *i
                    result = (*(*rcx_3 + 0x350))(rcx_3, arg1)

return result
