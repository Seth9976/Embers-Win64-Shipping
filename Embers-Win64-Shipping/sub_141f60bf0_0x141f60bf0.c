// 函数: sub_141f60bf0
// 地址: 0x141f60bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* rdi = nullptr
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
sub_141b105d0(arg2)
void* rax = sub_14259c690()

if (rax != 0)
    sub_140d3a3a0(&arg2[1], rax)
    int32_t rcx_2 = *(rax + 0x5c)
    int32_t rdx_4 = (*(rax + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)
    int32_t rax_3 = 1
    
    if (rdx_4 != 0)
        rax_3 = rdx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg2[2] = rax_4
    sub_141f2d8c0(rax_4, arg1)
    *rax_4 = &data_14327db58
    rax_4[0x15] = 0
    rax_4[0x16] = 0
    rax_4[0x18] = 0
    rax_4[0x19] = 0
    memset(&rax_4[0x1a], 0, 0x90)
    arg2[4].b = 1

void* rax_5 = sub_14259c690()
void* rax_6 = sub_140d3c6e0(&arg2[1])

if (rax_5 != 0)
    int64_t rcx_7 = sx.q(*(rax_5 + 0x38))
    
    if (rcx_7.d s<= *(rax_6 + 0x38) && *(*(rax_6 + 0x30) + (rcx_7 << 3)) == rax_5 + 0x30)
        rdi = arg2[2]

*(rdi + 0xa8) = *(arg1 + 0x1f0)
void* rax_8 = *(arg1 + 0x268)
int64_t* rbx_3 = *(rdi + 0xc0)
*(rdi + 0xc0) = rax_8

if (rax_8 != 0)
    *(rax_8 + 0x68) += 1

if (rbx_3 != 0)
    rbx_3[0xd].d -= 1
    
    if (rbx_3[0xd].d == 1)
        sub_141997f50(rbx_3)
        sub_141997870(&rbx_3[9])

void* rcx_10 = *(arg1 + 0x308)
int64_t* rbx_4 = *(rdi + 0xc8)
*(rdi + 0xc8) = rcx_10

if (rcx_10 != 0)
    sub_1422b8cc0(rcx_10)

if (rbx_4 != 0)
    sub_1422ce7f0(rbx_4)

sub_1419ba820(arg1 + 0x3c8, 0)
*(rdi + 0xd0) = *(arg1 + 0x270)
*(rdi + 0xe0) = *(arg1 + 0x280)
*(rdi + 0xf0) = *(arg1 + 0x290)
*(rdi + 0x100) = *(arg1 + 0x2a0)
*(rdi + 0x110) = *(arg1 + 0x2b0)
*(rdi + 0x120) = *(arg1 + 0x2c0)
*(rdi + 0x130) = *(arg1 + 0x2d0)
*(rdi + 0x140) = *(arg1 + 0x2e0)
*(rdi + 0x150) = *(arg1 + 0x2f0)
*(rdi + 0xb8) = *(arg1 + 0x300)
return arg2
