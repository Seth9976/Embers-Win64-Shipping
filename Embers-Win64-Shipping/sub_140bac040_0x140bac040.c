// 函数: sub_140bac040
// 地址: 0x140bac040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t result_1 = arg2

if (arg3 == 0)
    *(arg1 + 0x2bc) += 1

EnterCriticalSection(arg1 + 0x218)
void* rcx_1
int64_t* rdx
int64_t* r9
int64_t r10_1

if (arg3 != 0)
    r9 = *(arg1 + 0x1a8)
    r10_1 = sx.q(*(arg1 + 0x1b0))
    rdx = r9
    rcx_1 = &r9[r10_1]

uint64_t result_3

if (arg3 == 0 || r9 == rcx_1)
label_140bac100:
    result_3 = result_1
else
    result_3 = result_1
    
    do
        if (*rdx == result_3)
            int32_t rdx_2 = ((rdx - r9) s>> 3).d
            
            if (rdx_2 == 0xffffffff)
                goto label_140bac105
            
            void* rcx_2 = &r9[sx.q(rdx_2)]
            memmove(rcx_2, rcx_2 + 8, (r10_1.d - rdx_2 - 1) << 3)
            *(arg1 + 0x1b0) -= 1
            goto label_140bac100
        
        rdx = &rdx[1]
    while (rdx != rcx_1)

label_140bac105:
uint64_t result

if (data_143de5452 == 0)
    int32_t rdi_3
    int64_t* rdi_1
    int64_t* r9_1
    
    if (arg4 == 0)
        r9_1 = *(arg1 + 0x1a8)
        rdi_1 = r9_1
        void* rcx_6 = &r9_1[sx.q(*(arg1 + 0x1b0))]
        
        if (r9_1 == rcx_6)
        labelid_2a:
            rdi_3 = *(arg1 + 0x1b0)
        else
            while (*(*rdi_1 + 0x44) s> *(result_3 + 0x44))
                rdi_1 = &rdi_1[1]
                
                if (rdi_1 == rcx_6)
                    goto label_140bac1e0_2
            
        label_140bac1d7:
            rdi_3 = ((rdi_1 - r9_1) s>> 3).d
            
            if (rdi_3 == 0xffffffff)
            label_140bac1e0:
                rdi_3 = *(arg1 + 0x1b0)
    else if (arg4 != 1)
    label_140bac1e0_1:
        rdi_3 = *(arg1 + 0x1b0)
    else
        r9_1 = *(arg1 + 0x1a8)
        rdi_1 = r9_1
        void* rcx_5 = &r9_1[sx.q(*(arg1 + 0x1b0))]
        
        if (r9_1 != rcx_5)
            while (*(*rdi_1 + 0x44) s>= *(result_3 + 0x44))
                rdi_1 = &rdi_1[1]
                
                if (rdi_1 == rcx_5)
                    goto label_140bac1e0_2
            
            goto label_140bac1d7
        
    label_140bac1e0_2:
        rdi_3 = *(arg1 + 0x1b0)
    int32_t r13_1 = *(arg1 + 0x1b0)
    *(arg1 + 0x1b0) = r13_1 + 1
    
    if (r13_1 + 1 s> *(arg1 + 0x1b4))
        sub_1405a4d70(arg1 + 0x1a8)
    
    void* rdx_9 = &(*(arg1 + 0x1a8))[sx.q(rdi_3)]
    memmove(rdx_9 + 8, rdx_9, (r13_1 - rdi_3) << 3)
    result = result_1
    (*(arg1 + 0x1a8))[sx.q(rdi_3)] = result
else
    int64_t rsi = sx.q(*(arg1 + 0x1b0))
    result = zx.q((rsi + 1).d)
    *(arg1 + 0x1b0) = result.d
    
    if (result.d s> *(arg1 + 0x1b4))
        result = sub_1405a4d70(arg1 + 0x1a8)
        result_3 = result_1
    
    *(*(arg1 + 0x1a8) + (rsi << 3)) = result_3

if (arg3 == 0)
    int64_t var_e8 = result_1 + 0x14
    int64_t* var_e0_1 = &result_1
    void var_108
    result = sub_140b92920(arg1 + 0x1b8, &var_108, &var_e8, nullptr)
    
    if (data_143de5452 != arg3)
        uint64_t result_2 = result_1
        TEB* gsbase
        
        if (data_143e1a7c8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e1a7c8)
            
            if (data_143e1a7c8 == 0xffffffff)
                data_143e1a7c4 = sub_140b9d650()
                _Init_thread_footer(&data_143e1a7c8)
        
        int128_t var_100
        sub_140b9a940(result_2, &var_100, 0, 0, 0, 0)
        int64_t var_118_1 = 0
        int32_t rsi_2 = 0
        
        if (result_2 != 0)
            rsi_2 = *(result_2 + 0x23c)
            var_118_1 = *(result_2 + 0x14)
        
        int32_t r15_2 = *(result_2 + 0x44)
        int32_t rdx_12
        
        if (data_143e1a350 == 0)
            rdx_12 = *(result_2 + 0x23c)
        else
            rdx_12 = sub_140baa830(0x7fffffff)
        
        void** const var_b8 = &data_142e345d8
        int32_t rax_16 = *(arg1 + 0x328) + 1
        int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = j_sub_140b99090
        int32_t var_94_1 = rdx_12
        int32_t var_f8_1 = rsi_2
        int128_t zmm0_1
        zmm0_1.q = var_118_1
        *(arg1 + 0x328) = rax_16
        uint128_t zmm1_1 = zmm0_1
        zmm0_1 = var_b8.o
        zmm1_1 = _mm_unpacklo_pd(zmm1_1, arg1)
        int32_t var_98 = r15_2
        int32_t var_90_1 = 0x7fffffff
        int32_t var_8c_1 = rax_16
        int128_t* var_78_1 = nullptr
        void*** var_c8_1 = nullptr
        int128_t var_68 = zmm0_1
        int128_t var_b0_1 = zmm1_1
        uint128_t var_58_1 = zmm1_1
        result = sub_140b93350(arg1 + 0x330, &var_98)
        
        if (var_88_1 != 0)
            int128_t* rcx_16 = &var_68
            
            if (var_78_1 != 0)
                rcx_16 = var_78_1
            
            result = (*(*rcx_16 + 0x10))(rcx_16)
        
        if (nullptr != 0)
            void** const* rcx_17 = &var_b8
            
            if (var_c8_1 != 0)
                rcx_17 = var_c8_1
            
            result = (*rcx_17)[2](rcx_17)

if (arg1 != -0x218)
    result = LeaveCriticalSection(arg1 + 0x218)

__security_check_cookie(rax_1 ^ &var_158)
return result
