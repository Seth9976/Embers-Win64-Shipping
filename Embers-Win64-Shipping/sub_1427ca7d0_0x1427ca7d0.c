// 函数: sub_1427ca7d0
// 地址: 0x1427ca7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg4

if (arg2 == 0 || arg3 == 0 || rbx == 0 || arg5 == 0)
    return 0x28

*(arg1 + 0x30) = 0
int32_t rdi = 0
int32_t r15 = *((*(*arg5 + 8))(arg5) + 0x20)

if (r15 != 0)
    do
        int64_t* rax_3 = (*(*arg5 + 0x10))(arg5, zx.q(rdi))
        int64_t rdx_1 = *rax_3
        void* rax_4 = (*(rdx_1 + 8))(rax_3, rdx_1)
        int64_t* r8 = *(rax_4 + 0x68)
        void var_38
        
        if (r8 == 0)
            *rbx = 1
            *(rbx + 8) = 0
        else
            *rbx = *sub_1427c9df0(arg1, &var_38, r8, *(rax_4 + 0x78), arg2, arg3)
        
        if (strcmp(*(rax_4 + 8), "GpuCoreClocks") == 0)
            *(arg1 + 0x30) = *(rbx + 8)
        
        rdi += 1
        rbx = &rbx[1]
    while (rdi u< r15)

return 0
