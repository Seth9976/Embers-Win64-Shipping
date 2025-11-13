// 函数: sub_140bc20b0
// 地址: 0x140bc20b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e85f48
int64_t rax = arg1[0x1c]
int32_t var_10 = arg1[0x1e].d + 3
void* rax_3 = TlsGetValue(data_143e1a81c)
int64_t rsi = sx.q(*(rax_3 + 0x18))
int32_t rcx_1 = (rsi + 1).d
*(rax_3 + 0x18) = rcx_1

if (rcx_1 s> *(rax_3 + 0x1c))
    sub_1405a4f90(rax_3 + 0x10)

*(*(rax_3 + 0x10) + rsi * 0x10) = rax.o
sub_140bcb9b0(arg1)
int64_t rcx_6 = arg1[0x26]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405d5770(&arg1[0x21])
int64_t* rdi_1 = arg1[0x1f]

if (rdi_1 != 0)
    int32_t rax_5 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (rax_5 == 1 && rdi_1 != 0)
        sub_140a99090(rdi_1)
        j_sub_140a74f90(rdi_1)

int64_t rcx_10 = arg1[0x17]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x15]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x12]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140bbfef0(&arg1[8])
int64_t* rdi_2 = arg1[6]

if (rdi_2 != 0)
    sub_140745b20(rdi_2)
    j_sub_140a74f90(rdi_2)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
