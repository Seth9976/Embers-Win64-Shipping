// 函数: sub_141d244f0
// 地址: 0x141d244f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rdi = sx.q(rax_1)
int32_t var_10 = rdi.d
int64_t* r9 = nullptr
int64_t* var_18 = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_1405a4f90(&var_18)
    r9 = var_18

int32_t i_1 = rdi.d
int64_t* rax_2 = r9

if (rdi.d != 0)
    int32_t i
    
    do
        *rax_2 = 0
        rax_2[1] = 0
        rax_2 = &rax_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rdx_1

if (rdi.d == 0 || rdi.d s<= 0)
    rdx_1 = &arg1[1]
else
    rdx_1 = &arg1[1]
    int64_t* r8_1 = r9
    
    do
        r8_1 = &r8_1[2]
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        *(r8_1 - 0x10) = *(*rdx_1 + rcx_1 * 0x10)
    while (rbx s< rdi)

if (rdx_1 != &var_18)
    var_18.o = *rdx_1
    r9 = var_18
    *rdx_1 = var_18.o

if (r9 == 0)
    return &var_18

return sub_140a74f90(r9)
