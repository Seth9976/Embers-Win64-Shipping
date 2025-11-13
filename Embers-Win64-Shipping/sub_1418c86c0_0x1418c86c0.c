// 函数: sub_1418c86c0
// 地址: 0x1418c86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t r13 = sx.q(arg2)
EnterCriticalSection(arg1 + 0x30)
void* rcx_1 = *(arg1 + 0x78)
uint64_t result
result.b = *(rcx_1 + 0x2c) - 1

if (result.b u<= 1)
    sub_1418bdd70(rcx_1)
    int64_t performanceCount
    
    if (data_143efaf6c == 0)
        sub_1418ef260(*(arg1 + 0x68), *(arg1 + 0x78), r13.d, arg3)
    else
        int64_t* rsi_1 = *(arg1 + 0x98)
        int64_t rbp_1 = 0
        uint64_t r14_2 = sx.q(*(arg1 + 0xa0)) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0xa0))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                sub_1418bb120(*(arg1 + 0x78), 1, *rsi_1)
                rbp_1 += 1
                rsi_1 = &rsi_1[1]
            while (rbp_1 != r14_2)
        
        void* rax_4 = *(arg1 + 0xa8)
        
        if (r13.d != 0)
            int64_t* var_50_1 = nullptr
            int64_t* rdx_2 = nullptr
            int32_t var_44_1 = 0x10
            int64_t var_d0 = *(rax_4 + 0x18)
            int32_t rax_9 = (r13 + 1).d
            
            if (rax_9 s> 0x10)
                sub_1407c3c00(&var_d0, 1)
                rdx_2 = var_50_1
            
            int64_t* rcx_7 = &var_d0
            
            if (rdx_2 != 0)
                rcx_7 = rdx_2
            
            memcpy(&rcx_7[1], arg3, (r13 << 3).d)
            int64_t* r9_2 = &var_d0
            
            if (var_50_1 != 0)
                r9_2 = var_50_1
            
            sub_1418ef260(*(arg1 + 0x68), *(arg1 + 0x78), rax_9, r9_2)
            
            if (var_50_1 != 0)
                sub_140a74f90(var_50_1)
        else
            void* rdx = *(arg1 + 0x78)
            int64_t* rcx_3 = *(arg1 + 0x68)
            performanceCount = *(rax_4 + 0x18)
            sub_1418ef260(rcx_3, rdx, (r13 + 1).d, &performanceCount)
            int64_t rbp_2 = sx.q(*(arg1 + 0xb8))
            int32_t rax_6 = (rbp_2 + 1).d
            *(arg1 + 0xb8) = rax_6
            
            if (rax_6 s> *(arg1 + 0xbc))
                sub_1405a4d70(arg1 + 0xb0)
            
            *(*(arg1 + 0xb0) + (rbp_2 << 3)) = *(arg1 + 0xa8)
            *(arg1 + 0xa8) = 0
        
        bool cond:1_1 = *(arg1 + 0xa4) == 0
        *(arg1 + 0xa0) = 0
        
        if (not(cond:1_1))
            sub_1405c5570(arg1 + 0x98, 0)
    
    QueryPerformanceCounter(&performanceCount)
    result = *(arg1 + 0x78)
    *(result + 0x48) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

*(arg1 + 0x78) = 0

if (arg1 != -0x30)
    result = LeaveCriticalSection(arg1 + 0x30)

__security_check_cookie(rax_1 ^ &var_f8)
return result
