// 函数: sub_1413f2220
// 地址: 0x1413f2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x208)

if (rbx == 0)
    return 

sub_14150e220(rbx)
*(arg2 + 0x208) = 0
int64_t var_48 = arg1
void* var_40_1 = rbx

if (sub_140a80f40() != 0)
    sub_1413c67a0(&var_48)
    return 

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int128_t var_38 = var_48.o
        sub_1413c67a0(&var_38)
        return 

void var_28
int64_t* rax_5 = sub_1413dd2b0(&var_28, nullptr, 0xff)
*(*rax_5 + 0x10) = var_48.o
void* rcx_5 = *rax_5
int32_t r8_1 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
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
