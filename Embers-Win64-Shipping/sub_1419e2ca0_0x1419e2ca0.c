// 函数: sub_1419e2ca0
// 地址: 0x1419e2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
void* r10 = arg1

if (*(arg1 + 0x50) != 0)
    float zmm1 = *(arg1 + 0x44)
    float zmm0 = *(arg1 + 0x48)
    int64_t rdi
    rdi.b = zmm1 >= *arg2
    arg1.b = zmm0 >= arg2[1]
    int64_t rbx
    rbx.b = zmm1 <= arg2[2]
    bool r11 = zmm0 <= arg2[3]
    
    if (rdi.b != 0 && arg1.b != 0)
        r9 = 1
        *arg3 = *(r10 + 0x20)
    
    if (rbx.b != 0 && arg1.b != 0)
        uint64_t rcx = zx.q(r9)
        r9 += 1
        arg3[rcx] = *(r10 + 0x28)
    
    if (rdi.b != 0 && r11 != 0)
        uint64_t rdx = zx.q(r9)
        r9 += 1
        arg3[rdx] = *(r10 + 0x10)
    
    if (rbx.b != 0 && r11 != 0)
        arg3[zx.q(r9)] = *(r10 + 0x18)
        return zx.q(r9 + 1)

return zx.q(r9)
