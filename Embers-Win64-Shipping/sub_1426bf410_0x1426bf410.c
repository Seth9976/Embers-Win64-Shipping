// 函数: sub_1426bf410
// 地址: 0x1426bf410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rax = &data_142d40450
int16_t* const rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (*(arg1 + 0x38) != 0)
    rax = *(arg1 + 0x30)

void* rcx_1 = rcx - rax
uint32_t i
uint32_t rbx_1

do
    rbx_1 = zx.d(*rax)
    i = zx.d(*(rax + rcx_1))
    
    if (rbx_1 != i)
        break
    
    rax = &rax[1]
while (i != 0)

sub_140597df0(arg1 + 0x30, arg3)
int64_t* result
result.b = rbx_1 - i != 0
return result
