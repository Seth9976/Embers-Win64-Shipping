// 函数: sub_14088c070
// 地址: 0x14088c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1)

if (rax.d u<= 9)
    switch (rax)
        case 0, 5, 8
            void* rax_1 = j_sub_140a82f30(0x18)
            
            if (rax_1 == 0)
                sub_14088d860(rax_1, arg2)
                return rax_1
            
            __builtin_memset(rax_1, 0, 0x18)
            sub_14088d860(rax_1, arg2)
            return rax_1
        case 3
            int32_t* rax_4 = j_sub_140a82f30(4)
            
            if (rax_4 == 0)
                return rax_4
            
            *rax_4 = 0
            return rax_4

return 0
