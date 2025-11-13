// 函数: sub_1413c7990
// 地址: 0x1413c7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
int32_t rbx = 0
int32_t var_94 = 1
int32_t var_98 = 0
void* var_90 = arg1 + 0x10
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_1413c7a3a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_84:4.d = r9
            var_98 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rcx != 0)
                goto label_1413c7a3a
        
        var_84.d = r11

int32_t rdx_2 = *(arg1 + 0x28)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r12
var_84.d = rdx_2
int128_t var_78 = arg1.o
int96_t var_68 = var_48:8.12

if (rdx_2 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_2 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_6 != 0)
    label_1413c7b12:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1413c7b12
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    int64_t* rax_21 = var_78.q
    
    if (rcx_8.d == (var_88_1.q u>> 0x20).d && var_68.q == arg1 + 0x10 && rax_21 == arg1)
        int32_t r10_3 = *(arg1 + 0x28)
        int32_t rcx_12 = 0
        var_98 = 0
        int32_t var_94_2 = 1
        void* var_90_1 = arg1 + 0x10
        int32_t var_88_2 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_3 != 0)
            void* rax_26 = *(arg1 + 0x20)
            void* r8_3 = arg1 + 0x10
            
            if (rax_26 != 0)
                r8_3 = rax_26
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_3 - 1)
            int32_t rdx_10 = *r8_3
            
            if (rdx_10 != 0)
            label_1413c7bf6:
                int32_t rax_33 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
                int32_t var_94_3 = rax_33
                int32_t rax_34
                
                if (rax_33 == 0)
                    rax_34 = 0x20
                else
                    rax_34 = 0x1f - temp0_5
                
                var_84_1.d = rcx_12 - rax_34 + 0x1f
                
                if (rcx_12 - rax_34 + 0x1f s> r10_3)
                    var_84_1.d = r10_3
            else
                while (true)
                    int64_t rdx_11 = sx.q(rbx)
                    rcx_12 += 0x20
                    rbx += 1
                    var_84_1:4.d = rcx_12
                    var_98 = rbx
                    
                    if (rdx_11.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r8_3 + (rdx_11 << 2) + 4)
                    var_88_2 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_1413c7bf6
                
                var_84_1.d = r10_3
        
        int32_t rdx_13 = *(arg1 + 0x28)
        zmm2 = var_88_2.o
        double var_38_1[0x2] = zmm2
        int32_t rsi_2 = 0xffffffff << (rdx_13.b & 0x1f)
        int128_t var_48_1 = var_98.o
        int32_t r8_5 = rdx_13 s>> 5
        int32_t r9_6 = rdx_13 & 0xffffffe0
        int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_88_3 = rsi_2
        var_84_1.d = rdx_13
        var_78 = arg1.o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_13 != r10_3)
            void* rax_36 = *(arg1 + 0x20)
            void* r11_1 = arg1 + 0x10
            
            if (rax_36 != 0)
                r11_1 = rax_36
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_3 - 1)
            int32_t rdx_17 = *(r11_1 + (sx.q(r8_5) << 2)) & rsi_2
            
            if (rdx_17 != 0)
            label_1413c7cc2:
                int32_t rax_43 = neg.d(rdx_17) & rdx_17
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
                int32_t r15_1
                
                if (rax_43 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_7
                
                var_84_1.d = r9_6 - r15_1 + 0x1f
                
                if (r9_6 - r15_1 + 0x1f s> r10_3)
                    var_84_1.d = r10_3
            else
                while (true)
                    int64_t rcx_17 = sx.q(r8_5)
                    r9_6 += 0x20
                    r8_5 += 1
                    
                    if (rcx_17.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r11_1 + (rcx_17 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_17 != 0)
                        goto label_1413c7cc2
                
                var_84_1.d = r10_3
        
        while (true)
            int64_t rcx_19 = sx.q(var_5c)
            int64_t result = var_78.q
            
            if (rcx_19.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x10 && result == arg1)
                return result
            
            void*** (** rdx_20)() = (rcx_19 << 5) + *result
            var_98.q = rdx_20[1]
            var_90_1.d = rdx_20[2].d
            sub_1413ae170(arg2, *rdx_20, &var_98, 0)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t* rcx_10 = *((rcx_8 << 5) + *rax_21)
    (*(*rcx_10 + 0x18))(rcx_10, arg2, 0)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
