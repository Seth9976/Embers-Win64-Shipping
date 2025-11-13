// 函数: sub_1429bb330
// 地址: 0x1429bb330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t (* rbx)[0x4] = arg4
int32_t var_98 = *arg1
int32_t result = sub_140374350(*(arg1 + 8), &var_98, arg2, arg3)

if (result != 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297ab20(&exceptionObject, "Data decompression (zlib) failed.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

uint64_t r10 = zx.q(var_98)

if (r10.d != 0)
    void* rdx_1 = *(arg1 + 8)
    void* r8_1 = rdx_1 + r10
    char* rax_3 = rdx_1 + 1
    
    if (rax_3 u< r8_1)
        do
            *rax_3 += rax_3[-1] - 0x80
            rax_3 = &rax_3[1]
        while (rax_3 u< r8_1)
        
        rdx_1 = *(arg1 + 8)
        r10 = zx.q(var_98)
    
    uint64_t r9_1 = zx.q(r10.d)
    uint64_t i_2 = zx.q(r10.d) u>> 5
    void* r8_4 = ((r9_1 + 1) u>> 1) + rdx_1
    
    if (i_2 != 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            void* rax_4 = rdx_1
            rdx_1 += 0x10
            int32_t zmm2[0x4] = *rax_4
            int128_t* rax_5 = r8_4
            r8_4 += 0x10
            int64_t zmm1_1 = (*rax_5).q
            *rbx = _mm_unpacklo_epi8(zmm2, zmm1_1)
            rbx = &rbx[2]
            rbx[1] = _mm_unpackhi_epi8(zmm2, zmm1_1)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    uint64_t rcx_3 = i_2 << 5
    
    if (rcx_3 u< r9_1)
        void* rbx_1 = rbx - rcx_3
        
        do
            char rax_7
            
            if ((rcx_3.b & 1) != 0)
                rax_7 = *r8_4
                r8_4 += 1
            else
                rax_7 = *rdx_1
                rdx_1 += 1
            
            *(rbx_1 + rcx_3) = rax_7
            rcx_3 += 1
        while (rcx_3 u< r9_1)
    
    result = r10.d

__security_check_cookie(rax_1 ^ &var_b8)
return result
