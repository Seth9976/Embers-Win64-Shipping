// 函数: sub_1423c84a0
// 地址: 0x1423c84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x18].d == arg2 && *(arg1 + 0xc4) == arg3)
    return 

int64_t* rbx_1 = arg1[0xf]
arg1[0x18].d = arg2
*(arg1 + 0xc4) = arg3

if (rbx_1 == 0)
    jump(*(*arg1 + 0x2f8))

int32_t var_40_1 = arg2
int32_t var_3c_1 = arg3
char rax_1
int64_t r8
rax_1, r8 = sub_140a80f40()

if (rax_1 != 0)
    int64_t* rcx
    
    if (*(rbx_1 + 0xa4) == arg2)
        rcx = rbx_1
    
    if (*(rbx_1 + 0xa4) != arg2 || rbx_1[0x15].d != arg3)
        *(rbx_1 + 0xa4) = arg2
        rbx_1[0x15].d = arg3
        sub_1419ba620(rbx_1)
        rcx = rbx_1
    
    r8.b = 1
    (*rbx_1[0xb])(&rcx[0xb], &data_143f02b98, r8)
    return 

uint32_t rax_3

if (data_143f138f4 == 0 && data_143de5480 != 0)
    rax_3, r8 = GetCurrentThreadId()
    rax_3.b = rax_3 == data_143de5470

if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_3.b != 0))
    if (*(rbx_1 + 0xa4) != arg2 || rbx_1[0x15].d != arg3)
        *(rbx_1 + 0xa4) = arg2
        rbx_1[0x15].d = arg3
        sub_1419ba620(rbx_1)
    
    r8.b = 1
    (*rbx_1[0xb])(&rbx_1[0xb], &data_143f02b98, r8)
    return 

void var_38
int64_t* rax_4 = sub_1423be320(&var_38, nullptr, 0xff)
*(*rax_4 + 0x10) = rbx_1.o
void* rcx_6 = *rax_4
int32_t r8_1 = rax_4[2].d
int64_t* rdx = rax_4[1]
int64_t* rbx_2 = *(rcx_6 + 0x28)
int64_t* arg_8 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_8

sub_1405e48c0(rcx_6, rdx, r8_1, 1)

if (rbx_2 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_8)
