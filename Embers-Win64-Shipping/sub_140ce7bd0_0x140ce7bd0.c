// 函数: sub_140ce7bd0
// 地址: 0x140ce7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce7ea0(arg1, arg2, arg3)
bool cond:0 = (arg2[5].b & 1) == 0
char var_10 = 0
void* var_18 = arg1
var_18.o = var_18.o
int64_t rax_3
int64_t* rcx_4
int64_t arg_8

if (cond:0)
    void* rax_4 = *(arg1 + 0x78)
    int64_t rax_6
    
    if (rax_4 == 0)
        arg_8 = 0
        rax_6 = 0
    else
        rax_6 = **(rax_4 + 8)
    
    arg_8 = rax_6
    int64_t rax_8 = (*(*arg2 + 0x140))(arg2, &arg_8)
    rcx_4 = *(arg1 + 0x78)
    
    if (rcx_4 == 0)
        return rax_8
    
    rax_3 = *rcx_4
else
    int64_t rax = *arg2
    arg_8 = 0
    (*(rax + 0x140))(arg2, &arg_8)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(arg_8.d, 0) == 0
    bool rax_1 = arg_8:4.d != 0 | rcx_1.b
    
    if (rax_1 == 0)
        *(arg1 + 0x78) = 0
        return rax_1
    
    int64_t arg_10 = 0
    int64_t* rax_2 = sub_140cb1b50(&arg_8, &var_18, &arg_10, 0)
    int64_t* r8_2 = rax_2
    
    if (rax_2 == 0 || ((zx.q(*(rax_2[1] + 0x10)) u>> 0xf).b & 1) == 0)
        r8_2 = nullptr
    
    *(arg1 + 0x78) = r8_2
    rcx_4 = r8_2
    rax_3 = *r8_2
return (*(rax_3 + 8))(rcx_4, arg2)
