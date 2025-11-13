// 函数: sub_141917660
// 地址: 0x141917660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x178)

if (*(arg2 + 0x30) != rax)
    if (rax == 0)
        data_143eff9e8(0xb71)
    else
        data_143effa08(0xb71)
    
    *(arg2 + 0x30) = *(arg1 + 0x178)

char rcx = *(arg1 + 0x179)

if (*(arg2 + 0x31) != rcx)
    data_143eff9d8(rcx)
    *(arg2 + 0x31) = *(arg1 + 0x179)

if (*(arg1 + 0x178) != 0)
    int32_t rcx_1 = *(arg1 + 0x17c)
    
    if (*(arg2 + 0x34) != rcx_1)
        data_143eff9d0(rcx_1)
        *(arg2 + 0x34) = *(arg1 + 0x17c)

char rax_4 = *(arg1 + 0x180)

if (*(arg2 + 0x38) != rax_4)
    if (rax_4 == 0)
        data_143eff9e8(0xb90)
    else
        data_143effa08(0xb90)
    
    *(arg2 + 0x38) = *(arg1 + 0x180)

uint32_t result = zx.d(*(arg1 + 0x181))

if (*(arg2 + 0x39) != result.b)
    __builtin_memcpy(arg2 + 0x3c, 
        "\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x"
    "00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00", 
        0x24)
    result = zx.d(*(arg1 + 0x181))
    *(arg2 + 0x39) = result.b

if (*(arg1 + 0x180) != 0)
    int32_t rax_6 = *(arg2 + 0x3c)
    int32_t rcx_2 = *(arg1 + 0x184)
    
    if (*(arg1 + 0x181) == 0)
        if (rax_6 != rcx_2 || *(arg2 + 0x64) != *(arg1 + 0x1ac)
                || *(arg2 + 0x5c) != *(arg1 + 0x1a4))
            data_143effb18(rcx_2, zx.q(*(arg1 + 0x1ac)), zx.q(*(arg1 + 0x1a4)))
            *(arg2 + 0x3c) = *(arg1 + 0x184)
            *(arg2 + 0x5c) = *(arg1 + 0x1a4)
            *(arg2 + 0x64) = *(arg1 + 0x1ac)
        
        int32_t rcx_3 = *(arg1 + 0x188)
        
        if (*(arg2 + 0x40) == rcx_3 && *(arg2 + 0x44) == *(arg1 + 0x18c))
            result = *(arg1 + 0x190)
        
        if (*(arg2 + 0x40) != rcx_3 || *(arg2 + 0x44) != *(arg1 + 0x18c)
                || *(arg2 + 0x48) != result)
            data_143effb28(rcx_3, zx.q(*(arg1 + 0x18c)), zx.q(*(arg1 + 0x190)))
            *(arg2 + 0x40) = *(arg1 + 0x188)
            *(arg2 + 0x44) = *(arg1 + 0x18c)
            result = *(arg1 + 0x190)
            *(arg2 + 0x48) = result
    else
        if (rax_6 != rcx_2 || *(arg2 + 0x64) != *(arg1 + 0x1ac)
                || *(arg2 + 0x5c) != *(arg1 + 0x1a4))
            data_143effd50(0x405, zx.q(rcx_2), zx.q(*(arg1 + 0x1ac)), zx.q(*(arg1 + 0x1a4)))
            *(arg2 + 0x3c) = *(arg1 + 0x184)
        
        int32_t rdx_1 = *(arg1 + 0x188)
        
        if (*(arg2 + 0x40) != rdx_1 || *(arg2 + 0x44) != *(arg1 + 0x18c)
                || *(arg2 + 0x48) != *(arg1 + 0x190))
            data_143effd48(0x405, rdx_1, zx.q(*(arg1 + 0x18c)), zx.q(*(arg1 + 0x190)))
            *(arg2 + 0x40) = *(arg1 + 0x188)
            *(arg2 + 0x44) = *(arg1 + 0x18c)
            *(arg2 + 0x48) = *(arg1 + 0x190)
        
        int32_t rdx_2 = *(arg1 + 0x194)
        
        if (*(arg2 + 0x4c) != rdx_2 || *(arg2 + 0x64) != *(arg1 + 0x1ac)
                || *(arg2 + 0x5c) != *(arg1 + 0x1a4))
            data_143effd50(0x404, rdx_2, zx.q(*(arg1 + 0x1ac)), zx.q(*(arg1 + 0x1a4)))
            *(arg2 + 0x4c) = *(arg1 + 0x194)
        
        int32_t rdx_3 = *(arg1 + 0x198)
        
        if (*(arg2 + 0x50) != rdx_3 || *(arg2 + 0x54) != *(arg1 + 0x19c)
                || *(arg2 + 0x58) != *(arg1 + 0x1a0))
            data_143effd48(0x404, rdx_3, zx.q(*(arg1 + 0x19c)), zx.q(*(arg1 + 0x1a0)))
            *(arg2 + 0x50) = *(arg1 + 0x198)
            *(arg2 + 0x54) = *(arg1 + 0x19c)
            *(arg2 + 0x58) = *(arg1 + 0x1a0)
        
        *(arg2 + 0x5c) = *(arg1 + 0x1a4)
        result = *(arg1 + 0x1ac)
        *(arg2 + 0x64) = result
    
    int32_t rcx_4 = *(arg1 + 0x1a8)
    
    if (*(arg2 + 0x60) != rcx_4)
        data_143effb20(rcx_4)
        result = *(arg1 + 0x1a8)
        *(arg2 + 0x60) = result

return result
