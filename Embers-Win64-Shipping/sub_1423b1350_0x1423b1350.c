// 函数: sub_1423b1350
// 地址: 0x1423b1350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t arg_8
sub_1423af520(arg1 + 0x10, &arg_8, &arg_10)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x10) + rax * 0x18
    
    if (rax_2 != 0)
        int64_t result = *(rax_2 + 8)
        
        if (result != 0)
            return result

void* rax_3 = sub_1423b1030(arg1, arg2)

if (*(rax_3 + 8) s<= 0)
    return 0

return **rax_3
