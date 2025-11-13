// 函数: sub_142658b40
// 地址: 0x142658b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0xe0

if (arg1 == 0)
    rbx = nullptr

sub_141db75d0(arg2)
int64_t rax = *rbx
arg2[0xc] = 0
arg2[0xd] = 0xc2480000
*(arg2 + 0x38) = 0
*(arg2 + 0x40) = 0x42480000
void arg_10
int64_t* rax_1 = (*(rax + 0x20))(rbx, &arg_10)
int64_t rdx_1

if (*rax_1 == 0)
    rdx_1 = 0
else
    void* rax_2 = sub_14269ce80()
    
    if (rax_2 == 0)
        rdx_1 = 0
    else
        rdx_1 = *rax_1
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rdx_1 = 0

sub_141dd7500(arg2, rdx_1)
int32_t rax_6 = (*(*rbx + 0x28))(rbx)
int32_t arg_8 = 0
arg2[2] = rax_6
(*(*rbx + 0x10))(rbx, &arg2[0xc], &arg2[0xf], &arg_8)
(*(*rbx + 0x18))(rbx, &arg2[5])
arg2[7].b = arg_8.b
return arg2
