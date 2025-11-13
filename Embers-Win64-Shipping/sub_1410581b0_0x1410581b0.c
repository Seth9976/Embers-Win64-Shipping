// 函数: sub_1410581b0
// 地址: 0x1410581b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg2 + 8))(arg2)

if (rax_1 != 0)
    while (*(rax_1 + 0x70) != *(**(arg1 + 0x20) + (zx.q(arg3) << 3) + 0x9d8))
        void* rcx_2 = *(rax_1 + 0x120)
        rax_1 = rcx_2 - 0x68
        
        if (rcx_2 == 0)
            rax_1 = nullptr
        
        if (rax_1 == 0)
            break

jump(*(**(*(rax_1 + 0xc0) + 0x20) + 0x48))
