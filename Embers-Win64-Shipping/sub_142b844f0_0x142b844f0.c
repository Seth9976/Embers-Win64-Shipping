// 函数: sub_142b844f0
// 地址: 0x142b844f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg1
int32_t r10_1 = r9 & 0x7f800000
int32_t rcx

if (r10_1 != 0)
    rcx = zx.d((r9 u>> 0x17).b) - 0x96
else
    rcx = -0x95

int32_t r11_1 = r9 & 0x7fffff
int32_t var_10 = rcx - 1
int32_t rdx = rcx - 1
uint64_t rax_3 = zx.q(r11_1 + 0x800000)

if (r10_1 == 0)
    rax_3 = zx.q(r11_1)

uint64_t r8 = zx.q(rax_3.d)
void* rax_4 = (rax_3 << 1) + 1
void* var_18
var_18.o = rax_4.o

while ((-0x40000000000000 & rax_4) == 0)
    rax_4 <<= 0xa
    rdx -= 0xa

if (rax_4 s>= 0)
    void* temp0_1
    void* temp1_1
    
    do
        rdx -= 1
        temp0_1 = rax_4
        temp1_1 = rax_4
        rax_4 *= 2
    while (temp0_1 + temp1_1 s>= 0)

int32_t var_10_1 = rdx
void* result_1
char var_20
void* result

if (r11_1 != 0 || r10_1 == 0 || zx.d((r9 u>> 0x17).b) == 1)
    result = (r8 << 1) + -ffffffffffffffff
    var_20 = (rcx - 1).b
    result_1 = result
else
    result_1 = (r8 << 2) + -ffffffffffffffff
    result = zx.q(rcx - 2)
    var_20 = result.b

result_1.o = result_1.o
*arg3 = rax_4.o
int32_t var_20_1 = rdx
*arg2 = (result_1 << (var_20 - rdx.b)).o
return result
