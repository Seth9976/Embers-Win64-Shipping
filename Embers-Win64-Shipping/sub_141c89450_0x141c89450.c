// 函数: sub_141c89450
// 地址: 0x141c89450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t rbx = arg3.d
void* r13 = arg1 + 0x10
int64_t* r14 = arg2
void* var_80 = r13
char rax = sub_140b5b8a0(arg3.d, 0xe6)
int32_t rdi = arg_18:4.d
arg3.b = rdi == 0

if ((arg3.b & rax) == 0)
    void* rax_34 = sub_141c80cb0(r13, rdi + sub_140b5ead0(rbx), &arg_18)
    int64_t var_e0 = *r14
    int64_t* rcx_24 = r14[1]
    
    if (rcx_24 != 0)
        rcx_24[1].d += 1
    
    sub_141c8b840(rax_34, &var_e0)
    
    if (rcx_24 != 0)
        rcx_24[1].d -= 1
        
        if (rcx_24[1].d == 1)
            (**rcx_24)(rcx_24)
            int32_t rax_37 = *(rcx_24 + 0xc)
            *(rcx_24 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rcx_24 + 8))(rcx_24, 1)
else
    int32_t r11_1 = *(r13 + 0x28)
    void* r15_1 = r13 + 0x10
    int32_t rcx_1 = 0
    int32_t var_fc_1 = 1
    int32_t r8 = 0
    int32_t var_100_1 = 0
    void* var_88_1 = r15_1
    void* var_f8_1 = r15_1
    int32_t var_f0_1 = 0xffffffff
    int64_t var_ec_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(r15_1 + 0x10)
        void* r9_1 = r15_1
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141c8953c:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_fc_2 = rax_8
            int32_t var_a8_1 = temp0_1
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            var_ec_1.d = r8 - rax_9 + 0x1f
            
            if (r8 - rax_9 + 0x1f s> r11_1)
                var_ec_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_1)
                r8 += 0x20
                rcx_1 += 1
                var_ec_1:4.d = r8
                var_100_1 = rcx_1
                
                if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_f0_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141c8953c
            
            var_ec_1.d = r11_1
    
    int32_t rdx_4 = *(r13 + 0x28)
    int128_t var_c8_1 = var_100_1.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t rsi_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int32_t r9_3 = rdx_4 & 0xffffffe0
    void* var_d0_1
    var_d0_1.d = r8_3
    int128_t var_b8_1 = 0xffffffff
    int64_t var_50_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t zmm1 = var_c8_1
    var_c8_1:8.d = rsi_1
    var_c8_1:0xc.d = rdx_4
    var_b8_1.d = r9_3
    int128_t var_70 = r13.o
    int128_t var_60_1 = zmm1
    
    if (rdx_4 != r11_1)
        void* rax_11 = *(r15_1 + 0x10)
        void* r10_1 = r15_1
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
        
        if (rdx_8 != 0)
        label_141c8962d:
            int32_t rax_18 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t var_a4_1 = temp0_3
            int32_t rbx_1
            
            if (rax_18 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_3
            
            var_c8_1:0xc.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_c8_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                var_b8_1.d = r9_3
                var_d0_1.d = r8_3
                
                if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
                var_c8_1:8.d = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141c8962d
            
            var_c8_1:0xc.d = r11_1
    
    uint64_t rdx_10 = var_c8_1:8.q u>> 0x20
    uint64_t var_78_1 = rdx_10
    
    while (true)
        int64_t rcx_8 = sx.q(var_60_1:0xc.d)
        int64_t rax_20 = var_70.q
        
        if (rcx_8.d == rdx_10.d && var_60_1.q == r15_1 && rax_20 == r13)
            break
        
        int64_t* rdi_1 = r14[1]
        int64_t r10_2 = *r14
        void* rbx_4 = (rcx_8 << 5) + *rax_20
        void* var_a0_1 = rbx_4
        int64_t var_98_1 = r10_2
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t rcx_9 = sx.q(*(rbx_4 + 0x10))
        
        if (rcx_9.d != 0)
            int32_t rsi_2 = 0
            int32_t r15_2 = 0
            int32_t var_108_1 = 0
            int64_t rdi_2 = 0
            r8_3.b = **(rbx_4 + 8) != r10_2
            char arg_20 = r8_3.b
            
            do
                int64_t r9_5 = sx.q(r15_2)
                rdi_2 += 1
                r15_2 += 1
                
                if (rdi_2 s< rcx_9)
                    int64_t* rcx_12 = (rdi_2 << 4) + *(rbx_4 + 8)
                    
                    do
                        int32_t rax_22
                        rax_22.b = *rcx_12 != r10_2
                        
                        if (zx.d(r8_3.b) != rax_22)
                            break
                        
                        r15_2 += 1
                        rdi_2 += 1
                        rcx_12 = &rcx_12[2]
                    while (rdi_2 s< rcx_9)
                
                int32_t i_1 = r15_2 - r9_5.d
                
                if (r8_3.b == 0)
                    if (i_1 != 0)
                        int64_t* rsi_6 = (r9_5 << 4) + 8 + *(rbx_4 + 8)
                        int32_t i
                        
                        do
                            int64_t* rbx_5 = *rsi_6
                            
                            if (rbx_5 != 0)
                                rbx_5[1].d -= 1
                                
                                if (rbx_5[1].d == 1)
                                    (**rbx_5)(rbx_5)
                                    int32_t rax_25 = *(rbx_5 + 0xc)
                                    *(rbx_5 + 0xc) -= 1
                                    
                                    if (rax_25 == 1)
                                        (*(*rbx_5 + 8))(rbx_5, 1)
                            
                            rsi_6 = &rsi_6[2]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        rbx_4 = var_a0_1
                        r8_3 = zx.d(arg_20)
                    
                    rsi_2 = var_108_1
                else
                    if (rsi_2 != r9_5.d)
                        memmove((sx.q(rsi_2) << 4) + *(rbx_4 + 8), (r9_5 << 4) + *(rbx_4 + 8), 
                            i_1 << 4)
                        r8_3 = zx.d(arg_20)
                    
                    rsi_2 += i_1
                    var_108_1 = rsi_2
                
                r10_2 = var_98_1
                r8_3.b ^= 1
                arg_20 = r8_3.b
            while (rdi_2 s< rcx_9)
            
            r14 = arg2
            r15_1 = var_88_1
            r13 = var_80
            *(rbx_4 + 0x10) = rsi_2
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_29 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        var_60_1:8.d &= not.d(var_70:0xc.d)
        sub_14059bdd0(&var_70:8)
        rdx_10 = var_78_1

int32_t result = sub_141c8e1d0(*(arg1 + 0x148), r14)
int64_t* rbx_7 = r14[1]

if (rbx_7 != 0)
    result = rbx_7[1].d
    rbx_7[1].d -= 1
    
    if (result == 1)
        result = (**rbx_7)(rbx_7)
        int32_t r12_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (r12_1 == 1)
            return (*(*rbx_7 + 8))(rbx_7, zx.q(r12_1))

return result
