// 函数: sub_142278600
// 地址: 0x142278600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0x4e2].d)

if ((result.b & 0x10) == 0)
    result = zx.q(result.d) | 0x10
    arg1[0x4c].d = 0x3f800000
    arg1[0x4e2].d = result.d
    *(arg1 + 0x264) = 0x3f800000
    arg1[0x4d].d = 0x3f800000

if (arg1[0x4c].d.d f!= *arg2 || (*(arg1 + 0x264)).d f!= arg2[1] || not(arg1[0x4d].d.d f== arg2[2]))
    int32_t rax = arg1[0x4d].d
    arg1[0x4f] = arg1[0x4c]
    arg1[0x50].d = rax
    int32_t rax_1 = arg2[2]
    *(arg1 + 0x26c) = *arg2
    *(arg1 + 0x274) = rax_1
    result = (*(*arg1 + 0x150))()
    int32_t rcx = *(result + 0x520)
    arg1[0x4e2].d |= 0x20
    *(arg1 + 0x284) = arg3.d
    arg1[0x51].d = rcx

return result
