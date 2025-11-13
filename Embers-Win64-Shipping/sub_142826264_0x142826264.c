// 函数: sub_142826264
// 地址: 0x142826264
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg3
int32_t* result_1 = result
int32_t* result_2 = result
int64_t r9
int64_t var_18 = r9

if (arg1 != arg2)
    char* rdi_1 = arg1 + 5
    
    do
        *result = *(rdi_1 - 5)
        int32_t rax_1
        rax_1.b = rdi_1[-1]
        result[1].b = rax_1.b
        rax_1.b = *rdi_1
        *(result + 5) = rax_1.b
        sub_14281f81c(&result[2], &rdi_1[3])
        result = &result[8]
        int32_t* result_3 = result
        rdi_1 = &rdi_1[0x20]
    while (&rdi_1[-5] != arg2)

sub_14281f774(result, result)
return result
