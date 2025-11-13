// 函数: sub_140d9f790
// 地址: 0x140d9f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2

if (arg1[2].b == 0)
    return 1

arg1[2].b = 0

if (arg1[1].d != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int128_t zmm2 = *arg1
        
        if (not(zmm2.d f<= 0f))
            arg2 = zx.o(*(arg1 + 0x18))
            
            if (not(zmm6.q f< arg2.q))
                do
                    arg2.q = arg2.q f+ fconvert.d(zmm2.d)
                while (zmm6.q f>= arg2.q)
                
                *(arg1 + 0x18) = arg2.q
        
        if (arg1[1].d == 0)
            jump(*(*nullptr + 0x48))
        
        jump(*(**(arg1 + 8) + 0x48))

return 0
