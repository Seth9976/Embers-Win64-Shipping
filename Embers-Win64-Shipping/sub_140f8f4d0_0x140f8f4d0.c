// 函数: sub_140f8f4d0
// 地址: 0x140f8f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x48)
int64_t* rcx = *(arg1 + 8)
(*(*rcx + 0x20))(rcx, *(sx.q(*arg3) * 0x70 + *(r14 + 0x18)))
int64_t* rcx_1 = *(arg1 + 8)
uint64_t rdx_2 = zx.q(arg3[1])
int64_t rax_1 = *rcx_1
int32_t rax_2

if (arg4 s<= 0)
    rax_2 = (*(rax_1 + 0x58))(rcx_1, rdx_2)
else
    rax_2 = (*(rax_1 + 0x60))(rcx_1, rdx_2)

int64_t* rcx_2 = *(arg1 + 8)
(*(*rcx_2 + 0x28))(rcx_2)

if (rax_2 != 0xffffffff)
    int32_t rax_6 = *arg3
    arg2[1] = rax_2
    *arg2 = rax_6
else if (arg4 s<= 0)
    int64_t r8 = sx.q(*arg3)
    
    if (r8.d s<= 0)
        *arg2 = *arg3
    else
        void* rcx_5 = *(r8 * 0x70 + *(r14 + 0x18) - 0x70)
        *arg2 = (r8 - 1).d
        int32_t rdx_3 = *(rcx_5 + 8)
        int32_t rax_9 = rdx_3 - 1
        
        if (rdx_3 == 0)
            rax_9 = 0
        
        arg2[1] = rax_9
else
    int32_t rcx_3 = *arg3
    
    if (rcx_3 s>= *(r14 + 0x20) - 1)
        *arg2 = *arg3
    else
        arg2[1] = 0
        *arg2 = rcx_3 + 1

return arg2
