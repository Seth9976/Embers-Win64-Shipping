// 函数: sub_140fde000
// 地址: 0x140fde000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)

if (rcx != 0)
    (*(*rcx + 0x370))(rcx)

int64_t i_2 = 6
void* rbx = arg1 + 0x20
int64_t i_3 = 6
int64_t i

do
    int64_t j_1 = 0x80
    int64_t j
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
            *rbx = 0
        
        rbx += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_3
    i_3 -= 1
while (i != 1)
*(arg1 + 0x1820) = 0
*(arg1 + 0x1828) = 0
__builtin_memset(arg1 + 0x1830, 0, 0x38)
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0x3f800000
*(arg1 + 0x1868) = 0x3f800000
*(arg1 + 0x186c) = 0x3f800000
*(arg1 + 0x1870) = 0x3f800000
*(arg1 + 0x1874) = 0x3f800000
memset(arg1 + 0x188c, 0, 0x180)
*(arg1 + 0x1888) = 0
*(arg1 + 0x1878) = 0xffffffff
*(arg1 + 0x1880) = 0
*(arg1 + 0x1c28) = 0
memset(arg1 + 0x1a10, 0, 0x200)
memset(arg1 + 0x1c50, 0, 0x300)
void* result = arg1 + 0x1f68
__builtin_memset(arg1 + 0x1c10, 0, 0x14)
int64_t i_1

do
    *(result - 0x18) = 0
    *(result - 0x10) = 0
    *(result - 0xc) = 0x1000
    *(result - 8) = 0
    *result = 0
    *(result + 4) = 0x1000
    *(result + 8) = 0
    *(result + 0x10) = 0
    *(result + 0x14) = 0x1000
    *(result + 0x18) = 0
    *(result + 0x20) = 0
    *(result + 0x24) = 0x1000
    *(result + 0x28) = 0
    *(result + 0x30) = 0
    *(result + 0x34) = 0x1000
    *(result + 0x38) = 0
    *(result + 0x40) = 0
    *(result + 0x44) = 0x1000
    *(result + 0x48) = 0
    *(result + 0x50) = 0
    *(result + 0x54) = 0x1000
    *(result + 0x58) = 0
    *(result + 0x60) = 0
    *(result + 0x64) = 0x1000
    *(result + 0x68) = 0
    *(result + 0x70) = 0
    *(result + 0x74) = 0x1000
    *(result + 0x78) = 0
    *(result + 0x80) = 0
    *(result + 0x84) = 0x1000
    *(result + 0x88) = 0
    *(result + 0x90) = 0
    *(result + 0x94) = 0x1000
    *(result + 0x98) = 0
    *(result + 0xa0) = 0
    *(result + 0xa4) = 0x1000
    *(result + 0xa8) = 0
    *(result + 0xb0) = 0
    *(result + 0xb4) = 0x1000
    *(result + 0xb8) = 0
    *(result + 0xc0) = 0
    *(result + 0xc4) = 0x1000
    result += 0xe0
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
