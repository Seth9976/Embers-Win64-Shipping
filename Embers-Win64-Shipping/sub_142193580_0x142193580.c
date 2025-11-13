// 函数: sub_142193580
// 地址: 0x142193580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
void* result = __security_cookie ^ &var_1a8
void* result_1 = result
void* rdi = *(arg1 + 0x408)
int64_t* r13 = arg3
int64_t* r12 = arg2
void* r15 = arg1
int64_t (* var_68)[0x10] = nullptr
int32_t var_60 = 0
int32_t var_5c = 0xc

if (rdi != 0)
    int32_t rcx = 0
    int32_t i = 0
    int64_t* r14_1 = nullptr
    int64_t* var_170 = nullptr
    int64_t var_168_1 = 0
    int32_t i_1 = 0
    int64_t var_128[0x10]
    
    if (*(rdi + 0x48) s> 0)
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        int64_t* rdx = nullptr
        int64_t* var_150_1 = nullptr
        
        do
            void* rax_2 = *(rdx + *(rdi + 0x40))
            void* var_138_1 = rax_2
            
            if (rax_2 != 0)
                int32_t j = 0
                
                if (*(rax_2 + 0x48) s> 0)
                    void** r12_1 = nullptr
                    
                    do
                        void* rdi_1 = *(r12_1 + *(rax_2 + 0x40))
                        
                        if (rdi_1 != 0 && *(rdi_1 + 0x30) != 0)
                            var_168_1.d = 0
                            
                            if (rcx s< 0 && rcx != 0)
                                sub_1405c5570(&var_170, 0)
                            
                            sub_142193980(rdi_1, &var_170, *(r15 + 0x408) + 0xf8, r15 + 0x410)
                            void* rax_4 = *(rdi_1 + 0x30)
                            int64_t r14_2 = 0
                            int32_t rdx_2 = *(rax_4 + 0xb4)
                            int32_t rcx_3 = *(rax_4 + 0xb0)
                            
                            if (rcx_3 s>= rdx_2)
                                rdx_2 = rcx_3
                            
                            int64_t* rdx_3 = var_170
                            zmm6 = _mm_cvtepi32_ps(zx.o(rdx_2))
                            int64_t* rsi_1 = rdx_3
                            uint64_t r15_2 = sx.q(var_168_1.d) << 3 u>> 3
                            
                            if (rdx_3 u> &rdx_3[sx.q(var_168_1.d)])
                                r15_2 = 0
                            
                            if (r15_2 != 0)
                                int64_t (* rdi_2)[0x10] = var_68
                                
                                do
                                    int64_t k = *rsi_1
                                    
                                    if (k != 0)
                                        int64_t (* rdx_4)[0x10] = &var_128
                                        
                                        if (rdi_2 != 0)
                                            rdx_4 = rdi_2
                                        
                                        void* rax_9 = &(*rdx_4)[sx.q(var_60) * 2]
                                        
                                        if (rdx_4 == rax_9)
                                        label_142193742:
                                            int64_t rbx_1 = sx.q(var_60)
                                            int32_t rax_10 = (rbx_1 + 1).d
                                            var_60 = rax_10
                                            
                                            if (rax_10 s> var_5c)
                                                sub_1421999e0(&var_128, rbx_1.d)
                                                rdi_2 = var_68
                                            
                                            int64_t (* rdx_6)[0x10] = &var_128
                                            
                                            if (rdi_2 != 0)
                                                rdx_6 = rdi_2
                                            
                                            int64_t* rdx_7 = &(*rdx_6)[rbx_1 * 2]
                                            
                                            if (rdx_6 != neg.q(rbx_1 << 4))
                                                rdx_7[1].d = zmm6.d
                                                *rdx_7 = k
                                                rdi_2 = var_68
                                        else
                                            while (*rdx_4 != k)
                                                rdx_4 = &(*rdx_4)[2]
                                                
                                                if (rdx_4 == rax_9)
                                                    goto label_142193742
                                            
                                            int32_t rax_16 = int.d(fconvert.t((*rdx_4)[1].d))
                                            int32_t rcx_13 = int.d(zmm6.d)
                                            
                                            if (rax_16 s>= rcx_13)
                                                rcx_13 = rax_16
                                            
                                            (*rdx_4)[1].d = _mm_cvtepi32_ps(zx.o(rcx_13)).d
                                            rdi_2 = var_68
                                    
                                    rsi_1 = &rsi_1[1]
                                    r14_2 += 1
                                while (r14_2 != r15_2)
                            
                            r15 = arg1
                            rcx = var_168_1:4.d
                        
                        rax_2 = var_138_1
                        j += 1
                        r12_1 = &r12_1[1]
                    while (j s< *(rax_2 + 0x48))
                    
                    rdi = *(r15 + 0x408)
                    rdx = var_150_1
                    i = i_1
            
            i += 1
            rdx = &rdx[1]
            i_1 = i
            var_150_1 = rdx
        while (i s< *(rdi + 0x48))
        
        r14_1 = var_170
        r12 = arg2
        r13 = arg3
    
    result = sub_1421864e0(&var_128, r15 + 0x410, 0x3f800000)
    int64_t (* rcx_9)[0x10]
    
    if (var_60 == 0)
        rcx_9 = var_68
    else
        TEB* gsbase
        
        if (data_143f4d874
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f4d874)
            
            if (data_143f4d874 == 0xffffffff)
                int64_t rcx_15
                int64_t rdi_4
                rdi_4, rcx_15 = __memfill_u32(&data_143a2ee24, 0x3f800000, 4)
                _Init_thread_footer(&data_143f4d874)
        
        rcx_9 = var_68
        int64_t (* rdi_3)[0x10] = &var_128
        var_170 = nullptr
        result = &data_143a2ee20
        int32_t var_160_1 = 0xffff0000
        
        if (rcx_9 != 0)
            rdi_3 = rcx_9
        
        void* var_168_2 = &data_143a2ee20
        void* rbx_4 = &(*rdi_3)[sx.q(var_60) * 2]
        
        if (rdi_3 != rbx_4)
            do
                var_170 = *rdi_3
                int128_t zmm3
                zmm3.d = (*rdi_3)[1].d.d f* *(r15 + 0x118)
                result = sub_1423b34d0(r12, r15 + 0x100, &var_170, zmm3, r13)
                rdi_3 = &(*rdi_3)[2]
            while (rdi_3 != rbx_4)
            
            rcx_9 = var_68
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)
        rcx_9 = var_68
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(result_1 ^ &var_1a8)
return result
