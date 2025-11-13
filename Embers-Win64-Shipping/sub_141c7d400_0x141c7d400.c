// 函数: sub_141c7d400
// 地址: 0x141c7d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)
uint32_t r8 = zx.d(*(arg1 + 4))
uint8_t rax = *(arg1 + 8) u>> 1 & 1

if (rax == 0)
    r8 u>>= arg7
    
    if (r8 u< 1)
        r8 = 1

uint32_t rdx = zx.d(*(arg1 + 6))

if (rax == 0)
    rdx u>>= arg7
    
    if (rdx u< 1)
        rdx = 1

char result_1 = *(arg1 + 0xb)
uint32_t r8_2 = (r8 + 3) u>> 2
uint32_t rdx_2 = (rdx + 3) u>> 2
int32_t rax_2

if (result_1 - 1 u> 7)
    rax_2 = 8

if (result_1 - 1 u<= 7 || result_1 u>= 0xc)
    rax_2 = 0x10

int32_t r9 = arg6
uint64_t result = zx.q(rax_2 * r8_2)

if (r9 == 0)
    r9 = result.d
label_141c7d4a8:
    
    if (arg5 u>= rdx_2 * r9 && rbx.d != 0)
        int64_t var_38 = arg2
        int64_t var_28_1 = arg2 + rbx
        int64_t var_1c_1 = 0
        result = zx.q(result_1)
        int64_t var_30_1 = arg2
        int32_t var_20_1 = rbx.d
        
        if (result.d u<= 0xc)
            switch (result)
                case 0
                    result = sub_141c7c3b0(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                label_141c7d59d:
                    
                    if (result.b != 0)
                        result.b = 1
                        return result
                case 2, 3, 4, 5, 6
                    result = sub_141c7c600(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                    goto label_141c7d59d
                case 7, 8
                    result = sub_141c7c0a0(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                    goto label_141c7d59d
                case 9
                    result = sub_141c7c8f0(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                    goto label_141c7d59d
                case 0xa, 0xb
                    result = sub_141c7cb60(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                    goto label_141c7d59d
                case 0xc
                    result = sub_141c7cf40(arg1, &var_38, arg4, r9, r8_2, rdx_2)
                    goto label_141c7d59d
else if (r9 u>= result.d && (r9.b & 3) == 0)
    goto label_141c7d4a8

result.b = 0
return result
