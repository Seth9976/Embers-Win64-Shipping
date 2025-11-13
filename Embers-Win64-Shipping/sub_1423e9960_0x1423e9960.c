// 函数: sub_1423e9960
// 地址: 0x1423e9960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t* rsi = *(arg1 + 0x40)
int64_t r14 = 0
uint64_t r15_1 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (rsi u> &rsi[sx.q(*(arg1 + 0x48)) * 2])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rbx_3 = (zx.q(*rsi) & 0xffffff) * 0x90 + *(arg1 + 8)
        
        if (*(rbx_3 + 1) != 4)
            sub_140b19e60()
            sub_1423d83e0(&data_1439a8bd0, rbx_3)
        
        rsi = &rsi[2]
        r14 += 1
    while (r14 != r15_1)

int32_t var_94 = 1
int32_t r11 = *(arg1 + 0x78)
void* var_90 = arg1 + 0x60
int32_t rcx = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_4 = *(arg1 + 0x70)
    void* r9_1 = arg1 + 0x60
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1423e9a68:
        int32_t rax_11 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_94_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1423e9a68
        
        var_84.d = r11

int32_t rdx_6 = *(arg1 + 0x78)
int128_t var_38 = 0xffffffff
int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi_1
var_84.d = rdx_6
int128_t var_78 = (arg1 + 0x50).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_14 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x60
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
    
    if (rdx_10 != 0)
    label_1423e9b32:
        int32_t rax_21 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rax_22 + 0x1f
        
        if (r9_3 - rax_22 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1423e9b32
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_24 = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x60 && rax_24 == arg1 + 0x50)
        int32_t var_98_1 = 0
        int32_t r10_2 = *(arg1 + 0xc8)
        int32_t var_94_2 = 1
        int32_t rcx_10 = 0
        void* var_90_1 = arg1 + 0xb0
        int32_t var_88_3 = 0xffffffff
        var_84.d = 0
        var_84:4.d = 0
        
        if (r10_2 != 0)
            void* rax_28 = *(arg1 + 0xc0)
            void* r8_4 = arg1 + 0xb0
            
            if (rax_28 != 0)
                r8_4 = rax_28
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2 - 1)
            int32_t rdx_16 = *r8_4
            
            if (rdx_16 != 0)
            label_1423e9c36:
                int32_t rax_35 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_35)
                int32_t var_94_3 = rax_35
                int32_t rax_36
                
                if (rax_35 == 0)
                    rax_36 = 0x20
                else
                    rax_36 = 0x1f - temp0_5
                
                var_84.d = rcx_10 - rax_36 + 0x1f
                
                if (rcx_10 - rax_36 + 0x1f s> r10_2)
                    var_84.d = r10_2
            else
                while (true)
                    int64_t rdx_17 = sx.q(rdi)
                    rcx_10 += 0x20
                    rdi += 1
                    var_84:4.d = rcx_10
                    var_98_1 = rdi
                    
                    if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_16 = *(r8_4 + (rdx_17 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_1423e9c36
                
                var_84.d = r10_2
        
        int32_t rdx_19 = *(arg1 + 0xc8)
        int128_t var_38_1 = 0xffffffff
        int32_t rdi_1 = 0xffffffff << (rdx_19.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_6 = rdx_19 s>> 5
        int32_t r9_6 = rdx_19 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = rdi_1
        var_84.d = rdx_19
        var_78 = (arg1 + 0xa0).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_19 != r10_2)
            void* rax_38 = *(arg1 + 0xc0)
            void* r10_3 = arg1 + 0xb0
            
            if (rax_38 != 0)
                r10_3 = rax_38
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_23 = *(r10_3 + (sx.q(r8_6) << 2)) & rdi_1
            
            if (rdx_23 != 0)
            label_1423e9d02:
                int32_t rax_45 = neg.d(rdx_23) & rdx_23
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_45)
                int32_t r12_1
                
                if (rax_45 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_7
                
                var_84.d = r9_6 - r12_1 + 0x1f
                
                if (r9_6 - r12_1 + 0x1f s> r10_2)
                    var_84.d = r10_2
            else
                while (true)
                    int64_t rcx_15 = sx.q(r8_6)
                    r9_6 += 0x20
                    r8_6 += 1
                    
                    if (rcx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_23 = *(r10_3 + (rcx_15 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_23 != 0)
                        goto label_1423e9d02
                
                var_84.d = r10_2
        
        while (true)
            int64_t rcx_17 = sx.q(var_5c)
            int64_t* result = var_78.q
            
            if (rcx_17.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0xb0
                    && result == arg1 + 0xa0)
                return result
            
            void* rbx_11 = (zx.q(*(*result + rcx_17 * 0x10)) & 0xffffff) * 0x90 + *(arg1 + 8)
            sub_140b19e60()
            sub_1423d83e0(&data_1439a8bd0, rbx_11)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    void* rbx_7 = (zx.q(*(*rax_24 + rcx_7 * 0x10)) & 0xffffff) * 0x90 + *(arg1 + 8)
    sub_140b19e60()
    sub_1423d83e0(&data_1439a8bd0, rbx_7)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
