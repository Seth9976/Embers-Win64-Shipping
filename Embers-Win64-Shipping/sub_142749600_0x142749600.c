// 函数: sub_142749600
// 地址: 0x142749600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r12 = arg2
int32_t result

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x1c
    int32_t i
    
    do
        int128_t* rbp_1 = r12
        r12 += 0x88
        *rbp_1 = *(rbx_1 - 0x1c)
        rbp_1[1].q = *(rbx_1 - 0xc)
        *(rbp_1 + 0x18) = *(rbx_1 - 4)
        *(rbp_1 + 0x1c) = *rbx_1
        *(rbp_1 + 0x2c) = *(rbx_1 + 0x10)
        *(rbp_1 + 0x3c) = *(rbx_1 + 0x20)
        *(rbp_1 + 0x44) = *(rbx_1 + 0x28)
        *(rbp_1 + 0x48) = *(rbx_1 + 0x2c)
        *(rbp_1 + 0x58) = *(rbx_1 + 0x3c)
        *(rbp_1 + 0x68) = *(rbx_1 + 0x4c)
        
        if (&rbp_1[7] != rbx_1 + 0x54)
            uint32_t count = *(rbx_1 + 0x5c)
            int64_t r15_2 = *(rbx_1 + 0x54)
            int32_t r8 = *(rbp_1 + 0x7c)
            *(rbp_1 + 0x78) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rbp_1[7], count, r8)
                memcpy(rbp_1[7].q, r15_2, count)
            else
                *(rbp_1 + 0x7c) = 0
        
        result = *(rbx_1 + 0x64)
        rbx_1 += 0x88
        rbp_1[8].d = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
