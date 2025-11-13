// 函数: sub_1406c39c0
// 地址: 0x1406c39c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
void* result = sub_1406be7c0(rsi + 0x320)
void* rbx = result

if (result == 0)
    return result

void* i

do
    int32_t rax = sub_1406ba650(*(rsi + 0x688), nullptr, rbx + 8)
    
    if (rax s< 0)
        break
    
    double zmm0_1 = (zx.o(0)).q
    
    if (rax != 0)
        if (*(rbx + 8) != 0)
            avsubtitle_free(rbx + 8)
        else
            int64_t rax_1 = *(rbx + 0x20)
            
            if (rax_1 != -0x8000000000000000)
                zmm0_1 = float.d(rax_1) f* 0x3eb0c6f7a0b5ed8d
            
            *(rbx + 0x30) = zmm0_1
            *(rbx + 0x28) = *(*(rsi + 0x688) + 0x18)
            *(rbx + 0x48) = *(*(*(rsi + 0x688) + 0x10) + 0x74)
            *(rbx + 0x4c) = *(*(*(rsi + 0x688) + 0x10) + 0x78)
            *(rbx + 0x5c) = 0
            sub_1406be880(rsi + 0x320)
    
    i = sub_1406be7c0(rsi + 0x320)
    rbx = i
while (i != 0)
return 0
