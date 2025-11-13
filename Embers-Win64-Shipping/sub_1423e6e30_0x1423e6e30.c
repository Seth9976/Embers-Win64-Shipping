// 函数: sub_1423e6e30
// 地址: 0x1423e6e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x48)
int32_t rdi = 0
int64_t var_80 = 0
int64_t* rdx = nullptr
int64_t* var_88 = nullptr
int32_t r10 = 0

if (rax s> 0)
    sub_1405c5570(&var_88, rax)
    r10 = var_80.d
    rdx = var_88

int64_t r15 = 0
int64_t* r14 = *(arg1 + 0x40)
uint64_t r12_1 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(arg1 + 0x48))])
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t r11_1 = *r14
        
        if (r11_1 != 0)
            uint64_t r9_2 = zx.q(r11_1.d) & 0xffffff
            
            if (r9_2.d s< *(arg1 + 0x10))
                void* rax_3 = *(arg1 + 0x28)
                void* r8_1 = arg1 + 0x18
                
                if (rax_3 != 0)
                    r8_1 = rax_3
                
                void* rbx_3
                
                if (test_bit(*(r8_1 + (zx.q(r9_2.d) u>> 5 << 2)), r9_2.d & 0x1f))
                    rbx_3 = r9_2 * 0x90 + *(arg1 + 8)
                
                if (not(test_bit(*(r8_1 + (zx.q(r9_2.d) u>> 5 << 2)), r9_2.d & 0x1f))
                        || *(rbx_3 + 0x70) != r11_1 || *(rbx_3 + 1) == 4)
                    rdx = var_88
                else
                    int64_t rsi_1 = sx.q(r10)
                    r10 = (rsi_1 + 1).d
                    var_80.d = r10
                    
                    if (r10 s> var_80:4.d)
                        sub_1405a4d70(&var_88)
                        r10 = var_80.d
                    
                    rdx = var_88
                    rdx[rsi_1] = rbx_3
        
        r14 = &r14[1]
        r15 += 1
    while (r15 != r12_1)

int64_t rsi_2 = 0
int64_t* r14_1 = rdx
void* rcx_4 = &rdx[sx.q(r10)]
uint64_t r15_4 = (rcx_4 - rdx + 7) u>> 3

if (rdx u> rcx_4)
    r15_4 = 0

if (r15_4 != 0)
    do
        void* rbx_4 = *r14_1
        sub_140b19e60()
        sub_1423d83e0(&data_1439a8bd0, rbx_4)
        rsi_2 += 1
        r14_1 = &r14_1[1]
    while (rsi_2 != r15_4)

