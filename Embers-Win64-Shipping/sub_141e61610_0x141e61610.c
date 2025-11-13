// 函数: sub_141e61610
// 地址: 0x141e61610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141e5fc50(arg1, arg2, 1)

if (rax == 0)
    return rax

uint64_t rax_1 = sub_140d3c6e0(rax + 8)
uint64_t rdx = rax_1

if (rax_1 == 0 && *(rax + 0x18) != rax_1)
    if (rax_1.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_1 = zx.q(data_1439aaa30)
    
    if (rax_1.d != *(rax + 0x10) || *(rax + 8) != 0xffffffff)
        void* rax_2 = sub_140d2bce0(rax + 0x18)
        sub_140d3a3a0(rax + 8, rax_2)
        
        if (rax_2 != 0 || data_143e1d7b4 == 0)
            int32_t rax_3 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_3 = data_1439aaa30
            
            *(rax + 0x10) = rax_3
        
        return sub_140d3c6e0(rax + 8)

return rdx
