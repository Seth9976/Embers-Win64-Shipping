// 函数: sub_140906bc0
// 地址: 0x140906bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg3 + 0x18)

if (rcx != 0)
    *(rcx + 0x28) = *(arg3 + 0x28)
else if (*(arg1 + 0x10) == arg3)
    *(arg1 + 0x10) = *(arg3 + 0x28)

void* rcx_1 = *(arg3 + 0x28)

if (rcx_1 != 0)
    *(rcx_1 + 0x18) = *(arg3 + 0x18)
else if (*(arg1 + 0x18) == arg3)
    *(arg1 + 0x18) = *(arg3 + 0x18)

void* rcx_2 = *(arg3 + 0x20)
*(arg3 + 0x18) = 0
*(arg3 + 0x28) = 0
int32_t var_28
int64_t* var_20
int64_t arg_18

if (rcx_2 == 0)
    sub_140868c90(arg1 + 0x70, arg3)
    
    if (*(arg3 + 0x30) != 0)
        sub_1405b3620(arg1 + 0x70, &var_28)
        *var_20 = *(arg3 + 0x30)
        var_20[1] = *arg2
        var_20[2].d = 0xffffffff
        uint32_t r10_2 = (*var_20 u>> 4).d
        int32_t r8_1 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
        int32_t rdx_4 = neg.d(r10_2 + r8_1) ^ r8_1 u>> 0xd
        int32_t r10_5 = (r10_2 - rdx_4 - r8_1) ^ rdx_4 u>> 0xc
        int32_t r8_4 = (r8_1 - r10_5 - rdx_4) ^ r10_5 << 0x10
        int32_t rdx_7 = (rdx_4 - r10_5 - r8_4) ^ r8_4 u>> 5
        int32_t r10_8 = (r10_5 - rdx_7 - r8_4) ^ rdx_7 u>> 3
        int32_t r8_7 = (r8_4 - r10_8 - rdx_7) ^ r10_8 << 0xa
        sub_140901360(arg1 + 0x70, &arg_18, r8_7 u>> 0xf ^ (rdx_7 - (r10_8 + r8_7)), var_20, 
            var_28, nullptr)
else
    *(rcx_2 + 0x30) = *(arg3 + 0x30)

void* rcx_6 = *(arg3 + 0x30)
int64_t* result

if (rcx_6 == 0)
    result = zx.q(*(arg1 + 0x28))
    int64_t rbx_1 = *arg2
    arg_18 = rbx_1
    
    if (result.d != *(arg1 + 0x54))
        int32_t rax_25 = sub_140b5ead0(rbx_1.d) + arg_18:4.d
        void* r8_10 = arg1 + 0x58
        void* rcx_8 = *(r8_10 + 8)
        
        if (rcx_8 != 0)
            r8_10 = rcx_8
        
        result = zx.q(*(r8_10 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(rax_25)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r8_11 = *(arg1 + 0x20)
            
            do
                int64_t rdx_13 = sx.q(result.d)
                int64_t rcx_9 = rdx_13 * 3
                
                if (*(r8_11 + (rcx_9 << 3)) == rbx_1)
                    if (result.d != 0xffffffff)
                        result = r8_11 + rdx_13 * 0x18
                        
                        if (result != 0)
                            int64_t* result_1 = result
                            result = &result[1]
                            
                            if (result_1 != -8 && *result == arg3)
                                sub_1405b3620(arg1 + 0x20, &var_28)
                                *var_20 = *arg2
                                var_20[1] = *(arg3 + 0x20)
                                var_20[2].d = 0xffffffff
                                int64_t rbx_2 = *var_20
                                result = sub_1405b8140(arg1 + 0x20, &arg_18, 
                                    (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_20, var_28, 
                                    nullptr)
                    
                    break
                
                result = zx.q(*(r8_11 + (rcx_9 << 3) + 0x10))
            while (result.d != 0xffffffff)
else
    result = *(arg3 + 0x20)
    *(rcx_6 + 0x20) = result

__builtin_memset(arg3 + 0x18, 0, 0x20)
return result
