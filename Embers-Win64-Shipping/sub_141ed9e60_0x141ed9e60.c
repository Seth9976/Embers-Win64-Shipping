// 函数: sub_141ed9e60
// 地址: 0x141ed9e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
uint128_t __saved_zmm6 = arg5
int32_t arg_18 = 0
char arg_8 = 0
(*(rax + 0x60))(arg2, &arg_18, &arg_8)
void* rax_1 = sub_140d3c6e0(&arg2[0x35])
int64_t rbx = arg2[0x36]
void* const rcx_3 = 0x16c

if (sub_141ea5e60(rax_1) != 0)
    rcx_3 = 0x190

int32_t rdi = *(rcx_3 + arg2 + 8)
arg5 = zx.o(*(rcx_3 + arg2))
int32_t arg_10 = rdi
uint64_t var_88

if (arg3 != 0)
    int64_t rdi_1 = *arg1
    int32_t var_80_1 = arg3[0x3e].d
    int64_t rax_4 = *arg3
    var_88 = arg3[0x3d]
    char rax_5 = (*(rax_4 + 0x50))(arg3, 0x190)
    arg4.o = *(arg3 + 0x1c)
    (*(rdi_1 + 0xa30))(arg1, arg4, &var_88, zx.q(rax_5))
    rdi = arg_10

void* rax_7 = arg1[0x97]

if (rax_7 == 0)
    rax_7 = (*(arg1[0x28] + 0x28))(&arg1[0x28], arg4)
    arg1[0x97] = rax_7

int64_t* r12 = *(rax_7 + 0x38)
uint64_t var_78
uint64_t var_68
uint64_t zmm0

if (r12 == 0)
    zmm0 = arg2[0x3d]
    int32_t var_70_2 = arg2[0x3e].d
    int64_t rax_24 = *arg2
    int32_t var_60_2 = rdi
    int64_t rdi_4 = *arg1
    var_68 = arg5.q
    var_78 = zmm0
    char rax_25 = (*(rax_24 + 0x50))(arg2, arg4)
    arg4.o = *(arg2 + 0x1c)
    (*(rdi_4 + 0x9e8))(arg1, arg4, &var_78, &var_68, rax_25, arg_8, arg_18, rax_1, rbx, 
        arg2[0x2d].b)
else
    int32_t arg_20 = 0
    arg_10.b = 0
    (*(*r12 + 0x60))(r12, &arg_20, &arg_10)
    bool rax_9 = std::operator!=<char,struct std::char_traits<char> >(&r12[0x41])
    char rax_10
    
    if (rax_9 != 0)
        rax_10 = j_sub_140d3e110(&arg2[0x41])
    
    char var_d8
    char var_d0
    int32_t var_c8
    int64_t var_b8
    
    if (rax_9 == 0 || rax_10 == 0)
        int32_t rax_17 = arg2[0x3e].d
        int64_t rsi_2 = *arg1
        int32_t rax_18 = r12[0x3e].d
        int64_t rax_19 = *arg2
        var_78 = arg2[0x3d]
        zmm0 = r12[0x3d]
        var_68 = arg5.q
        var_88 = zmm0
        char rax_20 = (*(rax_19 + 0x50))(arg2)
        int64_t rdx_5 = *r12
        char rax_21 = (*(rdx_5 + 0x50))(r12, rdx_5)
        arg4.o = *(r12 + 0x1c)
        var_b8.b = rax_20
        var_c8.q = &var_78
        var_d0.d = (*(arg2 + 0x1c)).d
        var_d8.d = arg_20
        (*(rsi_2 + 0xa00))(arg1, arg4, &var_88, zx.q(rax_21), var_d8, var_d0, var_c8, &var_68, 
            var_b8, arg_8, arg_18, rax_1, rbx, arg2[0x2d].b, var_88, rax_18, var_78, rax_17, 
            var_68, rdi, __saved_zmm6)
    else
        int32_t rax_11 = arg2[0x3e].d
        int64_t rsi_1 = *arg1
        int32_t rax_12 = r12[0x3e].d
        int64_t rax_13 = *arg2
        var_78 = arg2[0x3d]
        zmm0 = r12[0x3d]
        var_88 = arg5.q
        var_68 = zmm0
        char rax_14 = (*(rax_13 + 0x50))(arg2)
        int64_t rdx_4 = *r12
        char rax_15 = (*(rdx_4 + 0x50))(r12, rdx_4)
        arg4.o = *(r12 + 0x1c)
        var_b8.b = rax_14
        var_c8.q = &var_78
        var_d0.d = (*(arg2 + 0x1c)).d
        var_d8.d = arg_20
        (*(rsi_1 + 0xa18))(arg1, arg4, &var_68, zx.q(rax_15), var_d8, var_d0, var_c8, &var_88, 
            var_b8, arg_8, arg_18, rax_1, rbx, arg2[0x2d].b, var_88, rdi, var_78, rax_11, var_68, 
            rax_12, __saved_zmm6)
return sub_141f1eb40(arg1)
