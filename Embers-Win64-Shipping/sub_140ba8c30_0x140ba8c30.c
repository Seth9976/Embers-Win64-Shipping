// 函数: sub_140ba8c30
// 地址: 0x140ba8c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
void* result = QueryPerformanceCounter(&performanceCount)
bool cond:0 = *(arg1 + 0x114) == 0
int64_t zmm0 = float.d(performanceCount) f* data_143d796f8
*(arg1 + 0x110) = 4
*(arg1 + 0x180) = zmm0 f+ 16777216.0

if (not(cond:0))
    sub_140ba8e10(arg1)
    int64_t* rcx_2 = *(arg1 + 0x90)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
        *(arg1 + 0x90) = 0
    
    *(arg1 + 0x108) = *(arg1 + 0x100)
    int64_t var_38
    int64_t* rax_2 = sub_140b18720(&var_38, arg1 + 0x160, 0)
    int64_t rcx_4 = *rax_2
    int32_t rdx_2 = rax_2[1].d
    int32_t rdx_3 = neg.d(rdx_2)
    *rax_2 = 0
    int32_t r8_1 = rax_2[1].d
    int64_t var_48 = rcx_4
    int32_t rcx_5 = *(rax_2 + 0xc)
    int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 6 + r8_1
    rax_2[1] = 0
    
    if (rdx_6 s> rcx_5)
        sub_1405947f0(&var_48, rdx_6)
    
    sub_140a20ba0(&var_48, u".uexp", 5)
    int64_t rsi_1 = var_48
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
    void var_28
    
    if (arg1 + 0x160 != &var_28)
        int64_t rcx_8 = *(arg1 + 0x160)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *(arg1 + 0x160) = rsi_1
        *(arg1 + 0x168) = r8_1
        *(arg1 + 0x16c) = rcx_5
    else if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
    *(arg1 + 0x168)
    int64_t* rax_5 = (*(*rax_3 + 0x118))()
    *(arg1 + 0x90) = rax_5
    result = (*(*rax_5 + 8))(rax_5, 0)
    *(arg1 + 0x98) = result
    
    if (*(result + 0x61) != 0)
        return sub_140bbce60(arg1) __tailcall

return result
