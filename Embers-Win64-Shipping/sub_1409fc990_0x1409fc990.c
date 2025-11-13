// 函数: sub_1409fc990
// 地址: 0x1409fc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result

if (arg2[1].d s>= 4)
    void** var_d8
    sub_14222a2e0(&var_d8)
    int64_t var_a8
    
    if (&var_a8 != arg2)
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t rsi_1 = *arg2
        int32_t var_a0_1 = rdi_1.d
        int32_t var_9c
        
        if (rdi_1.d != 0 || var_9c != 0)
            sub_1407c3650(&var_a8, rdi_1.d, var_9c)
            memcpy(var_a8, rsi_1, (rdi_1 * 0xc).d)
        else
            int32_t var_9c_1 = var_9c
    
    float var_f8[0x2][0x4]
    float (* rax_1)[0x4] = sub_140acc600(&var_f8, &var_a8)
    int64_t rsi_2 = sx.q(arg1[0x8c].d)
    float var_88_1[0x4] = *rax_1
    int64_t var_78_1 = rax_1[1][0].q
    float var_70_1 = (*rax_1)[6]
    int32_t rax_3 = (rsi_2 + 1).d
    arg1[0x8c].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x464))
        sub_140a05e50(&arg1[0x8b])
    
    sub_14222a240(rsi_2 * 0xb0 + arg1[0x8b], &var_d8)
    sub_140a09030(arg1)
    result = sub_14222ae60(&var_d8)

int64_t rcx_9 = *arg2

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

__security_check_cookie(result_1 ^ &var_118)
return result
