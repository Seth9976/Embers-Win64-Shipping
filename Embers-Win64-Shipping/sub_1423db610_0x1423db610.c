// 函数: sub_1423db610
// 地址: 0x1423db610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx

if (data_143f5b2a8 s<= 0)
    rbx = zx.q(arg3)
else
    rbx = 0

int32_t rbx_2 = (rbx << 2).d | ((zx.d(data_1439c90f9) & 1) * 2) | zx.d(arg2)
int32_t var_30 = rbx_2

if (sub_140a80f40() != 0)
    data_1439c90fa = (rbx_2 u>> 1).b & 1
    jump(*(*arg1 + 0x150))

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        data_1439c90fa = (rbx_2 u>> 1).b & 1
        jump(*(*arg1 + 0x150))

void var_28
int64_t* rax_3 = sub_1423d7410(&var_28, nullptr, 0xff)
*(*rax_3 + 0x10) = arg1.o
void* rcx_5 = *rax_3
int32_t r8_1 = rax_3[2].d
int64_t* rdx_1 = rax_3[1]
int64_t* rbx_4 = *(rcx_5 + 0x28)
int64_t* arg_8 = rbx_4
int32_t* rdi_2 = &rbx_4[9]

if (rbx_4 != 0)
    *rdi_2 += 1
    rbx_4 = arg_8

int32_t result = sub_1405e48c0(rcx_5, rdx_1, r8_1, 1)

if (rbx_4 != 0)
    result = *rdi_2
    *rdi_2 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_8)

return result
