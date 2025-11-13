// 函数: sub_141abd2c0
// 地址: 0x141abd2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_18 = arg3
int64_t* rax_1 = sub_141a880d0(arg1, arg3)
int64_t* rdi_1 = rax_1
int64_t* arg_10

if (rax_1 == 0)
    char rax_3 = (*(*arg2 + 0x278))(arg2)
    void* const rdi_2 = 0x7a8
    
    if (rax_3 != 0)
        rdi_2 = 0x7f8
    
    void* rdi_3 = rdi_2 + arg1
    
    if (rax_3 != 0)
        int64_t rdx_1 = *arg2
        (*(rdx_1 + 0x318))(arg2, rdx_1)
    
    int64_t rbx_1 = sx.q(*(rdi_3 + 0x18))
    int32_t rax_4 = (rbx_1 + 1).d
    *(rdi_3 + 0x18) = rax_4
    
    if (rax_4 s> *(rdi_3 + 0x1c))
        sub_1405a4f90(rdi_3 + 0x10)
    
    int32_t* rax_7 = (rbx_1 << 4) + *(rdi_3 + 0x10)
    *rax_7 = 0xffffffff
    rax_7[1].b = 0
    *(rax_7 + 8) = 0
    int64_t r13_1 = sx.q(*(rdi_3 + 0x28))
    int32_t rax_8 = (r13_1 + 1).d
    *(rdi_3 + 0x28) = rax_8
    
    if (rax_8 s> *(rdi_3 + 0x2c))
        sub_1406105e0(rdi_3 + 0x20)
    
    *(*(rdi_3 + 0x20) + (r13_1 << 2)) = 0
    sub_141ad1b90(rdi_3)
    int32_t r12_2 = *(rdi_3 + 0x18) - 1
    int64_t* rax_10 = j_sub_140a82f30(0x58)
    rdi_1 = rax_10
    
    if (rax_10 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(rdi_1 + 0xc, 0, 0x4c)
        *rdi_1 = &data_143041448
        rdi_1[1].d = 0xffffffff
        sub_141e11f70(&rdi_1[2])
        *(rdi_1 + 0x4c) = 0x20100
        rdi_1[8] = 0
        rdi_1[2] = &data_143040c40
        rdi_1[9].d = 0
    
    rdi_1[1].d = r12_2
    *(rdi_1 + 0xc) = rax_3
    arg_10 = rdi_1
    sub_141000b00(arg1 + 0x8d8, &arg_18, &arg_10)
    *(rdi_1 + 0x4c) = 1
    sub_14083cdb0((sx.q(r12_2) << 4) + *(rdi_3 + 0x10), &rdi_1[2])

rdi_1[8] = arg2
rdi_1[9].d = 0
sub_140dd5b90(&arg_10, arg1)
(*rdi_1[2])(&rdi_1[2], &arg_10)
