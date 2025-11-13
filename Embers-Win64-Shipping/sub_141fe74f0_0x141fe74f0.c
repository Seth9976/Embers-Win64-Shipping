// 函数: sub_141fe74f0
// 地址: 0x141fe74f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1
int64_t rax_1 = arg1[0x42]

if (arg1 == 8)
    rdx = nullptr

int64_t* var_48 = rdx
int64_t var_40 = rax_1

if (sub_140a80f40() != 0)
    sub_141fd85c0(&var_48)
    return sub_14198bc10(arg1) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_38 = var_48.o
        sub_141fd85c0(&var_38)
        return sub_14198bc10(arg1) __tailcall

void var_28
int64_t* rax_6 = sub_141fde210(&var_28, nullptr, 0xff)
*(*rax_6 + 0x10) = var_48.o
void* rcx_8 = *rax_6
int32_t r8_2 = rax_6[2].d
int64_t* rdx_5 = rax_6[1]
int64_t* rbx = *(rcx_8 + 0x28)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

sub_140a064d0(rcx_8, rdx_5, r8_2, 1)

if (rbx != 0)
    int32_t rax_7 = *rdi
    *rdi -= 1
    
    if (rax_7 == 1)
        sub_140a2f6e0(arg_10)

return sub_14198bc10(arg1) __tailcall
