// 函数: sub_14152fa30
// 地址: 0x14152fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t rdx_2 = arg_8

if (rdx_2 s> *(arg2 + 0xc))
    sub_1405a5130(arg2, rdx_2)
    rdx_2 = arg_8

int512_t zmm1 = sub_141755f60(arg2, rdx_2, 1)
int32_t rdi = 0

if (arg_8 s> 0)
    do
        zmm1 = sub_14152f8a0(arg1, *arg2 + sx.q(rdi) * 0x18, zmm1)
        rdi += 1
    while (rdi s< arg_8)

return arg1
