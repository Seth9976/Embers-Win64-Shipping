// 函数: sub_1424108c0
// 地址: 0x1424108c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r15 = arg2
void* r14 = arg1

if ((*(arg1 + 0x2b4) & 1) == 0)
    sub_142403b00(arg1)

int64_t rbx = *(r15 + 4)
int32_t rax_1 = *(r14 + 0x1c8)
int64_t var_c8 = rbx
int64_t* rdx_5

if (rax_1 == *(r14 + 0x1f4))
label_14241097d:
    rdx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + var_c8:4.d
    void* r8 = r14 + 0x1f8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_5 = *(r8 + (((sx.q(*(r14 + 0x208)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14241097d_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 6) + *(r14 + 0x1c0)
            
            if (*rdx_5 == rbx)
                break
            
            rax_5 = rdx_5[7].d
            
            if (rax_5 == 0xffffffff)
                goto label_14241097d_2
        
        if (rax_5 == 0xffffffff)
        label_14241097d_2:
            rdx_5 = nullptr

void* result = &rdx_5[1]

if (rdx_5 == 0)
    result = nullptr

if (result != 0)
    int64_t* r12_1 = *result
    result = &r12_1[sx.q(*(result + 8)) * 5]
    void* result_1 = result
    
    if (r12_1 != result)
        int64_t* rsi_1 = &r12_1[4]
        void* r13_1 = r14 + 0x260
        
        do
            int32_t var_f0
            int32_t var_e0
            
            if (rsi_1[-2] != data_143e1df78)
                sub_14240da20(r13_1, &var_c8, &rsi_1[-2])
                int64_t rax_45 = sx.q(var_c8.d)
                void* const rax_47
                
                if (rax_45.d == 0xffffffff)
                    rax_47 = nullptr
                else
                    rax_47 = rax_45 * 0xf0 + *r13_1
                
                void* rbx_5 = rax_47 + 0x18
                var_f0.q = rsi_1[-2]
                
                if (rax_47 == 0)
                    rbx_5 = nullptr
                
                int64_t var_e8_2 = rsi_1[-1]
                void* rax_50 = *rsi_1
                var_e0.q = rax_50
                
                if (rax_50 != 0)
                    *(rax_50 + 8) += 1
                
                result = sub_142415bf0(r14, &var_f0, rbx_5)
                
                if (result.b == 0)
                    result = sub_142410df0(r14, r12_1, r15, arg3, arg4, arg5, rbx_5)
            else
                int32_t r11_1 = *(r13_1 + 0x28)
                var_f0 = 0
                int32_t rcx_3 = 0
                int32_t var_ec_1 = 1
                int32_t r8_2 = 0
                char var_e8_1 = (r13_1 + 0x10).b
                int32_t var_e0_1 = 0xffffffff
                int64_t var_dc_1 = 0
                
                if (r11_1 != 0)
                    void* rax_8 = *(r13_1 + 0x20)
                    void* r9 = r13_1 + 0x10
                    
                    if (rax_8 != 0)
                        r9 = rax_8
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_8 = *r9
                    
                    if (rdx_8 != 0)
                    label_142410a7b:
                        int32_t rax_15 = neg.d(rdx_8) & rdx_8
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                        int32_t var_ec_2 = rax_15
                        int32_t rax_16
                        
                        if (rax_15 == 0)
                            rax_16 = 0x20
                        else
                            rax_16 = 0x1f - temp0_2
                        
                        var_dc_1.d = r8_2 - rax_16 + 0x1f
                        
                        if (r8_2 - rax_16 + 0x1f s> r11_1)
                            var_dc_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_9 = sx.q(rcx_3)
                            r8_2 += 0x20
                            rcx_3 += 1
                            var_dc_1:4.d = r8_2
                            var_f0 = rcx_3
                            
                            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_8 = *(r9 + (rdx_9 << 2) + 4)
                            var_e0_1 = 0xffffffff
                            
                            if (rdx_8 != 0)
                                goto label_142410a7b
                        
                        var_dc_1.d = r11_1
                
                int32_t rdx_10 = *(r13_1 + 0x28)
                double zmm2[0x2] = var_e0_1.o
                double var_48_1[0x2] = zmm2
                int32_t rdi_1 = 0xffffffff << (rdx_10.b & 0x1f)
                int128_t var_58_1 = var_f0.o
                int32_t r8_5 = rdx_10 s>> 5
                int32_t r9_2 = rdx_10 & 0xffffffe0
                int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                var_e0 = rdi_1
                var_dc_1.d = rdx_10
                int128_t var_88 = r13_1.o
                uint128_t var_78_1 = var_58_1
                
                if (rdx_10 != r11_1)
                    void* rax_18 = *(r13_1 + 0x20)
                    void* r10_1 = r13_1 + 0x10
                    
                    if (rax_18 != 0)
                        r10_1 = rax_18
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r11_1 - 1)
                    int32_t rdx_14 = *(r10_1 + (sx.q(r8_5) << 2)) & rdi_1
                    
                    if (rdx_14 != 0)
                    label_142410b63:
                        int32_t rax_25 = neg.d(rdx_14) & rdx_14
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
                        int32_t rax_26
                        
                        if (rax_25 == 0)
                            rax_26 = 0x20
                        else
                            rax_26 = 0x1f - temp0_4
                        
                        var_dc_1.d = r9_2 - rax_26 + 0x1f
                        
                        if (r9_2 - rax_26 + 0x1f s> r11_1)
                            var_dc_1.d = r11_1
                    else
                        while (true)
                            int64_t rcx_8 = sx.q(r8_5)
                            r9_2 += 0x20
                            r8_5 += 1
                            
                            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_14 = *(r10_1 + (rcx_8 << 2) + 4)
                            var_e0 = 0xffffffff
                            
                            if (rdx_14 != 0)
                                goto label_142410b63
                        
                        var_dc_1.d = r11_1
                
                uint32_t r14_2 = (var_e0.q u>> 0x20).d
                
                while (true)
                    result = sx.q(var_78_1:0xc.d)
                    int64_t rcx_10 = var_88.q
                    
                    if (result.d == r14_2 && var_78_1.q == r13_1 + 0x10 && rcx_10 == r13_1)
                        break
                    
                    int64_t* rbx_2 = result * 0xf0 + *rcx_10
                    
                    if (sub_140d6de40(rbx_2) == 0 && sub_140d6df40(rbx_2) == 0
                            && (*(rbx_2 + 0x34) & 4) == 0)
                        var_f0.q = *r12_1
                        var_e8_1 ^= (rsi_1[-3].b ^ var_e8_1) & 0xf
                        int64_t rax_32 = rsi_1[-1]
                        int64_t* rax_33 = *rsi_1
                        
                        if (rax_33 != 0)
                            rax_33[1].d += 1
                        
                        var_e0.q = *rbx_2
                        int64_t rax_35 = rbx_2[1]
                        void* rax_36 = rbx_2[2]
                        void* var_90_1 = rax_36
                        
                        if (rax_36 != 0)
                            *(rax_36 + 8) += 1
                        
                        uint128_t zmm1 = rax_32:4.o
                        int64_t var_98_1
                        var_98_1.o = zmm1
                        int64_t* rdi_2 = _mm_bsrli_si128(zmm1, 8).q
                        var_dc_1:4.o = rax_35.o
                        
                        if (rdi_2 != 0)
                            rdi_2[1].d -= 1
                            
                            if (rdi_2[1].d == 1)
                                (**rdi_2)(rdi_2)
                                int32_t temp6_1 = *(rdi_2 + 0xc)
                                *(rdi_2 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rdi_2 + 8))(rdi_2, 1)
                        
                        sub_142410df0(arg1, &var_f0, arg2, arg3, arg4, arg5, &rbx_2[3])
                        
                        if (rax_33 != 0)
                            rax_33[1].d -= 1
                            
                            if (rax_33[1].d == 1)
                                (**rax_33)(rax_33)
                                int32_t temp7_1 = *(rax_33 + 0xc)
                                *(rax_33 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rax_33 + 8))(rax_33, 1)
                    
                    var_78_1:8.d &= not.d(var_88:0xc.d)
                    sub_14059bdd0(&var_88:8)
                
                r14 = arg1
                r15 = arg2
            r12_1 = &r12_1[5]
            rsi_1 = &rsi_1[5]
        while (r12_1 != result_1)

return result
