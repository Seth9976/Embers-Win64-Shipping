// 函数: sub_141b4f810
// 地址: 0x141b4f810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a80f40() != 0)
    void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[3]
    
    if (rax_1 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x20)
        rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[3]
    
    data_143f02bc8 = rax_1
    int64_t* rax_2 = data_143f02ba0
    data_143f02bac += 1
    *rax_2 = rcx_2
    data_143f02ba0 = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_14306cc20
    rcx_2[2] = arg1
    return &data_14306cc20

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int64_t arg_8 = arg1
        sub_141b4bae0(&arg_8, &data_143f02b98)
        return &data_14306cc20

void var_28
int64_t* rax_5 = sub_141b526d0(&var_28, nullptr, 0xff)
*(*rax_5 + 0x10) = arg1
void* rcx_8 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx = rax_5[1]
int64_t* rbx_1 = *(rcx_8 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_10

int32_t result = sub_1405a5630(rcx_8, rdx, r8, 1)

if (rbx_1 != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
