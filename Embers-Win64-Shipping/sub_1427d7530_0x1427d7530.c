// 函数: sub_1427d7530
// 地址: 0x1427d7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[6]
int32_t arg_10
int32_t* r12 = &arg_10
arg_10 = 0x61

if (rax != 0)
    r12 = rax

sub_1427e5da0(arg1, *arg2)
sub_1427e5da0(arg1, arg2[2])
int32_t arg_8
void arg_20
arg2[5](arg1[2], &arg_8, &arg_20)
void* rdx_3 = *arg1
char const* const rbp = "bad__repx__name"
char const* const r15

if (*(rdx_3 + 0x10) == 0)
    r15 = "bad__repx__name"
else
    r15 = *(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx = arg1[1]
sub_1427e3ab0(rdi)
arg_8.b = 0
(**rdi)(rdi, &arg_8, 1)
(*(*rbx + 0x10))(rbx, r15, rdi[4])
rdi[3] = 0
*r12 += 1
void* rdx_7 = *arg1

if (*(rdx_7 + 0x10) != 0)
    if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_11 = arg1[1]
        (*(*rcx_11 + 0x20))(rcx_11, rdx_7)
    
    void* rax_6 = *arg1
    *(rax_6 + 0x10) -= 1

sub_1427e5da0(arg1, arg2[3])
arg2[5](arg1[2], &arg_10, &arg_8)
void* rdx_10 = *arg1

if (*(rdx_10 + 0x10) != 0)
    rbp = *(*(rdx_10 + 8) + zx.q(*(rdx_10 + 0x10) - 1) * 0x10)

int64_t* rdi_1 = arg1[3]
int64_t* rbx_1 = arg1[1]
sub_1427e3ab0(rdi_1)
arg_8.b = 0
(**rdi_1)(rdi_1, &arg_8, 1)
void* result = (*(*rbx_1 + 0x10))(rbx_1, rbp, rdi_1[4])
rdi_1[3] = 0
void* rdx_14 = *arg1

if (*(rdx_14 + 0x10) != 0)
    if (*(*(rdx_14 + 8) + zx.q(*(rdx_14 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_23 = arg1[1]
        (*(*rcx_23 + 0x20))(rcx_23, rdx_14)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_15 = *arg1

if (*(rdx_15 + 0x10) != 0)
    if (*(*(rdx_15 + 8) + zx.q(*(rdx_15 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_27 = arg1[1]
        (*(*rcx_27 + 0x20))(rcx_27, rdx_15)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
