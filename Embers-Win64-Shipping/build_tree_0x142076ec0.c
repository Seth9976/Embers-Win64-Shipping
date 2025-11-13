// 函数: build_tree
// 地址: 0x142076ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
*arg1 = 0
arg1[1] = 0
int64_t rax_10

if (arg4 == 0)
    rax_10 = 0
else
    int64_t* rcx = arg2[4]
    int64_t* rdi_1 = arg2[6]
    int64_t rax_3 = (*(*rcx + 0x50))(rcx)
    int64_t rax_5 = (*(*rdi_1 + 0x50))(rdi_1)
    int64_t* rcx_2 = arg2[2]
    int64_t rax_7 = (*(*rcx_2 + 0x50))(rcx_2)
    int64_t* rcx_3 = *arg2
    rax_10 = (*(*rcx_3 + 0x50))(rcx_3) + rax_3 + rax_5 + rax_7

arg1[2] = rax_10
arg1[4].d = 0xffffffff
*(arg1 + 0x24) = arg3
arg1[3] = &data_1432af990
arg1[5] = 0
arg1[6] = 0
arg1[7].b = arg4
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 4
arg1[0xa] = 0
arg1[8] = &data_1432af890
arg1[0xb] = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 4
arg1[0xe] = 0
arg1[0xc] = &data_1432af8d0
arg1[0xf] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 4
arg1[0x12] = 0
arg1[0x10] = &data_1432af910
arg1[0x13] = 0
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 4
arg1[0x16] = 0
arg1[0x14] = &data_1432af950
__builtin_memset(&arg1[0x17], 0, 0x18)
sub_1420969f0(&arg1[3], arg2)
int64_t* rcx_5 = arg1[6]
int64_t var_68 = arg1[5]
int64_t* var_60 = rcx_5

if (rcx_5 != 0)
    rcx_5[1].d += 1
    rcx_5 = var_60

if (&var_68 != &arg1[0x18])
    arg5 = var_68.o
    int128_t var_58_1 = arg5
    var_68.o = *(arg1 + 0xc0)
    rcx_5 = var_60
    *(arg1 + 0xc0) = arg5

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**var_60)(var_60, arg5)
        int32_t rdi_2 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_2 == 1)
            int64_t r8 = *var_60
            (*(r8 + 8))(var_60, zx.q(rdi_2), r8)

sub_141997e80(&arg1[3], arg5)
__security_check_cookie(rax_1 ^ &var_88)
return arg1
