// 函数: sub_142bb44f0
// 地址: 0x142bb44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[5]
void* rbx = *arg1
int16_t arg_20 = 0
int16_t arg_18 = 0
int16_t var_38 = 0
int16_t arg_8 = 0
int32_t rax = sub_1408e52d0(rbp)
(*(*(rbx + 0x2d0) + 0x118))(rbx, 0, zx.q(arg2), &arg_20, &var_38)
int16_t rcx_2 = (*(arg1 + 0x44)).w

if (*(rbx + 0x190) == 0)
    int32_t rdx_1
    int32_t r8_2
    
    if (*(rbx + 0x208) == 0xffff)
        arg_18 = *(rbx + 0x13c) - rcx_2
        rdx_1 = sx.d(*(rbx + 0x13e))
        r8_2 = sx.d(*(rbx + 0x13c))
    else
        arg_18 = *(rbx + 0x24e) - rcx_2
        rdx_1 = sx.d(*(rbx + 0x250))
        r8_2 = sx.d(*(rbx + 0x24e))
    
    if (r8_2 - rdx_1 s>= 0)
        r8_2.w -= rdx_1.w
        arg_8 = r8_2.w
    else
        rdx_1.w -= r8_2.w
        arg_8 = rdx_1.w
else
    int64_t rdx
    rdx.b = 1
    (*(*(rbx + 0x2d0) + 0x118))(rbx, rdx, zx.q(arg2), &arg_18, &arg_8)

int32_t result = sub_142b97060(rbp, rax, arg3)

if (result != 0)
    return result

bool cond:1_1 = *(arg1 + 0x54) != 0
uint32_t rcx_5 = zx.d(var_38)
arg1[9].d = sx.d(arg_20)
arg1[0x21].d = sx.d(arg_18)
*(arg1 + 0x10c) = zx.d(arg_8)
*(arg1 + 0x4c) = rcx_5

if (not(cond:1_1))
    *(arg1 + 0x54) = 1
    arg1[0xa].d = rcx_5

return 0
