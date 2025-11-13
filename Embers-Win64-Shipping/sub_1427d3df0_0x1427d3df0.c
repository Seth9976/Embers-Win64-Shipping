// 函数: sub_1427d3df0
// 地址: 0x1427d3df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

zmm1(arg1[2])
void* r8 = *arg1
char const* const rbp

if (*(r8 + 0x10) == 0)
    rbp = "bad__repx__name"
else
    rbp = *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx = arg1[1]
sub_1427e3a30(rdi)
int64_t rax_2 = *rdi
char arg_8 = 0
(*rax_2)(rdi, &arg_8, 1)
(*(*rbx + 0x10))(rbx, rbp, rdi[4])
void* result = nullptr
rdi[3] = 0
void* rdx_7 = *arg1

if (*(rdx_7 + 0x10) != 0)
    if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_7)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
