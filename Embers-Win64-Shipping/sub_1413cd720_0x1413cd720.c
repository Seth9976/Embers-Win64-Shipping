// 函数: sub_1413cd720
// 地址: 0x1413cd720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48 = arg1
void* var_40 = arg2

if (sub_140a80f40() != 0)
    int64_t rsi = sx.q(*(arg1 + 0x1148))
    int32_t rax_1 = (rsi + 1).d
    *(arg1 + 0x1148) = rax_1
    
    if (rax_1 s> *(arg1 + 0x114c))
        sub_1405a4d70(arg1 + 0x1140)
    
    *(*(arg1 + 0x1140) + (rsi << 3)) = arg2
    return sub_141239530(arg1 + 0x1150, arg1, arg2) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        var_48.o = var_48.o
        return sub_1413c8990(&var_48)

void var_38
int64_t* rax_6 = sub_1413d98e0(&var_38, nullptr, 0xff)
*(*rax_6 + 0x10) = var_48.o
void* rcx_6 = *rax_6
int32_t r8_2 = rax_6[2].d
int64_t* rdx_4 = rax_6[1]
int64_t* rbx = *(rcx_6 + 0x28)
int64_t* arg_10 = rbx
int32_t* rdi_1 = &rbx[9]

if (rbx != 0)
    *rdi_1 += 1
    rbx = arg_10

int32_t result = sub_1405e48c0(rcx_6, rdx_4, r8_2, 1)

if (rbx != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
