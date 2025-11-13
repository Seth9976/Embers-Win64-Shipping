// 函数: sub_141d24b30
// 地址: 0x141d24b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int32_t rbp = 0
int64_t r14 = sx.q(rax_1)
int32_t i_4 = r14.d
void*** rsi = nullptr
void*** var_38 = nullptr
int32_t var_2c = 0

if (rax_1 s> 0)
    sub_140775520(&var_38)
    rsi = var_38

int32_t i_2 = r14.d
void*** rbx = rsi

if (r14.d != 0)
    int32_t i
    
    do
        sub_141702a70(rbx)
        rbx = &rbx[9]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r14 s> 0)
    int64_t rdi = 0
    
    do
        sub_1417070a0(&rsi[sx.q(rbp) * 9], arg1[1] + sx.q(*(*arg2 + (rdi << 2))) * 0x48)
        rbp += 1
        rdi += 1
    while (rdi s< r14)

void**** result = &var_38

if (&arg1[1] != &var_38)
    var_38.o = *(arg1 + 8)
    rsi = var_38
    *(arg1 + 8) = var_38.o

int32_t i_3 = i_4
void*** rbx_2 = rsi

if (i_3 != 0)
    int32_t i_1
    
    do
        result = sub_1417059c0(rbx_2)
        rbx_2 = &rbx_2[9]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
