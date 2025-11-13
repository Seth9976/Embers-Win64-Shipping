// 函数: sub_14089ff40
// 地址: 0x14089ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 + 0x610) == 0)
    return sub_1405920e0(arg1 + 0x330) __tailcall

int64_t* arg_10

if (data_143f138f4 == 0)
    uint32_t rax_1
    
    if (data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        arg_10 = nullptr
        return sub_1405920e0(arg1 + 0x330)

void var_28
void** rax_3 = sub_14089d970(&var_28, nullptr, 0xff)
*(*rax_3 + 0x10) = arg1
int32_t r8 = rax_3[2].d
int64_t* rdx = rax_3[1]
void* rcx_3 = *rax_3
int64_t* rbx_1 = *(rcx_3 + 0x20)
arg_10 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_10

arg_8 = 2
int32_t result = sub_14089f070(rcx_3, rdx, r8, 1)

if (rbx_1 != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
