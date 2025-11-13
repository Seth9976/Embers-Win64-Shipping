// 函数: sub_140d21da0
// 地址: 0x140d21da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1

if (arg1 != 0)
    do
        int32_t rax_1 = *(i + 0xc)
        void* const rdx_2
        
        if (rax_1 s>= data_143e1d9b4)
            rdx_2 = nullptr
        else
            uint32_t rcx = zx.d(rax_1.w)
            
            if (rax_1 s< 0)
                rax_1 += 0xffff
                rcx -= 0x10000
            
            rdx_2 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rcx) * 0x18
        
        if (((*(rdx_2 + 8) u>> 0x19).b & 1) != 0)
            break
        
        i = *(i + 0x40)
    while (i != 0)

return i
