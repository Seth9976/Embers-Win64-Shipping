// 函数: sub_140fd77d0
// 地址: 0x140fd77d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
int32_t result_1 = *(arg2 + 0x30) & zx.d(*(arg1 + 0x43b6))

if (result_1 == 0)
    *(arg1 + 0x43b6) = 0
    return 0

int32_t result
int32_t rcx_2

do
    int32_t i = 0
    rcx_2 = neg.d(result_1) & result_1
    uint64_t rflags_1
    int32_t i_2
    i_2, rflags_1 = _bit_scan_reverse(rcx_2)
    
    if (rcx_2 != 0)
        i = i_2
    
    int64_t i_1 = sx.q(i)
    void* rbx_1 = *(arg1 + (i_1 << 3) + 0x4260)
    void** rax_3 = *(rbx_1 + 0x18) + 0x20
    void* rdx_2
    
    if (rax_3[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_3
        
        if ((rdx_2.b & 1) != 0)
            rdx_2 = (rdx_2 s>> 1) + rax_3
    
    int64_t var_98
    sub_140b58260(&var_98, rdx_2, 1)
    int64_t rcx_4 = *(rsi + 0x78)
    int64_t rax_4 = var_98
    uint128_t zmm0_1 = zx.o(data_143dbb3b8)
    int64_t r12_1 = *(rbx_1 + 0x48)
    uint64_t rdx_4 = zx.q(*(rcx_4 + (i_1 << 2)))
    int64_t var_80 = rax_4
    zmm0_1 = _mm_cvtpd_ps(zmm0_1)
    int64_t var_a8
    int32_t var_a0
    
    if (rdx_4.d != 0)
        int32_t rbx_2 = *(rcx_4 + (rdx_4 << 2))
        int32_t* r14_2 = rcx_4 + (rdx_4 << 2) + 4
        int64_t zmm6_1 = _mm_cvtps_pd(zmm0_1.q)
        
        do
            uint16_t rdi_2 = (rbx_2 u>> 8).w
            int64_t* rsi_1 = *(r12_1 + (zx.q(rdi_2) << 3))
            uint32_t rbx_3
            
            if (rsi_1 != 0)
                rbx_3 = zx.d(rbx_2.b)
            else
                int64_t var_78
                int64_t* rax_6
                rax_6, zmm6_1 = sub_140b63b70(&var_80, &var_78)
                int16_t* const rcx_6
                
                if (rax_6[1].d == rsi_1.d)
                    rcx_6 = &data_142d40450
                else
                    rcx_6 = *rax_6
                
                var_a0.q = rcx_6
                rbx_3 = zx.d(rbx_2.b)
                var_a8.d = rbx_3
                sub_140af98a0("Unknown", 0x5a4, 
                    Null texture (resource %d bind %d) on UB Layout %s", zx.q(rdi_2))
                int64_t rcx_7 = var_78
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                sub_140afbb40()
            
            int64_t* rax_7 = rsi_1[9]
            
            if (not(zmm6_1 f== *rax_7))
                *rax_7 = zmm6_1
            
            void* rax_9 = (*(*rsi_1 + 0x48))(rsi_1)
            var_a0 = 0
            var_a8 = rsi_1[0xb]
            sub_140fd5010(arg1, *(rax_9 + 0x30), *(rax_9 + 0x40), rbx_3)
            rbx_2 = *r14_2
            r14_2 = &r14_2[1]
        while (rbx_2 u>> 0x18 == i)
        
        rax_4 = var_98
        rsi = arg2
        i_1 = sx.q(i)
        r12_1 = *(rbx_1 + 0x48)
    
    int64_t rcx_11 = *(rsi + 0x38)
    var_80 = rax_4
    uint64_t rax_12 = zx.q(*(rcx_11 + (i_1 << 2)))
    
    if (rax_12.d != 0)
        int32_t rdi_3 = *(rcx_11 + (rax_12 << 2))
        int32_t* r14_4 = rcx_11 + (rax_12 << 2) + 4
        
        do
            uint16_t rsi_3 = (rdi_3 u>> 8).w
            void* rbp_1 = *(r12_1 + (zx.q(rsi_3) << 3))
            uint32_t rdi_4
            
            if (rbp_1 != 0)
                rdi_4 = zx.d(rdi_3.b)
            else
                int64_t var_68
                int64_t* rax_14 = sub_140b63b70(&var_80, &var_68)
                int16_t* const rcx_13
                
                if (rax_14[1].d == rbp_1.d)
                    rcx_13 = &data_142d40450
                else
                    rcx_13 = *rax_14
                
                var_a0.q = rcx_13
                rdi_4 = zx.d(rdi_3.b)
                var_a8.d = rdi_4
                sub_140af98a0("Unknown", 0x5eb, Null SRV (resource %d bind %d) on UB Layout %s", 
                    zx.q(rsi_3))
                int64_t rcx_14 = var_68
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                sub_140afbb40()
            
            var_a0 = 0
            var_a8 = 0
            sub_140fd5010(arg1, *(rbp_1 + 0x20), *(rbp_1 + 0x18), rdi_4)
            rdi_3 = *r14_4
            r14_4 = &r14_4[1]
        while (rdi_3 u>> 0x18 == i)
        
        rsi = arg2
        i_1 = sx.q(i)
        r12_1 = *(rbx_1 + 0x48)
    
    int64_t rcx_16 = *(rsi + 0x48)
    uint64_t rax_18 = zx.q(*(rcx_16 + (i_1 << 2)))
    
    if (rax_18.d != 0)
        int32_t rcx_17 = *(rcx_16 + (rax_18 << 2))
        int32_t* rbx_5 = rcx_16 + (rax_18 << 2) + 4
        
        do
            uint64_t rdx_9 = zx.q(rcx_17.b)
            int64_t rax_20 = *(*(r12_1 + (zx.q((rcx_17 u>> 8).w) << 3)) + 0x18)
            var_80 = rax_20
            
            if (*(arg1 + (rdx_9 << 3) + 0x1f40) != rax_20)
                *(arg1 + (rdx_9 << 3) + 0x1f40) = rax_20
                int64_t* rcx_20 = *(arg1 + 0x188)
                (*(*rcx_20 + 0x50))(rcx_20, rdx_9, 1, &var_80, var_a8, var_a0)
            
            rcx_17 = *rbx_5
            rbx_5 = &rbx_5[1]
        while (rcx_17 u>> 0x18 == i)
    
    result = result_1
    result_1 ^= rcx_2
while (rcx_2 != result)
*(arg1 + 0x43b6) = 0
return result
