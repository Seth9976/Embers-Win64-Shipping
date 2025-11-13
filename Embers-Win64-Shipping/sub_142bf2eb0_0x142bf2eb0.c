// 函数: sub_142bf2eb0
// 地址: 0x142bf2eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg4

if (*(*(arg1 + 0x40) + 0x130) == sub_142bf2e30)
    void* rcx_1 = *(arg1 + 0x10)
    void* r10_2 = *(rcx_1 + 0x40)
    *(rcx_1 + 0x48)
    int64_t arg_40 = *(r10_2 + 0x28)
    jump(*(r10_2 + 0x138))

int32_t rbx = 0

if (arg3 != 0)
    int32_t* rdi_1 = arg6
    
    do
        uint64_t r8 = zx.q(*rsi)
        *rdi_1 = 0
        void* r10_1 = *(arg1 + 0x40)
        
        if ((*(r10_1 + 0x130))(arg1, *(arg1 + 0x48), r8, rdi_1, *(r10_1 + 0x20)) == 0)
            return zx.q(rbx)
        
        rsi += zx.q(arg5)
        rdi_1 += zx.q(arg7)
        rbx += 1
    while (rbx u< arg3)

return zx.q(arg3)
