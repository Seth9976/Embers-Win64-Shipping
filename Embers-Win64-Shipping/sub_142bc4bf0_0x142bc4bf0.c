// 函数: sub_142bc4bf0
// 地址: 0x142bc4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg4
sub_142bc56d0(arg1, arg2, arg3, arg4, arg5)
int32_t rdx = *(arg1 + 0x188)
int32_t r8 = *(arg1 + 0x18c)

if (rdx != r8)
    int32_t rcx = *rbx
    
    if (rcx != 0)
        *rbx = sub_142b93dd0(rcx, rdx, r8)
    
    int32_t rcx_1 = rbx[1]
    
    if (rcx_1 != 0)
        rbx[1] = sub_142b93dd0(rcx_1, *(arg1 + 0x188), *(arg1 + 0x18c))

return 0
