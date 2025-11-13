// 函数: sub_1409b0030
// 地址: 0x1409b0030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t rbx = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x11)
int64_t rsi = 0
int32_t rax = arg2[1].d
int32_t rbp = 0
int32_t var_3c

if (rax s> 0)
    sub_1405c5570(&var_48, rax)
    rax = arg2[1].d
    rbp = var_3c
    int32_t var_40
    rbx = var_40
    rsi = var_48

int64_t r14 = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t rdi_1 = sx.q(rbx)
        rbx = (rdi_1 + 1).d
        
        if (rbx s> rbp)
            sub_1405a4d70(&var_48)
            rbp = var_3c
            rsi = var_48
        
        int32_t* rcx_2 = rsi + (rdi_1 << 3)
        *rcx_2 = data_143a1c6c8
        rcx_2[1] = data_143a1c6c4
        int32_t* r8 = rsi + (sx.q(rbx - 1) << 3)
        *r8 = *(*arg2 + (r14 << 3))
        int64_t rcx_5 = sx.q(*(*arg2 + (r14 << 3)))
        temp1_1 = r14
        r14 -= 1
        r8[1] = *(*(*(arg1 + 0x28) + 0xe0) + rcx_5 * 0x28 + 0x20)
    while (temp1_1 - 1 s>= 0)
    rdi = 0

void*** rax_10 = j_sub_140a82f30(0x20)

if (rax_10 == 0)
    rax_10 = nullptr
else
    *rax_10 = &data_142e3f9f8
    rax_10[1] = rsi
    rsi = 0
    rax_10[2].d = rbx
    *(rax_10 + 0x14) = rbp
    char var_38
    rax_10[3].b = var_38

void*** arg_8 = rax_10
sub_1409afc10(arg1, &arg_8)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t* rbx_1 = *(arg1 + 0x3b8)
uint64_t rsi_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x3c0))])
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_9 = *rbx_1
        (*(*rcx_9 + 0x360))(rcx_9, arg1, arg2)
        rdi += 1
        rbx_1 = &rbx_1[1]
    while (rdi != rsi_2)

TEB* gsbase

if (data_143ceed68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceed68)
    
    if (data_143ceed68 == 0xffffffff)
        atexit(sub_142cb9350)
        _Init_thread_footer(&data_143ceed68)

int32_t rax_16 = data_143ceed64
data_143ceed60 = 0

if (rax_16 s< 0 && rax_16 != 0)
    sub_1405dadb0(&data_143ceed58, 0)

int32_t* i = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* r12_1 = &i[result * 2]; i != r12_1; i = &i[2])
    void* rbp_1 = *(arg1 + 0x28)
    int64_t rax_17 = sx.q(*i)
    int64_t rbx_2 = sx.q(i[1])
    arg_8.d = rax_17.d
    int64_t rcx_12 = *(rbp_1 + 0xe0)
    int64_t rdx_5 = rax_17 * 5
    int64_t rdi_2 = sx.q(*(rcx_12 + (rdx_5 << 3) + 0x20))
    sub_1408cf290((rdi_2 << 4) + *(rbp_1 + 0x118), &arg_8)
    *(rcx_12 + (rdx_5 << 3) + 0x20) = rbx_2.d
    int64_t* rbx_4 = (rbx_2 << 4) + *(rbp_1 + 0x118)
    int64_t rsi_4 = sx.q(rbx_4[1].d)
    int32_t rax_18 = (rsi_4 + 1).d
    rbx_4[1].d = rax_18
    
    if (rax_18 s> *(rbx_4 + 0xc))
        sub_1405a4cf0(rbx_4)
    
    result = zx.q(arg_8.d)
    *(*rbx_4 + (rsi_4 << 2)) = result.d
    
    if (arg3 != 0)
        result = *(arg1 + 0x28)
        
        if (*(*(result + 0x118) + rdi_2 * 0x10 + 8) == 0)
            int64_t rbx_5 = sx.q(data_143ceed60)
            int32_t rax_19 = (rbx_5 + 1).d
            bool cond:3_1 = rax_19 s<= data_143ceed64
            data_143ceed60 = rax_19
            
            if (not(cond:3_1))
                sub_1405a4cf0(&data_143ceed58)
            
            result = data_143ceed58
            *(result + (rbx_5 << 2)) = rdi_2.d

if (data_143ceed60 s<= 0)
    return result

return sub_1409b6250(arg1, &data_143ceed58)
