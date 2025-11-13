// 函数: sub_14206aa50
// 地址: 0x14206aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
void* result = __security_cookie ^ &var_158
void* result_1 = result
void* rdi = *(arg1 + 0x10)
int32_t* rsi = rdi + 0x28

if (*(rdi + 0x28) != 0)
    int128_t var_108
    sub_1421f44a0(*(arg1 + 0x18), &var_108)
    void* rax_1 = *(rdi + 0x20)
    
    if (rax_1 != 0)
        rdi = rax_1
    
    int64_t rax_2 = sx.q(*rsi)
    uint8_t r10_2 = (*(arg1 + 8) u>> 1).b & 1
    int64_t rcx_1 = *(*(rdi + (rax_2 << 3) - 8) + 0x18)
    int64_t rcx_2 = *(*(rdi + (rax_2 << 3) - 8) + 0x20)
    int32_t rax_5 = *(arg1 + 4)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_5)
    int32_t rdx_2
    
    if (r10_2 == 0)
        rdx_2 = 0x20
    else
        rdx_2 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_5 - 1)
    char rax_7
    
    if (rax_5 == 1)
        rax_7 = 0x20
    else
        rax_7 = 0x1f - temp0_3
    
    int32_t rax_8 = 0xffff
    char rcx_7 = 0x10
    int32_t r9_2 = (1 << ((0x20 - rax_7) & (not.d(rdx_2 << 0x1a s>> 0x1f)).b)) - 1
    
    if (r10_2 != 0)
        int32_t rax_9 = 1
        
        if (r9_2 u>= 1)
            rax_9 = r9_2
        
        r9_2 = rax_9
        int32_t rax_10 = rax_9 << 0x10
        uint64_t rflags_3
        char temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_10)
        char r8
        
        if (rax_10 == 0)
            r8 = 0x20
        else
            r8 = 0x1f - temp0_4
        
        rcx_7 = r8 + 0x10
        rax_8 = not.d(r9_2 << rcx_7)
    
    void* rcx_9 = *(arg1 + 0x10)
    int128_t var_98 = var_108
    int128_t var_f8
    int128_t var_88_1 = var_f8
    int64_t rdx_6 = sx.q(*(rcx_9 + 0x28))
    int128_t var_e8
    int128_t var_78_1 = var_e8
    int128_t var_d8
    int128_t var_68_1 = var_d8
    int128_t var_58_1 = rcx_1.o
    int32_t rax_14
    
    if (rdx_6.d == 0)
        rax_14 = 0
    else
        void* rax_13 = *(rcx_9 + 0x20)
        
        if (rax_13 != 0)
            rcx_9 = rax_13
        
        rax_14 = *(*(rcx_9 + (rdx_6 << 3) - 8) + 0x4c)
    
    PDB1::OpenEx2W(arg2, &var_98, 0, r9_2 << rcx_7 | rax_8, rax_14, arg3)
    
    if (*rsi s> 1)
        void* rcx_12 = *(arg1 + 0x10)
        int128_t* rdx_8 = nullptr
        var_78_1:8.d = 0
        int32_t rdi_1 = 0
        void* var_a8_1 = nullptr
        void* rbx_1 = rcx_12
        int32_t var_a0_1 = 0
        int32_t r8_1 = 4
        var_78_1.q = 0
        var_78_1:0xc.d = 4
        int32_t var_9c_1 = 3
        void* rax_15 = *(rcx_12 + 0x20)
        
        if (rax_15 != 0)
            rbx_1 = rax_15
        
        int64_t rsi_1 = 0
        int64_t r12_1 = sx.q(*(rcx_12 + 0x28)) << 3
        uint64_t r12_2 = r12_1 u>> 3
        
        if (rbx_1 u> r12_1 + rbx_1)
            r12_2 = 0
        
        void var_b8
        
        if (r12_2 != 0)
            do
                void* r15_1 = *rbx_1
                int64_t r14_1 = *(r15_1 + 0x20)
                
                if (r14_1 != rcx_2)
                    var_78_1:8.d = rdi_1 + 1
                    
                    if (rdi_1 + 1 s> r8_1)
                        sub_140869430(&var_98, rdi_1)
                        rdx_8 = var_78_1.q
                    
                    int128_t* rcx_14 = &var_98
                    
                    if (rdx_8 != 0)
                        rcx_14 = rdx_8
                    
                    *(rcx_14 + (sx.q(rdi_1) << 3)) = r14_1
                    int64_t rdi_2 = sx.q(var_a0_1)
                    int32_t rax_20 = (rdi_2 + 1).d
                    var_a0_1 = rax_20
                    
                    if (rax_20 s> var_9c_1)
                        sub_141e30800(&var_b8, rdi_2.d)
                    
                    void* rdx_11 = &var_b8
                    
                    if (var_a8_1 != 0)
                        rdx_11 = var_a8_1
                    
                    *(rdx_11 + (rdi_2 << 2)) = *(r15_1 + 0x4c)
                    r8_1 = var_78_1:0xc.d
                    rdi_1 = var_78_1:8.d
                    rdx_8 = var_78_1.q
                
                rbx_1 += 8
                rsi_1 += 1
            while (rsi_1 != r12_2)
        
        int64_t* rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_16 = &rdi_5[1]
        
        if (rcx_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_16 = &rdi_5[1]
        
        *(arg2 + 0x30) = rcx_16
        *rdi_5 = rcx_2
        void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_24 = &rcx_20[6]
        
        if (rax_24 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_24 = &rcx_20[6]
        
        *(arg2 + 0x30) = rax_24
        int128_t* rsi_2 = &var_98
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_20
        *(arg2 + 8) = &rcx_20[1]
        rcx_20[3] = rdi_5
        rcx_20[1] = 0
        *rcx_20 = &data_142da7798
        rcx_20[2].d = 1
        rcx_20[4].d = 0
        *(rcx_20 + 0x24) = 3
        rcx_20[5] = 0
        int128_t* rax_27 = var_78_1.q
        int64_t i_5 = sx.q(var_78_1:8.d)
        
        if (rax_27 != 0)
            rsi_2 = rax_27
        
        int64_t* rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t rdx_12 = (i_5 << 3).d
        int64_t r14_2 = sx.q(rdx_12)
        void* rax_28 = r14_2 + rdi_10
        
        if (rax_28 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, rdx_12 + 8)
            rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_28 = r14_2 + rdi_10
        
        *(arg2 + 0x30) = rax_28
        int64_t i_2 = i_5
        
        if (i_5.d s> 0)
            int64_t* rcx_25 = rdi_10
            int64_t i
            
            do
                *rcx_25 = *(rsi_2 - rdi_10 + rcx_25)
                rcx_25 = &rcx_25[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_30 = &rcx_28[6]
        
        if (rax_30 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_30 = &rcx_28[6]
        
        int128_t* r9_5 = &var_98
        *(arg2 + 0x30) = rax_30
        void**** rax_31 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_31 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[2].d = i_5.d
        rcx_28[3] = rdi_10
        rcx_28[4].d = 2
        *(rcx_28 + 0x24) = 3
        rcx_28[5] = 0
        rcx_28[1] = 0
        *rcx_28 = &data_142da7798
        void* rcx_32 = &var_b8
        
        if (var_a8_1 != 0)
            rcx_32 = var_a8_1
        
        int128_t* rax_34 = var_78_1.q
        
        if (rax_34 != 0)
            r9_5 = rax_34
        
        int32_t var_138_1
        var_138_1.q = rcx_32
        sub_1420534a0(arg2, arg3, rcx_1, r9_5, var_138_1, 0, var_78_1:8.d)
        int128_t* rax_36 = var_78_1.q
        int128_t* rsi_4 = &var_98
        int64_t i_4 = sx.q(var_78_1:8.d)
        
        if (rax_36 != 0)
            rsi_4 = rax_36
        
        int64_t* rdi_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t rdx_15 = (i_4 << 3).d
        int64_t r15_2 = sx.q(rdx_15)
        void* rax_37 = r15_2 + rdi_15
        
        if (rax_37 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, rdx_15 + 8)
            rdi_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_37 = r15_2 + rdi_15
        
        *(arg2 + 0x30) = rax_37
        int64_t i_3 = i_4
        
        if (i_4.d s> 0)
            int64_t* rcx_35 = rdi_15
            int64_t i_1
            
            do
                *rcx_35 = *(rsi_4 - rdi_15 + rcx_35)
                rcx_35 = &rcx_35[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_38[6]
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_38[6]
        
        *(arg2 + 0x30) = rax_39
        void**** rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_38
        *(arg2 + 8) = &rcx_38[1]
        rcx_38[1] = 0
        *rcx_38 = &data_142da7798
        rcx_38[2].d = i_4.d
        rcx_38[3] = rdi_15
        rcx_38[4].d = 0
        *(rcx_38 + 0x24) = 1
        rcx_38[5] = 0
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
        
        int64_t rcx_43 = var_78_1.q
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
    
    int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_44 = &rbx_4[1]
    
    if (rcx_44 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_44 = &rbx_4[1]
    
    *(arg2 + 0x30) = rcx_44
    *rbx_4 = rcx_2
    void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_48[6]
    
    if (rax_43 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_48[6]
    
    *(arg2 + 0x30) = rax_43
    void**** rax_44 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_44 = rcx_48
    result = &rcx_48[1]
    *(arg2 + 8) = result
    *result = 0
    rcx_48[4].d = 0
    rcx_48[5] = 0
    *rcx_48 = &data_142da7798
    rcx_48[2].d = 1
    rcx_48[3] = rbx_4
    *(rcx_48 + 0x24) = 1

__security_check_cookie(result_1 ^ &var_158)
return result
