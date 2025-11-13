// 函数: sub_140517170
// 地址: 0x140517170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(8)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_14328a160

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

data_143f3d688 = rbx
data_143f3d690 = rax_1
return atexit(sub_142cfda90) __tailcall
