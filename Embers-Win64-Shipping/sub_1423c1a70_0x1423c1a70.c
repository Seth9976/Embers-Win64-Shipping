// 函数: sub_1423c1a70
// 地址: 0x1423c1a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdi

if (arg1[0x1a] == 0)
    rdi = 0
else
    char rax_2 = (*(*arg1 + 0x318))()
    void* rcx = arg1[0x1a]
    
    if (rax_2 == 0)
        rdi = *(rcx + 0x20)
    else
        rdi = *(*(rcx + 0x28) + 4)

void* rax_4
float zmm0
rax_4, zmm0 = sub_141fe0c50(0)
int32_t rcx_5 = rdi - sub_1423bd270(sub_1405e25d0(sub_141fe0f50(rax_4)), arg1, 0, zmm0)
int32_t rax_8

if (rcx_5 s>= 1)
    rax_8 = data_1439c7a00
    
    if (rcx_5 s< rax_8)
        rax_8 = rcx_5
else
    rax_8 = 1

void* rcx_6 = arg1[0x1a]

if (rcx_6 != 0)
    rbx = *(rcx_6 + 0x14)

if (data_143a30254 s>= rbx)
    rbx = data_143a30254

if (rdi s<= rbx)
    return zx.q(rdi)

if (rax_8 s>= rbx)
    rbx = rax_8

return zx.q(rbx)
