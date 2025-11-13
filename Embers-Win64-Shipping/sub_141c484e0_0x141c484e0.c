// 函数: sub_141c484e0
// 地址: 0x141c484e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a54810()
char rax_2

if (rax != 0)
    rax_2 = (*(*arg1 + 0xf8))(arg1)

uint64_t rax_3

if (rax == 0 || rax_2 != 0)
    int32_t temp0_2 = *(arg1 + 0x1cc)
    *(arg1 + 0x1cc) = 1
    rax_3 = zx.q(temp0_2)
    *(arg1 + 0x14c) = 0
else
    rax_3 = 0
    bool z_1
    
    if (0 == *(arg1 + 0x1cc))
        *(arg1 + 0x1cc) = 0
        z_1 = true
    else
        rax_3 = zx.q(*(arg1 + 0x1cc))
        z_1 = false
    
    if (z_1 && not(0f f== *(arg1 + 0x14c)))
        arg1[0x39].d = 1
        rax_3 = zx.q(arg1[0x39].d)
        int64_t* rcx_1 = arg1[0x27]
        
        if (rcx_1 != 0)
            int64_t rax_5 = (*(*rcx_1 + 0x20))(rcx_1, zx.q(data_143a12bf8), 0)
            *(arg1 + 0x14c) = 0
            return rax_5
        
        *(arg1 + 0x14c) = 0

return rax_3
