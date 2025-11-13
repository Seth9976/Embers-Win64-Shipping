// 函数: sub_141393960
// 地址: 0x141393960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* result = sub_1413a7ef0(arg1, arg2, arg3)

if (result != 0)
    int64_t var_148
    memset(&var_148, 0, 0x120)
    int32_t rdx = *(data_143ec4ba8 + 4)
    
    if (*(arg1 + 0x3d0) s<= 1)
        int16_t var_134_1 = 0x900
        int32_t var_138_1 = 0xffffffff
        char rax_4 = 0
        var_148 = *(*(arg1 + 0xe8) + 0x10)
        int32_t var_120_1 = 0xffffffff
        
        if (rdx == 3)
            rax_4 = 9
        
        char var_11c_1 = 0
        char var_11b_1 = rax_4
        int64_t var_130_1 = *(*(arg1 + 0xf0) + 0x10)
    
    char rax_5 = -0x6b
    int32_t var_74_1 = 0x22
    
    if (rdx == 3)
        rax_5 = -0x67
    
    int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    char var_78_1 = rax_5
    int64_t var_88_1 = *(result + 0x10)
    int64_t rax_7 = rbx_3 + 0x2e
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_7 = rbx_3 + 0x2e
    
    wchar16 const* const rcx_5 = u"BeginRenderCustomDepth"
    *(arg2 + 0x30) = rax_7
    wchar16 const i
    
    do
        i = *rcx_5
        *(rbx_3 - u"BeginRenderCustomDepth" + rcx_5) = i
        rcx_5 = &rcx_5[1]
    while (i != 0)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_8[0x27]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_8[0x27]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    sub_1405d11b0(rcx_8, &var_148, rbx_3)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_148)
    char var_31
    *(arg2 + 0x178) = var_31
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    void var_40
    sub_1405d1550(&var_40)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_168)
return result
