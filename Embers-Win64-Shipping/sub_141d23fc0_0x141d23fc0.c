// 函数: sub_141d23fc0
// 地址: 0x141d23fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rsi = 0
int64_t rbx = sx.q(rax_1)
int32_t var_20 = rbx.d
void* rdi = nullptr
void* var_28 = nullptr
int32_t var_1c = 0

if (rax_1 s> 0)
    sub_1406105e0(&var_28)
    rdi = var_28

memset(rdi, 0, rbx << 2)

if (rbx s>= 4)
    int64_t r10_1 = arg1[1]
    void* rdx_1 = rdi + 4
    void* r8_2 = *arg2 - rdi
    int64_t i_3 = ((rbx - 4) u>> 2) + 1
    rsi = i_3 << 2
    int64_t i
    
    do
        int64_t rax_2 = sx.q(*(r8_2 + rdx_1 - 4))
        rdx_1 += 0x10
        *(rdx_1 - 0x14) = *(r10_1 + (rax_2 << 2))
        *(rdx_1 - 0x10) = *(r10_1 + (sx.q(*(r8_2 + rdx_1 - 0x10)) << 2))
        *(rdx_1 - 0xc) = *(r10_1 + (sx.q(*(r8_2 + rdx_1 - 0xc)) << 2))
        *(rdx_1 - 8) = *(r10_1 + (sx.q(*(r8_2 + rdx_1 - 8)) << 2))
        i = i_3
        i_3 -= 1
    while (i != 1)

if (rsi s< rbx)
    void* rdx_2 = rdi + (rsi << 2)
    int64_t r9_3 = arg1[1]
    void* r8_4 = *arg2 - rdi
    int64_t i_2 = rbx - rsi
    int64_t i_1
    
    do
        int64_t rax_6 = sx.q(*(rdx_2 + r8_4))
        rdx_2 += 4
        *(rdx_2 - 4) = *(r9_3 + (rax_6 << 2))
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void* result = &arg1[1]

if (result != &var_28)
    var_28.o = *result
    rdi = var_28
    *result = var_28.o

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
