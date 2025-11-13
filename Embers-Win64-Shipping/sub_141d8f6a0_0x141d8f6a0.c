// 函数: sub_141d8f6a0
// 地址: 0x141d8f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141d15780()
int64_t rbx = 0x2bca2875f4373fff
int64_t r12
r12.b = rax == 0
*arg1 = 0
arg1[1] = 0
int32_t r14 = 1

while (r12.b != 0 || r14 s<= rax)
    int64_t var_48
    sub_140a2e390(&var_48, u"demo%i", zx.q(r14))
    uint64_t var_38[0x2]
    uint64_t* rax_1 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_38, &var_48)
    uint64_t rcx_2 = *rax_1
    int32_t rdx_2 = rax_1[1].d
    int32_t rdx_3 = neg.d(rdx_2)
    *rax_1 = 0
    int32_t r8_2 = rax_1[1].d
    uint64_t var_58 = rcx_2
    int32_t rcx_3 = *(rax_1 + 0xc)
    int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 6 + r8_2
    int32_t var_4c_1 = rcx_3
    rax_1[1] = 0
    
    if (rdx_6 s> rcx_3)
        sub_1405947f0(&var_58, rdx_6)
    
    sub_140a20ba0(&var_58, u".demo", 5)
    uint64_t rcx_6 = var_38[0]
    uint64_t rsi_1 = var_58
    var_58 = 0
    int32_t var_50_1
    var_50_1.q = 0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_140a464c0()
    uint64_t r8_3 = &data_142d40450
    
    if (r8_2 != 0)
        r8_3 = rsi_1
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t arg_8
    (*(r9_1 + 0xd0))(&data_14399ea08, &arg_8, r8_3, r9_1)
    int64_t rax_2 = arg_8
    int32_t var_40
    
    if (rax_2 == 0)
        if (arg1 != &var_48)
            int64_t r14_1 = var_48
            int32_t r8_7 = *(arg1 + 0xc)
            arg1[1].d = var_40
            
            if (var_40 != 0 || r8_7 != 0)
                sub_1405a4c70(arg1, var_40, r8_7)
                memcpy(*arg1, r14_1, var_40 * 2)
            else
                *(arg1 + 0xc) = var_40
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        int64_t rcx_14 = var_48
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        break
    
    if (r12.b == 0 && rax_2 s< rbx)
        if (arg1 != &var_48)
            int64_t r15_2 = var_48
            int32_t r8_4 = *(arg1 + 0xc)
            arg1[1].d = var_40
            
            if (var_40 != 0 || r8_4 != 0)
                sub_1405a4c70(arg1, var_40, r8_4)
                memcpy(*arg1, r15_2, var_40 * 2)
                rax_2 = arg_8
            else
                *(arg1 + 0xc) = var_40
        
        rbx = rax_2
    
    r14 += 1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

return arg1
