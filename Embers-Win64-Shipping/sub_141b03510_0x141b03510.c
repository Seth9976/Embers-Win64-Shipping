// 函数: sub_141b03510
// 地址: 0x141b03510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

int32_t var_48 = 0
void* rax_2
int32_t* rdx_1
rax_2, rdx_1 = sub_140d2dfc0(sub_141b36040(), arg1, 0, 8, 0, 0, 0, 0, 0)
rdx_1.b = 1

if (sub_141a6b7c0(rax_2) != 0)
    rdx_1 = arg4
    *(rax_2 + 0xf8) = *(rdx_1 + 8)
    *(rax_2 + 0xf0) = *rdx_1
    *(rax_2 + 0xf4) = rdx_1[1].b

int64_t rbx = *rax_2
var_48.b = (*(*arg1 + 0x2a8))(arg1, rdx_1)
(*(rbx + 0x2b0))(rax_2, &arg1[0xb], zx.q(arg2), zx.q(arg3), 0)
int64_t rbx_1 = sx.q(arg1[0xc].d)
int32_t rax_7 = (rbx_1 + 1).d
arg1[0xc].d = rax_7

if (rax_7 s> *(arg1 + 0x64))
    sub_1405a4d70(&arg1[0xb])

int64_t result = arg1[0xb]
*(result + (rbx_1 << 3)) = rax_2
return result
