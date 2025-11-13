// 函数: sub_142a7f2f0
// 地址: 0x142a7f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = sub_142a95dc0(arg3)
int64_t rdi
rdi.b = 0

if (*arg3 s> 0)
    result.b = 0
    return result

sub_142a95e90(result, arg1)
sub_142a860a0(nullptr)
int32_t rbx_1 = 0

for (void* i = &data_144015a20; i s< &data_144015a70; i += 8)
    void* rdx_1 = *i
    
    if (rdx_1 == 0)
        rdi.b = 1
        *(&data_144015a20 + (sx.q(rbx_1) << 3)) = result
        break
    
    if (*(rdx_1 + 8) == *(arg1 + 8))
        break
    
    rbx_1 += 1

sub_142a860d0(nullptr)

if (rbx_1 == 0xa && arg2 != 0)
    *arg3 = 0xffffff81

if (rdi.b == 0)
    sub_142a7dcd0(result)
else
    sub_142a7db20(0x12, sub_142a7f650)

return zx.q(rdi.b)
