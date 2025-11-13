// 函数: sub_141ea8ae0
// 地址: 0x141ea8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x130)
void* rsi = *(rbp + 0xc0)
int64_t rbx = *(rbp + 0xc8)
sub_141dd1680(arg1)
int64_t arg_8

if (sub_140cdd6a0(arg1) s< 0x112)
    sub_141f4a650(*(arg1 + 0x228), rsi, rbx)
    arg_8 = 0
    sub_141f4a650(rbp, nullptr, 0)

int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x1f0)
    void* rdx_2 = *(arg1 + 0x230)
    *(arg1 + 0x130) = rdx_2
    
    if (rsi != rdx_2)
        arg_8 = 0
        sub_141f4a650(*(arg1 + 0x228), rdx_2, 0)
        return sub_141f4a650(*(arg1 + 0x130), rsi, rbx)

return result
