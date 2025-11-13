// 函数: sub_1413ce410
// 地址: 0x1413ce410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x46] != 0)
    return 

int64_t** rax_1 = sub_141f38660(arg2)
arg2[0x46] = rax_1
int64_t** var_40_1 = rax_1
int64_t var_48 = arg1

if (sub_140a80f40() != 0)
    sub_1413c87d0(&var_48)
    return 

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_38 = var_48.o
        sub_1413c87d0(&var_38)
        return 

void var_28
int64_t* rax_6 = sub_1413da4b0(&var_28, nullptr, 0xff)
*(*rax_6 + 0x10) = var_48.o
void* rcx_5 = *rax_6
int32_t r8_1 = rax_6[2].d
int64_t* rdx_2 = rax_6[1]
int64_t* rbx_1 = *(rcx_5 + 0x28)
int64_t* arg_18 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_18

sub_1405e48c0(rcx_5, rdx_2, r8_1, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_18)
