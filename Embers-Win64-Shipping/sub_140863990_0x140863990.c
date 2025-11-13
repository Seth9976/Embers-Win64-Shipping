// 函数: sub_140863990
// 地址: 0x140863990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18
sub_140865c40(&data_14396ff70, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
void* const rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_14396ff70 + rax * 0x18

int64_t* result = rcx + 8

if (rcx == 0)
    result = nullptr

if (result != 0)
    void* rbx_1 = *result
    
    if (rbx_1 != 0)
        sub_140b19e60()
        sub_140b19e60()
        return sub_140864940(rbx_1, &data_1439a8bd0) __tailcall

return result
