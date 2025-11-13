// 函数: sub_141d24a50
// 地址: 0x141d24a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rsi = sx.q(rax_1)
int32_t var_10 = rsi.d
void* r9 = nullptr
void* var_18 = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_140638a00(&var_18)
    r9 = var_18

if (rsi.d s> 0)
    void* r8_1 = r9
    
    do
        r8_1 += 0xc
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        int64_t rax_3 = arg1[1]
        int64_t rdx_1 = rcx_1 * 3
        *(r8_1 - 0xc) = *(rax_3 + (rdx_1 << 2))
        *(r8_1 - 4) = *(rax_3 + (rdx_1 << 2) + 8)
    while (rbx s< rsi)

if (&arg1[1] != &var_18)
    var_18.o = *(arg1 + 8)
    r9 = var_18
    *(arg1 + 8) = var_18.o

if (r9 == 0)
    return &var_18

return sub_140a74f90(r9)
