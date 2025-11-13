// 函数: sub_140a2edf0
// 地址: 0x140a2edf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a2d7c0(&data_143cf0ae0)
uint64_t r15 = zx.q(rax)
void* rcx

if (rax != 0)
    rcx = *((r15 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r15.d) & 0x3fff) * 0x18
else
    rcx = nullptr

int128_t zmm6 = 0x3a83126f
*(rcx + 8) = arg2
int64_t result

while (true)
    result = 0
    
    if (0 == *(arg1 + 0x18))
        *(arg1 + 0x18) = 0
    else
        result = *(arg1 + 0x18)
    
    uint64_t rax_4 = zx.q(result.d) & 0x3ffffff
    int64_t* rbp_1
    
    if (rax_4.d != 0)
        rbp_1 = *((rax_4 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_4.d) & 0x3fff) * 0x18
    else
        rbp_1 = nullptr
    
    int64_t rax_7 = 0
    
    if (0 == *rbp_1)
        *rbp_1 = 0
    else
        rax_7 = *rbp_1
    
    int64_t rax_8 = 0
    
    if (0 == *(arg1 + 0x18))
        *(arg1 + 0x18) = 0
    else
        rax_8 = *(arg1 + 0x18)
    
    if (rax_8 == result)
        if ((rax_7.d & 0x3ffffff) == 0)
            if ((((rax_7 & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
                    u< (rax_7 & 0xfffffffffc000000))
                zmm6 = sub_140b73230(zmm6)
            
            bool z_1
            
            if (rax_7 == *rbp_1)
                *rbp_1 = r15 | ((rax_7 & 0xfffffffffc000000) + 0x40000000)
                z_1 = true
            else
                *rbp_1
                z_1 = false
            
            if (z_1)
                break
        else
            if ((((result & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
                    u< (result & 0xfffffffffc000000))
                zmm6 = sub_140b73230(zmm6)
            
            if (result == *(arg1 + 0x18))
                *(arg1 + 0x18) =
                    (zx.q(rax_7.d) & 0x3ffffff) | ((result & 0xfffffffffc000000) + 0x40000000)
            else
                *(arg1 + 0x18)

if ((((result & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
        u< (result & 0xfffffffffc000000))
    sub_140b73230(zmm6)

if (result != *(arg1 + 0x18))
    return *(arg1 + 0x18)

*(arg1 + 0x18) = r15 | ((result & 0xfffffffffc000000) + 0x40000000)
return result
