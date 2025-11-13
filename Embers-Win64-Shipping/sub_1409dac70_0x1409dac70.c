// 函数: sub_1409dac70
// 地址: 0x1409dac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_d4 = 1
int32_t var_d8 = 0
int32_t r11 = *(arg1 + 0x4a0)
void* var_d0 = arg1 + 0x488
int32_t rcx = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x498)
    void* r9_1 = arg1 + 0x488
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1409dad18:
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
        
        var_c4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_c4:4.d = rcx
            var_d8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1409dad18
        
        var_c4.d = r11

int32_t rdx_6 = *(arg1 + 0x4a0)
double zmm2[0x2] = var_c8.o
double var_b0[0x2] = var_d8.o
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_70 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_b0[1].d = rsi
var_b0[1]:4.d = rdx_6
double var_90[0x2] = (arg1 + 0x478).o

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x498)
    void* r10_1 = arg1 + 0x488
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_1409dade2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_b0[1]:4.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_b0[1]:4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b0[1].d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1409dade2
        
        var_b0[1]:4.d = r11

uint32_t rbx_2 = (var_b0[1] u>> 0x20).d

while (true)
    int64_t rax_21 = sx.q(var_b0[1]:4.d)
    double rdx_11 = var_90[0]
    
    if (rax_21.d == rbx_2 && var_b0[0] == arg1 + 0x488 && rdx_11 == arg1 + 0x478)
        int64_t* r15 = *(arg1 + 0x3b8)
        int64_t r12 = 0
        void* result = &r15[sx.q(*(arg1 + 0x3c0))]
        uint64_t rbx_4 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3
        
        if (r15 u> result)
            rbx_4 = 0
        
        uint64_t arg_10 = rbx_4
        
        if (rbx_4 != 0)
            do
                int32_t rdx_14 = *(arg1 + 0x480) - *(arg1 + 0x4ac)
                int64_t* r13_1 = *r15
                var_d8.q = 0
                int64_t var_d0_1 = 0
                
                if (rdx_14 s> 0)
                    sub_1405dadb0(&var_d8, rdx_14)
                
                int32_t r11_1 = *(arg1 + 0x4a0)
                void* r9_5 = arg1 + 0x488
                void* var_b8
                var_b8:4.d = 1
                int32_t rcx_11 = 0
                var_b8.d = 0
                int32_t r8_3 = 0
                var_b0[0] = r9_5
                var_b0[1].d = 0xffffffff
                var_b0[1] = 0
                
                if (r11_1 != 0)
                    void* rax_26 = *(r9_5 + 0x10)
                    
                    if (rax_26 != 0)
                        r9_5 = rax_26
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r11_1 - 1)
                    int32_t rdx_17 = *r9_5
                    
                    if (rdx_17 != 0)
                    label_1409daf38:
                        int32_t rax_33 = neg.d(rdx_17) & rdx_17
                        uint64_t rflags_3
                        int32_t temp0_5
                        temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
                        var_b8:4.d = rax_33
                        int32_t rax_34
                        
                        if (rax_33 == 0)
                            rax_34 = 0x20
                        else
                            rax_34 = 0x1f - temp0_5
                        
                        var_b0[1]:4.d = r8_3 - rax_34 + 0x1f
                        
                        if (r8_3 - rax_34 + 0x1f s> r11_1)
                            var_b0[1]:4.d = r11_1
                    else
                        while (true)
                            int64_t rdx_18 = sx.q(rcx_11)
                            r8_3 += 0x20
                            rcx_11 += 1
                            zmm2[0].d = r8_3
                            var_b8.d = rcx_11
                            
                            if (rdx_18.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_17 = *(r9_5 + (rdx_18 << 2) + 4)
                            var_b0[1].d = 0xffffffff
                            
                            if (rdx_17 != 0)
                                goto label_1409daf38
                        
                        var_b0[1]:4.d = r11_1
                
                double var_50_1[0x2] = var_b0
                double var_60_1[0x2] = var_b8.o
                var_90 = (arg1 + 0x478).o
                uint32_t rax_37 = (var_b0[0] u>> 0x20).d
                int64_t var_70_1 = (_mm_unpackhi_pd(var_b0, var_b0[0])).q
                
                if (rax_37 s< r11_1)
                    double var_58[0x2]
                    int32_t i = var_58[1]:4.d
                    
                    do
                        int64_t rbx_5 = sx.q(var_d0_1.d)
                        int64_t rdi_1 = *var_90[0]
                        int32_t rax_39 = (rbx_5 + 1).d
                        var_d0_1.d = rax_39
                        
                        if (rax_39 s> var_d0_1:4.d)
                            sub_1405a4cf0(&var_d8)
                        
                        *(var_d8.q + (rbx_5 << 2)) = *(rdi_1 + sx.q(i) * 0xc)
                        var_58[1].d &= not.d(var_90[1]:4.d)
                        sub_14059bdd0(&var_90[1])
                        i = var_58[1]:4.d
                    while (i s< *(var_58[0] i+ 0x18))
                    
                    rbx_4 = arg_10
                
                result = (*(*r13_1 + 0x368))(r13_1, arg1, &var_d8)
                int64_t rcx_17 = var_d8.q
                
                if (rcx_17 != 0)
                    result = sub_140a74f90(rcx_17)
                
                r15 = &r15[1]
                r12 += 1
            while (r12 != rbx_4)
        
        return result
    
    sub_141cd95d0(*(arg1 + 0x28), *(*rdx_11 + rax_21 * 0xc))
    var_b0[1].d &= not.d(var_90[1]:4.d)
    sub_14059bdd0(&var_90[1])
