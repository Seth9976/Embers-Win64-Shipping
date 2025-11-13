// 函数: ?CollectMethodInfo@PortablePDB@@AEAAJXZ
// 地址: 0x14126baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = sub_14126d030(arg7) & 0x7fffffff
EnterCriticalSection(&data_143e8eab0)
int32_t var_78 = 0
int32_t var_74
void arg_8
sub_141251c40(&data_143e8eaf0, &var_74, rbx_1, arg7, &var_78, &arg_8)
int64_t rbx_2 = sx.q(var_74)
void* rdx_2 = rbx_2 * 0x88 + data_143e8eaf0
int32_t rax_1 = *(rdx_2 + 0x78)

if (rax_1 == 0 && data_1439b6574 == 0)
    data_1439b6574 = 1
    rax_1 = *(rdx_2 + 0x78)

*(rdx_2 + 0x78) = rax_1 + 1
LeaveCriticalSection(&data_143e8eab0)
int64_t var_88_1 = arg8
sub_141296520(arg9, arg2, arg3, (rbx_2.d & 0x3fffffff) | 0x80000000)

if (sub_1411a4ac0(data_143f0f1a0, data_1439c7a08) == 0)
    CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0xf8)
    EnterCriticalSection(lpCriticalSection_1)
    int64_t* rcx_20 = *(arg1 + 0x100)
    int32_t var_70
    sub_14125e820(rcx_20, &var_70, &rcx_20[7])
    void* var_68
    sub_14125be70(var_68, arg9)
    *(*(arg1 + 0xf0) + 8) = var_70
    
    if (lpCriticalSection_1 != 0)
        LeaveCriticalSection(lpCriticalSection_1)
else
    int32_t var_54_1 = arg9[0x18].d
    int64_t var_5c_1 = 0
    int32_t var_38_1 = sx.d(arg9[0x1c].b) << 8 | zx.d(*(arg9 + 0xe1))
    int32_t rax_7 = sub_14126c180(arg9)
    int64_t i_1 = sx.q(arg9[0x16].d)
    int32_t var_50_1 = rax_7
    
    if (i_1 s> 0)
        int32_t r8_2 = var_5c_1:4.d
        void* rbx_5 = &arg9[0xf]
        void* rax_8 = *(rbx_5 + 0x30)
        int32_t* r10_1 = nullptr
        int32_t r9_2 = var_5c_1.d
        
        if (rax_8 != 0)
            rbx_5 = rax_8
        
        int64_t i
        
        do
            int32_t rdx_5 = *(r10_1 + rbx_5)
            r10_1 = &r10_1[3]
            r8_2 ^= (r8_2 u>> 2) + (r8_2 << 6) - 0x61c88647 + ror.d(rdx_5, 4)
            var_5c_1:4.d = r8_2
            r9_2 ^= (r9_2 u>> 2) - 0x61c88647 + (*(r10_1 + rbx_5 - 8) u>> 4).d + (r9_2 << 6)
            var_5c_1.d = r9_2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t rcx_13 = arg9[0x19].d
    uint32_t var_60 = (arg9[0x17] u>> 4).d
    int32_t var_4c_1 = *(arg9 + 0xc4)
    int32_t var_44_1 = *(arg9 + 0xcc)
    int32_t var_48_1 = rcx_13
    int32_t rax_24
    
    if (rcx_13 == 0)
        uint32_t var_40_2 = (arg9[0x1a] u>> 4).d
        rax_24 = arg9[0x1b].d
    else
        int32_t var_40_1 = arg9[0x1a].d
        rax_24 = *(arg9 + 0xd4)
    
    int32_t var_3c_1 = rax_24
    int32_t rax_27 = sub_140a6b260(&var_60, 0x2c)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xf8)
    EnterCriticalSection(lpCriticalSection)
    int64_t* rcx_16 = *(arg1 + 0x108)
    var_74 = 0
    sub_141252210(rcx_16, &var_78, rax_27 & 0x7fffffff, arg9, &var_74, &arg_8)
    int64_t rdi_3 = sx.q(var_78)
    int64_t rdx_8 = rdi_3 * 0xf8
    int64_t rcx_17 = **(arg1 + 0x108)
    *(rdx_8 + rcx_17 + 0xe8) += 1
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    *(*(arg1 + 0xf0) + 0xc) = rdi_3.d

**(arg1 + 0xf0) = arg6
void* rcx_25 = *(arg1 + 0xf0)
*(rcx_25 + 0x10) ^= (arg4 << 6 ^ *(rcx_25 + 0x10)) & 0x1c0
void* rcx_26 = *(arg1 + 0xf0)
int32_t result = (arg5 << 9 ^ *(rcx_26 + 0x10)) & 0xe00
*(rcx_26 + 0x10) ^= result
return result
