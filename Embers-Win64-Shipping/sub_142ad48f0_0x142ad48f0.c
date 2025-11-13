// 函数: sub_142ad48f0
// 地址: 0x142ad48f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rbx = arg2

if (arg3 u> 0xb)
    int32_t rax_1 = sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18)
    arg3 = arg_18
    rbx += rax_1

int32_t rax_3 = (rbx + 0x4e) & 0x80000003

if (rax_3 s< 0)
    rax_3 = ((rax_3 - 1) | 0xfffffffc) + 1

if (rax_3 == 0)
    int32_t rdx_5
    
    if (rbx + 0x4e == (rbx + 0x4e) s/ 0x64 * 0x64)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, rbx + 0x4e)
        rdx_5 = temp2_1 s>> 7
    
    if ((rbx + 0x4e != (rbx + 0x4e) s/ 0x64 * 0x64
            || rbx + 0x4e == (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190) && arg3 == 0)
        return zx.q(arg3 + 0x1f)

int32_t rax_11
rax_11.b = arg3 - 1 u<= 4
return zx.q(rax_11 + 0x1e)
