// 函数: sub_141b018a0
// 地址: 0x141b018a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbx_1 = *(arg4 + 0x10)
void* r15_1 = arg1
void** const var_38 = &data_14305d898
int64_t rax_1 = *(arg1 + 0x38)
arg1.b = 0
int64_t var_30_1 = rax_1
int64_t rdi_1 = 0
char arg_11 = 0
uint64_t r14_2 = sx.q(*(arg4 + 0x18)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg4 + 0x18))])
    r14_2 = 0

int32_t var_48

if (r14_2 != 0)
    do
        void* rax_4 = *rbx_1
        
        if (*(rax_4 + 0x24) == 1)
            *(arg5 + 0x2d0) = *(rax_4 + 0x18)
            *(arg5 + 0x2d8) = *(rax_4 + 0x20)
            *(arg5 + 0x2dc) = 2
            int32_t var_40_1 = *(arg5 + 0x2d8)
            var_48.q = *(arg5 + 0x2d0)
            sub_1405c5900(arg5 + 0xf8, *(r15_1 + 0x48), &var_38, arg2, 2, &var_48)
            arg1.b = 1
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != r14_2)

char rdx_1 = *(arg5 + 0x2dd)
var_48 = data_1439e5888
int32_t var_44_1 = 0xffffffff
*(arg5 + 0x2d0) = var_48.q
*(arg5 + 0x2d8) = 0xffffffff
*(arg5 + 0x2dc) = rdx_1

if (arg1.b == 0)
    int32_t var_40_2 = *(arg5 + 0x2d8)
    var_48.q = *(arg5 + 0x2d0)
    sub_1405c5900(arg5 + 0xf8, *(r15_1 + 0x48), &var_38, arg2, rdx_1, &var_48)

sub_141aeda70(*(r15_1 + 0x38), arg2, arg3)
