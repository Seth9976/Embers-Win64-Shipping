// 函数: sub_1426bb1c0
// 地址: 0x1426bb1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x84) != 0 && *(arg2 + 0x88) s<= 1)
    int64_t result
    result.b = 0
    return result

*(arg2 + 0x60) = arg3
*(arg2 + 0x38) = arg1

if (arg1 != 0)
    void* rax = arg1[0x16]
    
    if (rax != 0)
        int64_t* rsi_1 = *(rax + 0x258)
        
        if (rsi_1 != 0)
            void* rax_1 = sub_1427249f0()
            void* rcx = rsi_1[2]
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                int64_t rax_4 = sub_1427303e0()
                int64_t r8_1 = *rsi_1
                *(arg2 + 0x48) = (*(r8_1 + 0x610))(rsi_1, rax_4, r8_1)

*(arg2 + 0x40) = arg4
return sub_1426b81d0(arg1, arg2, 5) __tailcall
