// 函数: sub_141e518f0
// 地址: 0x141e518f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94b8)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8
int32_t arg_8

if (&rcx[1] u> r8[1])
    int32_t rax_3
    rax_3.b = *arg2 != 0
    arg_8 = rax_3
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *arg2 = arg_8 != 0
else
    void* rax_1
    rax_1.b = *rcx != 0
    *arg2 = rax_1.b
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int64_t rax_8 = *arg1
    int32_t rsi
    rsi.b = arg2[1] != 0
    arg_8 = rsi
    (*(rax_8 + 0x150))(arg1, &arg_8, 4)
    arg2[1] = arg_8 != 0
else
    void* rax_6
    rax_6.b = *rdx_1 != 0
    arg2[1] = rax_6.b
    int64_t* rax_7 = arg1[1]
    *rax_7 += 4

sub_141e51a30(arg1, &arg2[8], arg3)

if (sub_140b4e7c0(arg1, &data_1439a94b8) s>= 0xc)
    int64_t* rcx_6 = arg1[1]
    char* r8_1 = *rcx_6
    
    if (&r8_1[1] u<= rcx_6[1])
        arg2[0x18] = *r8_1
        int64_t* rax_13 = arg1[1]
        *rax_13 += 1
        return arg1
    
    (*(*arg1 + 0x150))(arg1, &arg2[0x18], 1)

return arg1
