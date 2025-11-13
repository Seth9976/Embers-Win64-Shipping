// 函数: sub_1422b9910
// 地址: 0x1422b9910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1

if (sub_140a80f40() != 0)
    sub_1422b7e50(&arg_8)
    return sub_140cd7d40(arg1) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        void* arg_18 = arg1
        sub_1422b7e50(&arg_18)
        return sub_140cd7d40(arg1) __tailcall

void var_38
void** rax_4 = sub_1422c1cb0(&var_38, nullptr, 0xff)
*(*rax_4 + 0x10) = arg1
void* rcx_8 = *rax_4
int32_t r8_2 = rax_4[2].d
int64_t* rdx_4 = rax_4[1]
int64_t* rbx = *(rcx_8 + 0x20)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

sub_1405a5630(rcx_8, rdx_4, r8_2, 1)

if (rbx != 0)
    int32_t rax_5 = *rdi
    *rdi -= 1
    
    if (rax_5 == 1)
        sub_140a2f6e0(arg_10)

return sub_140cd7d40(arg1) __tailcall
