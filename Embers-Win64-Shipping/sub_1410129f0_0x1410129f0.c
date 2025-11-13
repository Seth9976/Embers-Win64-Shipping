// 函数: sub_1410129f0
// 地址: 0x1410129f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == arg4)
    return 

int64_t* rbx_2 = *(arg1 + 8) + 0x120
int64_t r12_1 = *(arg2 + 0x20)
int64_t rdx = sx.q(rbx_2[1].d)
int64_t rax_1
int64_t rcx_1

if (rdx.d != 0)
    rax_1 = *rbx_2
    rcx_1 = rdx << 5

int32_t rdx_1

if (rdx.d == 0 || r12_1 != *(rcx_1 + rax_1 - 0x18) || arg5 != *(rcx_1 + rax_1 - 0x10)
        || arg3 != *(rcx_1 + rax_1 - 8) || arg4 != *(rcx_1 + rax_1 - 0xc)
        || *(rcx_1 + rax_1 - 0x20) != 0)
    int32_t rax_3 = (rdx + 1).d
    rbx_2[1].d = rax_3
    
    if (rax_3 s> *(rbx_2 + 0xc))
        sub_1405c4e40(rbx_2)
        rax_3 = rbx_2[1].d
    
    int64_t rax_4 = *rbx_2
    int64_t rcx_5 = sx.q(rax_3) << 5
    *(rcx_5 + rax_4 - 0x20) = 0
    rdx_1 = 1
    *(rcx_5 + rax_4 - 0xc) = arg3
    *(rcx_5 + rax_4 - 8) = arg4
    *(rcx_5 + rax_4 - 0x10) = arg5
    *(rcx_5 + rax_4 - 0x18) = r12_1
else
    rbx_2[1].d = (rdx - 1).d
    sub_1405dad20(rbx_2)
    rdx_1 = -1

void* rcx_6 = *(*(arg1 + 8) + 0x20)
*(rcx_6 + 0x3b8c) += rdx_1
sub_14105c1a0(arg2, arg1)
