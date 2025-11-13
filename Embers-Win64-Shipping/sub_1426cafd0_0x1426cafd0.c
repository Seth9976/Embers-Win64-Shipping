// 函数: sub_1426cafd0
// 地址: 0x1426cafd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1]
int32_t* r10 = arg2
int32_t r8_1 = (rax * 2) s>> 1

if (test_bit(rax, 0x1e) || rax s< 0)
    arg2.b = 0
else
    arg2.b = 1

int32_t rcx = r10[1]
int32_t r9_1 = (rcx * 2) s>> 1

if (test_bit(rcx, 0x1e) || rcx s< 0)
    rcx.b = 0
else
    rcx.b = 1

if (arg2.b != rcx.b)
    if (r8_1 s>= 0 && rax s>= 0)
        rax.b = 0
        return rax
    
    rax.b = 1
    return rax

int32_t zmm0 = *arg1
int32_t zmm1 = *r10
int64_t rax_1

if (zmm0 f== zmm1)
    rax_1.b = r8_1 s< r9_1
    return rax_1

rax_1.b = zmm1 f> zmm0
return rax_1
