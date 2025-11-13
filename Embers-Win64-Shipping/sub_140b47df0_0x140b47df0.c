// 函数: sub_140b47df0
// 地址: 0x140b47df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = 0
int32_t var_d4 = 1
int32_t r10 = *(arg1 + 0x78)
void* r9 = arg1 + 0x60
void* var_d0 = r9
int32_t rcx = 0
int32_t var_d8 = 0
int32_t r8 = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140b47e88:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_c4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_c4.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_c4:4.d = r8
            var_d8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b47e88
        
        var_c4.d = r10

double zmm2[0x2] = var_c8.o
double var_80 = zmm2[0]
double result_2[0x2] = var_d8.o
int64_t result_1 = result_2.q
double var_70[0x2] = (arg1 + 0x50).o
int64_t result = zmm2[0] u>> 0x20
int64_t var_50 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        double rbx_1 = var_70[0]
        int64_t rdi_2 = sx.q(i) * 0x60
        sub_140b63b70(*rbx_1 + rdi_2, &var_d8)
        int32_t rcx_4 = 0
        int32_t var_b8_1 = 0
        void* rbx_4 = *rbx_1 + 8 + rdi_2
        int32_t var_b4_1 = 1
        int32_t r11_1 = *(rbx_4 + 0x28)
        void* r9_1 = rbx_4 + 0x10
        void* var_b0_1 = r9_1
        int32_t r8_2 = 0
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r11_1 != 0)
            void* rax_13 = *(r9_1 + 0x10)
            
            if (rax_13 != 0)
                r9_1 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = *r9_1
            
            if (rdx_8 != 0)
            label_140b47fa8:
                int32_t rax_20 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t var_b4_2 = rax_20
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_4
                
                var_a4_1.d = r8_2 - rax_21 + 0x1f
                
                if (r8_2 - rax_21 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_9 = sx.q(rcx_4)
                    r8_2 += 0x20
                    rcx_4 += 1
                    var_a4_1:4.d = r8_2
                    var_b8_1 = rcx_4
                    
                    if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                    int32_t var_a8_2 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140b47fa8
                
                var_a4_1.d = r11_1
        
        int128_t var_20_1 = 0xffffffff
        double result_3[0x2] = var_b8_1.o
        void* var_98
        var_98.o = rbx_4.o
        var_80 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        result_2 = result_3
        
        if (0 s< r11_1)
            int32_t j = var_80:4.d
            
            do
                int64_t var_48
                sub_140b63b70((sx.q(j) << 5) + *var_98, &var_48)
                int64_t rcx_9 = var_48
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                var_80.d &= not.d(result_2[0]:4.d)
                sub_14059bdd0(&result_2)
                j = var_80:4.d
            while (j s< *(result_2[1] i+ 0x18))
        
        int64_t rcx_11 = var_d8.q
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int32_t var_58 = var_58 & not.d(var_70[1]:4.d)
        sub_14059bdd0(&var_70[1])
        result = result_1
        i = i_1
    while (i s< *(result + 0x18))

return result
