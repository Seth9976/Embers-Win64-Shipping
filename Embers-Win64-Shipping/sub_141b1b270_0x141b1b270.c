// 函数: sub_141b1b270
// 地址: 0x141b1b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = &arg3[4]
int32_t rbx = *rsi
int32_t var_148

if (*(arg1 + 8) != 0xffffffff)
    sub_141a644b0(arg1 + 8, &var_148, rbx, *((*(*arg4 + 8))(arg4) + 8) + 0xd0)
    rbx = var_148

int128_t zmm0 = *(arg1 + 0x10)
int32_t var_80 = rbx
int128_t var_90 = zmm0
void* var_78
void** result = sub_141a4a790(arg4, &var_78, &var_90, &var_80)
int32_t var_70

if (var_70 != 0)
    void* rax_3 = sub_140d3c6e0(var_78)
    void* const rbx_1 = rax_3
    void* rax_4
    int64_t rax_5
    void* rdx_2
    
    if (rax_3 != 0)
        rax_4 = sub_142452380()
        rdx_2 = *(rbx_1 + 0x10)
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_3 == 0 || rax_5.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        rbx_1 = nullptr
    
    int32_t var_144_1 = 1
    int32_t r10_1 = *(rbx_1 + 0x1c8)
    int32_t var_140_1 = (rbx_1 + 0x1b0).d
    int32_t rcx_5 = 0
    var_148 = 0
    int32_t r8_3 = 0
    int32_t var_138_1 = 0xffffffff
    int64_t var_134_1 = 0
    
    if (r10_1 != 0)
        void* rax_7 = *(rbx_1 + 0x1c0)
        void* r9_4 = rbx_1 + 0x1b0
        
        if (rax_7 != 0)
            r9_4 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_4
        
        if (rdx_5 != 0)
        label_141b1b3cc:
            int32_t rax_14 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_144_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            var_134_1.d = r8_3 - rax_15 + 0x1f
            
            if (r8_3 - rax_15 + 0x1f s> r10_1)
                var_134_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_5)
                r8_3 += 0x20
                rcx_5 += 1
                var_134_1:4.d = r8_3
                var_148 = rcx_5
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_4 + (rdx_6 << 2) + 4)
                var_138_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141b1b3cc
            
            var_134_1.d = r10_1
    
    int32_t rdx_7 = *(rbx_1 + 0x1c8)
    double zmm2[0x2] = var_138_1.o
    var_134_1.d = rdx_7
    double var_50_1[0x2] = zmm2
    int128_t var_60_1 = var_148.o
    int32_t r15_1 = 0xffffffff << (rdx_7 & 0x1f).b
    int32_t r8_6 = rdx_7 s>> 5
    int32_t r9_6 = rdx_7 & 0xffffffe0
    int64_t var_98_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_138_2 = r15_1
    int128_t var_b8 = (rbx_1 + 0x1a0).o
    int128_t var_a8_1 = var_60_1
    
    if (rdx_7 != r10_1)
        void* rax_18 = *(rbx_1 + 0x1c0)
        void* r11_1 = rbx_1 + 0x1b0
        
        if (rax_18 != 0)
            r11_1 = rax_18
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(r11_1 + (sx.q(r8_6) << 2)) & r15_1
        
        if (rdx_11 != 0)
        label_141b1b4a7:
            int32_t rax_24 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
            int32_t rbx_2
            
            if (rax_24 == 0)
                rbx_2 = 0x20
            else
                rbx_2 = 0x1f - temp0_4
            
            result = zx.q(r9_6 - rbx_2 + 0x1f)
            var_134_1.d = result.d
            
            if (result.d s> r10_1)
                var_134_1.d = r10_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_6)
                r9_6 += 0x20
                r8_6 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r11_1 + (rcx_9 << 2) + 4)
                var_138_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141b1b4a7
            
            var_134_1.d = r10_1
        
        rsi = &arg3[4]
    
    while (true)
        int64_t rdx_12 = sx.q(var_a8_1:0xc.d)
        
        if (rdx_12.d != (var_138_2.q u>> 0x20).d || var_a8_1.q != rbx_1 + 0x1b0)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rcx_11 = var_b8.q
        
        if (result.b == 0 || rcx_11 != rbx_1 + 0x1a0)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            break
        
        void* r15_2 = *(*rcx_11 + rdx_12 * 0x10)
        
        if (r15_2 != 0)
            void* rax_27 = sub_1425a2960()
            void* rdx_13 = *(r15_2 + 0x10)
            int64_t rax_28 = sx.q(*(rax_27 + 0x38))
            
            if (rax_28.d s<= *(rdx_13 + 0x38)
                    && *(*(rdx_13 + 0x30) + (rax_28 << 3)) == rax_27 + 0x30)
                sub_141a4a790(arg4, &var_148, arg3, rsi)
                int64_t* rdi_2 = var_148.q
                void* rcx_16 = &rdi_2[sx.q(var_140_1)]
                result = nullptr
                int64_t r14_2 = 0
                uint64_t r12_4 = (rcx_16 - rdi_2 + 7) u>> 3
                
                if (rdi_2 u> rcx_16)
                    r12_4 = 0
                
                if (r12_4 != 0)
                    do
                        int64_t arg_18 = *rdi_2
                        result = sub_140d3c6e0(&arg_18)
                        
                        if (result != 0)
                            result = sub_141a655a0(result)
                            
                            if (result != 0)
                                int64_t rax_34 = data_143f2c840
                                void** const var_128 = &data_143050f48
                                
                                if (rax_34 == 0)
                                    rax_34 = sub_141a54240(&data_143f2c840, 0)
                                
                                int32_t var_110_1 = arg4[0x5b].d
                                int64_t var_118 = arg4[0x5a]
                                sub_1405c5900(&arg4[0x1f], rax_34, &var_128, result, 
                                    *(arg4 + 0x2dc), &var_118)
                                var_128 = &data_143050f60
                                int64_t rax_35 = data_143f2c848
                                
                                if (rax_35 == 0)
                                    rax_35 = sub_141a54240(&data_143f2c848, 0)
                                
                                int32_t var_100_1 = arg4[0x5b].d
                                char rdx_17 = *(arg4 + 0x2dc)
                                int64_t var_108 = arg4[0x5a]
                                sub_1405c5900(&arg4[0x1f], rax_35, &var_128, result, rdx_17, 
                                    &var_108)
                                char var_158_2
                                int64_t var_f8
                                var_158_2.q = &var_f8
                                int64_t var_e8
                                sub_141b12bd0(arg1, result, r15_2, &var_e8, var_158_2)
                                (*(*result + 0x4e0))(result, 2)
                                int64_t var_d8 = var_f8
                                int32_t var_f0
                                int32_t var_d0_1 = var_f0
                                int64_t* var_150_2
                                var_150_2.b = 0
                                int64_t var_c8 = var_e8
                                int32_t var_e0
                                int32_t var_c0_1 = var_e0
                                result = sub_141f48a10(result, &var_c8, &var_d8, 0, 0, var_150_2.b)
                        
                        rdi_2 = &rdi_2[1]
                        r14_2 += 1
                    while (r14_2 != r12_4)
                
                break
        
        var_a8_1:8.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)

return result
