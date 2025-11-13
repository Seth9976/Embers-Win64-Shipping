// 函数: sub_142437180
// 地址: 0x142437180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1424378d0()
int32_t rcx = data_143a30558

if (rax == 0x5dc0)
    if (rcx s< 1)
        return 0x3800
    
    int32_t rax_8 = 2
    
    if (rcx s< 2)
        rax_8 = rcx
    
    return zx.q(rax_8 * 0x3800)

if (rax == 0xbb80)
    if (rcx s< 1)
        return 0x8000
    
    int32_t rax_5 = 2
    
    if (rcx s< 2)
        rax_5 = rcx
    
    return zx.q(rax_5 << 0xf)

if (rcx s< 1)
    return 0x2000

int32_t rax_2 = 2

if (rcx s< 2)
    rax_2 = rcx

return zx.q(rax_2 << 0xd)
