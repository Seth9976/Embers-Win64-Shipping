// 函数: sub_1423871c0
// 地址: 0x1423871c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f59f70 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f59f70)
    
    if (data_143f59f70 == 0xffffffff)
        data_143f59f6c = data_143a2ffa4.d
        _Init_thread_footer(&data_143f59f70)

if (data_143f59f78 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f59f78)
    
    if (data_143f59f78 == 0xffffffff)
        data_143f59f74 = data_143a2ffa8.d
        _Init_thread_footer(&data_143f59f78)

if (data_143f59fcc s> *(rbx + 0x14))
    _Init_thread_header(&data_143f59fcc)
    
    if (data_143f59fcc == 0xffffffff)
        data_143f59f80 = *(arg1 + 0x1b0)
        data_143f59f90 = *(arg1 + 0x1c0)
        data_143f59fa0 = *(arg1 + 0x1d0)
        data_143f59fb0 = *(arg1 + 0x1e0)
        data_143f59fc0 = *(arg1 + 0x1f0)
        data_143f59fc8 = *(arg1 + 0x1f8)
        _Init_thread_footer(&data_143f59fcc)

int32_t result

if (not(data_143f59f6c.d f!= data_143a2ffa4) && not(data_143f59f74.d f!= data_143a2ffa8))
    result = memcmp(&data_143f59f80, arg1 + 0x1b0, 0x4c)

if (data_143f59f6c.d f!= data_143a2ffa4 || data_143f59f74.d f!= data_143a2ffa8 || result != 0)
    int64_t* i = *(arg1 + 0x10)
    
    for (void* rsi_2 = sx.q(*(arg1 + 0x18)) * 0xd8 + i; i != rsi_2; i = &i[0x1b])
        sub_1423b7f00(i, arg1 + 0x1b0)
        
        if (data_143f59fb0:8.d != *(arg1 + 0x1e8))
            i[0xf] = data_143dbb3b8
    
    if (data_143f59fb0:8.d != *(arg1 + 0x1e8))
        void* r8_1 = arg1 + 0x340
        int32_t rdx_3 = 0x20
        int64_t* rsi_3 = *r8_1
        void* rcx_1 = nullptr
        void* var_40_1 = nullptr
        int32_t var_38_1 = 0
        uint64_t r12_2 = sx.q(*(r8_1 + 8)) << 3 u>> 3
        int32_t r15_1 = 0
        int32_t var_34_1 = 0x20
        int64_t r14_1 = 0
        
        if (rsi_3 u> &rsi_3[sx.q(*(r8_1 + 8))])
            r12_2 = 0
        
        void var_140
        
        if (r12_2 != 0)
            do
                int64_t* rbx_1 = *rsi_3
                
                if (rbx_1 != 0)
                    int64_t r13_1 = *rbx_1
                    var_38_1 = r15_1 + 1
                    
                    if (r15_1 + 1 s> rdx_3)
                        sub_1407c3a50(&var_140, r15_1)
                        rcx_1 = var_40_1
                    
                    void* rdx_5 = &var_140
                    
                    if (rcx_1 != 0)
                        rdx_5 = rcx_1
                    
                    *(rdx_5 + (sx.q(r15_1) << 3)) = r13_1
                    sub_142395540(rbx_1, nullptr)
                    rdx_3 = var_34_1
                    rcx_1 = var_40_1
                    r15_1 = var_38_1
                
                rsi_3 = &rsi_3[1]
                r14_1 += 1
            while (r14_1 != r12_2)
            
            r8_1 = arg1 + 0x340
        
        bool cond:1_1 = *(r8_1 + 0xc) == 0
        *(r8_1 + 8) = 0
        
        if (not(cond:1_1))
            sub_1405c5570(r8_1, 0)
            rcx_1 = var_40_1
            r15_1 = var_38_1
        
        void* rbx_2 = &var_140
        int64_t rsi_4 = 0
        
        if (rcx_1 != 0)
            rbx_2 = rcx_1
        
        int64_t r14_2 = sx.q(r15_1) << 3
        uint64_t r14_3 = r14_2 u>> 3
        
        if (rbx_2 u> r14_2 + rbx_2)
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                sub_142384c80(arg1, *rbx_2)
                rsi_4 += 1
                rbx_2 += 8
            while (rsi_4 != r14_3)
        
        int64_t* var_188 = nullptr
        int32_t var_180_1 = 0
        sub_14239a380(arg1 + 0x220)
        sub_1423b09b0(*(arg1 + 0x218), &var_188)
        int64_t* r14_4 = var_188
        int64_t r12_3 = 0
        void* rcx_8 = &r14_4[sx.q(var_180_1)]
        uint64_t r15_5 = (rcx_8 - r14_4 + 7) u>> 3
        
        if (r14_4 u> rcx_8)
            r15_5 = 0
        
        uint64_t var_178_1 = r15_5
        
        if (r15_5 != 0)
            do
                void* rsi_5 = *r14_4
                
                if (*(arg1 + 0x358) != 0 && rsi_5 != 0)
                    EnterCriticalSection(arg1 + 0x580)
                    void var_170
                    sub_1423a4f80(&var_170, 3, nullptr, nullptr)
                    int32_t rax_16 = *(rsi_5 + 0xc)
                    void* const rax_20
                    
                    if (rax_16 s>= data_143e1d9b4)
                        rax_20 = nullptr
                    else
                        uint32_t rdx_8 = zx.d(rax_16.w)
                        
                        if (rax_16 s< 0)
                            rax_16 += 0xffff
                            rdx_8 -= 0x10000
                        
                        rax_20 =
                            *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3)) + sx.q(rdx_8) * 0x18
                    
                    if (((*(rax_20 + 8) u>> 0x1d).b & 1) == 0 && (*(rsi_5 + 8) & 0x18000) == 0)
                        *(rsi_5 + 0x208) |= 0x20
                        char rax_23 = *(rsi_5 + 0x208)
                        
                        if ((rax_23 & 0x40) == 0)
                            *(rsi_5 + 0x208) = rax_23 | 0x40
                            int64_t r13_2 = sx.q(*(arg1 + 0x250))
                            int32_t rax_24 = (r13_2 + 1).d
                            *(arg1 + 0x250) = rax_24
                            
                            if (rax_24 s> *(arg1 + 0x254))
                                sub_1405a4d70(arg1 + 0x248)
                            
                            r15_5 = var_178_1
                            *(*(arg1 + 0x248) + (r13_2 << 3)) = rsi_5
                            *(rsi_5 + 0x208) |= 0x10
                    
                    sub_1423a6360(&var_170)
                    
                    if (arg1 != -0x580)
                        LeaveCriticalSection(arg1 + 0x580)
                
                r14_4 = &r14_4[1]
                r12_3 += 1
            while (r12_3 != r15_5)
            
            r14_4 = var_188
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
        
        if (var_40_1 != 0)
            sub_140a74f90(var_40_1)
    
    int128_t zmm1 = data_143a2ffa8
    data_143f59f6c = data_143a2ffa4.d
    uint128_t zmm0 = *(arg1 + 0x1b0)
    data_143f59f74 = zmm1.d
    data_143f59f80 = zmm0
    data_143f59f90 = *(arg1 + 0x1c0)
    data_143f59fa0 = *(arg1 + 0x1d0)
    data_143f59fb0 = *(arg1 + 0x1e0)
    data_143f59fc0 = *(arg1 + 0x1f0)
    result = *(arg1 + 0x1f8)
    data_143f59fc8 = result

__security_check_cookie(rax_1 ^ &var_1a8)
return result
