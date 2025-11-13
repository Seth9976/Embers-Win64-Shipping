// 函数: sub_1429b7710
// 地址: 0x1429b7710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t result

if (arg3 != 0)
    int32_t rax_4 = sub_1429bcf90(arg3, *(arg1 + 0x10), arg2, *(arg1 + 0x18))
    int64_t r10_1 = sx.q(rax_4)
    
    if (rax_4 == 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297ab20(&exceptionObject, "Data decoding (rle) failed.")
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    void* r8_1 = *(arg1 + 0x18)
    void* rdx_1 = r10_1 + r8_1
    char* rcx_1 = r8_1 + 1
    
    if (rcx_1 u< rdx_1)
        do
            *rcx_1 += rcx_1[-1] - 0x80
            rcx_1 = &rcx_1[1]
        while (rcx_1 u< rdx_1)
        
        r8_1 = *(arg1 + 0x18)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r10_1 + 1).d)
    char* i = *(arg1 + 0x20)
    void* rdx_4 = sx.q((temp1_1 - temp0_1) s>> 1) + r8_1
    
    for (void* r9_3 = &i[r10_1]; i u< r9_3; i = &i[2])
        char rcx_2 = *r8_1
        r8_1 += 1
        *i = rcx_2
        
        if (&i[1] u>= r9_3)
            break
        
        char rcx_3 = *rdx_4
        rdx_4 += 1
        i[1] = rcx_3
    
    *arg4 = *(arg1 + 0x20)
    result = zx.q(r10_1.d)
else
    *arg4 = *(arg1 + 0x20)
    result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
