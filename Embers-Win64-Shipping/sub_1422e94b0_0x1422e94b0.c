// 函数: sub_1422e94b0
// 地址: 0x1422e94b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[5].d
void* r9 = &arg2[2]
int32_t var_e4 = 1
void* var_e0 = r9
int32_t rcx = 0
int32_t var_e8 = 0
int32_t var_d8 = 0xffffffff
int32_t r8 = 0
int64_t var_d4 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1422e9549:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d4:4.d = r8
            var_e8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1422e9549
        
        var_d4.d = r11

int64_t* var_30 = arg2
int64_t var_b0 = 0xffffffff
double var_c0[0x2] = var_e8.o
char var_60 = 0
double zmm3[0x2] = var_c0
double result = zmm3[0]
int128_t var_98 = arg2.o
double var_38[0x2]
var_38[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
double var_78[0x2] = var_38

if (0 s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    int64_t rsi
    int64_t arg_8 = rsi
    
    do
        int64_t* rdi_1 = var_98.q
        int32_t* rbx_1 = sx.q(i) * 0x88
        
        if (*(*rdi_1 + rbx_1 + 0xc) == 0)
            int32_t r10_1 = (data_143a2e848.q).d
            rsi.b = 0
            int32_t var_e4_2 = 1
            int32_t rcx_2 = 0
            int32_t var_e8_1 = 0
            int32_t r8_2 = 0
            void* var_e0_1 = &data_143a2e830
            int32_t var_d8_2 = 0xffffffff
            int64_t var_d4_1 = 0
            
            if (r10_1 != 0)
                void* rax_13 = data_143a2e840
                void* r9_1 = &data_143a2e830
                
                if (rax_13 != 0)
                    r9_1 = rax_13
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                int32_t rdx_6 = *r9_1
                
                if (rdx_6 != 0)
                label_1422e96ab:
                    int32_t rax_20 = neg.d(rdx_6) & rdx_6
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                    int32_t var_e4_3 = rax_20
                    int32_t rax_21
                    
                    if (rax_20 == 0)
                        rax_21 = 0x20
                    else
                        rax_21 = 0x1f - temp0_4
                    
                    var_d4_1.d = r8_2 - rax_21 + 0x1f
                    
                    if (r8_2 - rax_21 + 0x1f s> r10_1)
                        var_d4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_7 = sx.q(rcx_2)
                        r8_2 += 0x20
                        rcx_2 += 1
                        var_d4_1:4.d = r8_2
                        var_e8_1 = rcx_2
                        
                        if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                        int32_t var_d8_3 = 0xffffffff
                        
                        if (rdx_6 != 0)
                            goto label_1422e96ab
                    
                    var_d4_1.d = r10_1
            
            int128_t var_40_1 = 0xffffffff
            double var_50_1[0x2] = var_e8_1.o
            int64_t* var_c8
            var_c8.o = (&data_143a2e820).o
            var_b0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            var_c0 = var_50_1
            
            if (0 s< r10_1)
                int32_t j = var_b0:4.d
                
                do
                    if (*(*((sx.q(j) << 5) + *var_c8) + 0x70) == *(rbx_1 + *rdi_1))
                        int32_t k = 0
                        int64_t r15_2 = sx.q(j) << 5
                        void* rcx_7 = *var_c8 + r15_2
                        
                        if (*(rcx_7 + 0x10) s> 0)
                            int64_t* rbx_2 = nullptr
                            
                            do
                                int64_t* rcx_8 = *(rbx_2 + *(rcx_7 + 8))
                                char rax_30
                                
                                if (rsi.b == 0)
                                    rax_30 = (*(*rcx_8 + 0xc0))(rcx_8)
                                
                                if (rsi.b != 0 || rax_30 != 0)
                                    rsi.b = 1
                                
                                k += 1
                                rcx_7 = *var_c8 + r15_2
                                rbx_2 = &rbx_2[1]
                            while (k s< *(rcx_7 + 0x10))
                        
                        break
                    
                    var_b0.d &= not.d(var_c0[0]:4.d)
                    sub_14059bdd0(&var_c0)
                    j = var_b0:4.d
                while (j s< *(var_c0[1] i+ 0x18))
        
        zmm3[1].d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
        i = zmm3[1]:4.d
    while (i s< *(zmm3[0] i+ 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_1422e0b30(arg2, arg2[1].d - *(arg2 + 0x34), 1)

result.b = 0
return result
