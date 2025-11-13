// 函数: sub_1405c3c60
// 地址: 0x1405c3c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r15 = zx.d(arg5)
int64_t* arg_8

if ((arg1[0x5c].d & r15) != 0)
    arg_8 = nullptr
    sub_1405bab40(&arg1[0x8b], arg4, 0, &arg_8)
    return arg_8

int64_t* rax_1
float zmm6_1
rax_1, zmm6_1 = sub_1405be050(arg1)
int64_t r9_1 = arg1[0x8b]
arg_8 = rax_1
int64_t* var_48 = nullptr
char rax_2 = (*(r9_1 + 0x10))(&arg1[0x8b], arg4, &var_48, r9_1)
int64_t* rdi = var_48
void* rax_3
int64_t rcx_2
void* rdx_2

if (rdi != 0)
    rax_3 = sub_1425b6f00()
    rdx_2 = rdi[2]
    rcx_2 = sx.q(*(rax_3 + 0x38))

if (rdi == 0 || rcx_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rcx_2 << 3)) != rax_3 + 0x30)
    rdi = nullptr

int64_t* r13_1 = arg_8
char rax_5

if (rax_2 != 0 && rdi != 0)
    rax_5 = sub_1405ba3e0(*r13_1, rdi)

if (rax_2 == 0 || rdi == 0 || (rax_5 & 0x20) == 0)
    void* rcx_4
    
    if (arg1[0x54].d != 1)
        rcx_4 = arg1[0x62]
    
    int64_t* rax_6
    
    if (arg1[0x54].d == 1 || rcx_4 == 0)
        rax_6 = *(arg1 + 0x2a4)
    else
        sub_1405be000(rcx_4, &arg_8)
        rax_6 = arg_8
    
    uint32_t r9_2 = zx.d(*(arg1 + 0x2ac))
    arg_8 = rax_6
    int32_t rdx_5 = int.d(zmm6_1)
    arg_8.d = rdx_5 * rax_6.d
    arg_8:4.d *= rdx_5
    void* rax_9 = sub_1405b4ff0(*r13_1, arg1, arg_8, r9_2, r15)
    rdi = rax_9
    
    if (rax_9 != 0 && arg4 != 0)
        sub_1405bfed0(&arg1[0x8b], arg4, rax_9, r15)

void* rcx_9 = arg1[0xa0]
int32_t rax_10

if (rcx_9 != 0)
    rax_10 = sub_1405ba3e0(rcx_9, rdi)

if (rcx_9 == 0 || (arg1[0x5c].d & rax_10) == 0)
    if (sub_1405b37a0(arg2, &arg1[0x8b]) != 0 && rdi != 0)
        _mbstok_l(arg2, arg1, rdi)
        
        if (arg4 != 0)
            sub_1405bffc0(arg1, arg4, rdi, 0)
            sub_1405c6c80(arg1, rdi)
else
    arg_8 = nullptr
    sub_1405bab40(&arg1[0x8b], arg4, 0, &arg_8)
    rdi = arg_8
    void* rax_11
    int64_t rax_12
    void* rdx_10
    
    if (rdi != 0)
        rax_11 = sub_1425b6f00()
        rdx_10 = rdi[2]
        rax_12 = sx.q(*(rax_11 + 0x38))
    
    if (rdi == 0 || rax_12.d s> *(rdx_10 + 0x38)
            || *(*(rdx_10 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
        return nullptr

return rdi
