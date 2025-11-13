// 函数: sub_141005330
// 地址: 0x141005330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t result_1 = *(arg2 + 0x70) & zx.d(*(arg1 + 0x3b62))

if (result_1 == 0)
    *(arg1 + 0x3b62) = 0
    return 0

int128_t zmm6
int128_t var_58 = zmm6
int32_t result
int32_t rcx_2

do
    uint128_t zmm0 = zx.o(data_143dbb3b8)
    rcx_2 = neg.d(result_1) & result_1
    int32_t i = 0
    uint64_t rflags_1
    int32_t i_2
    i_2, rflags_1 = _bit_scan_reverse(rcx_2)
    zmm0 = _mm_cvtpd_ps(zmm0)
    
    if (rcx_2 != 0)
        i = i_2
    
    int64_t rcx_3 = *(arg2 + 0xb8)
    int64_t i_1 = sx.q(i)
    void* r13_1 = *(arg1 + (i_1 << 3) + 0x35e0)
    uint64_t rax_2 = zx.q(*(rcx_3 + (i_1 << 2)))
    int64_t r14_1 = *(r13_1 + 0xa8)
    
    if (rax_2.d != 0)
        int32_t rbx_1 = *(rcx_3 + (rax_2 << 2))
        int32_t* rdi_2 = rcx_3 + (rax_2 << 2) + 4
        zmm6 = _mm_cvtps_pd(zmm0.q)
        
        do
            int64_t* rcx_4 = *(r14_1 + (zx.q((rbx_1 u>> 8).w) << 3))
            int64_t* rax_6 = rcx_4[9]
            
            if (not(zmm6.q f== *rax_6))
                *rax_6 = zmm6.q
            
            void* rax_8 = (*(*rcx_4 + 0x48))()
            
            if (rax_8 != 0 && data_1439c7a34 u> 1)
                void* rcx_5 = *(rax_8 + 0xe8)
                
                if (rcx_5 != rax_8)
                    rax_8 = rcx_5
                
                if (rax_8 != 0)
                    while (*(rax_8 + 8) != *(arg1 + 0x138))
                        rax_8 = *(rax_8 + 0xb8)
                        
                        if (rax_8 == 0)
                            break
            
            void* rdx = *(rax_8 + 0xf0)
            
            if (rdx == 0)
                int64_t* rcx_7 = *(data_143f10e68 + 0x10)
                void* const rax_11
                
                if (rcx_7 == 0)
                    rax_11 = nullptr
                else
                    rax_11 = (*(*rcx_7 + 0x48))(rcx_7, rdx)
                    
                    if (rax_11 != 0 && data_1439c7a34 u> 1)
                        void* rcx_8 = *(rax_11 + 0xe8)
                        
                        if (rcx_8 != rax_11)
                            rax_11 = rcx_8
                        
                        if (rax_11 != 0)
                            while (*(rax_11 + 8) != *(arg1 + 0x138))
                                rax_11 = *(rax_11 + 0xb8)
                                
                                if (rax_11 == 0)
                                    break
                
                rdx = *(rax_11 + 0xf0)
            
            zmm6 = sub_14103d600(arg1 + 0x250, rdx, zx.d(rbx_1.b))
            rbx_1 = *rdi_2
            rdi_2 = &rdi_2[1]
        while (rbx_1 u>> 0x18 == i)
        
        r14_1 = *(r13_1 + 0xa8)
        arg2 = arg_10
        i_1 = sx.q(i)
    
    int64_t rcx_11 = *(arg2 + 0x78)
    uint64_t rax_14 = zx.q(*(rcx_11 + (i_1 << 2)))
    
    if (rax_14.d != 0)
        int32_t rcx_12 = *(rcx_11 + (rax_14 << 2))
        int32_t* rbx_3 = rcx_11 + (rax_14 << 2) + 4
        
        do
            void* rdx_1 = *(r14_1 + (zx.q((rcx_12 u>> 8).w) << 3))
            
            if (rdx_1 != 0 && data_1439c7a34 u> 1)
                while (*(rdx_1 + 0x20) != *(arg1 + 0x138))
                    rdx_1 = *(rdx_1 + 0x90)
                    
                    if (rdx_1 == 0)
                        break
            
            sub_14103d600(arg1 + 0x250, rdx_1, zx.d(rcx_12.b))
            rcx_12 = *rbx_3
            rbx_3 = &rbx_3[1]
        while (rcx_12 u>> 0x18 == i)
        
        r14_1 = *(r13_1 + 0xa8)
        arg2 = arg_10
    
    int64_t rcx_14 = *(arg2 + 0x88)
    uint64_t rax_21 = zx.q(*(rcx_14 + (i_1 << 2)))
    
    if (rax_21.d != 0)
        int32_t rdx_2 = *(rcx_14 + (rax_21 << 2))
        int32_t* r9_2 = rcx_14 + (rax_21 << 2) + 4
        
        do
            void* rcx_15 = *(r14_1 + (zx.q((rdx_2 u>> 8).w) << 3))
            
            if (rcx_15 != 0 && data_1439c7a34 u> 1)
                while (*(rcx_15 + 0x18) != *(arg1 + 0x138))
                    rcx_15 = *(rcx_15 + 0x20)
                    
                    if (rcx_15 == 0)
                        break
            
            uint64_t r8_4 = zx.q(rdx_2.b)
            
            if (*(arg1 + (r8_4 << 3) + 0x2f78) != rcx_15)
                *(arg1 + (r8_4 << 3) + 0x2f78) = rcx_15
                *(arg1 + 0x2eea) |= (1 << (r8_4.d u% 0x20)).w
            
            rdx_2 = *r9_2
            r9_2 = &r9_2[1]
        while (rdx_2 u>> 0x18 == i)
        
        arg2 = arg_10
    
    result = result_1
    result_1 ^= rcx_2
while (rcx_2 != result)
*(arg1 + 0x3b62) = 0
return result
