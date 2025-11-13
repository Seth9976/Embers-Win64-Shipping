// 函数: sub_1427b76e0
// 地址: 0x1427b76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = *((*(*arg1 + 0x280))() + 0x20)
void* rax_2
int64_t rax_3
void* rdx_1

if (rdi != 0)
    rax_2 = sub_1427c10f0()
    rdx_1 = *(rdi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rdi == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rdi = nullptr

int64_t* rdi_1 = *(rdi + 0x68)
void* rax_5 = sub_140cde0b0()
sub_140d19010(rax_5, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_7 = sub_140d2dfc0(sub_1427bbbf0(), rax_5, 0, 0, 0, 0, 0, 0, 0)
int64_t r9 = *rdi_1
(*(r9 + 0x270))(rdi_1, &data_143f88a70, rax_7, r9)
int64_t rax_8 = *arg1
int64_t var_18 = 0
int64_t var_10 = 0
void* const rbx_1 = *((*(rax_8 + 0x280))(arg1) + 0x20)
void* rax_10
int64_t rax_11
void* rdx_3

if (rbx_1 != 0)
    rax_10 = sub_1427c10f0()
    rdx_3 = *(rbx_1 + 0x10)
    rax_11 = sx.q(*(rax_10 + 0x38))

if (rbx_1 == 0 || rax_11.d s> *(rdx_3 + 0x38)
        || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
    rbx_1 = nullptr

int64_t* rcx_6 = *(rbx_1 + 0x68)
int64_t result = (*(*rcx_6 + 0x280))(rcx_6, &data_143f88a70, &var_18, arg1)
int64_t rcx_7 = var_18
arg1[0x36] = result

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
