// 函数: sub_1413ce770
// 地址: 0x1413ce770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || *(arg3 + 0xc8) == 0 || *(arg3 + 0x50) == 0)
    return 

int64_t var_58 = arg1
void* var_50_1 = arg3

if (sub_140a80f40() != 0)
    sub_1413ca060(&var_58)
    return 

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int128_t var_40 = var_58.o
        int64_t var_30 = arg2
        sub_1413ca060(&var_40)
        return 

void var_28
int64_t* rax_5 = sub_1413dab50(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = var_58.o
*(rcx_3 + 0x20) = arg2
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx_1 = *(rcx_4 + 0x30)
int64_t* arg_20 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_20

sub_140778000(rcx_4, rdx_2, r8, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_20)
