// 函数: sub_1413deaa0
// 地址: 0x1413deaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (sub_140a80f40() != 0)
    (*(*arg1 + 0x30))(arg1)
    jump(**arg1)

if (data_143f138f4 == 0)
    if (data_143de5480 == 0)
        (*(*arg1 + 0x30))(arg1)
        jump(**arg1)
    
    uint32_t rax_4
    rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_4.b != 0)
        (*(*arg1 + 0x30))(arg1)
        jump(**arg1)

void var_28
void** rax_5 = sub_141266e80(&var_28, nullptr, 0xff)
*(*rax_5 + 0x10) = arg1
void* rcx_4 = *rax_5
int32_t r8_1 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx_2 = *(rcx_4 + 0x20)
int64_t* arg_10 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_10

sub_1405a5630(rcx_4, rdx_2, r8_1, 1)

if (rbx_2 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_10)
