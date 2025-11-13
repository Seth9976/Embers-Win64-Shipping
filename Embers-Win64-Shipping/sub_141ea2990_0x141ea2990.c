// 函数: sub_141ea2990
// 地址: 0x141ea2990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rax = rbx[0x23]

if (rax == 0)
    (*(*rbx + 0x390))(rbx)
    rax = rbx[0x23]

void* result = *(rax + 0x290)

if (result == 0)
    return sub_142216f60(arg1) __tailcall

float zmm0[0x4] = *(result + 0x1e0)
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
temp0[0] = temp0[0] f* *(result + 0x420)
return result
