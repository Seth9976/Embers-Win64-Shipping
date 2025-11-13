// 函数: sub_141fa46a0
// 地址: 0x141fa46a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142259390(arg1)
*arg1 = &data_14328df60
int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

arg1[0x4b].d = *(rax_1 + 0x3c)
int64_t* rax_3 = sub_142565030()
void* rax_4 = rax_3[0x23]

if (rax_4 == 0)
    int64_t rdx_2 = *rax_3
    (*(rdx_2 + 0x390))(rax_3, rdx_2)
    rax_4 = rax_3[0x23]

int64_t* rcx_2 = arg1[0x47]
arg1[0x4c].d = *(rax_4 + 0x40)
(*(*rcx_2 + 0x618))(rcx_2, 0)
return arg1
