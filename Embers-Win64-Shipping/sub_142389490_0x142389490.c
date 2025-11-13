// 函数: sub_142389490
// 地址: 0x142389490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** r14 = arg2[1]

if (r14 != 0)
    int64_t rbx_1 = sx.q(*(arg1 + 8))
    
    if (rbx_1.d s< *(arg1 + 0x100))
        int64_t rdi_1 = rbx_1 << 3
        
        do
            sub_14235f750(*(*r14 + rdi_1))
            rbx_1 = zx.q(rbx_1.d + 1)
            rdi_1 += 8
        while (rbx_1.d s< *(arg1 + 0x100))

return sub_142389660(arg1, arg2, arg3, arg4) __tailcall
