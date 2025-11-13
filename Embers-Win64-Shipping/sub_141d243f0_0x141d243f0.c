// 函数: sub_141d243f0
// 地址: 0x141d243f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rdi = sx.q(rax_1)
int32_t var_10 = rdi.d
void* r9 = nullptr
void* var_18 = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_1405c4e40(&var_18)
    r9 = var_18

int32_t i_1 = rdi.d
void* rax_2 = r9

if (rdi.d != 0)
    int32_t i
    
    do
        __builtin_memset(rax_2, 0, 0x14)
        *(rax_2 + 0x18) = 0
        rax_2 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r8

if (rdi.d == 0 || rdi.d s<= 0)
    r8 = &arg1[1]
else
    r8 = &arg1[1]
    void* rdx_1 = r9
    
    do
        rdx_1 += 0x20
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        int64_t rax_4 = *r8
        int64_t rcx_2 = rcx_1 << 5
        *(rdx_1 - 0x20) = *(rcx_2 + rax_4)
        *(rdx_1 - 0x10) = *(rcx_2 + rax_4 + 0x10)
    while (rbx s< rdi)

if (r8 != &var_18)
    var_18.o = *r8
    r9 = var_18
    *r8 = var_18.o

if (r9 == 0)
    return &var_18

return sub_140a74f90(r9)
