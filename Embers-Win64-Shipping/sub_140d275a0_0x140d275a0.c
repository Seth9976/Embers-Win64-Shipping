// 函数: sub_140d275a0
// 地址: 0x140d275a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0x10)
void* rdi = arg3
char rax_1 = (*(*arg1 + 0x218))(arg1, r14, 0)
int32_t i = 0

if ((rax_1 & 1) != 0)
    (*(*arg1 + 0x220))(arg1, r14, *(arg2 + 0x28), *(arg2 + 0x78), 0)

if ((rax_1 & 2) != 0)
    return sub_140d276b0(arg1, arg2, rdi)

void* result = sub_140be0b10(r14)
int64_t* result_1 = result

if (result != 0 && *(result + 0x38) s> 0)
    do
        int64_t rcx_4 = result_1[8]
        
        if ((not.b((rcx_4 u>> 0x24).b) & 1) != 0)
            (*(*result_1 + 0xe8))(result_1, rdi)
            rcx_4 = result_1[8]
        
        if ((rcx_4 & 0x1000000200) != 0x1000000200)
            (*(*result_1 + 0xe0))(result_1, rdi)
        else
            memset(rdi, 0, sx.q(*(result_1 + 0x3c)))
        
        result = sx.q(*(result_1 + 0x3c))
        i += 1
        rdi += result
    while (i s< result_1[7].d)

return result
