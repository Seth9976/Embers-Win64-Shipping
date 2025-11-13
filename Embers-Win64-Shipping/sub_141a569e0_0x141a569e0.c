// 函数: sub_141a569e0
// 地址: 0x141a569e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141a4af70(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x38 + *(arg1 + 0x10)

char* rcx_1 = result + 0x10

if (result == 0)
    rcx_1 = nullptr

if (rcx_1 != 0)
    *rcx_1 = 0
    sub_141a4b030(arg1 + 0x60, &arg_8, arg2)
    int64_t rax_2 = sx.q(arg_8)
    
    if (rax_2.d == 0xffffffff)
        result = nullptr
    else
        result = rax_2 * 0x68 + *(arg1 + 0x60)
    
    void* i_1 = result + 0x10
    
    if (result == 0)
        i_1 = nullptr
    
    if (i_1 != 0)
        result = *(i_1 + 0x40)
        void* i = i_1
        
        if (result != 0)
            i = result
        
        for (void* rdi_3 = (sx.q(*(i_1 + 0x48)) << 4) + i; i != rdi_3; i += 0x10)
            result = sub_141a569e0(arg1, i)

return result
