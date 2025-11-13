// 函数: sub_14265f840
// 地址: 0x14265f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || data_143f71424 != 0)
    return 

void* rax = sub_140d21950(arg1, sub_14254cd20())
void* rsi_1 = rax

if (rax == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0xa0)

if (rcx_1 == 0)
    return 

int64_t rdx_2 = *rcx_1
rax = (*(rdx_2 + 0x150))(rcx_1, rdx_2)

if (rax == 0)
    return 

void* rdi_1 = *(rax + 0x120)

if (rdi_1 == 0)
    return 

void* rax_2 = sub_14269bba0()
void* rdx_3 = *(rdi_1 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax << 3)) != rax_2 + 0x30)
    return 

void* var_18 = rdi_1 + 0x248
void* var_10_1 = rdi_1 + 0x350
sub_14266b610(&var_18, arg1, rsi_1, 0)
