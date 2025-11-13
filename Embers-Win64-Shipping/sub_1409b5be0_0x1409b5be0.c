// 函数: sub_1409b5be0
// 地址: 0x1409b5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t rdi = 0
int64_t var_68 = 0
int64_t var_60 = 0
int64_t rcx = sx.q(rax - 1)
int64_t arg_8 = rcx
int64_t r13 = 0
int32_t rsi = 0
int32_t r12 = 0

if (rax - 1 s>= 0)
    int64_t rcx_9
    
    do
        int64_t r14_1 = sx.q(rsi)
        int64_t rbx_1 = sx.q(*(*arg2 + (rcx << 2)))
        rsi = (r14_1 + 1).d
        var_60.d = rsi
        
        if (rsi s> r12)
            sub_1405c4e40(&var_68)
            r12 = var_60:4.d
            rsi = var_60.d
            r13 = var_68
        
        int32_t* rcx_4 = (r14_1 << 5) + r13
        int32_t var_50_1 = rbx_1.d
        *rcx_4 = data_143a1c6b4
        rcx_4[1] = data_143a1c6b4
        *(rcx_4 + 8) = 0
        *(rcx_4 + 0x10) = 0
        rcx_4[6] = data_143a1c6bc
        int64_t r8 = rbx_1 * 0x18
        int32_t* r9_3 = (sx.q(rsi - 1) << 5) + r13
        r9_3[6] = rbx_1.d
        *r9_3 = *(r8 + arg1[5][0xe])
        r9_3[1] = *(r8 + arg1[5][0xe] + 4)
        int128_t var_48 = (&r9_3[2]).o
        sub_14099a640(&arg1[5][0x40], &var_48)
        rcx_9 = arg_8
        rcx = rcx_9 - 1
        arg_8 = rcx
    while (rcx_9 - 1 s>= 0)

int64_t rax_12 = j_sub_140a82f30(0x18)

if (rax_12 == 0)
    rax_12 = 0
else
    var_68 = 0
    *rax_12 = &data_142e3f6f8
    *(rax_12 + 8) = r13
    *(rax_12 + 0x10) = rsi
    *(rax_12 + 0x14) = r12
    int64_t var_60_1 = 0

arg_8 = rax_12
sub_1409afc10(arg1, &arg_8)
sub_1409aad70(&var_68)
int64_t rsi_1 = 0
int64_t* rbx_2 = arg1[0x77]
uint64_t r14_3 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rbx_2 u> &rbx_2[arg1[0x78]])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rcx_12 = *rbx_2
        (*(*rcx_12 + 0x310))(rcx_12, arg1, arg2)
        rsi_1 += 1
        rbx_2 = &rbx_2[1]
    while (rsi_1 != r14_3)

TEB* gsbase

if (data_143cee520 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee520)
    
    if (data_143cee520 == 0xffffffff)
        atexit(sub_142cb9040)
        _Init_thread_footer(&data_143cee520)

int32_t rax_18 = data_143cee51c
data_143cee518 = 0

if (rax_18 s< 0 && rax_18 != 0)
    sub_1405dadb0(&data_143cee510, 0)

int32_t* rbx_3 = *arg2
int64_t* result = &rbx_3[arg2[1]]
uint64_t rsi_3 = sx.q(arg2[1].d) << 2 u>> 2

if (rbx_3 u> result)
    rsi_3 = 0

if (rsi_3 != 0)
    int64_t* r14_4 = nullptr
    
    if (arg3 != 0)
        r14_4 = &data_143cee510
    
    do
        result = j_sub_141ccfe20(arg1[5], *rbx_3, r14_4)
        rdi += 1
        rbx_3 = &rbx_3[1]
    while (rdi != rsi_3)

if (data_143cee518 s<= 0)
    return result

return sub_1409b5eb0(arg1, &data_143cee510)
