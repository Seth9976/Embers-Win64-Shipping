// 函数: sub_1426ecb20
// 地址: 0x1426ecb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ddacb0(arg1, arg2)

if (arg1[0x98] != 0 && arg1[0xa6] == 0)
    void* rax_2 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_2 != 0)
        void* rdi_1 = *(rax_2 + 0x138)
        
        if (rdi_1 != 0)
            void* rax_3 = sub_14272b250()
            void* rdx_1 = *(rdi_1 + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                sub_1426e85e0(arg1)

void* result = arg1[0xa6]

if (result != 0 && *(result + 0x28) == 0)
    return sub_1426e3580(arg1) __tailcall

return result
