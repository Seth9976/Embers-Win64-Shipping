// 函数: sub_14183dd00
// 地址: 0x14183dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))
void* r12_1 = result * 0x138 + r8
void* arg_18 = r12_1

if (r8 != r12_1)
    int32_t* r14_1 = r8 + 0x110
    
    do
        if (r14_1[-0x28] == 2)
            int32_t rcx = arg2[1].d
            int32_t rbx_4 = r14_1[-8] - r14_1[3] - *(arg2 + 0x34) + rcx
            
            if (rbx_4 s> rcx - *(arg2 + 0x34))
                sub_140976540(arg2, rbx_4)
                int32_t rdx_2
                
                if (rbx_4 u< 4)
                    rdx_2 = 1
                else
                    uint32_t rbx_5 = rbx_4 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rbx_5 + 8)
                    int32_t rcx_3
                    
                    if (rbx_5 == 0xfffffff8)
                        rcx_3 = 0x20
                    else
                        rcx_3 = 0x1f - temp0_2
                    
                    uint64_t rflags_2
                    char temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rbx_5 + 7)
                    char rdx_1
                    
                    if (rbx_5 == 0xfffffff9)
                        rdx_1 = 0x20
                    else
                        rdx_1 = 0x1f - temp0_3
                    
                    rdx_2 = 1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & (0x20 - rdx_1))
                
                int32_t rax_3 = arg2[9].d
                
                if (rax_3 == 0 || rax_3 s< rdx_2)
                    arg2[9].d = rdx_2
                    sub_1405a4480(arg2)
            
            int32_t r10_1 = *r14_1
            void* r9_1 = &r14_1[-6]
            void* var_b0_1 = r9_1
            int32_t rcx_9 = 0
            int32_t var_b8_1 = 0
            int32_t r8_1 = 0
            int32_t var_b4_1 = 1
            int32_t var_a8_1 = 0xffffffff
            int64_t var_a4_1 = 0
            
            if (r10_1 != 0)
                void* rax_4 = *(r14_1 - 8)
                
                if (rax_4 != 0)
                    r9_1 = rax_4
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(r10_1 - 1)
                int32_t rdx_5 = *r9_1
                
                if (rdx_5 != 0)
                label_14183de79:
                    int32_t rax_11 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_11)
                    int32_t var_b4_2 = rax_11
                    int32_t rax_12
                    
                    if (rax_11 == 0)
                        rax_12 = 0x20
                    else
                        rax_12 = 0x1f - temp0_4
                    
                    var_a4_1.d = r8_1 - rax_12 + 0x1f
                    
                    if (r8_1 - rax_12 + 0x1f s> r10_1)
                        var_a4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_6 = sx.q(rcx_9)
                        r8_1 += 0x20
                        rcx_9 += 1
                        var_a4_1:4.d = r8_1
                        var_b8_1 = rcx_9
                        
                        if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                        int32_t var_a8_2 = 0xffffffff
                        
                        if (rdx_5 != 0)
                            goto label_14183de79
                    
                    var_a4_1.d = r10_1
            
            int32_t rbx_8 = *r14_1
            int128_t var_58_1 = var_b8_1.o
            int128_t var_48_1 = 0xffffffff
            int32_t rdi_1 = 0xffffffff << (r10_1 & 0x1f).b
            int32_t r9_3 = r10_1 & 0xffffffe0
            int32_t r8_4 = r10_1 s>> 5
            int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_a8_3 = rdi_1
            var_a4_1.d = r10_1
            int128_t var_98 = (&r14_1[-0xa]).o
            int128_t var_88_1 = var_58_1
            
            if (r10_1 != rbx_8)
                void* rax_16 = *(r14_1 - 8)
                void* r10_2 = &r14_1[-6]
                
                if (rax_16 != 0)
                    r10_2 = rax_16
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(rbx_8 - 1)
                int32_t rdx_10 = *(r10_2 + (sx.q(r8_4) << 2)) & rdi_1
                
                if (rdx_10 != 0)
                label_14183df57:
                    int32_t rax_22 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
                    uint64_t rflags_4
                    int32_t temp0_6
                    temp0_6, rflags_4 = _bit_scan_reverse(rax_22)
                    int32_t rax_23
                    
                    if (rax_22 == 0)
                        rax_23 = 0x20
                    else
                        rax_23 = 0x1f - temp0_6
                    
                    var_a4_1.d = r9_3 - rax_23 + 0x1f
                    
                    if (r9_3 - rax_23 + 0x1f s> rbx_8)
                        var_a4_1.d = rbx_8
                else
                    while (true)
                        int64_t rcx_13 = sx.q(r8_4)
                        r9_3 += 0x20
                        r8_4 += 1
                        
                        if (rcx_13.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_10 = *(r10_2 + (rcx_13 << 2) + 4)
                        var_a8_3 = 0xffffffff
                        
                        if (rdx_10 != 0)
                            goto label_14183df57
                    
                    var_a4_1.d = rbx_8
            
            while (true)
                int64_t rcx_15 = sx.q(var_88_1:0xc.d)
                int32_t rax_15
                
                if (rcx_15.d != (var_a8_3.q u>> 0x20).d || var_88_1.q != &r14_1[-6])
                    rax_15.b = 0
                else
                    rax_15.b = 1
                
                int64_t* rdx_11 = var_98.q
                
                if (rax_15.b == 0 || rdx_11 != &r14_1[-0xa])
                    rax_15.b = 1
                else
                    rax_15.b = 0
                
                if (rax_15.b == 0)
                    break
                
                int64_t* rbx_9 = *rdx_11 + rcx_15 * 0x18
                int32_t var_70
                sub_140598750(arg2, &var_70)
                int64_t* var_68
                sub_140596d10(var_68, rbx_9)
                var_68[2].d = 0xffffffff
                int32_t rax_24 = var_68[1].d
                int16_t* rdx_15
                
                if (rax_24 == 0)
                    rdx_15 = &data_142d40450
                else
                    rdx_15 = *var_68
                
                int32_t rcx_19 = rax_24 - 1
                
                if (rax_24 == 0)
                    rcx_19 = 0
                
                void arg_8
                sub_14059a6d0(arg2, &arg_8, sub_1405969c0(rcx_19, rdx_15), var_68, var_70, nullptr)
                var_88_1:8.d &= not.d(var_98:0xc.d)
                sub_14059bdd0(&var_98:8)
            
            r12_1 = arg_18
        
        r14_1 = &r14_1[0x4e]
        result = &r14_1[-0x44]
    while (result != r12_1)

return result
