// 函数: sub_141b02b20
// 地址: 0x141b02b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141a655a0(arg2)

if (result == 0)
    return result

int64_t rbx_1 = data_143f2c840
void** const var_50 = &data_143050f48

if (rbx_1 == 0)
    rbx_1 = sub_141a54240(&data_143f2c840, 0)

int64_t r15_1 = 0
int64_t* rsi_1 = *(arg4 + 0x10)
char rcx_1 = 0
int64_t r14_1 = 0
char var_57_1 = 0
uint64_t r12_2 = sx.q(*(arg4 + 0x18)) << 3 u>> 3

if (rsi_1 u> &rsi_1[sx.q(*(arg4 + 0x18))])
    r12_2 = 0

int32_t var_48

if (r12_2 != 0)
    do
        void* rax_3 = *rsi_1
        
        if (*(rax_3 + 0x3c) == 1)
            *(arg5 + 0x2d0) = *(rax_3 + 0x30)
            *(arg5 + 0x2d8) = *(rax_3 + 0x38)
            *(arg5 + 0x2dc) = 2
            int32_t var_40_1 = *(arg5 + 0x2d8)
            var_48.q = *(arg5 + 0x2d0)
            sub_1405c5900(arg5 + 0xf8, rbx_1, &var_50, result, 2, &var_48)
            rcx_1 = 1
        
        rsi_1 = &rsi_1[1]
        r14_1 += 1
    while (r14_1 != r12_2)

char rdx_1 = *(arg5 + 0x2dd)
var_48 = data_1439e5888
int32_t var_44_1 = 0xffffffff
*(arg5 + 0x2d0) = var_48.q
*(arg5 + 0x2d8) = 0xffffffff
*(arg5 + 0x2dc) = rdx_1

if (rcx_1 == 0)
    int32_t var_40_2 = *(arg5 + 0x2d8)
    var_48.q = *(arg5 + 0x2d0)
    sub_1405c5900(arg5 + 0xf8, rbx_1, &var_50, result, rdx_1, &var_48)

int64_t rbx_2 = data_143f2c848
var_50 = &data_143050f60

if (rbx_2 == 0)
    rbx_2 = sub_141a54240(&data_143f2c848, 0)

rcx_1 = 0
char var_57_2 = 0
int64_t* rsi_2 = *(arg4 + 0x10)
uint64_t r14_3 = sx.q(*(arg4 + 0x18)) << 3 u>> 3

if (rsi_2 u> &rsi_2[sx.q(*(arg4 + 0x18))])
    r14_3 = 0

if (r14_3 != 0)
    do
        void* rax_12 = *rsi_2
        
        if (*(rax_12 + 0x3c) == 1)
            *(arg5 + 0x2d0) = *(rax_12 + 0x30)
            *(arg5 + 0x2d8) = *(rax_12 + 0x38)
            *(arg5 + 0x2dc) = 2
            int32_t var_40_3 = *(arg5 + 0x2d8)
            var_48.q = *(arg5 + 0x2d0)
            sub_1405c5900(arg5 + 0xf8, rbx_2, &var_50, result, 2, &var_48)
            rcx_1 = 1
        
        rsi_2 = &rsi_2[1]
        r15_1 += 1
    while (r15_1 != r14_3)

char rdx_4 = *(arg5 + 0x2dd)
var_48 = data_1439e5888
int32_t var_44_2 = 0xffffffff
*(arg5 + 0x2d0) = var_48.q
*(arg5 + 0x2d8) = 0xffffffff
*(arg5 + 0x2dc) = rdx_4

if (rcx_1 == 0)
    int32_t var_40_4 = *(arg5 + 0x2d8)
    var_48.q = *(arg5 + 0x2d0)
    sub_1405c5900(arg5 + 0xf8, rbx_2, &var_50, result, rdx_4, &var_48)

(*(*result + 0x4e0))(result, 2)
return sub_141b04e20(arg3, result)
