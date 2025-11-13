// 函数: sub_140af0230
// 地址: 0x140af0230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg3 + 0x28)
void* r10 = arg3 + 0x10
int32_t var_b4 = 1
int32_t var_b8 = 0
void* var_b0 = r10
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int32_t r9 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_140af02da:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_a4:4.d = r8
            var_b8 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_140af02da
        
        var_a4.d = r11

int512_t zmm2
zmm2.o = 0xffffffff
int64_t var_80 = 0xffffffff
double var_90[0x2] = var_b8.o
double zmm1[0x2] = var_90
double var_70[0x2] = arg3.o
double result = 0.0
int64_t var_50 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
double result_1 = zmm1[0]

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rbx_1 = var_70[0]
        int64_t rdi_1 = sx.q(i) * 0x68
        
        if (sub_140a236f0(arg2, *rbx_1 + rdi_1, 1) != 0)
            int32_t rcx_5 = 0
            int32_t var_b8_1 = 0
            void* rbx_4 = *rbx_1 + 0x10 + rdi_1
            int32_t var_b4_2 = 1
            int32_t r11_1 = *(rbx_4 + 0x28)
            void* r9_1 = rbx_4 + 0x10
            void* var_b0_1 = r9_1
            int32_t r8_2 = 0
            int32_t var_a8_2 = 0xffffffff
            int64_t var_a4_1 = 0
            
            if (r11_1 != 0)
                void* rax_13 = *(r9_1 + 0x10)
                
                if (rax_13 != 0)
                    r9_1 = rax_13
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                int32_t rdx_5 = *r9_1
                
                if (rdx_5 != 0)
                label_140af03f8:
                    int32_t rax_20 = neg.d(rdx_5) & rdx_5
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                    int32_t var_b4_3 = rax_20
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
                        int64_t rdx_6 = sx.q(rcx_5)
                        r8_2 += 0x20
                        rcx_5 += 1
                        var_a4_1:4.d = r8_2
                        var_b8_1 = rcx_5
                        
                        if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                        int32_t var_a8_3 = 0xffffffff
                        
                        if (rdx_5 != 0)
                            goto label_140af03f8
                    
                    var_a4_1.d = r11_1
            
            zmm2.o = 0xffffffff
            int128_t var_30_1 = 0xffffffff
            double var_40_1[0x2] = var_b8_1.o
            void* var_98
            var_98.o = rbx_4.o
            var_80 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            var_90 = var_40_1
            
            if (0 s< r11_1)
                int32_t j = var_80:4.d
                
                do
                    int64_t* rdx_9 = (sx.q(j) << 5) + *var_98
                    sub_14090d470(arg1 + 0x50, rdx_9, &rdx_9[1])
                    var_80.d &= not.d(var_90[0]:4.d)
                    sub_14059bdd0(&var_90)
                    j = var_80:4.d
                while (j s< *(var_90[1] i+ 0x18))
        
        int32_t var_58 = var_58 & not.d(var_70[1]:4.d)
        sub_14059bdd0(&var_70[1])
        result = result_1
        i = i_1
    while (i s< *(result i+ 0x18))

return result
