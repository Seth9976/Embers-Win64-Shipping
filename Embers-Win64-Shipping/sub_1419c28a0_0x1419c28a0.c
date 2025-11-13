// 函数: sub_1419c28a0
// 地址: 0x1419c28a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
sub_140b58260(&arg1[1], arg2, 1)
sub_140b4c620(&arg1[2], &arg1[1])
sub_140b4c820(&arg1[3], *(arg3 + 0x38))
int32_t rdi = 0
arg1[4] = 0
arg1[5] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = arg1
*(arg1 + 0x9c) = arg7
memset(&arg1[6], 0, 0x50)
int64_t* arg_38
int64_t* rbp = arg_38

if (rbp != 0)
    int64_t rsi_1 = sx.q(arg1[5].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg1[5].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    *(arg1[4] + (rsi_1 << 3)) = rbp
    arg1[9] = rbp

if (arg6 != 0)
    int64_t rbp_1 = sx.q(arg1[5].d)
    int32_t rax_2 = (rbp_1 + 1).d
    arg1[5].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    *(arg1[4] + (rbp_1 << 3)) = arg6
    arg1[0xa] = arg6

if (arg5 != 0)
    int64_t rbp_2 = sx.q(arg1[5].d)
    int32_t rax_3 = (rbp_2 + 1).d
    arg1[5].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    *(arg1[4] + (rbp_2 << 3)) = arg5
    arg1[8] = arg5
    int64_t rsi_4 = sx.q(arg1[5].d)
    int32_t rax_4 = (rsi_4 + 1).d
    arg1[5].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    *(arg1[4] + (rsi_4 << 3)) = arg4
    arg1[7] = arg4

int64_t rsi_5 = sx.q(arg1[5].d)
int32_t rax_5 = (rsi_5 + 1).d
arg1[5].d = rax_5

if (rax_5 s> *(arg1 + 0x2c))
    sub_1405a4d70(&arg1[4])

int64_t rcx_13 = arg1[4]
int32_t rax_7 = data_143f213a4 + 1
data_143f213a4 = rax_7
*(rcx_13 + (rsi_5 << 3)) = arg3
arg1[6] = arg3
arg1[0x13].d = rax_7
void* rax_8 = data_143f1da60

if (rax_8 != 0)
    *(rax_8 + 8) = &arg1[0x10]
    rax_8 = data_143f1da60

uint64_t rcx_14 = zx.q(data_14401b1a0)
arg1[0x10] = rax_8
arg1[0x11] = &data_143f1da60
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
data_143f1da60 = &arg1[0x10]
arg_38 = arg1

if (data_143f213a8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_14 << 3))))
    _Init_thread_header(&data_143f213a8)
    
    if (data_143f213a8 == 0xffffffff)
        __builtin_memset(&data_1439c94f0, 0, 0x2c)
        data_1439c951c = 0x80
        data_1439c9520 = 0xffffffff
        data_1439c9524 = 0
        data_1439c9530 = 0
        data_1439c9538 = 0
        atexit(sub_142cf3070)
        _Init_thread_footer(&data_143f213a8)

sub_1419be530(&data_1439c94f0, &arg1[2], &arg_38)
void** rax_10 = sub_1419cf370(*(arg3 + 8))
int32_t i_2 = rax_10[1].d
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_18 = i & 0x80000001
        
        if (rcx_18 s< 0)
            rcx_18 = ((rcx_18 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_14 = i_1 + rdi
        
        if (*(*(*rax_10 + (sx.q(rax_14) << 3)) + 0x10) u< arg1[2])
            rdi = rax_14 + rcx_18
    while (i s> 0)

rax_10[1].d = i_2 + 1

if (i_2 + 1 s> *(rax_10 + 0xc))
    sub_1405a4d70(rax_10)

int64_t** rbx = sx.q(rdi) << 3
void* rdx_12 = *rax_10 + rbx
memmove(rdx_12 + 8, rdx_12, (i_2 - rdi) << 3)
*(rbx + *rax_10) = arg1
return arg1
