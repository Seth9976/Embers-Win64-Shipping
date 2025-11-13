// 函数: sub_141998890
// 地址: 0x141998890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
TEB* gsbase
int64_t result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cd80cc s> *(0x14 + result))
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int64_t r14_1 = data_1439c91c8
    
    if (arg2 != 0)
        r14_1 = data_14395da00
    
    int64_t rdi_1
    
    if (arg5 == 0)
        rdi_1 = data_14395d9e8
        
        if (arg7 != 0)
            rdi_1 = data_1439c91f8
    else
        rdi_1 = data_1439b4ac0
        
        if (arg7 != 0)
            rdi_1 = data_1439c91e0
    
    int40_t var_94_1 = 0
    int32_t var_8c
    __builtin_memset(&var_8c, 0, 0x3b)
    int128_t var_f0
    __builtin_memset(&var_f0, 0, 0x30)
    int128_t var_a8_1 = zx.o(0)
    int16_t var_50_1 = 0
    sub_140fdc870(arg1, &var_f0)
    int64_t var_b8_1 = data_14395da18
    int64_t var_c0_1 = r14_1
    int64_t var_b0_1 = rdi_1
    int64_t* rdi_2 = *((sx.q((*U"1111")[sx.q(data_1439c7a08)]) << 3) + &data_143f13910)
    void* var_110
    sub_1419a2ec0(rdi_2, &var_110, &data_143f140e0, 0)
    uint32_t rcx_4 = zx.d(var_94_1:4.b)
    void* r13_1 = var_110
    int32_t r8 = 1
    
    if (arg3 != 0)
        r8 = arg3
    
    uint64_t rax_6
    
    if (rcx_4 == 1 || rcx_4 == 0xd || rcx_4 == 0x11)
        rax_6 = zx.q(*(sx.q(data_143f0f1a0) * 0x14 + &data_143f025fc) u>> 0x1e) & 1
    else
        rax_6 = 0
    
    void* var_100
    sub_1419a2ec0(rdi_2, &var_100, &data_143f12f80, r8 - 1 + (rax_6 << 3).d)
    void* r14_2 = var_100
    var_f0.q = data_1439c9410
    int64_t rax_11 = 0
    
    if (r13_1 != 0)
        int64_t rdx_4 = sx.q(*(r13_1 + 0x10c))
        void* var_108
        int64_t* rdi_3 = *(var_108 + 0x10)
        int64_t rax_13 = rdi_3[3]
        
        if (*(rax_13 + (rdx_4 << 3)) == 0)
            sub_1419ccf30(rdi_3, rdx_4.d)
            rax_13 = rdi_3[3]
        
        rax_11 = *(rax_13 + (rdx_4 << 3))
    
    var_f0:8.q = rax_11
    int64_t rax_14 = 0
    
    if (r14_2 != 0)
        int64_t rdx_5 = sx.q(*(r14_2 + 0x10c))
        void* var_f8
        int64_t* rdi_4 = *(var_f8 + 0x10)
        int64_t rax_16 = rdi_4[3]
        
        if (*(rax_16 + (rdx_5 << 3)) == 0)
            sub_1419ccf30(rdi_4, rdx_5.d)
            rax_16 = rdi_4[3]
        
        rax_14 = *(rax_16 + (rdx_5 << 3))
    
    int128_t var_d0
    var_d0.q = rax_14
    int32_t var_98_1 = 1
    
    if (*arg9 != 0)
        void* rax_17 = arg9[2]
        void* rcx_10 = &arg9[4]
        
        if (rax_17 != 0)
            rcx_10 = rax_17
        
        (*arg9)((*(*rcx_10 + 8))(rcx_10), &var_f0)
    
    sub_1419870b0(arg1, &var_f0, 2)
    void*** rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_15[3]
    
    if (rax_20 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_15[3]
    
    *(arg1 + 0x30) = rax_20
    int64_t* rax_21 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_21 = rcx_15
    *(arg1 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    *rcx_15 = &data_142f18bb8
    rcx_15[2].d = arg8
    sub_141105780(r13_1, arg1, arg6)
    result = sub_1419ab500(r14_2, arg1, arg4, arg3)

if (*arg9 != 0)
    void* rax_24 = arg9[2]
    void* rcx_21 = &arg9[4]
    
    if (rax_24 != 0)
        rcx_21 = rax_24
    
    result = (*(*rcx_21 + 0x10))(rcx_21)

__security_check_cookie(rax_1 ^ &var_138)
return result
