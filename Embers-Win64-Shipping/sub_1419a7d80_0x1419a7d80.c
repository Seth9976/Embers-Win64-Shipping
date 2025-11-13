// 函数: sub_1419a7d80
// 地址: 0x1419a7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_50 = arg3.d
char rax = sub_140a80f40()

if (rax != 0)
    *arg2 = arg3.d
    return rax

if (data_143f138f4 == 0)
    uint32_t rax_1
    
    if (data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        int32_t var_44 = arg2:4.d
        int32_t* rax_2 = arg2.d.q
        *rax_2 = arg3.d
        return rax_2

void var_38
int64_t* rax_3 = sub_14199bdc0(&var_38, nullptr, 0xff)
*(*rax_3 + 0x10) = arg2.o
void* rcx_2 = *rax_3
int32_t r8 = rax_3[2].d
int64_t* rdx = rax_3[1]
int64_t* rbx_1 = *(rcx_2 + 0x28)
int64_t* arg_10 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_10

int32_t rax_4 = sub_140a064d0(rcx_2, rdx, r8, 1)

if (rbx_1 != 0)
    rax_4 = *rdi
    *rdi -= 1
    
    if (rax_4 == 1)
        return sub_140a2f6e0(arg_10)

return rax_4
