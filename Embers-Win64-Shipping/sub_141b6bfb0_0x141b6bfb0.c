// 函数: sub_141b6bfb0
// 地址: 0x141b6bfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x10)
*(arg1 + 8) = arg2

if (rax == 0)
    rax = j_sub_140a82f30(zx.q((&rax[6]).d))
    
    if (rax == 0)
        rax = nullptr
    else
        *rax = 0
        __builtin_memset(&rax[2], 0, 0x20)
        rax[1].d = 0x3f800000
        *(rax + 0xc) = 0x3f800000
    
    *(arg1 + 0x10) = rax

int64_t* rbx_1 = *(arg2 + 0x78)
rax[2] = arg1
int32_t rax_2 = (*(*rbx_1 + 0x48))(rbx_1)
int64_t rdx = *rbx_1
int32_t result = (*(rdx + 0x40))(rbx_1, rdx)
void* rcx_3 = *(arg1 + 0x10)
*(rcx_3 + 0x18) = result
*(rcx_3 + 0x1c) = rax_2
return result
