// 函数: sub_142a98c80
// 地址: 0x142a98c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

if (arg2 == 0xffffffff || *(*(arg1 + 0x148) + 0x10) == 0)
    return zx.q(arg2)

int64_t* rcx = *(arg1 + 0x150)
int64_t rdx = *(arg1 + 0x158)
int32_t arg_10 = 0
*(arg1 + 0x158) = 0
void* rax_3 = (*(*rcx + 0x28))(rcx, rdx, &arg_10)
int32_t* rcx_1 = *(arg1 + 0x158)

if (rcx_1 != 0)
    sub_142aea470(rcx_1)

bool cond:0 = arg_10 s<= 0
*(arg1 + 0x158) = rax_3

if (not(cond:0))
    return 0xffffffff

int64_t i
int512_t zmm0
i, zmm0 = sub_142aea860(rax_3)

while (sx.q(rbx) != i)
    int32_t rax_5
    rax_5, zmm0 = sub_142a98190(arg1, rbx, zmm0)
    
    if (rax_5 != 1)
        break
    
    int64_t* rcx_5 = *(arg1 + 0x150)
    int32_t rax_7 = (*(*rcx_5 + 0x68))(rcx_5)
    rbx = rax_7
    
    if (rax_7 == 0xffffffff)
        break

return zx.q(rbx)
