// 函数: sub_141227ab0
// 地址: 0x141227ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143e84478

if (rax != 0)
    return rax + 0x10

void*** rax_1 = j_sub_140a82f30(0x300)
void*** rdi = rax_1

if (rax_1 == 0)
    rdi = rax_1
else
    rax_1[1].d = 0xffffffff
    *(rax_1 + 0xc) = 4
    *rdi = &data_142f41578
    sub_141218830(&rdi[2])
    rdi[0x52] = 0
    __builtin_memset(&rdi[0x54], 0, 0x14)
    rdi[0x57] = 0
    rdi[0x53] = &data_142f40b50
    __builtin_memset(&rdi[0x58], 0, 0x1c)
    __builtin_memset(&rdi[0x5c], 0, 0x1c)
    *rdi = &data_142f415b8
    
    if (sub_140a80f40() == 0)
        sub_141997e80(rdi)
    else
        (*rdi)[5](rdi)

data_143e84478 = rdi
return &rdi[2]
