// 函数: sub_142661860
// 地址: 0x142661860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x9c)
void* const rdi = rax
void* rax_1
int64_t rax_2
void* r9_1

if (rax != 0)
    rax_1 = sub_1426a09e0()
    r9_1 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

uint32_t result

if (rax == 0 || rax_2.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr
    result.b = 0
else
    int32_t rax_4 = *(rdi + 0xc)
    void* const rax_11
    
    if (rax_4 s>= data_143e1d9b4)
        rax_11 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_4)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_6 = temp1_1 + rdx_1
        rax_11 =
            *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_1) * 0x18
    
    if (((*(rax_11 + 8) u>> 0x1d).b & 1) != 0)
        result.b = 0
    else
        result.b = 1

if (result.b != 0 && *(arg1 + 0x108) != 0)
    void* var_10_1 = arg1 + 0x120
    void* var_18_1 = arg1 + 0x28
    char rax_14 = sub_142682050(rdi, arg2, arg3, arg1 + 0x100)
    *(arg1 + 0x140) &= 0xfffffffb
    result = zx.d(rax_14) << 2
    *(arg1 + 0x140) |= result

return result
