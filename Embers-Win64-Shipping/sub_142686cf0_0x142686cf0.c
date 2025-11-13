// 函数: sub_142686cf0
// 地址: 0x142686cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t* rax = sub_141debaa0(&arg_10)
void* const rdx

if (*rax == 0)
    rdx = nullptr
else
    void* rax_1 = sub_1425492f0()
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        rdx = *rax
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx = nullptr

if (arg2 == rdx)
    return 0x3f

if (arg2 == sub_14269c3a0())
    return 0

if (arg2 == sub_14269c2c0())
    return 0x3e

int32_t i = sub_14265a060(arg1)

while (i == 0 || i - 0x3e u<= 1)
    i += 1

return i
