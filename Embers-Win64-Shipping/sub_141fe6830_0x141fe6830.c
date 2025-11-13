// 函数: sub_141fe6830
// 地址: 0x141fe6830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2 + (arg3 << 1).d
arg1[1] = arg3.d
arg1[2] = r11
arg1[3] = arg4
int32_t rsi = 0
*arg1 = arg2
int64_t r8_1 = zx.q(arg4 - 1) - (zx.q(arg4 - 1) u>> 1 & 0x5555555555555555)
arg1[5] = arg4 - 1
int64_t rcx_3 = (r8_1 u>> 2 & 0x3333333333333333) + (r8_1 & 0x3333333333333333)
arg1[7] = arg4 * arg4
arg1[4] = (((((rcx_3 u>> 4) + rcx_3) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38).d
uint64_t rax_9 = zx.q(r11 * arg4)
arg1[6] = rax_9.d
float zmm1 = 1f f/ float.s(rax_9)
arg1[8] = zmm1
arg1[9] = float.s(zx.q(arg2)) f* zmm1
arg1[0x1c] = 0

if (arg1[0x1d] != 0)
    sub_141a64350(&arg1[0x12], 0)

sub_14059a8e0(&arg1[0xa], 0)
arg1[0x20] = 0

if (arg1[0x21] != 0)
    sub_1405a51b0(&arg1[0x1e], 0)

arg1[0x2a] = 0xffffffff
arg1[0x2b] = 0
void* result = sub_14059a8e0(&arg1[0x22], 0)
int32_t i = 1

if (arg1[3] u>= 1)
    do
        int64_t rbp_1 = sx.q(arg1[0x1c])
        int32_t r14_2 = i * i
        int32_t rax_11 = (rbp_1 + 1).d
        arg1[0x1c] = rax_11
        
        if (rax_11 s> arg1[0x1d])
            sub_14083a280(&arg1[0x12], rbp_1.d)
        
        result = *(arg1 + 0x68)
        void* result_1 = &arg1[0x12]
        
        if (result != 0)
            result_1 = result
        
        i *= 2
        *(result_1 + (rbp_1 << 2)) = rsi
        rsi += r14_2
    while (i u<= arg1[3])

if (rsi s> 0)
    int32_t rbx_1 = arg1[0x10]
    int32_t rdi = rbx_1 + rsi
    result = sub_1405a4980(&arg1[0xa], rdi)
    arg1[0x10] += rsi
    
    while (rbx_1 != rdi)
        void* rax_12 = *(arg1 + 0x38)
        void* r9_1 = &arg1[0xa]
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        int32_t rax_13 = rbx_1
        
        if (rbx_1 s< 0)
            rax_13 = rbx_1 + 0x1f
        
        result = zx.q(rax_13 s>> 5)
        char rcx_11 = rbx_1.b & 0x1f
        int64_t r8_3 = sx.q(result.d)
        rbx_1 += 1
        *(r9_1 + (r8_3 << 2)) &= not.d(1 << rcx_11)

return result
