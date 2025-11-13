// 函数: sub_140cee980
// 地址: 0x140cee980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3
int64_t* rcx_3
int64_t arg_8

if ((arg1[5].b & 1) == 0)
    void* rax_4 = *arg2
    int64_t rax_6
    
    if (rax_4 == 0)
        arg_8 = 0
        rax_6 = 0
    else
        rax_6 = **(rax_4 + 8)
    
    arg_8 = rax_6
    int64_t rax_8 = (*(*arg1 + 0x140))(arg1, &arg_8)
    rcx_3 = *arg2
    
    if (rcx_3 == 0)
        return rax_8
    
    rax_3 = *rcx_3
else
    int64_t rax = *arg1
    arg_8 = 0
    (*(rax + 0x140))(arg1, &arg_8)
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg_8.d, 0) == 0
    bool rax_1 = arg_8:4.d != 0 | rcx.b
    
    if (rax_1 == 0)
        *arg2 = 0
        return rax_1
    
    int64_t arg_20 = 0
    int64_t* rax_2 = sub_140cb1b50(&arg_8, arg3, &arg_20, 0)
    int64_t* r8_1 = rax_2
    
    if (rax_2 == 0 || ((zx.q(*(rax_2[1] + 0x10)) u>> 0xf).b & 1) == 0)
        r8_1 = nullptr
    
    *arg2 = r8_1
    rcx_3 = r8_1
    rax_3 = *r8_1
return (*(rax_3 + 8))(rcx_3, arg1)
