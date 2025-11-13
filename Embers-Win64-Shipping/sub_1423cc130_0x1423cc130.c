// 函数: sub_1423cc130
// 地址: 0x1423cc130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x78)

if (rbx == 0)
    return 

char var_30_1 = arg2

if (sub_140a80f40() != 0)
    jump(**(rbx + 0x58))

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        jump(**(rbx + 0x58))

void var_28
int64_t* rax_3 = sub_1423be470(&var_28, nullptr, 0xff)
*(*rax_3 + 0x10) = rbx.o
void* rcx_4 = *rax_3
int32_t r8_3 = rax_3[2].d
int64_t* rdx_2 = rax_3[1]
int64_t* rbx_1 = *(rcx_4 + 0x28)
int64_t* arg_18 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_18

sub_1405e48c0(rcx_4, rdx_2, r8_3, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_18)
