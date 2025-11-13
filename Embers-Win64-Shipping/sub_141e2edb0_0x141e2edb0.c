// 函数: sub_141e2edb0
// 地址: 0x141e2edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e69a50(&arg1[0x34])
void* rcx_1 = arg1[7]

if (rcx_1 != 0)
    int64_t* rax_1 = sub_141e433d0(rcx_1, &data_143f398c8)
    
    if (rax_1 != 0)
        int16_t rax_2 = sub_141e5dd10(rax_1, &arg1[0x39])
        
        if (rax_2 != 0)
            int64_t rdx_2 = *arg1
            void* rax_4 = sub_141e01840((*(rdx_2 + 0x2a0))(arg1, rdx_2), rax_2)
            
            if (rax_4 != 0)
                sub_141e55a80(&arg1[0x34], rax_4, arg1[0x12].d)

return sub_140594850() __tailcall
