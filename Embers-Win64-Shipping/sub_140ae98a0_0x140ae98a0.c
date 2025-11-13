// 函数: sub_140ae98a0
// 地址: 0x140ae98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[5].d
void* r10 = &arg2[2]
int32_t var_d4 = 1
int32_t var_d8 = 0
void* var_d0 = r10
int32_t var_c8 = 0xffffffff
int32_t r8 = 0
int64_t var_c4 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_140ae993a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_c4.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_c4:4.d = r9
            var_d8 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rcx != 0)
                goto label_140ae993a
        
        var_c4.d = r11

double zmm2[0x2] = var_c8.o
double var_a0 = zmm2[0]
double var_b0[0x2] = var_d8.o
double zmm1[0x2] = var_b0
double var_90[0x2] = arg2.o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_70 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r11)
    int32_t i = zmm1[1]:4.d
    
    do
        int64_t* rdx_3 = sx.q(i) * 0xb8 + *var_90[0]
        int64_t* rdi_1 = &rdx_3[2]
        int64_t* arg_18 = rdi_1
        int64_t* rax_14 = sub_140af00b0(arg1, rdx_3)
        int32_t r11_1 = rdi_1[5].d
        void* r9_2 = &rdi_1[2]
        int32_t var_f4_1 = 1
        int32_t rcx_4 = 0
        int32_t var_f8 = 0
        int32_t var_f0_1 = r9_2.d
        int32_t r8_1 = 0
        int32_t var_e8 = 0xffffffff
        int64_t var_e4_1 = 0
        
        if (r11_1 != 0)
            void* rax_15 = *(r9_2 + 0x10)
            
            if (rax_15 != 0)
                r9_2 = rax_15
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_6 = *r9_2
            
            if (rdx_6 != 0)
            label_140ae9a7b:
                int32_t rax_22 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
                int32_t var_f4_2 = rax_22
                int32_t rax_23
                
                if (rax_22 == 0)
                    rax_23 = 0x20
                else
                    rax_23 = 0x1f - temp0_4
                
                var_e4_1.d = r8_1 - rax_23 + 0x1f
                
                if (r8_1 - rax_23 + 0x1f s> r11_1)
                    var_e4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_7 = sx.q(rcx_4)
                    r8_1 += 0x20
                    rcx_4 += 1
                    var_e4_1:4.d = r8_1
                    var_f8 = rcx_4
                    
                    if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
                    var_e8 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_140ae9a7b
                
                var_e4_1.d = r11_1
        
        zmm2 = var_e8.o
        double var_50_1[0x2] = zmm2
        double var_60_1[0x2] = var_f8.o
        int64_t* var_b8
        var_b8.o = rdi_1.o
        uint32_t rax_26 = (zmm2[0] u>> 0x20).d
        var_a0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int128_t var_58
        var_b0 = var_58
        
        if (rax_26 s< r11_1)
            int32_t j = var_a0:4.d
            
            do
                int64_t rbx_1 = *(*var_b8 + sx.q(j) * 0x30)
                int64_t arg_20 = rbx_1
                int32_t arg_10
                sub_14093f560(rax_14, &arg_10, rbx_1)
                int64_t rax_29 = sx.q(arg_10)
                int64_t rdx_13
                
                if (rax_29.d == 0xffffffff)
                    rdx_13 = 0
                else
                    rdx_13 = rax_29 * 0x30 + *rax_14
                
                int64_t rax_30 = rdx_13 + 8
                
                if (rdx_13 == 0)
                    rax_30 = 0
                
                if (rax_30 == 0)
                    var_d8.q = 0
                    int32_t var_d0_1 = rax_30.d
                    sub_140ae5e50(rdi_1, rbx_1, &var_d8, 1)
                    int64_t* r15_1 = var_d8.q
                    int64_t rsi_1 = sx.q(var_d0_1)
                    int64_t* rdi_2 = r15_1
                    void* r14_3 = &r15_1[rsi_1 * 4]
                    
                    if (r15_1 != r14_3)
                        do
                            sub_140596d10(&var_f8, rdi_2)
                            int16_t* const string = &data_142d40450
                            var_e8.q = 0
                            
                            if (var_f0_1 != 0)
                                string = var_f8.q
                            
                            var_e4_1 = 0
                            wchar16* k_3 = wcschr(string, 0x25)
                            wchar16* k_2 = k_3
                            
                            if (k_3 != 0)
                                wchar16* k
                                
                                do
                                    int64_t* rax_31 = sub_140af9950(k_2)
                                    
                                    if (rax_31 != 0)
                                        sub_140aef750(&var_f8, &var_e8)
                                        break
                                    
                                    k = wcschr(&k_2[1], (rax_31 + 0x25).w)
                                    k_2 = k
                                while (k != 0)
                            
                            sub_140ae49f0(rax_14, &arg_20, &var_f8)
                            int64_t rcx_14 = var_e8.q
                            
                            if (rcx_14 != 0)
                                sub_140a74f90(rcx_14)
                            
                            int64_t rcx_15 = var_f8.q
                            
                            if (rcx_15 != 0)
                                sub_140a74f90(rcx_15)
                            
                            rdi_2 = &rdi_2[4]
                            arg1[0xa].b = 1
                        while (rdi_2 != r14_3)
                        
                        r15_1 = var_d8.q
                    
                    int64_t* rbx_2 = r15_1
                    
                    if (rsi_1.d != 0)
                        int32_t k_1
                        
                        do
                            int64_t rcx_16 = rbx_2[2]
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            int64_t rcx_17 = *rbx_2
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                            
                            rbx_2 = &rbx_2[4]
                            k_1 = rsi_1.d
                            rsi_1 = zx.q(rsi_1.d - 1)
                        while (k_1 != 1)
                    
                    if (r15_1 != 0)
                        sub_140a74f90(r15_1)
                    
                    rdi_1 = arg_18
                
                var_a0.d &= not.d(var_b0[0]:4.d)
                sub_14059bdd0(&var_b0)
                j = var_a0:4.d
            while (j s< *(var_b0[1] i+ 0x18))
        
        zmm1[1].d &= not.d(var_90[1]:4.d)
        sub_14059bdd0(&var_90[1])
        result = zmm1[0]
        i = zmm1[1]:4.d
    while (i s< *(result + 0x18))

return result
