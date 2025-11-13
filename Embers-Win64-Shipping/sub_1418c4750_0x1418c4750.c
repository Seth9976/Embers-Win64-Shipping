// 函数: sub_1418c4750
// 地址: 0x1418c4750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x458)
void* r13 = arg1
int64_t r15 = sx.q(arg3)
arg1.b = *(arg2 + 0xdc) != 0
void* rbx = *(rax + 0x20)
int64_t* r12 = *(rbx + 0xc8)
int64_t* rbp = *(arg2 + 0x58) + r15 * 0x28
char result = sub_1418c9180(arg1.b)

if (result == 0)
    result = sub_1418c6000(rbx + 0xd0, r15.d, arg4 + 0x38, rbx + 0x108)
else if (*(rbp + 6) == 0)
    int64_t rcx = r15 * 3
    int64_t rax_2 = *r12
    int64_t r12_1 = data_143efb550
    char r14_1 = *(rax_2 + (rcx << 1))
    uint32_t r15_1 = zx.d(*(rax_2 + (rcx << 1) + 2))
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(r12_1 + (rcx_1 << 2)) s<= 1)
        result = sub_1418b8670(rbx, r14_1, r15_1, arg4)
    else
        result = sub_1418b8610(rbx, r14_1, r15_1, arg4)

if (rbp[2].d == 0)
    return result

void* r8_2 = arg2 + 0x38
int64_t var_30_1 = r12[4] + 0x10
void* var_38_1 = arg4

if (arg2 == 0)
    r8_2 = nullptr

return sub_1418b8010(r13, *(r13 + 0x458), r8_2, arg2 + 0x68, arg2 + 0x78, rbp)
