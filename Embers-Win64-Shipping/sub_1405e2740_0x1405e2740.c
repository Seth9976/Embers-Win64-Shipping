// 函数: sub_1405e2740
// 地址: 0x1405e2740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg1

if (arg1 != 0)
    *(arg1 + 0x44) += 1

int32_t result_1
sub_1405e21c0(&data_14395f3a0, &result_1, &arg_20)
int64_t result = sx.q(result_1)
int64_t rcx_2

if (result.d == 0xffffffff)
    rcx_2 = 0
else
    rcx_2 = (result << 5) + data_14395f3a0

int64_t rbx = rcx_2 + 8

if (rcx_2 == 0)
    rbx = 0

if (arg1 != 0)
    int32_t temp0_1 = *(arg1 + 0x44)
    *(arg1 + 0x44) -= 1
    
    if (temp0_1 == 1)
        if ((*(arg1 + 0x4c) & 1) != 0)
            void* rax = *(arg1 + 0x28)
            sub_1405e3820(zx.q(*(rax + 0x58)) * 0x50 + &data_143cd84b0, rax + 0x70)
            *(arg1 + 0x4c) &= 0xfffffffe
        
        *(arg1 + 0x48) = 1
        sub_141997870(arg1 + 0x38)

if (rbx != 0)
label_1405e284c:
    result.b = 0
else
    for (void** i = data_143f1da58; i != 0; i = *i)
        result = i[2]
        int64_t result_2 = 0
        
        if (*(result + 8) == 4)
            result_2 = result
        
        if (result_2 != 0 && sub_1405e4d80(result_2, zx.d(*(*(arg1 + 0x28) + 0x58)), arg2).b != 0
                && sub_1419cec70(*(arg1 + 0x28), result_2 + 0x28, 0) == 0)
            goto label_1405e284c
    
    result.b = 1

return result
