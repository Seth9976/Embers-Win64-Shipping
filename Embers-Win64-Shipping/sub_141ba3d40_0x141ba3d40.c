// 函数: sub_141ba3d40
// 地址: 0x141ba3d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
uint64_t r15
r15.b = 0
int64_t* rcx = *(data_143e29f28 + 0x20)
int64_t* performanceCount = arg4
CRITICAL_SECTION* lpCriticalSection = (*(*rcx + 0x138))(rcx)
EnterCriticalSection(lpCriticalSection)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int64_t* rcx_4 = *(arg1 + 0x18)
    uint128_t zmm1 = arg5[1]
    int128_t var_138 = *arg5
    uint128_t var_128_1 = zmm1
    int128_t var_118_1 = arg5[2]
    uint64_t var_108_1 = arg5[3].q
    void* rax_7 = (*(*rcx_4 + 0x18))(rcx_4)
    void* rdx = arg2[1]
    int64_t var_178 = *arg2
    void* var_170_1 = rdx
    
    if (rdx != 0)
        *(rdx + 8) += 1
    
    int64_t* rax_8 = sub_140de79b0(rax_7, &var_178)
    var_118_1.q = rax_8
    void var_188
    sub_140db57d0(performanceCount, &var_188, &var_138)
    char var_184
    
    if (var_184 == 0)
        sub_140dbbdd0(rax_8)
        sub_140e27200(rax_7)
    else
        int32_t i_2 = rax_8[0x1a].d
        int64_t rsi_2 = rax_8[0x19]
        performanceCount = nullptr
        int32_t i_3 = i_2
        
        if (i_2 != 0)
            sub_1405a4be0(&performanceCount, i_2, 0)
            int64_t* performanceCount_1 = performanceCount
            int64_t* rsi_3 = rsi_2 - performanceCount_1
            int32_t i
            
            do
                *performanceCount_1 = *(rsi_3 + performanceCount_1)
                void* rax_10 = *(rsi_3 + performanceCount_1 + 8)
                performanceCount_1[1] = rax_10
                
                if (rax_10 != 0)
                    *(rax_10 + 8) += 1
                
                performanceCount_1 = &performanceCount_1[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
        else
            int32_t var_18c_1 = 0
        
        sub_141b85cb0(arg1 + 8, &performanceCount)
        sub_140596d80(&performanceCount)
        int64_t* rcx_11 = *(arg1 + 0x18)
        (*(*rcx_11 + 0x20))(rcx_11, rax_7)
        *(rax_7 + 0x38) = *(arg1 + 0x2c)
        uint128_t zmm1_1
        zmm1_1.q = data_143dbb3b8 f- data_143de5880
        void* var_168 = rax_7
        int32_t var_160_1 = _mm_cvtpd_ps(zmm1_1).d
        int32_t var_15c_1 = _mm_cvtpd_ps(zx.o(data_14399f938)).d
        QueryPerformanceCounter(&performanceCount)
        uint128_t zmm0_1
        zmm0_1.q = float.d(performanceCount)
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        zmm0_1.q = zmm0_1.q f+ 16777216.0
        zmm0_1.q = zmm0_1.q f- data_143de5880
        int32_t var_158_1 = _mm_cvtpd_ps(zmm0_1).d
        int64_t rax_12 = sub_140cbe180(arg3)
        
        if (rax_12 == 0)
            int64_t var_150_2 = 0
        else
            int64_t var_150_1 = rax_12 + 0x48
        
        r15 = zx.q(var_184)
        int64_t var_148_1 = *(arg1 + 0x18)
        char var_140_1 = *(arg1 + 0x2b)
        int64_t* rcx_14 = *(data_143e29f28 + 0x20)
        (*(*rcx_14 + 0x170))(rcx_14, &var_168, zx.q(arg6))
        int64_t** i_1 = *(arg1 + 8)
        
        for (void* rsi_6 = &i_1[sx.q(*(arg1 + 0x10)) * 2]; i_1 != rsi_6; i_1 = &i_1[2])
            void var_f8
            int64_t* rax_18 = sub_140d9c3d0(*i_1, &var_f8, arg5[1].q)
            sub_140db8a10(arg5[2].q, rax_18)
            int64_t* var_f0
            
            if (var_f0 != 0)
                int32_t temp1_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(r15.b)
