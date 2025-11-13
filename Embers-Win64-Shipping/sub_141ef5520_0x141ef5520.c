// 函数: sub_141ef5520
// 地址: 0x141ef5520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x3a) & 2) == 0 || sub_140d23dc0(arg1, 0x30).b != 0)
    return 

int32_t var_20_1 = 0
int64_t (* var_28)(int64_t* arg1) = sub_141ed4c9c
void*** rax_1 = sub_140a84c80(0, 0x30, 0)
void*** var_38 = rax_1
void*** rdi_1 = rax_1

if (rax_1 != 0)
    *rdi_1 = &data_143264790
    sub_140d3a3a0(&rdi_1[1], arg1)
    *(rdi_1 + 0x10) = var_28.o
    rdi_1[4].b = arg2
    rdi_1[5] = sub_140a387b0()
    *rdi_1 = &data_1432647e8

int64_t* rax_3 = sub_140958da0(&var_28, nullptr, 0xff)
int64_t* rbx_2 = *rax_3 + 0x10
*rbx_2 = 0
rbx_2[1].d = 0

if (&var_38 != rbx_2 && rdi_1 != 0)
    void** r8_1 = *rdi_1
    r8_1[8](rdi_1, rbx_2, r8_1)

rbx_2[2].d = 2
void* rcx_3 = *rax_3
int32_t r8_2 = rax_3[2].d
int64_t* rdx_2 = rax_3[1]
int64_t* rbx_3 = *(rcx_3 + 0x30)
int64_t* arg_18 = rbx_3
int32_t* rsi_2 = &rbx_3[9]

if (rbx_3 != 0)
    *rsi_2 += 1
    rdi_1 = var_38
    rbx_3 = arg_18

sub_140978a40(rcx_3, rdx_2, r8_2, 1)
uint64_t rax

if (rbx_3 != 0)
    rax = zx.q(*rsi_2)
    *rsi_2 -= 1
    
    if (rax.d == 1)
        sub_140a2f6e0(arg_18)
    
    rdi_1 = var_38

if (rdi_1 == 0)
    return 

(*rdi_1)[7](rdi_1, 0)
rax = sub_140a84c80(rdi_1, 0, 0)

if (rax != 0)
    sub_140a74f90(rax)
