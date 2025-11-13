// 函数: sub_142c7c810
// 地址: 0x142c7c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(rbx + 0xd8) = -1
sub_142c6f1b0(rbx, 0)
sub_142c6f0c0(rbx, 0)
sub_142c6f270(rbx, -1)
sub_142c6f180(rbx, -1)
void* rcx_4 = *arg1
int32_t* rdx = *(rcx_4 + 0x250)

if (*(rcx_4 + 0x5e8) != 0)
    *rdx = 1

*arg2 = 0
*(rdx + 0x10) = *(rcx_4 + 0x7f8)
int32_t result
int512_t zmm2

if (*(rcx_4 + 0x5e9) == 0 || *(rcx_4 + 0x7f8) == 0)
    result, zmm2 = sub_142c7c4d0(arg1)
else
    result, zmm2 = sub_142c7c5b0(arg1)

if (result == 0)
    int512_t zmm2_1
    result, zmm2_1 = sub_142c78a60(arg1, arg2, zmm2)
    
    if (result == 0 && *arg2 != result.b)
        if (**(*arg1 + 0x250) != 0)
            sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2_1, 0, 0xffffffff, nullptr)
        
        return 0

return result
