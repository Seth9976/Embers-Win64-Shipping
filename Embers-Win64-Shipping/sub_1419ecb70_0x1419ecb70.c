// 函数: sub_1419ecb70
// 地址: 0x1419ecb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = sub_141a0e030((*(*arg1 + 0x150))()) + 0x28
int32_t arg_8
sub_140cba0f0(rbp, &arg_8, &arg1[0x45])
int64_t rax_3 = sx.q(arg_8)
int64_t rdi = 0
int64_t rsi_2

if (rax_3.d != 0xffffffff)
    rsi_2 = rax_3 << 5

void* const result

if (rax_3.d == 0xffffffff || rsi_2 == neg.q(*rbp))
    result = nullptr
else
    result = *(rsi_2 + *rbp + 0x10)

if (result == 0)
    arg_8.q = 0
    void* rax_4 = sub_140cde0b0()
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rax_4, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    arg_8.q = sub_140d2dfc0(sub_141a20670(), rax_4, 0, 0x48, 0, 0, 0, 0, 0)
    sub_1419e9e70(rbp, &arg1[0x45], &arg_8)
    result = arg_8.q

(*(*arg1 + 0x150))(arg1)
int32_t i = 0

if (arg1[0x5f].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_1419efb50(result, *(rbx_1 + arg1[0x5e]))
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< arg1[0x5f].d)

void** rbx_2 = arg1[0x60]
uint64_t r14_2 = sx.q(arg1[0x61].d) << 3 u>> 3

if (rbx_2 u> &rbx_2[arg1[0x61]])
    r14_2 = 0

if (r14_2 != 0)
    do
        sub_1419efc20(result, *rbx_2)
        rdi += 1
        rbx_2 = &rbx_2[1]
    while (rdi != r14_2)

return result
