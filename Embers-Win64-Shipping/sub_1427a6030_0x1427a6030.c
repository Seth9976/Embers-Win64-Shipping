// 函数: sub_1427a6030
// 地址: 0x1427a6030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = arg1[6]
int64_t rsi = 0
int64_t rax = sx.q(arg1[7].d)
int64_t* var_28 = nullptr
int64_t* r14 = nullptr
int32_t var_1c = 0
int32_t result_1 = 0
int32_t r9 = 0

for (; i != &i[rax * 6]; i = &i[6])
    if (i[5] == arg2)
        int64_t result_2 = sx.q(result_1)
        result_1 = (result_2 + 1).d
        
        if (result_1 s> r9)
            sub_1405a4d70(&var_28)
            r9 = var_1c
            r14 = var_28
        
        r14[result_2] = *i

int64_t result = sx.q(result_1)
int64_t* rbx = r14
void* rcx_1 = &r14[result]
uint64_t rdi_4 = (rcx_1 - r14 + 7) u>> 3

if (r14 u> rcx_1)
    rdi_4 = 0

if (rdi_4 != 0)
    do
        result = (*(*arg1 + 0x288))(arg1, *rbx)
        rsi += 1
        rbx = &rbx[1]
    while (rsi != rdi_4)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
