// 函数: sub_1413ce9e0
// 地址: 0x1413ce9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x8a) & 1) == 0)
    return 

int64_t rbp_1 = sx.q(*(arg1 + 0x1c60))
int32_t rax_1 = (rbp_1 + 1).d
*(arg1 + 0x1c60) = rax_1

if (rax_1 s> *(arg1 + 0x1c64))
    sub_1405a4d70(arg1 + 0x1c58)

*(*(arg1 + 0x1c58) + (rbp_1 << 3)) = arg2
int64_t rax_4 = (*(*arg2 + 0x520))(arg2)
arg2[0x41] = rax_4
int64_t var_40_1 = rax_4
void* rbx_1
int64_t rdi_1
bool cond:1

if (sub_140a80f40() != 0)
    rbx_1 = arg1 + 0x1c48
    rdi_1 = sx.q(*(rbx_1 + 8))
    int32_t rcx_2 = (rdi_1 + 1).d
    cond:1 = rcx_2 s<= *(rbx_1 + 0xc)
    *(rbx_1 + 8) = rcx_2
label_1413ceab7:
    
    if (not(cond:1))
        sub_1405a4d70(rbx_1)
    
    *(*rbx_1 + (rdi_1 << 3)) = rax_4
    return 

uint32_t rax_6

if (data_143f138f4 == 0 && data_143de5480 != 0)
    rax_6.b = GetCurrentThreadId() == data_143de5470

if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_6.b != 0))
    rbx_1 = arg1 + 0x1c48
    rdi_1 = sx.q(*(rbx_1 + 8))
    int32_t rax_7 = (rdi_1 + 1).d
    cond:1 = rax_7 s<= *(rbx_1 + 0xc)
    *(rbx_1 + 8) = rax_7
    goto label_1413ceab7

void var_38
int64_t* rax_9 = sub_1413daca0(&var_38, nullptr, 0xff)
*(*rax_9 + 0x10) = arg1.o
void* rcx_6 = *rax_9
int32_t r8_1 = rax_9[2].d
int64_t* rdx_2 = rax_9[1]
int64_t* rbx_2 = *(rcx_6 + 0x28)
int64_t* arg_18 = rbx_2
int32_t* rdi_2 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_2 += 1
    rbx_2 = arg_18

sub_1405e48c0(rcx_6, rdx_2, r8_1, 1)

if (rbx_2 == 0)
    return 

int32_t rax = *rdi_2
*rdi_2 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_18)
