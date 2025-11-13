// 函数: sub_141d24860
// 地址: 0x141d24860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rdi = sx.q(rax_1)
int32_t var_10 = rdi.d
float (* r9)[0x4] = nullptr
float (* var_18)[0x4] = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_140638970(&var_18)
    r9 = var_18

int32_t i_1 = rdi.d
float (* rax_2)[0x4] = r9

if (rdi.d != 0)
    uint32_t zmm3[0x4] = data_143f36f80
    int32_t i
    
    do
        float zmm1[0x4] = data_143f36f70
        zmm1[0].q = zx.o(0) u>> 0x40
        *rax_2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        rax_2[1] = zx.o(0)
        rax_2 = &rax_2[3]
        rax_2[-1] = _mm_and_ps(data_143f36f70, zmm3)
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r8

if (rdi.d == 0 || rdi.d s<= 0)
    r8 = &arg1[1]
else
    r8 = &arg1[1]
    void* rdx_1 = &r9[2]
    
    do
        rdx_1 += 0x30
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        float (* rax_6)[0x4] = rcx_1 * 0x30 + *r8
        *(rdx_1 - 0x50) = *rax_6
        *(rdx_1 - 0x40) = rax_6[1]
        *(rdx_1 - 0x30) = rax_6[2]
    while (rbx s< rdi)

if (r8 != &var_18)
    var_18.o = *r8
    r9 = var_18
    *r8 = var_18.o

if (r9 == 0)
    return &var_18

return sub_140a74f90(r9)
