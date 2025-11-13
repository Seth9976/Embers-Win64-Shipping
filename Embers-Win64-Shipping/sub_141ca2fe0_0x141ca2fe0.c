// 函数: sub_141ca2fe0
// 地址: 0x141ca2fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141c9fe70(arg1 + 0x198, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 0x198)

int64_t* rbx_1 = rax_3 + 0x20

if (rax_3 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    void* rbx_2 = *rbx_1
    
    if (rbx_2 != 0)
        int64_t var_18 = arg3
        arg_8.q = &var_18
        
        if ((arg4 & 2) != 0)
            sub_141c95f00(&arg_8, rbx_2 + 0x20)
        
        if ((arg4 & 1) != 0)
            sub_141c95f00(&arg_8, rbx_2 + 0x30)
        
        if ((arg4 & 0x10) != 0)
            sub_141c95f00(&arg_8, rbx_2 + 0x60)
        
        if ((arg4 & 8) != 0)
            sub_141c95f00(&arg_8, rbx_2 + 0x50)
        
        if ((arg4 & 4) != 0)
            sub_141c95f00(&arg_8, rbx_2 + 0x40)
        
        int64_t* rax_4
        rax_4.b = 1
        return rax_4

rax_3.b = 0
return rax_3
