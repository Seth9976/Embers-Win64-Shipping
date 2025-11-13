// 函数: sub_140d0e1d0
// 地址: 0x140d0e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1 = zx.q(*(arg1 + 0x79)) + arg3
void* rax_1 = *arg2
bool arg_8 = (*(arg1 + 0x7b) & *rbx_1) != 0
uint64_t rcx = *(rax_1 + 8)
int64_t* rdx = *(rcx + 8)
char* r8 = *rdx

if (&r8[1] u> rdx[1])
    (*(*rcx + 0x150))(arg4, &arg_8, 1)
else
    arg_8 = *r8
    int64_t* rax_4 = *(rcx + 8)
    *rax_4 += 1

if (arg_8 == 0)
    rcx.b = 0
else
    rcx = zx.q(*(arg1 + 0x7a))

char result = (not.b(*(arg1 + 0x7b)) & *rbx_1) | rcx.b
*rbx_1 = result
return result
