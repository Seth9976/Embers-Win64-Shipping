// 函数: sub_1427d66f0
// 地址: 0x1427d66f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

int128_t var_48
int128_t* rax_1 = zmm1(&var_48, arg1[2])
void* rdx_2 = *arg1
bool cond:0 = *(rdx_2 + 0x10) == 0
var_48 = *rax_1
char const* const rbp

if (cond:0)
    rbp = "bad__repx__name"
else
    rbp = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx = arg1[1]
sub_1427e38e0(rdi, &var_48)
int64_t rax_3 = *rdi
char arg_8 = 0
(*rax_3)(rdi, &arg_8, 1)
(*(*rbx + 0x10))(rbx, rbp, rdi[4])
void* result = nullptr
rdi[3] = 0
void* rdx_6 = *arg1

if (*(rdx_6 + 0x10) != 0)
    if (*(*(rdx_6 + 8) + zx.q(*(rdx_6 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_10 = arg1[1]
        (*(*rcx_10 + 0x20))(rcx_10, rdx_6)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
