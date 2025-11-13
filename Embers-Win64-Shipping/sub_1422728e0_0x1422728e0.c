// 函数: sub_1422728e0
// 地址: 0x1422728e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x554) = 1
int64_t* r9 = arg2[1]
char* rcx = *r9
int64_t* result

if (&rcx[1] u> r9[1])
    result = (*(*arg2 + 0x150))(arg2, arg1 + 0x3d4, 1)
else
    *(arg1 + 0x3d4) = *rcx
    result = arg2[1]
    *result += 1

int64_t* rcx_2 = arg3[0xb]

if (rcx_2 == 0 || arg3 != rcx_2[0x11])
    return result

char rax_3 = *(arg1 + 0x3d4)

if (rax_3 == 0)
    jump(*(*arg3 + 0x2c0))

uint64_t rdx_2 = zx.q(rax_3)
int32_t rax_5 = (rdx_2 - 1).d

if (rax_5 s>= 0 && rax_5 s< arg3[0xa].d)
    jump(*(**(arg3[9] + (rdx_2 << 3) - 8) + 0x2c0))

int64_t* rax_9 = (*(*rcx_2 + 0x360))(rcx_2, arg3)
int64_t r9_1 = *rax_9
return (*(r9_1 + 0x2c0))(rax_9, arg1, arg3, r9_1)
