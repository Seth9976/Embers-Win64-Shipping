// 函数: sub_140d3b5d0
// 地址: 0x140d3b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_18 = arg3
void* result = nullptr
int32_t r12 = 0x10000000

if (data_14399ea98() == 0)
    r12 = 0x8000000

int64_t rdi
rdi.b = sub_140b5b8a0(arg3.d, 0) == 0
sub_140d3c660()

if ((arg_18:4.d != 0 | rdi.b) != 0)
    return sub_140d3f4f0(&data_143e1dad0, arg2, arg1, arg3, 0, 0, 0x4000, r12)

bool z_1

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z_1 = true
else
    data_143e1adfc
    z_1 = false

uint32_t rax_5

if (not(z_1) && data_143de5480 != 0)
    rax_5.b = GetCurrentThreadId() == data_143de5470

CRITICAL_SECTION* lpCriticalSection

if (z_1 || (data_143de5480 != 0 && rax_5.b == 0))
    lpCriticalSection = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else
    lpCriticalSection = nullptr

sub_1405ba560(&data_143e1db98, &arg_18, arg1)
int64_t rax_6 = sx.q(arg_18.d)

if (rax_6.d != 0xffffffff)
    int64_t rdi_2 = rax_6 << 5
    void* rdi_3 = rdi_2 + data_143e1db98
    
    if (rdi_2 != neg.q(data_143e1db98))
        int64_t* rdi_4 = rdi_3 + 8
        
        if (rdi_3 != -8)
            uint64_t r11_1 = rdi_4[1]
            int64_t* var_c8_1 = rdi_4
            int128_t* rax_17
            void** rcx_1
            void* r9_2
            double zmm2[0x2]
            
            if (r11_1 == 0 || *rdi_4 != 0)
                int32_t r14_2 = data_1439aadb8
                r9_2 = &data_1439aada0
                void* var_e8_1 = &data_1439aada0
                rcx_1 = nullptr
                int32_t var_f0_1 = 0
                int32_t r8_4 = 0
                int32_t var_ec_1 = 1
                int32_t var_e0_1 = 0xffffffff
                int64_t var_dc_1 = 0
                
                if (r14_2 != 0)
                    void* rax_18 = data_1439aadb0
                    
                    if (rax_18 != 0)
                        r9_2 = rax_18
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r14_2 - 1)
                    int32_t rdx_8 = *r9_2
                    
                    if (rdx_8 != 0)
                    label_140d3b87b:
                        int32_t rax_25 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
                        rcx_1 = zx.q(temp0_4)
                        int32_t var_ec_2 = rax_25
                        int32_t rax_26
                        
                        if (rax_25 == 0)
                            rax_26 = 0x20
                        else
                            rax_26 = 0x1f - rcx_1.d
                        
                        var_dc_1.d = r8_4 - rax_26 + 0x1f
                        
                        if (r8_4 - rax_26 + 0x1f s> r14_2)
                            var_dc_1.d = r14_2
                    else
                        while (true)
                            int64_t rdx_9 = sx.q(rcx_1.d)
                            r8_4 += 0x20
                            rcx_1 = zx.q(rcx_1.d + 1)
                            var_dc_1:4.d = r8_4
                            var_f0_1 = rcx_1.d
                            
                            if (rdx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_8 = *(r9_2 + (rdx_9 << 2) + 4)
                            int32_t var_e0_2 = 0xffffffff
                            
                            if (rdx_8 != 0)
                                goto label_140d3b87b
                        
                        var_dc_1.d = r14_2
                
                int64_t* var_30_1 = &data_1439aad90
                int128_t var_58
                rax_17 = &var_58
                int128_t var_100_1 = 0xffffffff
                zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                var_58 = (&data_1439aad90).o
                int128_t var_48_1 = var_f0_1.o
                int64_t var_38_1 = zmm2.q
            else
                int32_t r14_1 = *(r11_1 + 0x28)
                r9_2 = r11_1 + 0x10
                int64_t var_118
                var_118:4.d = 1
                rcx_1 = nullptr
                var_118.d = 0
                int32_t r8_2 = 0
                int128_t var_110
                var_110.q = r9_2
                var_110:8.d = 0xffffffff
                var_110:0xc.q = 0
                
                if (r14_1 != 0)
                    void* rax_7 = *(r9_2 + 0x10)
                    
                    if (rax_7 != 0)
                        r9_2 = rax_7
                    
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(r14_1 - 1)
                    int32_t rdx_4 = *r9_2
                    
                    if (rdx_4 != 0)
                    label_140d3b77d:
                        int32_t rax_14 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                        rcx_1 = zx.q(temp0_2)
                        var_118:4.d = rax_14
                        int32_t rax_15
                        
                        if (rax_14 == 0)
                            rax_15 = 0x20
                        else
                            rax_15 = 0x1f - rcx_1.d
                        
                        var_110:0xc.d = r8_2 - rax_15 + 0x1f
                        
                        if (r8_2 - rax_15 + 0x1f s> r14_1)
                            var_110:0xc.d = r14_1
                    else
                        while (true)
                            int64_t rdx_5 = sx.q(rcx_1.d)
                            r8_2 += 0x20
                            rcx_1 = zx.q(rcx_1.d + 1)
                            int128_t var_100
                            var_100.d = r8_2
                            var_118.d = rcx_1.d
                            
                            if (rdx_5.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
                            var_110:8.d = 0xffffffff
                            
                            if (rdx_4 != 0)
                                goto label_140d3b77d
                        
                        var_110:0xc.d = r14_1
                
                int32_t var_f0
                var_f0.q = r11_1
                int128_t var_88
                rax_17 = &var_88
                zmm2 = var_110
                uint64_t var_60_1 = r11_1
                int64_t var_e8
                var_e8.o = var_118.o
                int64_t var_dc
                var_dc:4.o = zmm2
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                var_88 = var_f0.o
                int32_t var_e0
                int128_t var_78_1 = var_e0.o
                int64_t var_68_1 = zmm2.q
            int128_t zmm1 = rax_17[1]
            int128_t var_c0 = *rax_17
            int128_t var_b0_1 = zmm1
            int128_t var_a0_1 = rax_17[2]
            uint64_t rax_28
            
            if (r11_1 != 0)
                rax_28 = r11_1
            
            if (r11_1 == 0 || *rdi_4 != 0)
                rax_28 = 0
            
            bool r10_1 = rax_28 != 0
            bool var_90_1 = r10_1
            
            if (*rdi_4 != 0 || r11_1 != 0)
                rax_28.b = 0
            else
                rax_28.b = 1
            
            r9_2.b = 0
            char var_8f_1 = rax_28.b
            char var_8e_1 = 0
        label_140d3b938:
            int32_t r14_3 = var_b0_1:0xc.d
            
            while (true)
                if (r10_1 == 0)
                    rax_28.b = rax_28.b == 0
                else
                    rax_28.b = r14_3 s< *(var_b0_1.q + 0x18)
                
                if (rax_28.b == 0)
                    break
                
                if (r10_1 == 0)
                    rcx_1 = (zx.q((sbb.q(rcx_1, rcx_1, r9_2.b != 0)).d) & 8) + rdi_4
                else
                    rcx_1 = (sx.q(r14_3) << 4) + *var_c0.q
                
                void* result_1 = *rcx_1
                int32_t rax_31 = *(result_1 + 0xc)
                
                if (rax_31 s>= data_143e1d9b4)
                    rax_28 = 0
                else
                    int16_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(rax_31)
                    uint32_t rdx_11 = zx.d(temp8_1)
                    int32_t rax_33 = temp9_1 + rdx_11
                    rcx_1 = sx.q(zx.d(rax_33.w) - rdx_11) * 3
                    rax_28 = *(data_143e1d9a0 + (sx.q(rax_33 s>> 0x10) << 3)) + (rcx_1 << 3)
                
                if ((*(rax_28 + 8) & r12) == 0)
                    if (arg2 == 0)
                        result = result_1
                        break
                    
                    rax_28 = *(result_1 + 0x10)
                    rcx_1 = sx.q(*(arg2 + 0x38))
                    
                    if (rcx_1.d s<= *(rax_28 + 0x38)
                            && *(*(rax_28 + 0x30) + (rcx_1 << 3)) == arg2 + 0x30)
                        result = result_1
                        break
                
                if (r10_1 != 0)
                    rcx_1 = &var_c0:8
                    var_b0_1:8.d &= not.d(var_c0:0xc.d)
                    sub_14059bdd0(rcx_1)
                    r9_2 = zx.q(var_8e_1)
                    rax_28 = zx.q(var_8f_1)
                    r10_1 = var_90_1
                    rdi_4 = var_c8_1
                    goto label_140d3b938
                
                if (r9_2.b == 0 && rdi_4[1] != 0)
                    rax_28.b = 0
                    r9_2.b = 1
                    var_8f_1 = 0
                    var_8e_1 = 1
                    continue
                
                rax_28.b = 1
                var_8f_1 = 1
                r9_2 = 1
                var_8e_1 = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return result
