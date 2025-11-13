// 函数: sub_141ba4a80
// 地址: 0x141ba4a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143e29f28
int32_t* performanceCount = arg6
int64_t* rcx = *(rax + 0x20)
CRITICAL_SECTION* lpCriticalSection = (*(*rcx + 0x138))(rcx)
EnterCriticalSection(lpCriticalSection)
TEB* gsbase
int64_t result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cd80cc s> *(0x14 + result))
    result, arg5 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result, arg5 = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    if (*(arg1 + 0x28) != 0)
        sub_140e25880(*arg4, arg6[2], arg5)
    
    float zmm3 = *arg7
    int32_t zmm2 = arg7[1]
    arg5.d = arg7[2].d f- zmm3
    int64_t* rcx_5 = *(arg2 + 8)
    int128_t zmm1
    zmm1.d = arg7[3].d f- zmm2
    float var_d8 = zmm3
    int32_t var_d4_1 = zmm2
    int32_t var_d0 = arg5.d
    int32_t var_cc_1 = zmm1.d
    sub_140dbd970(rcx_5, &var_d8, &var_d0, &data_143dbb1f0)
    
    if (*(arg1 + 0x29) != 0)
        sub_140d9b4f0(*(arg2 + 8))
    
    int64_t* rcx_7 = *(arg1 + 0x18)
    void* rax_4 = (*(*rcx_7 + 0x18))(rcx_7)
    var_d0.q = *arg4
    void* rcx_9 = arg4[1]
    var_d8.q = rax_4
    void* var_c8_1 = rcx_9
    
    if (rcx_9 != 0)
        *(rcx_9 + 8) += 1
    
    int64_t* rax_5 = sub_140de79b0(rax_4, &var_d0)
    char* rdi_2 = *arg4 + 0x190
    
    if (*(rdi_2 + 0x10) != 0)
        int64_t* rcx_11 = *(rdi_2 + 8)
        
        if (rcx_11 != 0)
            int64_t rdx_2 = *rcx_11
            
            if ((*(rdx_2 + 0x28))(rcx_11, rdx_2) != 0)
                int64_t* rcx_12
                
                if (*(rdi_2 + 0x10) == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *(rdi_2 + 8)
                
                *rdi_2 = (*(*rcx_12 + 0x48))(rcx_12)
    
    char rax_9 = *rdi_2
    zmm3 = data_14399f5c0.d
    int32_t* performanceCount_2 = performanceCount
    int32_t zmm4_1 = data_14399f5c0:4.d
    float zmm5_1 = data_14399f5c0:8.d
    float zmm6_1 = data_14399f5c0:0xc.d
    int64_t* rcx_13 = *arg4
    int128_t var_a8_1 = data_14399f5c0
    float var_98_1 = 0.600000024f * zmm3
    int128_t zmm0
    zmm0.d = 0.600000024f f* zmm4_1
    float var_90_1 = 0.600000024f * zmm5_1
    float var_b8 = zmm3
    int32_t var_b4_1 = zmm4_1
    float var_b0_1 = zmm5_1
    float var_ac_1 = zmm6_1
    int32_t var_94_1 = zmm0.d
    float var_8c_1 = 0.600000024f * zmm6_1
    sub_140e1f680(rcx_13, arg2, performanceCount_2, arg7, rax_5, 0, &var_b8, rax_9)
    int32_t i_2 = rax_5[0x1a].d
    int64_t rsi_1 = rax_5[0x19]
    performanceCount = nullptr
    int32_t i_4 = i_2
    
    if (i_2 != 0)
        sub_1405a4be0(&performanceCount, i_2, 0)
        int32_t* performanceCount_1 = performanceCount
        int64_t* rsi_2 = rsi_1 - performanceCount_1
        int32_t i
        
        do
            *performanceCount_1 = *(rsi_2 + performanceCount_1)
            void* rax_11 = *(rsi_2 + performanceCount_1 + 8)
            *(performanceCount_1 + 8) = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 8) += 1
            
            performanceCount_1 = &performanceCount_1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        int32_t var_dc_1 = 0
    
    sub_141b85cb0(arg1 + 8, &performanceCount)
    int32_t i_3 = i_4
    int32_t* performanceCount_3 = performanceCount
    
    if (i_3 != 0)
        void* rsi_3 = &performanceCount_3[2]
        int32_t i_1
        
        do
            int64_t* rdi_3 = *rsi_3
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp5_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            rsi_3 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (performanceCount_3 != 0)
        sub_140a74f90(performanceCount_3)
    
    int64_t* rcx_19 = *(arg1 + 0x18)
    void* rdi_4 = var_d8.q
    (*(*rcx_19 + 0x20))(rcx_19, rdi_4)
    *(rdi_4 + 0x38) = *(arg1 + 0x2c)
    uint128_t zmm1_2
    zmm1_2.q = data_143dbb3b8 f- data_143de5880
    void* var_88 = rdi_4
    int32_t var_80_1 = _mm_cvtpd_ps(zmm1_2).d
    int32_t var_7c_1 = _mm_cvtpd_ps(zx.o(data_14399f938)).d
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm0_1
    zmm0_1.q = float.d(performanceCount)
    int64_t var_70_1 = arg3
    int64_t var_68_1 = *(arg1 + 0x18)
    zmm0_1.q = zmm0_1.q f* data_143d796f8
    char var_60_1 = *(arg1 + 0x2b)
    void* rax_18 = data_143e29f28
    zmm0_1.q = zmm0_1.q f+ 16777216.0
    zmm0_1.q = zmm0_1.q f- data_143de5880
    int32_t var_78_1 = _mm_cvtpd_ps(zmm0_1).d
    int64_t* rcx_21 = *(rax_18 + 0x20)
    result = (*(*rcx_21 + 0x170))(rcx_21, &var_88, zx.q(arg8))

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
