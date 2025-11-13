// 函数: sub_142a87070
// 地址: 0x142a87070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx_1 = 2
    
    if (r8 == 8)
        rdx_1 = 4
    
    int64_t rax_1 = sub_142a5da90(&arg1[2], rdx_1 * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

int64_t* rax_2 = j_sub_142a7dd00(0x40)
int64_t* arg_8 = rax_2
int64_t* r8_1 = rax_2

if (rax_2 == 0)
    r8_1 = nullptr
else
    r8_1[1].d = 0x28
    *r8_1 = rax_2 + 0xd
    *(r8_1 + 0xc) = 0
    r8_1[7].d = 0
    *(rax_2 + 0xd) = 0

int64_t rcx_1 = sx.q(*arg1)
*arg1 = rcx_1.d + 1
*(*(arg1 + 8) + (rcx_1 << 3)) = r8_1
return r8_1
