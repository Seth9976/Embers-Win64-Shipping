// 函数: sub_141d16110
// 地址: 0x141d16110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rcx = arg1[1]
int32_t var_1c8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &var_1c8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    var_1c8 = *rdx
    *rcx += 4

int32_t rax_6 = var_1c8

if (rax_6 s> *(arg2 + 0xc))
    sub_14061cd70(arg2, rax_6)
    rax_6 = var_1c8

int32_t rcx_3 = arg2[1].d

if (rax_6 s> rcx_3)
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140610660(arg2)
        rax_6 = var_1c8
else if (rax_6 s< rcx_3 && rcx_3 != rax_6)
    arg2[1].d = rax_6
    sub_1405a5010(arg2)
    rax_6 = var_1c8

int32_t rbp = 0

if (rax_6 s> 0)
    do
        int64_t rbx_1 = *arg2
        void** var_1b8
        sub_140b4cb20(&var_1b8, arg1)
        void var_1c0
        sub_140cd4cd0(*SymBuffer::end(&var_1b8, &var_1c0), (sx.q(rbp) << 4) + rbx_1, arg3)
        sub_140b4cbb0(&var_1b8)
        rbp += 1
    while (rbp s< var_1c8)

__security_check_cookie(rax_1 ^ &var_1e8)
return arg1
