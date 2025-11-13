// 函数: sub_1423bd6c0
// 地址: 0x1423bd6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = (*arg3).b

if (arg1 s<= 0 || arg2 s<= 0)
    return 0

void* rax = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

int64_t* result = sub_140d2dfc0(sub_1425b2830(), rax, 0, 0x40, 0, 0, 0, 0, 0)

if (result != 0)
    *(result + 0x5d) = arg3[2].b
    result[0x19].d = arg3[3]
    char rax_3 = (*(arg3 + 5) ^ result[0xc].b) & 1
    *(result + 0x5c) = 0
    rax_3 ^= result[0xc].b
    result[0xc].b = rax_3
    
    if (arg3[1].b == 0)
        rax_3 |= 2
    else
        rax_3 &= 0xfd
    
    result[0xc].b = rax_3
    char rax_4 = arg3[1].b
    *(result + 0xc1) &= 0xfe
    *(result + 0xc1) |= rax_4 & 1
    int64_t rax_5 = *result
    result[0x17].d = arg1
    *(result + 0xbc) = arg2
    result[0x18].b = r15
    *(result + 0xc4) = 1
    (*(rax_5 + 0x2f8))(result)

return result
