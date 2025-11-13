// 函数: sub_142269ec0
// 地址: 0x142269ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t result
    result.b = 0
    return result

int64_t* rcx = *(arg1 + 0x60)
int64_t* rbx

if (rcx == 0)
    rbx = nullptr
else
    int64_t* rax_1 = (*(*rcx + 0x30))(rcx)
    rbx = rax_1
    
    if (rax_1 != 0)
        int64_t r9_1 = *rax_1
        (*(r9_1 + 0x348))(rax_1, 0, 0, r9_1)

(*arg2)(*(arg2 + 8))

if (rbx == 0)
    return 0

int64_t rdx = *rbx
(*(rdx + 0x350))(rbx, rdx)
return 1
