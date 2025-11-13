// 函数: sub_141fd9ca0
// 地址: 0x141fd9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = arg2
int32_t var_30 = 0xffffffff
int32_t var_2c = 4
int32_t arg_8
sub_140e10ae0(arg1 + 0x160, &arg_8, &var_38)
int64_t rax = sx.q(arg_8)
int64_t result
void* rcx_1

if (rax.d != 0xffffffff)
    result = rax * 3
    rcx_1 = *(arg1 + 0x160) + (result << 3)

if (rax.d == 0xffffffff || rcx_1 == 0)
    var_38 = arg2
    int32_t var_30_1 = 0xffffffff
    int32_t var_2c_1 = 4
    sub_140e10ae0(arg1 + 0x110, &arg_8, &var_38)
    int64_t rax_1 = sx.q(arg_8)
    
    if (rax_1.d != 0xffffffff)
        result = rax_1 * 3
        rcx_1 = *(arg1 + 0x110) + (result << 3)
    
    if (rax_1.d == 0xffffffff || rcx_1 == 0)
        var_38 = arg2
        int32_t var_30_2 = 0xffffffff
        int32_t var_2c_2 = 4
        sub_140e10ae0(arg1 + 0xc0, &arg_8, &var_38)
        int64_t rax_2 = sx.q(arg_8)
        
        if (rax_2.d != 0xffffffff)
            result = rax_2 * 3
            rcx_1 = *(arg1 + 0xc0) + (result << 3)
        
        if (rax_2.d == 0xffffffff || rcx_1 == 0)
            var_38 = arg2
            int32_t var_30_3 = 0xffffffff
            int32_t var_2c_3 = (arg3 & 3) | 4
            int32_t var_28
            sub_140598750(arg1 + 0xc0, &var_28)
            int64_t* var_20
            *var_20 = var_38.o
            var_20[2].d = 0xffffffff
            uint32_t rdx_8 = (*var_20 u>> 4).d
            int32_t r10_2 = (0x9e3779b9 - rdx_8) ^ rdx_8 << 8
            int32_t r8_5 = neg.d(r10_2 + rdx_8) ^ r10_2 u>> 0xd
            int32_t rdx_11 = (rdx_8 - r10_2 - r8_5) ^ r8_5 u>> 0xc
            int32_t r10_5 = (r10_2 - rdx_11 - r8_5) ^ rdx_11 << 0x10
            int32_t r8_8 = (r8_5 - r10_5 - rdx_11) ^ r10_5 u>> 5
            int32_t rdx_14 = (rdx_11 - r10_5 - r8_8) ^ r8_8 u>> 3
            int32_t r10_8 = (r10_5 - rdx_14 - r8_8) ^ rdx_14 << 0xa
            return sub_141fdedb0(arg1 + 0xc0, &arg_8, (r8_8 - r10_8 - rdx_14) ^ r10_8 u>> 0xf, 
                var_20, var_28, nullptr)

*(rcx_1 + 0xc) += 4
return result
