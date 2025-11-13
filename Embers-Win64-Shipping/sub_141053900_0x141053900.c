// 函数: sub_141053900
// 地址: 0x141053900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbp = nullptr
int32_t rsi = 1 << (data_1439c7a34).b
void*** r14 = nullptr
int64_t r13 = **(arg1 + 0x20)
int32_t i_1 = rsi - 1

if (rsi == 1)
    *arg2 = 0
    return arg2

uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_forward(i_1)
int32_t rdi = temp0_1
int32_t arg_8 = rdi
int32_t i

do
    void*** rax_3 = sub_141048e20(*(r13 + (zx.q(rdi) << 3) + 0x9d8), arg3)
    
    if (r14 != 0)
        sub_14081d930(&r14[4], rax_3)
        
        if (rax_3 != 0)
            rax_3[5].b = 0
    else
        rbp = rax_3
    
    r14 = rax_3
    i = not.d(1 << rdi.b) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(i)
        rdi = temp0_2
        int32_t arg_10 = rdi
    else
        rdi = 0x20
while (i != 0)
*arg2 = rbp

if (rbp != 0)
    rbp[1].d += 1

return arg2
