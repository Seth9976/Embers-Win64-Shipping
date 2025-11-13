// 函数: sub_1427ca900
// 地址: 0x1427ca900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3

if (arg2 == 0 || rbx == 0 || arg4 == 0)
    return 0x28

*(arg1 + 0x30) = 0
int32_t rdi = 0
int32_t r15 = *((*(*arg4 + 8))(arg4) + 0x20)

if (r15 != 0)
    do
        int64_t* rax_3 = (*(*arg4 + 0x10))(arg4, zx.q(rdi))
        int64_t rdx_1 = *rax_3
        void* rax_4 = (*(rdx_1 + 8))(rax_3, rdx_1)
        int64_t* r8 = *(rax_4 + 0x70)
        void var_38
        
        if (r8 == 0)
            *rbx = 1
            *(rbx + 8) = 0
        else
            *rbx = *sub_1427c9a90(arg1, &var_38, r8, arg2)
        
        if (strcmp(*(rax_4 + 8), "GpuCoreClocks") == 0)
            *(arg1 + 0x30) = *(rbx + 8)
        
        rdi += 1
        rbx = &rbx[1]
    while (rdi u< r15)

return 0
