// 函数: sub_1427b9110
// 地址: 0x1427b9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 0x78)
int64_t result = sx.q(*(arg1 + 0x80))
void* rsi_1 = result * 0x70 + rdi

if (rdi != rsi_1)
    void* rbx_1 = &rdi[8]
    
    do
        result = j_sub_140d3e110(rdi)
        int128_t zmm2
        
        if (result.b == 0)
            zmm2 = *(rbx_1 - 0x10)
        else
            result = sub_140d3c6e0(rdi)
            zmm2 = *(result + 0x1c0)
            *(rbx_1 - 0x10) = zmm2
            *rbx_1 = *(result + 0x1d0)
            *(rbx_1 + 0x10) = *(result + 0x1e0)
        
        *(rbx_1 + 0x20) = zmm2
        *(rbx_1 + 0x30) = *rbx_1
        *(rbx_1 + 0x40) = *(rbx_1 + 0x10)
        sub_140ae0920(rbx_1 + 0x20, arg1 + 0x90)
        rdi = &rdi[0x1c]
        rbx_1 += 0x70
    while (rdi != rsi_1)

return result
