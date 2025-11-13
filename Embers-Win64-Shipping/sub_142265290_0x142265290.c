// 函数: sub_142265290
// 地址: 0x142265290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142264fa0(arg1, &arg1[0xa], &arg1[0x11])
int64_t r9_1
r9_1.b = 1
sub_142264fa0(arg1, &arg1[0xc], &arg1[0x13])

if (*(arg1 + 0x83) != 0 && *(arg1 + 0x86) == 0)
    int64_t rbx_1 = sx.q(arg1[0x16].d)
    int32_t rax_1 = (rbx_1 + 1).d
    arg1[0x16].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xb4))
        sub_1405a4d70(&arg1[0x15])
    
    *(arg1[0x15] + (rbx_1 << 3)) = 0
    int64_t* rcx_2 = arg1[0x1d]
    int64_t* rax_4 = (*(*rcx_2 + 0x40))(rcx_2, 0)
    void arg_8
    char rax_6 = (*(*rax_4 + 0x20))(rax_4, *sub_140b58170(&arg_8, "PhysXPC", 1), zx.q(arg1[9].b), 
        arg1, &arg1[2], &arg1[4], arg1[8].b & 1, arg1[0x15])
    
    if (rax_6 != 0 && *(arg1 + 0x84) != 0)
        sub_14222e7e0(&arg1[0x17], arg1)

void var_48
int64_t* rax_7 = sub_140958da0(&var_48, nullptr, 0xff)
int64_t* rbx_4 = *rax_7 + 0x10
*rbx_4 = 0
rbx_4[1].d = 0

if (arg2 != rbx_4 && arg2[1].d != 0)
    int64_t* rcx_8 = *arg2
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x40))(rcx_8, rbx_4)

rbx_4[2].d = 2
void* rcx_9 = *rax_7
int32_t r8_3 = rax_7[2].d
int64_t* rdx_7 = rax_7[1]
int64_t* rbx_5 = *(rcx_9 + 0x30)
int64_t* arg_10 = rbx_5
int32_t* rdi_4 = &rbx_5[9]

if (rbx_5 != 0)
    *rdi_4 += 1
    rbx_5 = arg_10

sub_140978a40(rcx_9, rdx_7, r8_3, 1)

if (rbx_5 != 0)
    int32_t rax_9 = *rdi_4
    *rdi_4 -= 1
    
    if (rax_9 == 1)
        sub_140a2f6e0(arg_10)

return sub_140745b20(arg2) __tailcall
