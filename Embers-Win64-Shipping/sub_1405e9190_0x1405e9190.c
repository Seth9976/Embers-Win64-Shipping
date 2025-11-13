// 函数: sub_1405e9190
// 地址: 0x1405e9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int32_t arg_10 = 0
int64_t var_60 = 0
int32_t var_58 = 0
arg_10 = 1
int128_t zmm0 = *arg4
int64_t* rax = sub_140a84c80(0, 0x30, 0)
int64_t* rdi = rax
int64_t* var_60_1 = rax
int32_t rbp = 3
int32_t var_58_1 = 3
int64_t* arg_20 = rax
void*** rbx = rax

if (rax != 0)
    *rbx = &data_142d62b60
    rbx[1] = arg3
    *(rbx + 0x10) = zmm0
    rbx[4].d = arg5
    rbx[5] = sub_140a387b0()
    *rbx = &data_142d62bb8

*arg2 = 0
int32_t rax_3 = 3

if (rbx != 0)
    sub_140599630(arg1, 1)
    int64_t rbx_1 = *(*(*rdi + 0x30))(rdi, &arg_20)
    int64_t r14_1 = sx.q(arg1[1].d)
    int32_t rax_6 = (r14_1 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t rcx_3 = *arg1
    int64_t rax_8 = r14_1 * 2
    *(rcx_3 + (rax_8 << 3)) = rdi
    rdi = nullptr
    *(rcx_3 + (rax_8 << 3) + 8) = 3
    *arg2 = rbx_1
    rbp = 0
    rbx = nullptr
    rax_3 = 0

void*** rcx_4 = rbx

if (rbp == 0)
    rcx_4 = nullptr

if (rcx_4 != 0)
    (*rcx_4)[7](rcx_4, 0)
    
    if (rbx != 0)
        rdi = sub_140a84c80(rbx, 0, 0)
    
    rax_3 = 0

if (rax_3 != 0 && rdi != 0)
    (*(*rdi + 0x38))(rdi, 0)
    rdi = sub_140a84c80(rdi, 0, 0)

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
