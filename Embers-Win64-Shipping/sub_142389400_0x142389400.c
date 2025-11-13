// 函数: sub_142389400
// 地址: 0x142389400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r14 = arg2[1]
int64_t* rbp = arg2

if (r14 != 0)
    int64_t rbx_1 = sx.q(*(arg1 + 8))
    
    if (rbx_1.d s< *(arg1 + 0x100))
        int64_t rdi_1 = rbx_1 << 3
        
        do
            arg2.b = 1
            arg2, arg3, arg4 = sub_142343d60(*(*r14 + rdi_1), arg2.b)
            rbx_1 = zx.q(rbx_1.d + 1)
            rdi_1 += 8
        while (rbx_1.d s< *(arg1 + 0x100))

return sub_142389510(arg1, rbp, arg3, arg4) __tailcall
