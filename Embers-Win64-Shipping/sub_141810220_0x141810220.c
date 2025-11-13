// 函数: sub_141810220
// 地址: 0x141810220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1[0x25]

for (void* rsi_2 = (sx.q(arg1[0x26].d) << 6) + i; i != rsi_2; i += 0x40)
    void* rax_1 = *(i + 0x10)
    void* rcx = i + 0x20
    char arg_8 = 0
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*i)((*(*rcx + 8))(rcx), arg2, arg3, &arg_8)

EnterCriticalSection(&arg1[0x20])
int64_t rbp = sx.q(arg1[0x1f].d)
int32_t rax_4 = (rbp + 1).d
arg1[0x1f].d = rax_4

if (rax_4 s> *(arg1 + 0xfc))
    sub_1405c4f50(&arg1[0x1e])

int64_t* result = sub_14180b590(rbp * 0x30 + arg1[0x1e], arg2, arg3, 0, 0)

if (arg1[0x1c].b == 0)
    result = (*(*arg1 + 0x20))(arg1)

if (arg1 != -0x100)
    result = LeaveCriticalSection(&arg1[0x20])

int64_t rcx_10 = *arg2

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
