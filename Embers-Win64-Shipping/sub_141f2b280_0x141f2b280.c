// 函数: sub_141f2b280
// 地址: 0x141f2b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_50 = arg2.d

if (sub_140a80f40() != 0)
    return sub_142103d90(arg1, arg2.d) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_1
    
    if (data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        int32_t var_44 = arg1:4.d.d
        return sub_142103d90(arg1.d.q, arg2.d) __tailcall

void var_38
int64_t* rax_2 = sub_141f0f100(&var_38, nullptr, 0xff)
*(*rax_2 + 0x10) = arg1.o
void* rcx_4 = *rax_2
int32_t r8 = rax_2[2].d
int64_t* rdx = rax_2[1]
int64_t* rbx_1 = *(rcx_4 + 0x28)
int64_t* arg_8 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_8

int512_t result = sub_1405e48c0(rcx_4, rdx, r8, 1)

if (rbx_1 != 0)
    int32_t rax_3 = *rdi
    *rdi -= 1
    
    if (rax_3 == 1)
        return sub_140a2f6e0(arg_8)

return result
