// 函数: sub_142c42a50
// 地址: 0x142c42a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
uint64_t result = sub_142c47040(rbx)
uint32_t r8 = zx.d(result.w)
uint64_t rbx_1 = zx.q(rbx - 0x179a)
uint32_t r8_1 = r8 u>> 8
int32_t rdx_1 = r8 & 0x7f

if (rbx_1.d u<= 0x43)
    result = zx.q(lookup_table_142c42b68[rbx_1])
    
    switch (result)
        case 0
            *(arg1 + 0x12) = 0x10
            return result
        case 1
            *(arg1 + 0x12) = 0x15
            return result
        case 2
            *(arg1 + 0x12) = 0x16
            return result
        case 3
            *(arg1 + 0x12) = 0x14
            return result

if (rdx_1 == 7)
    if (r8_1 == 3)
        rdx_1 = 0x1c
    else
        if (r8_1 == 6)
            *(arg1 + 0x12) = 0x1a
            return result
        
        if (r8_1 == 8)
            *(arg1 + 0x12) = 0x1b
            return result
        
        if (r8_1 == 0xb)
            *(arg1 + 0x12) = 0x1d
            return result

*(arg1 + 0x12) = rdx_1.b
return result
