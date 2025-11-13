// 函数: sub_141d0b7d0
// 地址: 0x141d0b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rbx = nullptr
int32_t rax_2 = 0

if (0 == *(arg1 + 0x128))
    *(arg1 + 0x128) = 0
else
    rax_2 = *(arg1 + 0x128)

if (rax_2 s> 0)
    EnterCriticalSection(arg1 + 0x100)
    int64_t rbp_1 = sx.q(*(arg1 + 0xf8))
    
    if (rbp_1.d != 0)
        int32_t rax_3 = *(arg1 + 0x140)
        int32_t rdx_1 = rax_3 + rbp_1.d
        
        if (rdx_1 s> *(arg1 + 0x144))
            sub_1405c5570(arg1 + 0x138, rdx_1)
            rax_3 = *(arg1 + 0x140)
        
        memcpy(*(arg1 + 0x138) + (sx.q(rax_3) << 3), *(arg1 + 0xf0), (rbp_1 << 3).d)
        *(arg1 + 0x140) += rbp_1.d
    
    *(arg1 + 0x128)
    *(arg1 + 0x128) += neg.d(*(arg1 + 0xf8))
    bool cond:0_1 = *(arg1 + 0xfc) == 0
    *(arg1 + 0xf8) = 0
    
    if (not(cond:0_1))
        sub_1405c5570(arg1 + 0xf0, 0)
    
    if (arg1 != -0x100)
        LeaveCriticalSection(arg1 + 0x100)
    
    rbx = nullptr

int32_t result = *(arg1 + 0x140)
int32_t r12 = 0

