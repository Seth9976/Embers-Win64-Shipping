// 函数: sub_141b70820
// 地址: 0x141b70820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

void* rbp = *(arg1 + 0x188)
void* var_18
void* rcx_2
void* r9

if (rbp == 0)
    var_18 = sub_142436860(arg1)
    r9 = arg1
    rcx_2 = arg1
else
    void* rax = sub_142029870(rbp)
    r9 = sub_14202bfe0(rbp)
    var_18 = rax
    rcx_2 = rbp

void* result = sub_141ba1140(rcx_2, arg2, arg3, r9, var_18)

if (result != 0)
    void* rax_3 = sub_141c122a0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        return result

return nullptr
