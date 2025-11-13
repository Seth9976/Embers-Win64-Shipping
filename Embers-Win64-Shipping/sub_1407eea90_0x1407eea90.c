// 函数: sub_1407eea90
// 地址: 0x1407eea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a80f40() != 0)
    return sub_1407e5380() __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        return sub_1407e5380() __tailcall

void var_28
int64_t* rax_4 = sub_1407eb790(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_4
int32_t r8_2 = rax_4[2].d
int64_t* rdx_4 = rax_4[1]
int64_t* rbx = *(rcx_3 + 0x18)
int64_t* arg_18 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_18

int32_t result = sub_1405a5890(rcx_3, rdx_4, r8_2, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_18)

return result
