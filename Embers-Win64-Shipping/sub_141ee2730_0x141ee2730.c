// 函数: sub_141ee2730
// 地址: 0x141ee2730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0

if ((*(*arg1 + 0x540))() != 0 && arg1[0xf0].d - *(arg1 + 0x7ac) s> 0)
    TEB* gsbase
    
    if (data_143f3acb0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3acb0)
        
        if (data_143f3acb0 == 0xffffffff)
            atexit(sub_142cfbc30)
            _Init_thread_footer(&data_143f3acb0)
    
    int32_t var_a4 = 1
    void* r10 = &arg1[0xf1]
    *arg2 = 0
    int32_t r11 = *(r10 + 0x18)
    int32_t r15 = 0
    int32_t var_a8 = 0
    int32_t rcx_2 = 0
    void* var_a0 = r10
    int32_t var_98 = 0xffffffff
    int32_t r8 = 0
    int64_t var_94 = 0
    
    if (r11 != 0)
        void* rax_6 = *(r10 + 0x10)
        void* r9_1 = r10
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141ee2848:
            int32_t rax_13 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_a4_1 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            var_94.d = r8 - rax_14 + 0x1f
            
            if (r8 - rax_14 + 0x1f s> r11)
                var_94.d = r11
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_2)
                r8 += 0x20
                rcx_2 += 1
                var_94:4.d = r8
                var_a8 = rcx_2
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_98_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141ee2848
            
            var_94.d = r11
        
        r10 = var_a0
    
    int32_t rdi = *(r10 + 0x18)
    void* r11_1 = &arg1[0xef]
    int32_t rdx_4 = *(r11_1 + 0x28)
    uint128_t zmm0 = r11_1.o
    int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_70 = 0xffffffff
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    uint128_t var_80
    var_80:8.d = r12
    var_80:0xc.d = rdx_4
    int64_t* var_60 = zmm0.q
    uint128_t var_50 = var_a8.o
    
    if (rdx_4 != rdi)
        void* rax_16 = *(r10 + 0x10)
        
        if (rax_16 != 0)
            r10 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi - 1)
        int32_t rdx_8 = *(r10 + (sx.q(r8_3) << 2)) & r12
        
        if (rdx_8 != 0)
        label_141ee2922:
            int32_t rax_23 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t rbx_1
            
            if (rax_23 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_80:0xc.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> rdi)
                var_80:0xc.d = rdi
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10 + (rcx_7 << 2) + 4)
                var_80:8.d = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141ee2922
            
            var_80:0xc.d = rdi
        
        r10 = var_a0
        r11_1 = &arg1[0xef]
    
    while (true)
        int64_t rax_25 = sx.q(var_50:0xc.d)
        
        if (rax_25.d == (var_80:8.q u>> 0x20).d && var_50.q == r10 && var_60 == r11_1)
            if (r14.b != 0)
                uint128_t zmm1
                zmm1.d = (*arg2).d f/ _mm_cvtepi32_ps(zx.o(r15)).d
                *arg2 = zmm1.d
            
            return zx.q(r14.b)
        
        int64_t rdi_2 = *var_60
        int64_t rbx_2 = rax_25 * 5
        
        if (*(*(rdi_2 + (rbx_2 << 3) + 8) + 0x198) s> 0
                && not(0f f>= *(rdi_2 + (rbx_2 << 3) + 0x10)))
            int32_t rax_27 = data_143f3acac
            data_143f3aca8 = 0
            
            if (rax_27 s< 0 && rax_27 != 0)
                zmm0 = sub_1405c5570(&data_143f3aca0, 0)
            
            int64_t* rcx_9 = arg1[0x3e]
            float arg_8 = 0f
            char rax_28 = sub_14236bbe0(rcx_9, zmm0.d)
            char rax_29
            rax_29, zmm0 = sub_1423650d0(*(rdi_2 + (rbx_2 << 3) + 8), 
                (*(rdi_2 + (rbx_2 << 3) + 0x10)).d, rdi_2 + 0x14 + (rbx_2 << 3), &arg_8, rax_28)
            
            if (rax_29 != 0)
                r15 += 1
                zmm0.d = arg_8.d f+ *arg2
                r14.b = 1
                *arg2 = zmm0.d
        
        int32_t var_54
        var_50:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
        r10 = var_a0
        r11_1 = &arg1[0xef]

return 0
