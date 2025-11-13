// 函数: sub_1409362a0
// 地址: 0x1409362a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14062d6e0(arg1 + 0x68, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x68) + rax * 0x28

int16_t** rax_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    int16_t* const rcx_2 = &data_142d40450
    int16_t* rdx_2
    
    if (arg3[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *arg3
    
    if (rax_2[1].d != 0)
        rcx_2 = *rax_2
    
    int32_t rax_3 = sub_140a54510(rcx_2, rdx_2)
    
    if (rax_3 == 0)
        return rax_3

sub_1406253f0(arg1 + 0x68, arg2, arg3)
int64_t rax_4
rax_4.b = 1
return rax_4
