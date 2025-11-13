// 函数: sub_140ccd120
// 地址: 0x140ccd120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a20af0()
uint64_t r15 = zx.q(rax)
void* rcx

if (rax != 0)
    rcx = *((r15 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r15.d) & 0x3fff) * 0x18
else
    rcx = nullptr

*(rcx + 8) = arg2
int64_t result

while (true)
    result = 0
    
    if (0 == *(arg1 + 0x88))
        *(arg1 + 0x88) = 0
    else
        result = *(arg1 + 0x88)
    
    uint64_t rax_4 = zx.q(result.d) & 0x3ffffff
    int64_t* r14_1
    
    if (rax_4.d != 0)
        r14_1 = *((rax_4 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_4.d) & 0x3fff) * 0x18
    else
        r14_1 = nullptr
    
    int64_t rax_7 = 0
    
    if (0 == *r14_1)
        *r14_1 = 0
    else
        rax_7 = *r14_1
    
    int64_t rax_8 = 0
    
    if (0 == *(arg1 + 0x88))
        *(arg1 + 0x88) = 0
    else
        rax_8 = *(arg1 + 0x88)
    
    if (rax_8 == result)
        if ((rax_7.d & 0x3ffffff) == 0)
            if ((((rax_7 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                    u< (rax_7 & 0xfffffffffc000000))
                sub_140a2c900()
            
            bool z_1
            
            if (rax_7 == *r14_1)
                *r14_1 = r15 | ((rax_7 & 0xfffffffffc000000) + 0x4000000)
                z_1 = true
            else
                *r14_1
                z_1 = false
            
            if (z_1)
                break
        else
            if ((((result & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                    u< (result & 0xfffffffffc000000))
                sub_140a2c900()
            
            if (result == *(arg1 + 0x88))
                *(arg1 + 0x88) =
                    (zx.q(rax_7.d) & 0x3ffffff) | ((result & 0xfffffffffc000000) + 0x4000000)
            else
                *(arg1 + 0x88)

if ((((result & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
        u< (result & 0xfffffffffc000000))
    sub_140a2c900()

if (result != *(arg1 + 0x88))
    return *(arg1 + 0x88)

*(arg1 + 0x88) = r15 | ((result & 0xfffffffffc000000) + 0x4000000)
return result
