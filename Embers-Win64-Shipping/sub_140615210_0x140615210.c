// 函数: sub_140615210
// 地址: 0x140615210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg1[1].b = 0
arg1[0xb] = 0
arg1[2] = 0
int64_t* rcx = arg1[4]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[4] = 0

void*** rax_2 = j_sub_140a82f30(0x40)
void*** rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_14060c9e0(rax_2, &arg1[5], *(arg1 + 0x1c))

void* r8_2 = *arg1
arg1[4] = rax_3
int32_t result = ((arg1[0x10] - arg1[0xf]) s>> 3).d

if (result s> 0)
    int64_t rdx_2 = 0
    
    do
        rdx_2 += 8
        rdi += 1
        *(rdx_2 + arg1[0xf] - 8) = *(*(*(r8_2 + 0x10) + rdx_2 - 8) + 8)
        result = ((arg1[0x10] - arg1[0xf]) s>> 3).d
    while (rdi s< result)

return result
