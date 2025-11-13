// 函数: sub_1410373d0
// 地址: 0x1410373d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x140)
void* var_90 = arg1 + 0x128
int32_t rcx = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x138)
    void* r9_1 = arg1 + 0x128
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141037488:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_84:4.d = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141037488
        
        var_84.d = r11

int32_t rdx_5 = *(arg1 + 0x140)
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x118).o
int96_t var_68 = var_48:8.12

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x138)
    void* r10_1 = arg1 + 0x128
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_141037552:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
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
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141037552
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_21 = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x128 && rax_21 == arg1 + 0x118)
        int32_t rcx_11 = 0
        int32_t var_94_2 = 1
        int32_t var_98_1 = 0
        int32_t r11_1 = *(arg1 + 0x190)
        int32_t r8_5 = 0
        void* var_90_1 = arg1 + 0x178
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_26 = *(arg1 + 0x188)
            void* r9_6 = arg1 + 0x178
            
            if (rax_26 != 0)
                r9_6 = rax_26
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_13 = *r9_6
            
            if (rdx_13 != 0)
            label_141037678:
                int32_t rax_33 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
                int32_t var_94_3 = rax_33
                int32_t rax_34
                
                if (rax_33 == 0)
                    rax_34 = 0x20
                else
                    rax_34 = 0x1f - temp0_5
                
                var_84_1.d = r8_5 - rax_34 + 0x1f
                
                if (r8_5 - rax_34 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_14 = sx.q(rcx_11)
                    r8_5 += 0x20
                    rcx_11 += 1
                    var_84_1:4.d = r8_5
                    var_98_1 = rcx_11
                    
                    if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_13 = *(r9_6 + (rdx_14 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_141037678
                
                var_84_1.d = r11_1
        
        int32_t rdx_15 = *(arg1 + 0x190)
        int128_t var_38_1 = 0xffffffff
        int32_t rdi_1 = 0xffffffff << (rdx_15.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_8 = rdx_15 s>> 5
        int32_t r9_8 = rdx_15 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = rdi_1
        var_84_1.d = rdx_15
        var_78 = (arg1 + 0x168).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_15 != r11_1)
            void* rax_36 = *(arg1 + 0x188)
            void* r10_2 = arg1 + 0x178
            
            if (rax_36 != 0)
                r10_2 = rax_36
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_19 = *(r10_2 + (sx.q(r8_8) << 2)) & rdi_1
            
            if (rdx_19 != 0)
            label_141037742:
                int32_t rax_43 = neg.d(rdx_19) & rdx_19
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
                int32_t r12_1
                
                if (rax_43 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_7
                
                var_84_1.d = r9_8 - r12_1 + 0x1f
                
                if (r9_8 - r12_1 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_16 = sx.q(r8_8)
                    r9_8 += 0x20
                    r8_8 += 1
                    
                    if (rcx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_19 = *(r10_2 + (rcx_16 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_19 != 0)
                        goto label_141037742
                
                var_84_1.d = r11_1
        
        while (true)
            int64_t rcx_18 = sx.q(var_5c)
            int64_t* result = var_78.q
            
            if (rcx_18.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0x178
                    && result == arg1 + 0x168)
                return result
            
            void* rdx_20 = *(*result + rcx_18 * 0x10)
            int32_t r8_9 = *(rdx_20 + 0x64)
            void* rdi_2 = *(*(rdx_20 + 0x40) + 0x10)
            
            if (r8_9 == 1)
                sub_14105c1a0(rdi_2, arg2 + 0x1c0)
                void* rax_47 = sub_141023fa0(arg2 + 0x1c0, rdi_2)
                int32_t rax_48 = sub_1410626f0(rax_47, 0)
                
                if (rax_48 == 0xffffffff)
                    void* rbx_5 = *(arg2 + 0x1c8)
                    var_98_1.q = rdi_2
                    int64_t var_90_2 = 8
                    int64_t rdi_3 = sx.q(*(rbx_5 + 0xc0))
                    int32_t rax_49 = (rdi_3 + 1).d
                    *(rbx_5 + 0xc0) = rax_49
                    
                    if (rax_49 s> *(rbx_5 + 0xc4))
                        sub_1405a4f90(rbx_5 + 0xb8)
                    
                    *(*(rbx_5 + 0xb8) + rdi_3 * 0x10) = var_98_1.o
                    sub_141069360(rax_47, 0, 8)
                else if (rax_48 != 8)
                    sub_1410129f0(arg2 + 0x1c0, rdi_2, rax_48, 8, 0)
                    sub_141069360(rax_47, 0, 8)
            else if (r8_9 == 4)
                sub_141037220(arg2 + 0x1c0, rdi_2, 8, *(rdx_20 + 0x68))
            else if (r8_9 == 5 || r8_9 == 8)
                sub_141036f20(arg2 + 0x1c0, rdi_2, 8, rdx_20 + 0x50)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    void* r8_3 = *(*rax_21 + rcx_7 * 0x10)
    void* rdx_10 = *(*(r8_3 + 0x40) + 0x10)
    
    if (rdx_10 != 0 && *(rdx_10 + 0xfc) != 0)
        int32_t r8_4 = *(r8_3 + 0x64)
        
        if (r8_4 != 1 || *(rdx_10 + 0x100) == r8_4)
            sub_141036f20(arg2 + 0x1c0, rdx_10, 0x40, r8_3 + 0x50)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
