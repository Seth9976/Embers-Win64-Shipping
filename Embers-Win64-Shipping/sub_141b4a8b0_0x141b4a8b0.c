// 函数: sub_141b4a8b0
// 地址: 0x141b4a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_14306c728
int64_t* rax
float zmm0
rax, zmm0 = j_sub_140a82f30(0x30)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    __builtin_memset(&rax[2], 0, 0x20)
    rax[1].d = 0x3f800000
    *(rax + 0xc) = 0x3f800000

bool cond:0 = arg1[1] == 0
arg1[2] = rax

if (not(cond:0))
    (*(*arg2 + 0x340))(arg2)
    (*(*arg2 + 0x338))(arg2)
    void* rcx_2 = arg1[2]
    *(rcx_2 + 0x1c) = int.d(zmm0)
    *(rcx_2 + 0x18) = int.d(zmm0)
    arg1[2][2] = arg1

return arg1
