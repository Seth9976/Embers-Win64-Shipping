// 函数: sub_1417d3e60
// 地址: 0x1417d3e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3910(arg1)

if (*(arg1 + 0x3e8) == 0)
    return 

int64_t rdi_1 = *(arg1 + 0x410)
int64_t var_30_1 = rdi_1
char rax_1 = sub_140a80f40()
int64_t* rax

if (rax_1 != 0)
label_1417d3ec3:
    rax = *(arg1 + 0x3e8)
    
    if (rax != 0)
        rax[0x2c] = rdi_1
    
    return 

if (data_143f138f4 == rax_1)
    if (data_143de5480 == rax_1)
        goto label_1417d3ec3
    
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b != 0)
        goto label_1417d3ec3

void var_28
void** rax_3 = sub_1417d02e0(&var_28, nullptr, 0xff)
*(*rax_3 + 0x10) = arg1.o
void* rcx_2 = *rax_3
int32_t r8_1 = rax_3[2].d
int64_t* rdx_1 = rax_3[1]
int64_t* rbx_1 = *(rcx_2 + 0x28)
int64_t* arg_10 = rbx_1
int32_t* rdi_2 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_2 += 1
    rbx_1 = arg_10

sub_1405e48c0(rcx_2, rdx_1, r8_1, 1)

if (rbx_1 == 0)
    return 

rax = zx.q(*rdi_2)
*rdi_2 -= 1

if (rax.d == 1)
    sub_140a2f6e0(arg_10)