if (result s> 0)
    int32_t rbp_2 = 1
    uint128_t zmm6 = 0x4170000000000000
    int32_t** rsi_1 = nullptr
    int32_t var_a8_1 = 1
    int32_t** var_a0_1 = nullptr
    
    while (true)
        int32_t* r15_1 = *(rsi_1 + *(arg1 + 0x138))
        bool z_1
        
        if (0 == r15_1[9])
            r15_1[9] = 0
            z_1 = true
        else
            r15_1[9]
            z_1 = false
        
        if (z_1)
            int32_t rax_10 = *r15_1
            
            if (*(arg1 + 0x3c) == rax_10)
                *(arg1 + 0x38) -= 1
            
            if (*(arg1 + 0x54) == rax_10)
                *(arg1 + 0x50) -= 1
            
            if (*(arg1 + 0x6c) == rax_10)
                *(arg1 + 0x68) -= 1
            
            if (*(arg1 + 0x84) == rax_10)
                *(arg1 + 0x80) -= 1
            
            if (*(arg1 + 0x9c) == rax_10)
                *(arg1 + 0x98) -= 1
            
            if (*(arg1 + 0xb4) == rax_10)
                *(arg1 + 0xb0) -= 1
            
            if (*(arg1 + 0xcc) == rax_10)
                *(arg1 + 0xc8) -= 1
            
            if (*(arg1 + 0xe4) == rax_10)
                *(arg1 + 0xe0) -= 1
            
            int32_t rcx_6 = *(arg1 + 0x140)
            int32_t rax_12 = rcx_6 - r12
            
            if (rax_12 != 1)
                int64_t rcx_7 = *(arg1 + 0x138)
                memmove(rcx_7 + (sx.q(r12) << 3), rcx_7 + (sx.q(rbp_2) << 3), (rax_12 - 1) << 3)
                rcx_6 = *(arg1 + 0x140)
            
            *(arg1 + 0x140) = rcx_6 - 1
            sub_1405c53d0(arg1 + 0x138)
            r12 -= 1
            rbp_2 -= 1
            rsi_1 -= 8
            int32_t rax_17 = sub_140a20af0()
            uint64_t rdx_4 = zx.q(rax_17)
            void* const rax_18
            
            if (rax_17 != 0)
                rax_18 = *(&data_143cf0bf8 + (rdx_4 u>> 0xe << 3)) + (zx.q(rdx_4.d) & 0x3fff) * 0x18
            else
                rax_18 = nullptr
            
            *(rax_18 + 8) = r15_1
            zmm6 = sub_1405a42f0(arg1 + 0x150, rdx_4.d)
        else if (*(r15_1 + 0x18) == 0)
            void* rcx_14 = arg1 + 0x3c
            int32_t rdi_2 = 0
            int64_t rax_22 = 0
            
            while (true)
                if (*rcx_14 != *r15_1)
                    rdi_2 += 1
                    rax_22 += 1
                    rcx_14 += 0x18
                    
                    if (rax_22 s< 8)
                        continue
                    
                    goto label_141d0ba8c
                
                int64_t rbx_2 = rax_22 * 3
                *(arg1 + (rbx_2 << 3) + 0x38) += 1
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                void* rcx_16 = arg1 + (sx.q(rdi_2) + 2) * 0x18
                *(arg1 + (rbx_2 << 3) + 0x40) =
                    float.d(performanceCount) f* data_143d796f8 f+ zmm6.q
                
                if (rcx_16 != 0)
                    *(r15_1 + 0x18) = rcx_16
                else
                    rbx = nullptr
                label_141d0ba8c:
                    
                    if (*(arg1 + 0x38) == 0)
                        rbx = arg1 + 0x30
                    
                    if (*(arg1 + 0x50) == 0 && (rbx == 0 || not(*(arg1 + 0x58) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0x48
                    
                    if (*(arg1 + 0x68) == 0 && (rbx == 0 || not(*(arg1 + 0x70) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0x60
                    
                    if (*(arg1 + 0x80) == 0 && (rbx == 0 || not(*(arg1 + 0x88) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0x78
                    
                    if (*(arg1 + 0x98) == 0 && (rbx == 0 || not(*(arg1 + 0xa0) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0x90
                    
                    if (*(arg1 + 0xb0) == 0 && (rbx == 0 || not(*(arg1 + 0xb8) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0xa8
                    
                    if (*(arg1 + 0xc8) == 0 && (rbx == 0 || not(*(arg1 + 0xd0) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0xc0
                    
                    if (*(arg1 + 0xe0) == 0 && (rbx == 0 || not(*(arg1 + 0xe8) f>= *(rbx + 0x10))))
                        rbx = arg1 + 0xd8
                    
                    if (rbx == 0)
                        break
                    
                    *(rbx + 8) += 1
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    *(rbx + 0x10) = float.d(performanceCount_1) f* data_143d796f8 f+ zmm6.q
                    *(rbx + 0xc) = *r15_1
                    *(r15_1 + 0x18) = rbx
                    void* rax_27 = *(arg1 + 8)
                    
                    if (rax_27 != 0 && *(rax_27 + 0x38) s> 0)
                        int64_t* rcx_18 = *(arg1 + 0x28)
                        (*(*rcx_18 + 0x178))(rcx_18, *(r15_1 + 8))
                        int64_t* rcx_19 = *(arg1 + 0x28)
                        (*(*rcx_19 + 0x150))(rcx_19, **(r15_1 + 0x18), *(r15_1 + 0x10))
                        int32_t rax_31
                        int64_t rcx_21
                        rax_31, rcx_21 = sub_140b21160(**(r15_1 + 0x18), r15_1[4], 0)
                        void* r9_1 = *(arg1 + 8)
                        
                        if (r9_1 == 0 || *(r9_1 + 0x38) s<= 0
                                || rax_31 != *(*(r9_1 + 0x30) + (sx.q(*r15_1) << 2)))
                            rcx_21.b = 0
                        else
                            rcx_21.b = 1
                        
                        if (rcx_21.b == 0)
                            int64_t var_58
                            __builtin_memset(&var_58, 0, 0x14)
                            sub_140b3f690(*(r9_1 + 0x30), sx.q(*(r9_1 + 0x38)) << 2, &var_58)
                            int64_t* rcx_23 = *(arg1 + 0x28)
                            int64_t rdi_3 = sx.q(*r15_1)
                            int64_t rbx_3 = *(*(arg1 + 8) + 0x30)
                            int64_t var_88
                            int64_t var_68
                            sub_140596d10(&var_88, (*(*rcx_23 + 0x10))(rcx_23, &var_68))
                            int64_t rcx_25 = var_68
                            int32_t var_78_1 = rdi_3.d
                            int32_t var_74_1 = *(rbx_3 + (rdi_3 << 2))
                            int32_t var_70_1 = rax_31
                            
                            if (rcx_25 != 0)
                                sub_140a74f90(rcx_25)
                            
                            sub_141cfc6e0(&var_88)
                            int64_t rcx_27 = var_88
                            
                            if (rcx_27 != 0)
                                sub_140a74f90(rcx_27)
                            
                            rsi_1 = var_a0_1
                        
                        rbp_2 = var_a8_1
                
                r15_1[9] -= 1
                r15_1[8] += 1
                int64_t* rcx_28 = *(r15_1 + 0x28)
                
                if (rcx_28 != 0)
                    int64_t rdx_15 = *rcx_28
                    (*(rdx_15 + 0x10))(rcx_28, rdx_15)
                
                break
            
            rbx = nullptr
        
        rbp_2 += 1
        rsi_1 = &rsi_1[1]
        r12 += 1
        var_a8_1 = rbp_2
        var_a0_1 = rsi_1
        
        if (r12 s>= *(arg1 + 0x140))
            break

__security_check_cookie(rax_1 ^ &var_c8)
return result
