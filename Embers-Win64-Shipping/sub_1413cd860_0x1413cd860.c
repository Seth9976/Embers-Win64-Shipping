// 函数: sub_1413cd860
// 地址: 0x1413cd860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** var_60 = arg2

if (sub_140a80f40() != 0)
    int64_t rbp = sx.q(*(arg1 + 0x16f8))
    int32_t rax_1 = (rbp + 1).d
    *(arg1 + 0x16f8) = rax_1
    
    if (rax_1 s> *(arg1 + 0x16fc))
        sub_1405a4d70(arg1 + 0x16f0)
    
    *(*(arg1 + 0x16f0) + (rbp << 3)) = arg2
    
    if (arg3 != 0)
        *(arg1 + 0x16e8) = arg2
    
    return sub_14228f1d0(*arg2, arg1 + 0x1310) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_50 = arg1.o
        int64_t var_40 = arg3.q
        return sub_1413c8f10(&var_50)

void var_38
int64_t* rax_6 = sub_1413d9a30(&var_38, nullptr, 0xff)
void* rcx_5 = *rax_6
*(rcx_5 + 0x10) = arg1.o
*(rcx_5 + 0x20) = arg3.q
void* rcx_6 = *rax_6
int32_t r8_1 = rax_6[2].d
int64_t* rdx_4 = rax_6[1]
int64_t* rbx = *(rcx_6 + 0x30)
int64_t* arg_8 = rbx
int32_t* rdi_1 = &rbx[9]

if (rbx != 0)
    *rdi_1 += 1
    rbx = arg_8

int32_t result = sub_140778000(rcx_6, rdx_4, r8_1, 1)

if (rbx != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_8)

return result
