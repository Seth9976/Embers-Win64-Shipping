// 函数: sub_141e73dc0
// 地址: 0x141e73dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x38))(arg2, arg1 + 0x208, 0, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x5b8), zx.q(*(arg1 + 0x5c0)), 0, 0)
sub_141e6d670(arg2, arg1 + 0x210, 0, 0)
int32_t var_94 = 1
int32_t r11 = *(arg1 + 0x300)
void* var_90 = arg1 + 0x2e8
int32_t rcx_3 = 0
int32_t var_98 = 0
int32_t r8_1 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_2 = *(arg1 + 0x2f8)
    void* r9_1 = arg1 + 0x2e8
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141e73eb8:
        int32_t rax_9 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = r8_1 - rax_10 + 0x1f
        
        if (r8_1 - rax_10 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            r8_1 += 0x20
            rcx_3 += 1
            var_84:4.d = r8_1
            var_98 = rcx_3
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141e73eb8
        
        var_84.d = r11

int32_t rdx_7 = *(arg1 + 0x300)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_4 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_7
int128_t var_78 = (arg1 + 0x2d8).o
int96_t var_68 = var_48:8.12

if (rdx_7 != r11)
    void* rax_12 = *(arg1 + 0x2f8)
    void* r10_1 = arg1 + 0x2e8
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_4) << 2)) & r14
    
    if (rdx_11 != 0)
    label_141e73f83:
        int32_t rax_19 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rax_20 + 0x1f
        
        if (r9_3 - rax_20 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141e73f83
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_22 = sx.q(var_5c)
    int64_t* rdx_12 = var_78.q
    
    if (rax_22.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x2e8 && rdx_12 == arg1 + 0x2d8)
        int64_t rdx_15 = *(arg1 + 0x2c0)
        
        if (rdx_15 != 0)
            (*(*arg2 + 0x38))(arg2, rdx_15 + 0x18, 0, 0)
        
        void** rdi_2 = *(arg1 + 0x378)
        int64_t rsi_1 = 0
        uint64_t r14_2 = sx.q(*(arg1 + 0x380)) << 3 u>> 3
        
        if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x380))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                sub_141dba240(*rdi_2, arg2)
                rsi_1 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_1 != r14_2)
        
        int64_t rsi_2 = 0
        void** rdi_3 = *(arg1 + 0x4b8)
        uint64_t r14_4 = sx.q(*(arg1 + 0x4c0)) << 3 u>> 3
        
        if (rdi_3 u> &rdi_3[sx.q(*(arg1 + 0x4c0))])
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                sub_141dba240(*rdi_3, arg2)
                rsi_2 += 1
                rdi_3 = &rdi_3[1]
            while (rsi_2 != r14_4)
        
        int32_t var_94_2 = 1
        int32_t r11_1 = *(arg1 + 0x418)
        void* var_90_1 = arg1 + 0x400
        int32_t rcx_17 = 0
        int32_t var_98_1 = 0
        int32_t r8_5 = 0
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_30 = *(arg1 + 0x410)
            void* r9_5 = arg1 + 0x400
            
            if (rax_30 != 0)
                r9_5 = rax_30
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *r9_5
            
            if (rdx_21 != 0)
            label_141e74128:
                int32_t rax_37 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                int32_t var_94_3 = rax_37
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_5
                
                var_84_1.d = r8_5 - rax_38 + 0x1f
                
                if (r8_5 - rax_38 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_22 = sx.q(rcx_17)
                    r8_5 += 0x20
                    rcx_17 += 1
                    var_84_1:4.d = r8_5
                    var_98_1 = rcx_17
                    
                    if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r9_5 + (rdx_22 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_141e74128
                
                var_84_1.d = r11_1
        
        int32_t rdx_23 = *(arg1 + 0x418)
        int32_t r8_8 = rdx_23 s>> 5
        int128_t var_38_1 = 0xffffffff
        int128_t var_48_1 = var_98_1.o
        int32_t r12 = 0xffffffff << (rdx_23.b & 0x1f)
        int32_t r9_7 = rdx_23 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = r12
        var_84_1.d = rdx_23
        var_78 = (arg1 + 0x3f0).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_23 != r11_1)
            void* rax_40 = *(arg1 + 0x410)
            void* r10_3 = arg1 + 0x400
            
            if (rax_40 != 0)
                r10_3 = rax_40
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_27 = *(r10_3 + (sx.q(r8_8) << 2)) & r12
            
            if (rdx_27 != 0)
            label_141e741f3:
                int32_t rax_47 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
                int32_t rax_48
                
                if (rax_47 == 0)
                    rax_48 = 0x20
                else
                    rax_48 = 0x1f - temp0_7
                
                var_84_1.d = r9_7 - rax_48 + 0x1f
                
                if (r9_7 - rax_48 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_22 = sx.q(r8_8)
                    r9_7 += 0x20
                    r8_8 += 1
                    
                    if (rcx_22.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r10_3 + (rcx_22 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_141e741f3
                
                var_84_1.d = r11_1
        
        while (true)
            int64_t rax_50 = sx.q(var_5c)
            int64_t* rcx_24 = var_78.q
            
            if (rax_50.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0x400
                    && rcx_24 == arg1 + 0x3f0)
                sub_141e8be40(arg1)
                (*(*arg2 + 0x40))(arg2, *(arg1 + 0x388), zx.q(*(arg1 + 0x390)), 0, 0)
                return (*(*arg2 + 0x40))(arg2, *(arg1 + 0x2b0), zx.q(*(arg1 + 0x2b8)), 0, 0)
            
            sub_141dba240(*(*rcx_24 + rax_50 * 0x28), arg2)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 0x38))(arg2, *rdx_12 + rax_22 * 0x38 + 0x10, 0, 0)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
