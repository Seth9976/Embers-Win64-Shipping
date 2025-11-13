// 函数: sub_142b843a0
// 地址: 0x142b843a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t r10_1 = r9 & 0x7ff0000000000000
int32_t rcx

if (r10_1 != 0)
    rcx = ((r9 u>> 0x34).d & 0x7ff) - 0x433
else
    rcx = -0x432

int32_t var_10 = rcx - 1
int64_t r11_1 = r9 & 0xfffffffffffff
int64_t r8 = 0x10000000000000 + r11_1
int32_t rdx = rcx - 1

if (r10_1 == 0)
    r8 = r11_1

void* rax = (r8 << 1) + 1
void* var_18
var_18.o = rax.o

while ((-0x40000000000000 & rax) == 0)
    rax <<= 0xa
    rdx -= 0xa

if (rax s>= 0)
    void* temp0_1
    void* temp1_1
    
    do
        rdx -= 1
        temp0_1 = rax
        temp1_1 = rax
        rax *= 2
    while (temp0_1 + temp1_1 s>= 0)

int32_t var_10_1 = rdx
void* result_1
char var_20
uint64_t result

if (r11_1 != 0 || r10_1 == 0 || ((r9 u>> 0x34).d & 0x7ff) == 1)
    result = (r8 << 1) + -ffffffffffffffff
    var_20 = (rcx - 1).b
    result_1 = result
else
    result_1 = (r8 << 2) + -ffffffffffffffff
    result = zx.q(rcx - 2)
    var_20 = result.b

result_1.o = result_1.o
*arg3 = rax.o
int32_t var_20_1 = rdx
*arg2 = (result_1 << (var_20 - rdx.b)).o
return result
