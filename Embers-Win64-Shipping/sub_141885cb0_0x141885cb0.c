// 函数: sub_141885cb0
// 地址: 0x141885cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x300) != 0)
    while (true)
        void* rcx = *(arg1 + 0x300)
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

int32_t arg_8
sub_140cba0f0(arg1 + 0xc8, &arg_8, arg2)
int64_t rax_3 = sx.q(arg_8)

if (rax_3.d == 0xffffffff)
    return 0x10

return (rax_3 << 5) + 0x10 + *(arg1 + 0xc8)
