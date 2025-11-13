// 函数: sub_1423c6b40
// 地址: 0x1423c6b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x78)

if (rbx == 0)
    return 

char rax_1 = sub_140a80f40()

if (rax_1 != 0)
    jump(*(*rbx + 0x58))

if (data_143f138f4 == rax_1)
    if (data_143de5480 == rax_1)
        jump(*(*rbx + 0x58))
    
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b != 0)
        jump(*(*rbx + 0x58))

void var_28
void** rax_4 = sub_1423be1d0(&var_28, nullptr, 0xff)
*(*rax_4 + 0x10) = rbx
void* rcx_3 = *rax_4
int32_t r8_1 = rax_4[2].d
int64_t* rdx_1 = rax_4[1]
int64_t* rbx_1 = *(rcx_3 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_1405a5630(rcx_3, rdx_1, r8_1, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_10)
