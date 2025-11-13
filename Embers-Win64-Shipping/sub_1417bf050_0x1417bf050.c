// 函数: sub_1417bf050
// 地址: 0x1417bf050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t* rcx = *arg1
bool cond:0 = rdi != 0
int32_t result
result.b = rcx != 0

if (result.b == cond:0)
    if (rcx == 0)
        result.b = 1
        return result
    
    int32_t rax_1 = (*(*rcx + 0x10))(arg3, arg4, cond:0)
    int64_t rdx = *rdi
    
    if (rax_1 == (*(rdx + 0x10))(rdi, rdx))
        *arg2
        jump(*(**arg1 + 0x28))

result.b = 0
return result
