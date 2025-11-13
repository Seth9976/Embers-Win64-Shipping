// 函数: sub_141ee33a0
// 地址: 0x141ee33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0

if ((*(*arg1 + 0x540))() != 0 && arg1[0xf0].d - *(arg1 + 0x7ac) s> 0)
    int32_t rax_4 = *(arg2 + 0xc)
    int64_t* rbx_1 = *arg2
    int32_t i_2 = arg2[1].d
    
    if (rax_4 s< 0)
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[4]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rax_4 = *(arg2 + 0xc)
        
        arg2[1].d = 0
        
        if (rax_4 != 0)
            sub_1405a51b0(arg2, 0)
    else
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[4]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        arg2[1].d = 0
    
    void* r10_2 = &arg1[0xef]
    int32_t var_b4_1 = 1
    int32_t r11_1 = *(r10_2 + 0x28)
    void* r13_1 = r10_2 + 0x10
    void* arg_18 = r10_2
    int32_t rcx_3 = 0
    int32_t var_b8 = 0
    int32_t r8_1 = 0
    void* var_b0_1 = r13_1
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141ee3508:
            int32_t rax_12 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_b4_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            var_a4_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_a4_1:4.d = r8_1
                var_b8 = rcx_3
                
                if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141ee3508
            
            var_a4_1.d = r11_1
    
    int32_t rdx_4 = *(r10_2 + 0x28)
    double zmm2[0x2] = var_a8_1.o
    double var_58_1[0x2] = zmm2
    int32_t r12_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_68_1 = var_b8.o
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_2 = r12_1
    var_a4_1.d = rdx_4
    int128_t var_98 = r10_2.o
    float var_88_1[0x4] = var_68_1
    
    if (rdx_4 != r11_1)
        void* rax_15 = *(r13_1 + 0x10)
        void* r10_1 = r13_1
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_8 != 0)
        label_141ee35d2:
            int32_t rax_22 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rbx_2
            
            if (rax_22 == 0)
                rbx_2 = 0x20
            else
                rbx_2 = 0x1f - temp0_3
            
            var_a4_1.d = r9_3 - rbx_2 + 0x1f
            
            if (r9_3 - rbx_2 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_8 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141ee35d2
            
            var_a4_1.d = r11_1
        
        r10_2 = arg_18
    
    int128_t zmm6 = zx.o(0)
    
    while (true)
        int64_t rax_24 = sx.q(var_88_1[3])
        int64_t* rdi_1 = var_98.q
        
        if (rax_24.d == (var_a8_2.q u>> 0x20).d && var_88_1[0].q == r13_1 && rdi_1 == r10_2)
            break
        
        int64_t rdi_2 = *rdi_1
        int64_t rbx_3 = rax_24 * 5
        int128_t zmm0 = *(rdi_2 + (rbx_3 << 3) + 0x10)
        
        if (not(zmm0.d f<= zmm6.d))
            void* rax_25 = *(rdi_2 + (rbx_3 << 3) + 8)
            
            if (*(rax_25 + 0x188) s> 0)
                var_a4_1 = rax_25
                int32_t var_a8_3 = zmm0.d
                var_b8.q = 0
                int32_t var_b0_2 = 0
                char rax_27 = sub_14236bbe0(arg1[0x3e], zmm0.d)
                zmm6 = sub_1423652d0(*(rdi_2 + (rbx_3 << 3) + 8), *(rdi_2 + (rbx_3 << 3) + 0x10), 
                    rdi_2 + 0x18 + (rbx_3 << 3), &var_b8, rax_27)
                
                if (var_b0_2 != 0)
                    int64_t rbx_4 = sx.q(arg2[1].d)
                    int32_t rax_28 = (rbx_4 + 1).d
                    arg2[1].d = rax_28
                    
                    if (rax_28 s> *(arg2 + 0xc))
                        sub_1405c4e40(arg2)
                    
                    int64_t* rbx_6 = (rbx_4 << 5) + *arg2
                    *rbx_6 = 0
                    int64_t rdi_3 = sx.q(var_b0_2)
                    r15 = var_b8.q
                    rbx_6[1].d = rdi_3.d
                    
                    if (rdi_3.d != 0)
                        sub_1407c3650(rbx_6, rdi_3.d, 0)
                        memcpy(*rbx_6, r15, (rdi_3 * 0xc).d)
                    else
                        *(rbx_6 + 0xc) = 0
                    
                    r15.b = 1
                    rbx_6[2].d = var_a8_3.d
                    rbx_6[3] = var_a4_1
                
                int64_t rcx_15 = var_b8.q
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
        
        var_88_1[2] &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
        r10_2 = arg_18

return zx.q(r15.b)
