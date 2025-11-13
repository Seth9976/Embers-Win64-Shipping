// 函数: sub_141f884f0
// 地址: 0x141f884f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rcx = data_143f3ca50
int512_t zmm1

if (rcx == 0)
    void*** rax_1 = j_sub_140a82f30(0x50)
    
    if (rax_1 == 0)
        rcx = nullptr
    else
        void*** rax_2
        rax_2, zmm1 = sub_141f7a1c0(rax_1)
        rcx = rax_2
    
    data_143f3ca50 = rcx

zmm1.o = zx.o(0)
jump(*(*rcx + 0x20))
