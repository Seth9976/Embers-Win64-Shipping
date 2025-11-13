// 函数: sub_1427e9d10
// 地址: 0x1427e9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x50)

if (*(arg1 + 0x59) != 0)
    int128_t zmm9 = *(rbx + 0xb0)
    float zmm0_1 = tanf(zmm9.d * 0.5f)
    int128_t zmm8 = *(rbx + 0xb4)
    *(rbx + 0x158) = zmm0_1
    float zmm0_2 = tanf(zmm8.d * 0.5f)
    int128_t zmm7 = *(rbx + 0xac)
    *(rbx + 0x15c) = zmm0_2
    *(rbx + 0x160) = tanf(zmm7.d * 0.5f)
    zmm9.d = zmm9.d f* 0.25f
    *(rbx + 0x164) = tanf(zmm9.d)
    zmm8.d = zmm8.d f* 0.25f
    *(rbx + 0x168) = tanf(zmm8.d)
    zmm7.d = zmm7.d f* 0.25f
    *(rbx + 0x16c) = tanf(zmm7.d)
    *(rbx + 0x170) = tanf(*(rbx + 0x98) * 0.25f)
    *(rbx + 0x174) = tanf(*(rbx + 0x94) * 0.25f)
    *(rbx + 0x178) = tanf(*(rbx + 0x90) * 0.25f)
    *(arg1 + 0x59) = 0

if (*(arg1 + 0x58) != 0)
    void* rcx = rbx + 0x50
    *(rbx + 0x150) = 0
    *(rbx + 0x14c) = 0
    int32_t rax_1 = 1
    int64_t i_1 = 6
    int64_t i
    
    do
        int32_t rdx_1 = *rcx
        
        if (rdx_1 == 1)
            *(rbx + 0x150) |= rax_1
        else if (rdx_1 == 0)
            *(rbx + 0x14c) |= rax_1
        
        rax_1 = rol.d(rax_1, 1)
        rcx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* rax_2 = *(arg1 + 0x50)
    float zmm0 = (zx.o(0)).d
    
    if (zmm0 f!= *(rax_2 + 0xb8) || not(zmm0 f== *(rax_2 + 0xbc)))
        int32_t rax_3 = *(rbx + 0x154)
        
        if (*(rbx + 0x50) != 0)
            rax_3 = 1
        
        *(rbx + 0x154) = rax_3
    
    void* rax_4 = *(arg1 + 0x50)
    
    if ((zmm0 f!= *(rax_4 + 0xc8) || not(zmm0 f== *(rax_4 + 0xcc))) && *(rbx + 0x54) != 0)
        *(rbx + 0x154) |= 2
    
    void* rax_5 = *(arg1 + 0x50)
    
    if ((zmm0 f!= *(rax_5 + 0xd8) || not(zmm0 f== *(rax_5 + 0xdc))) && *(rbx + 0x58) != 0)
        *(rbx + 0x154) |= 4
    
    void* rax_6 = *(arg1 + 0x50)
    int32_t r8_1 = *(rbx + 0x60)
    int32_t rdx_2 = *(rbx + 0x64)
    int32_t rcx_1 = *(rbx + 0x5c)
    
    if ((zmm0 f!= *(rax_6 + 0x108) || not(zmm0 f== *(rax_6 + 0x10c))) && r8_1 != 0 && rdx_2 != 0
            && rcx_1 != 0)
        *(rbx + 0x154) |= 0x20
        int64_t result = *(arg1 + 0x50)
        *(arg1 + 0x58) = 0
        return result
    
    if ((zmm0 f!= *(rax_6 + 0xf8) || not(zmm0 f== *(rax_6 + 0xfc))) && rcx_1 != 0)
        *(rbx + 0x154) |= 0x10
    
    void* rax_7 = *(arg1 + 0x50)
    
    if ((zmm0 f!= *(rax_7 + 0xe8) || not(zmm0 f== *(rax_7 + 0xec))) && (r8_1 != 0 || rdx_2 != 0))
        *(rbx + 0x154) |= 8
    
    *(arg1 + 0x58) = 0

return *(arg1 + 0x50)
