// 函数: sub_1414051f0
// 地址: 0x1414051f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a80f40() != 0)
    int64_t rsi = sx.q(*(arg1 + 0xdc0))
    
    if (rsi s> 0)
        int64_t rbx_1 = 0
        
        do
            sub_1413a4610(*(*(arg1 + 0xdb8) + (rbx_1 << 3)))
            rbx_1 += 1
        while (rbx_1 s< rsi)
    
    int64_t var_48 = *(arg1 + 0xdb8)
    int32_t var_40 = *(arg1 + 0xdc0)
    return sub_14138cc20(&data_143f02b98, arg1, &var_48, 1)

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        uint64_t arg_8 = arg1
        return sub_1413c7d70(&arg_8, &data_143f02b98)

void var_38
void** rax_6 = sub_1413dc2f0(&var_38, nullptr, 0xff)
*(*rax_6 + 0x10) = arg1
void* rcx_5 = *rax_6
int32_t r8_1 = rax_6[2].d
int64_t* rdx_1 = rax_6[1]
int64_t* rbx_2 = *(rcx_5 + 0x20)
int64_t* arg_10 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_10

int32_t result = sub_1405a5630(rcx_5, rdx_1, r8_1, 1)

if (rbx_2 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
