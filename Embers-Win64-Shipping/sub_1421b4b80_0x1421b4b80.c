// 函数: sub_1421b4b80
// 地址: 0x1421b4b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r15 = *(arg1 + 0x10)

if (r15 != 0)
    int64_t rbx_1 = sx.q(*arg1)
    
    if (data_143f4d8e8 == 0)
        result = sub_140a74f90(r15)
    else
        EnterCriticalSection(&data_143f4dc38)
        bool cond:1_1 = data_143a2eec8 == data_143a2eef4
        int32_t arg_8 = rbx_1.d
        int64_t* rdi_1
        
        if (cond:1_1)
        labelid_33:
            rdi_1 = sub_1421a5d30(&data_143a2eec0, rbx_1.d, &arg_8)
        else
            void* rcx = data_143a2ef00
            void* rax_1 = &data_143a2eef8
            
            if (rcx != 0)
                rax_1 = rcx
            
            int32_t rax_2 = *(rax_1 + (((sx.q(data_143a2ef08) - 1) & rbx_1) << 2))
            
            if (rax_2 == 0xffffffff)
            label_1421b4c49:
                rdi_1 = sub_1421a5d30(&data_143a2eec0, rbx_1.d, &arg_8)
            else
                int64_t r8_1 = data_143a2eec0
                int64_t rdx_4
                
                while (true)
                    rdx_4 = sx.q(rax_2) * 5
                    
                    if (*(r8_1 + (rdx_4 << 3)) == rbx_1.d)
                        break
                    
                    rax_2 = *(r8_1 + (rdx_4 << 3) + 0x20)
                    
                    if (rax_2 == 0xffffffff)
                        goto label_1421b4c49_2
                
                if (rax_2 == 0xffffffff)
                label_1421b4c49_1:
                    rdi_1 = sub_1421a5d30(&data_143a2eec0, rbx_1.d, &arg_8)
                else
                    void* rdi_3 = r8_1 + (rdx_4 << 3)
                    
                    if (rdi_3 == 0)
                    label_1421b4c49_2:
                        rdi_1 = sub_1421a5d30(&data_143a2eec0, rbx_1.d, &arg_8)
                    else
                        rdi_1 = rdi_3 + 8
        
        int64_t r14_1 = sx.q(rdi_1[1].d)
        int32_t rcx_2 = (r14_1 + 1).d
        rdi_1[1].d = rcx_2
        
        if (rcx_2 s> *(rdi_1 + 0xc))
            sub_140638870(rdi_1)
        
        *(*rdi_1 + (r14_1 << 3)) = r15
        int32_t rax_6 = data_143f4d878 + rbx_1.d
        bool cond:2_1 = rax_6 s<= data_143a2ee3c
        data_143f4d878 = rax_6
        
        if (not(cond:2_1))
            int32_t r10_1 = (data_143a2eee8).d
            void* var_90_1 = &data_143a2eed0
            int32_t rcx_4 = 0
            int32_t var_98_1 = 0
            int32_t var_94_1 = 1
            int32_t var_88_1 = 0xffffffff
            int64_t* rbx_2 = nullptr
            int64_t var_84_1 = 0
            int32_t rdi_2 = 0
            int32_t r8_3 = 0
            
            if (r10_1 != 0)
                void* rax_7 = data_143a2eee0
                void* r11_1 = &data_143a2eed0
                
                if (rax_7 != 0)
                    r11_1 = rax_7
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_9 = *r11_1
                
                if (rdx_9 != 0)
                label_1421b4d15:
                    int32_t rax_14 = neg.d(rdx_9) & rdx_9
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                    int32_t var_94_2 = rax_14
                    int32_t rax_15
                    
                    if (rax_14 == 0)
                        rax_15 = 0x20
                    else
                        rax_15 = 0x1f - temp0_2
                    
                    var_84_1.d = r8_3 - rax_15 + 0x1f
                    
                    if (r8_3 - rax_15 + 0x1f s> r10_1)
                        var_84_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_10 = sx.q(rcx_4)
                        r8_3 += 0x20
                        rcx_4 += 1
                        var_84_1:4.d = r8_3
                        var_98_1 = rcx_4
                        
                        if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_9 = *(r11_1 + (rdx_10 << 2) + 4)
                        int32_t var_88_2 = 0xffffffff
                        
                        if (rdx_9 != 0)
                            goto label_1421b4d15
                    
                    var_84_1.d = r10_1
            
            var_84_1.d = r10_1
            int128_t var_38_1 = 0xffffffff
            int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            uint128_t var_78 = (&data_143a2eec0).o
            int96_t var_68_1 = var_98_1.o:8.12
            int64_t var_58_1 = temp0_3
            
            while (true)
                int32_t var_5c
                int64_t rax_17 = sx.q(var_5c)
                int64_t* rdx_11 = var_78.q
                
                if (rax_17.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                        && var_68_1.q == &data_143a2eed0 && rdx_11 == &data_143a2eec0)
                    break
                
                int64_t rdx_12 = *rdx_11
                int64_t rcx_8 = rax_17 * 5
                void* rax_18 = rdx_12 + (rcx_8 << 3)
                
                if (*(rdx_12 + (rcx_8 << 3) + 0x10) != 0
                        && (rbx_2 == 0 || not(*(rax_18 + 0x18) f>= rbx_2[2])))
                    rdi_2 = *(rdx_12 + (rcx_8 << 3))
                    rbx_2 = rax_18 + 8
                
                var_68_1:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)
            
            int32_t rax_21 = rbx_2[1].d
            int64_t* rcx_10 = *rbx_2
            int32_t rdx_13 = rax_21 - 1
            int64_t r14_4 = *rcx_10
            
            if (rdx_13 s>= 1)
                rdx_13 = 1
            
            if (rdx_13 != 0)
                memcpy(rcx_10, &rcx_10[sx.q(rax_21 - rdx_13)], rdx_13 << 3)
                rax_21 = rbx_2[1].d
            
            rbx_2[1].d = rax_21 - 1
            data_143f4d878 -= rdi_2
            sub_140a74f90(r14_4)
        
        result = LeaveCriticalSection(&data_143f4dc38)

*arg1 = 0
arg1[2] = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
return result
