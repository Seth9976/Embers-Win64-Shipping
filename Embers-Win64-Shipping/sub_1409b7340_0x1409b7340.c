// 函数: sub_1409b7340
// 地址: 0x1409b7340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t var_68 = 0
int64_t var_60 = 0
int64_t r13 = 0
int32_t rdi = 0
int32_t r12 = 0

if (rax s> 0)
    sub_1405a51b0(&var_68, rax)
    rax = arg2[1].d
    r12 = var_60:4.d
    rdi = var_60.d
    r13 = var_68

int64_t rcx_1 = sx.q(rax - 1)
int64_t arg_8 = rcx_1
int64_t var_58
int32_t var_50

if (rax - 1 s>= 0)
    int64_t rcx_9
    
    do
        int64_t r14_1 = sx.q(rdi)
        int64_t rbx_1 = sx.q(*(*arg2 + (rcx_1 << 2)))
        rdi = (r14_1 + 1).d
        var_60.d = rdi
        
        if (rdi s> r12)
            sub_1405c4e40(&var_68)
            r12 = var_60:4.d
            rdi = var_60.d
            r13 = var_68
        
        int32_t* rcx_5 = (r14_1 << 5) + r13
        var_50 = rbx_1.d
        *rcx_5 = data_143a1c6b4
        *(rcx_5 + 8) = 0
        *(rcx_5 + 0x10) = 0
        rcx_5[6] = data_143a1c6b8
        int64_t r8_1 = sx.q(rdi - 1) << 5
        *(r8_1 + r13) = *(arg1[5][7] + rbx_1 * 0x18)
        *(r8_1 + r13 + 0x18) = rbx_1.d
        void* rcx_7 = arg1[5]
        var_58 = r8_1 + 8 + r13
        int128_t var_48 = var_58.o
        sub_14099a420(rcx_7 + 0x1a8, &var_48)
        rcx_9 = arg_8
        rcx_1 = rcx_9 - 1
        arg_8 = rcx_1
    while (rcx_9 - 1 s>= 0)

int64_t rax_10 = j_sub_140a82f30(0x18)

if (rax_10 == 0)
    rax_10 = 0
else
    var_68 = 0
    *rax_10 = &data_142e3f6b8
    *(rax_10 + 8) = r13
    *(rax_10 + 0x10) = rdi
    *(rax_10 + 0x14) = r12
    int64_t var_60_1 = 0

arg_8 = rax_10
sub_1409afc10(arg1, &arg_8)
sub_1409aad70(&var_68)
int64_t* rbx_2 = arg1[0x77]
int64_t rdi_1 = 0
uint64_t r14_3 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rbx_2 u> &rbx_2[arg1[0x78]])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rcx_12 = *rbx_2
        (*(*rcx_12 + 0x2d0))(rcx_12, arg1, arg2)
        rdi_1 += 1
        rbx_2 = &rbx_2[1]
    while (rdi_1 != r14_3)

TEB* gsbase

if (data_143cee508 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee508)
    
    if (data_143cee508 == 0xffffffff)
        atexit(sub_142cb9020)
        _Init_thread_footer(&data_143cee508)

int32_t rax_16 = data_143cee504
data_143cee500 = 0

if (rax_16 s< 0 && rax_16 != 0)
    sub_1405dadb0(&data_143cee4f8, 0)

int32_t* r14_4 = *arg2
int64_t result = sx.q(arg2[1].d)
void* r13_1 = &r14_4[result]

if (r14_4 != r13_1)
    int64_t* r15_1 = nullptr
    
    if (arg3 != 0)
        r15_1 = &data_143cee4f8
    
    do
        int64_t rdi_2 = sx.q(*r14_4)
        int32_t rbx_3 = *(arg1[5][7] + rdi_2 * 0x18)
        sub_1409afd50(&arg1[0x99], &var_58)
        int32_t* rcx_17 = var_50.q
        int32_t rax_18 = var_58.d
        *rcx_17 = rbx_3
        rcx_17[1] = 0xffffffff
        sub_1409b8a30(&arg1[0x99], &arg_8, rbx_3, rcx_17, rax_18, nullptr)
        result = j_sub_141cd0930(arg1[5], rdi_2.d, r15_1)
        r14_4 = &r14_4[1]
    while (r14_4 != r13_1)

if (data_143cee500 s<= 0)
    return result

return sub_1409b5eb0(arg1, &data_143cee4f8)
