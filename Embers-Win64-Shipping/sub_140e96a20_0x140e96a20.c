// 函数: sub_140e96a20
// 地址: 0x140e96a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142edba50
int64_t rdi = arg3
arg3.b = sub_140b5b8a0(arg8.d, 0) == 0
arg3.b |= arg8:4.d != 0

if (arg3.b != 0)
    sub_140b5b8a0(arg8.d, 0)
    rdi = arg8

sub_140eb5a80(&arg1[1], arg2, rdi, arg4)
__builtin_memset(&arg1[3], 0, 0x20)
arg1[7] = arg7
arg1[8] = arg8
arg1[9].b = 1
int64_t rbx_1 = sx.q(arg1[4].d)
int32_t rax_2 = (rbx_1 + 1).d
arg1[4].d = rax_2

if (rax_2 s> *(arg1 + 0x24))
    sub_1405a4f90(&arg1[3])

int64_t* rdx_4 = &arg1[3][rbx_1 * 2]
*rdx_4 = *arg5
void* rax_4 = arg5[1]
rdx_4[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t rbx_2 = sx.q(arg1[6].d)
int32_t rax_5 = (rbx_2 + 1).d
arg1[6].d = rax_5

if (rax_5 s> *(arg1 + 0x34))
    sub_1405a4f90(&arg1[5])

int64_t* rcx_8 = &arg1[5][rbx_2 * 2]
*rcx_8 = *arg6
void* rax_7 = arg6[1]
rcx_8[1] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int64_t* rbx_4 = arg6[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

return arg1
