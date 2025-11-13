// 函数: sub_141e85320
// 地址: 0x141e85320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0xf0
int64_t* result = arg2
EnterCriticalSection(lpCriticalSection)

if (arg3[1].b != 2)
    int32_t rcx_3 = 0
    int32_t r11_1 = *(arg1 + 0xc8)
    int32_t var_b8_1 = 0
    int32_t r8_1 = 0
    int32_t var_b4_1 = 1
    void* var_b0_1 = arg1 + 0xb0
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(arg1 + 0xc0)
        void* r9_1 = arg1 + 0xb0
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141e85428:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx_3
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141e85428
            
            var_a4_1.d = r11_1
    
    int32_t rdx_5 = *(arg1 + 0xc8)
    var_a4_1.d = rdx_5
    int32_t r9_2 = 0xffffffff << (rdx_5.b & 0x1f)
    int32_t var_a8_3 = r9_2
    int128_t var_68_1 = var_b8_1.o
    int32_t r9_4 = rdx_5 & 0xffffffe0
    int32_t r8_4 = rdx_5 s>> 5
    int128_t var_58_1 = 0xffffffff
    int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_98 = (arg1 + 0xa0).o
    int128_t var_88_1 = var_68_1
    
    if (rdx_5 != r11_1)
        void* rax_11 = *(arg1 + 0xc0)
        void* r10_1 = arg1 + 0xb0
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r9_2
        
        if (rdx_9 != 0)
        label_141e854f4:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rdi_1
            
            if (rax_18 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_4
            
            var_a4_1.d = r9_4 - rdi_1 + 0x1f
            
            if (r9_4 - rdi_1 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_4)
                r9_4 += 0x20
                r8_4 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_8 << 2) + 4)
                var_a8_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_141e854f4
            
            var_a4_1.d = r11_1
    
    while (true)
        int64_t rcx_10 = sx.q(var_88_1:0xc.d)
        int64_t rax_20 = var_98.q
        
        if (rcx_10.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == arg1 + 0xb0
                && rax_20 == arg1 + 0xa0)
            sub_141e785b0(arg1, result, arg3)
            break
        
        int32_t* rdi_4 = (rcx_10 << 6) + *rax_20
        
        if (rdi_4[0xa].b == 1 && arg3[2] == *(rdi_4 + 0x30) && *(arg3 + 9) == *(rdi_4 + 0x29))
            if (*arg3 != 0)
                sub_1405a7050(&rdi_4[6], arg3)
                void* r13_1
                r13_1.b = 0
                int32_t rdx_12 = data_143a2d4c0
                int32_t arg_18
                arg_18.q = *arg3
                int32_t rcx_16 = data_143a2d4cc + 1
                void* arg_8
                arg_8.d = *rdi_4
                data_143a2d4cc = rcx_16
                int64_t r14_2 = sx.q(rdx_12 - 1)
                
                if (rdx_12 - 1 s>= 0)
                    int64_t rsi_4 = r14_2 << 4
                    int64_t temp4_1
                    
                    do
                        int64_t rax_27 = data_143a2d4b8
                        
                        if (*(rsi_4 + rax_27 + 8) == 0)
                            r13_1.b = 1
                        else
                            int64_t* rcx_17 = *(rsi_4 + rax_27)
                            
                            if (rcx_17 == 0)
                                r13_1.b = 1
                            else if ((*(*rcx_17 + 0x50))(rcx_17, arg_18.q, zx.q(arg_8.d)) == 0)
                                r13_1.b = 1
                        
                        rsi_4 -= 0x10
                        temp4_1 = r14_2
                        r14_2 -= 1
                    while (temp4_1 - 1 s>= 0)
                    rcx_16 = data_143a2d4cc
                    rdx_12 = data_143a2d4c0
                    result = arg2
                
                data_143a2d4cc = rcx_16 - 1
                
                if (r13_1.b != 0 && rcx_16 - 1 s<= 0)
                    int64_t* r14_3 = nullptr
                    int32_t r13_2 = rdx_12
                    int32_t rsi_5 = 0
                    
                    if (rdx_12 s> 0)
                        do
                            int64_t rax_30 = data_143a2d4b8
                            
                            if (*(r14_3 + rax_30 + 8) == 0)
                                sub_1405a4880(&data_143a2d4b8, rsi_5, 1, 1)
                            else
                                int64_t* rcx_19 = *(r14_3 + rax_30)
                                
                                if (rcx_19 == 0)
                                    sub_1405a4880(&data_143a2d4b8, rsi_5, 1, 1)
                                else if ((*(*rcx_19 + 0x20))(rcx_19) != 0)
                                    sub_1405a4880(&data_143a2d4b8, rsi_5, 1, 1)
                                else
                                    rsi_5 += 1
                                    r14_3 = &r14_3[2]
                            
                            rdx_12 = data_143a2d4c0
                        while (rsi_5 s< rdx_12)
                    
                    int32_t rax_33 = rdx_12 * 2
                    
                    if (rax_33 s<= 2)
                        rax_33 = 2
                    
                    data_143a2d4c8 = rax_33
                    
                    if (r13_2 s> rax_33 && data_143a2d4c4 != rdx_12)
                        sub_1405a5410(&data_143a2d4b8, rdx_12)
            
            void* rcx_20 = data_143f5b298
            int32_t rsi_6 = *rdi_4
            void* const rax_34
            
            if (rcx_20 == 0)
                rax_34 = nullptr
            else
                rax_34 = sub_1423dcff0(rcx_20)
            
            sub_141e7f240(rax_34, rsi_6)
            int64_t rcx_22 = *(rdi_4 + 8)
            *result = *arg3
            result[1] = rcx_22
            result[2].d = rsi_6
            break
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
else
    sub_141e785b0(arg1, result, arg3)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

return result
