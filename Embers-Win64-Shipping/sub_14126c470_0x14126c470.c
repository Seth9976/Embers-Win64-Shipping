// 函数: sub_14126c470
// 地址: 0x14126c470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143ea9958

if (rax != 0)
    return rax + 0x10

void*** rax_1 = j_sub_140a82f30(zx.q((rax + 0x18).d))
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 0xffffffff
    *(rax_1 + 0xc) = 4
    rax_1[2] = 0
    *rbx = &data_142f52158
    
    if (sub_140a80f40() == 0)
        sub_141997e80(rbx)
    else
        (*rbx)[5](rbx)

data_143ea9958 = rbx
return &rbx[2]