int32_t var_a4 = 1
int32_t r11_2 = *(arg1 + 0x78)
void* var_a0 = arg1 + 0x60
int32_t rcx_5 = 0
int32_t var_a8 = 0
int32_t r8_2 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11_2 != 0)
    void* rax_6 = *(arg1 + 0x70)
    void* r9_3 = arg1 + 0x60
    
    if (rax_6 != 0)
        r9_3 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_2 - 1)
    int32_t rdx_8 = *r9_3
    
    if (rdx_8 != 0)
    label_1423e7018:
        int32_t rax_13 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_a4_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        var_94.d = r8_2 - rax_14 + 0x1f
        
        if (r8_2 - rax_14 + 0x1f s> r11_2)
            var_94.d = r11_2
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_5)
            r8_2 += 0x20
            rcx_5 += 1
            var_94:4.d = r8_2
            var_a8 = rcx_5
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_3 + (rdx_9 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1423e7018
        
        var_94.d = r11_2

int32_t rdx_10 = *(arg1 + 0x78)
int128_t var_38 = 0xffffffff
int32_t rsi_3 = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_48 = var_a8.o
int32_t r8_5 = rdx_10 s>> 5
int32_t r9_5 = rdx_10 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = rsi_3
var_94.d = rdx_10
int128_t var_78 = (arg1 + 0x50).o
int96_t var_68 = var_48:8.12

if (rdx_10 != r11_2)
    void* rax_16 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x60
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_2 - 1)
    int32_t rdx_14 = *(r10_1 + (sx.q(r8_5) << 2)) & rsi_3
    
    if (rdx_14 != 0)
    label_1423e70e2:
        int32_t rax_23 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t rax_24
        
        if (rax_23 == 0)
            rax_24 = 0x20
        else
            rax_24 = 0x1f - temp0_4
        
        var_94.d = r9_5 - rax_24 + 0x1f
        
        if (r9_5 - rax_24 + 0x1f s> r11_2)
            var_94.d = r11_2
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_5)
            r9_5 += 0x20
            r8_5 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_1 + (rcx_10 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_1423e70e2
        
        var_94.d = r11_2

while (true)
    int32_t var_5c
    int64_t rcx_12 = sx.q(var_5c)
    int64_t* rax_26 = var_78.q
    
    if (rcx_12.d == (var_98_2.q u>> 0x20).d && var_68.q == arg1 + 0x60 && rax_26 == arg1 + 0x50)
        int32_t var_a8_1 = 0
        int32_t r10_2 = *(arg1 + 0xc8)
        int32_t var_a4_2 = 1
        int32_t rcx_15 = 0
        void* var_a0_1 = arg1 + 0xb0
        int32_t var_98_3 = 0xffffffff
        var_94.d = 0
        var_94:4.d = 0
        
        if (r10_2 != 0)
            void* rax_30 = *(arg1 + 0xc0)
            void* r8_6 = arg1 + 0xb0
            
            if (rax_30 != 0)
                r8_6 = rax_30
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2 - 1)
            int32_t rdx_20 = *r8_6
            
            if (rdx_20 != 0)
            label_1423e71e6:
                int32_t rax_37 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                int32_t var_a4_3 = rax_37
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_5
                
                var_94.d = rcx_15 - rax_38 + 0x1f
                
                if (rcx_15 - rax_38 + 0x1f s> r10_2)
                    var_94.d = r10_2
            else
                while (true)
                    int64_t rdx_21 = sx.q(rdi)
                    rcx_15 += 0x20
                    rdi += 1
                    var_94:4.d = rcx_15
                    var_a8_1 = rdi
                    
                    if (rdx_21.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r8_6 + (rdx_21 << 2) + 4)
                    int32_t var_98_4 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_1423e71e6
                
                var_94.d = r10_2
        
        int32_t rdx_23 = *(arg1 + 0xc8)
        int128_t var_38_1 = 0xffffffff
        int32_t rdi_1 = 0xffffffff << (rdx_23.b & 0x1f)
        int128_t var_48_1 = var_a8_1.o
        int32_t r8_8 = rdx_23 s>> 5
        int32_t r9_8 = rdx_23 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_5 = rdi_1
        var_94.d = rdx_23
        var_78 = (arg1 + 0xa0).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_23 != r10_2)
            void* rax_40 = *(arg1 + 0xc0)
            void* r10_3 = arg1 + 0xb0
            
            if (rax_40 != 0)
                r10_3 = rax_40
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_27 = *(r10_3 + (sx.q(r8_8) << 2)) & rdi_1
            
            if (rdx_27 != 0)
            label_1423e72b2:
                int32_t rax_47 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
                int32_t r12_2
                
                if (rax_47 == 0)
                    r12_2 = 0x20
                else
                    r12_2 = 0x1f - temp0_7
                
                var_94.d = r9_8 - r12_2 + 0x1f
                
                if (r9_8 - r12_2 + 0x1f s> r10_2)
                    var_94.d = r10_2
            else
                while (true)
                    int64_t rcx_20 = sx.q(r8_8)
                    r9_8 += 0x20
                    r8_8 += 1
                    
                    if (rcx_20.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r10_3 + (rcx_20 << 2) + 4)
                    var_98_5 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_1423e72b2
                
                var_94.d = r10_2
        
        while (true)
            int64_t rcx_22 = sx.q(var_5c)
            int64_t* result = var_78.q
            
            if (rcx_22.d == (var_98_5.q u>> 0x20).d && var_68_1.q == arg1 + 0xb0
                    && result == arg1 + 0xa0)
                int64_t* rcx_25 = var_88
                
                if (rcx_25 == 0)
                    return result
                
                return sub_140a74f90(rcx_25)
            
            void* rbx_12 = (zx.q(*(*result + rcx_22 * 0x10)) & 0xffffff) * 0x90 + *(arg1 + 8)
            sub_140b19e60()
            sub_1423d83e0(&data_1439a8bd0, rbx_12)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    void* rbx_8 = (zx.q(*(*rax_26 + rcx_12 * 0x10)) & 0xffffff) * 0x90 + *(arg1 + 8)
    sub_140b19e60()
    sub_1423d83e0(&data_1439a8bd0, rbx_8)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
