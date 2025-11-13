// 函数: sub_142ba8e90
// 地址: 0x142ba8e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = sx.d(*(arg1 + 0x1ce))
int64_t rax

if (rdx != 0)
    int32_t rax_2 = *(*(*arg1 + 0x90) + 0x78)
    
    if (rax_2 != 0x28)
        if (rax_2 == 0x23)
            goto label_142ba8ef1
    else if (*(arg1 + 0x373) == 0 || rax_2 == 0x23)
    label_142ba8ef1:
        int32_t* rbx_1 = *(arg2 + 0x18) + (zx.q(arg3) << 3)
        uint32_t rax_4 = sub_142b93dd0(arg4, rdx, arg1[0x63].d)
        *rbx_1 += rax_4
    
    rax = *(arg2 + 0x28)
    uint64_t rcx_2 = zx.q(arg3)
    *(rax + rcx_2) |= 8

int32_t rdx_1 = sx.d(arg1[0x3a].w)

if (rdx_1 == 0)
    return 

if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0 || *(arg1 + 0x374) == 0
        || *(arg1 + 0x375) == 0)
    void* rbx_2 = *(arg2 + 0x18) + (zx.q(arg3) << 3)
    uint32_t rax_7 = sub_142b93dd0(arg4, rdx_1, arg1[0x63].d)
    *(rbx_2 + 4) += rax_7

rax = *(arg2 + 0x28)
uint64_t rcx_6 = zx.q(arg3)
*(rax + rcx_6) |= 0x10
