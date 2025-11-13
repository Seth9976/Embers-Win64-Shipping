// 函数: sub_140a64570
// 地址: 0x140a64570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_1b0
void** var_1a8
int64_t* rbx = *SymBuffer::end(sub_140b4cb20(&var_1a8, arg1), &var_1b0)
int512_t zmm1 = sub_140a1d9d0(*(*rbx + 8), arg2, arg3)
int512_t zmm1_2 = sub_140a64f00(rbx, &arg2[4], sub_140a1d9d0(*(*rbx + 8), &arg2[2], zmm1))
int32_t var_1b8 = arg2[0xf].d
int64_t* r9 = *(*rbx + 8)
int64_t* rcx_7 = r9[1]
int32_t* rdx_5 = *rcx_7

if (&rdx_5[1] u> rcx_7[1])
    int32_t* rdx_6 = &var_1b8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_6, zmm1_2)
    else
        (*(*r9 + 0x150))(r9, rdx_6, 4)
else
    var_1b8 = *rdx_5
    int64_t* rax_8 = r9[1]
    *rax_8 += 4

if ((*(*(*rbx + 8) + 0x28) & 1) != 0)
    zmm1_2 = sub_140a8cd80(&arg2[0xe], var_1b8, 1)

int32_t rdi = 0

if (var_1b8 s> 0)
    do
        zmm1_2 = sub_140a64df0(rbx, sx.q(rdi) * 0xc8 + arg2[0xe], zmm1_2)
        rdi += 1
    while (rdi s< var_1b8)

sub_140b4cbb0(&var_1a8)
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
