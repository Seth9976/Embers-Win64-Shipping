// 函数: sub_142372980
// 地址: 0x142372980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rcx = 0
int32_t var_88 = 0xffffffff
uint64_t* r15 = arg2 + 0x58
int64_t var_84 = 0
int32_t r11 = r15[5].d
void* r14 = &r15[2]
void* var_90 = r14

if (r11 != 0)
    void* rax_1 = *(r14 + 0x10)
    void* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_142372a28:
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
                goto label_142372a28
        
        var_84.d = r11

int32_t rdx_5 = r15[5].d
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int128_t var_60 = 0xffffffff
int64_t var_30 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_70
var_70:8.d = rsi
var_70:0xc.d = rdx_5
int128_t var_50 = r15.o
int128_t var_40 = var_98.o

if (rdx_5 != r11)
    void* rax_11 = *(r14 + 0x10)
    void* r10_1 = r14
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_142372af2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_70:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_70:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_70:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_142372af2
        
        var_70:0xc.d = r11

uint64_t rdx_11 = var_70:8.q u>> 0x20
uint64_t arg_10 = rdx_11

while (true)
    int64_t rcx_7 = sx.q(var_40:0xc.d)
    int64_t* rax_20 = var_50.q
    
    if (rcx_7.d == rdx_11.d && var_40.q == r14 && rax_20 == r15)
        return sub_1409d9c00(r15) __tailcall
    
    int64_t rbx_2 = sx.q(*((rcx_7 << 5) + *rax_20))
    
    if (*(arg1 + 0x150) != *(arg1 + 0x17c))
        void* rcx_9 = *(arg1 + 0x188)
        void* r8_3 = arg1 + 0x180
        
        if (rcx_9 != 0)
            r8_3 = rcx_9
        
        int32_t i = *(r8_3 + (((sx.q(*(arg1 + 0x190)) - 1) & rbx_2) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_4 = *(arg1 + 0x148)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rcx_10 = i_1 * 3
                
                if (*(r8_4 + (rcx_10 << 3)) == rbx_2.d)
                    if (i != 0xffffffff)
                        void* rcx_11 = r8_4 + i_1 * 0x18
                        
                        if (rcx_11 != 0)
                            int64_t* r14_1 = *(rcx_11 + 8)
                            
                            if (r14_1 != 0)
                                sub_142372730(r14_1, arg2)
                                
                                if (r14_1[1].d == 0)
                                    int32_t r15_1 = *(r14_1 + 0x14)
                                    sub_140bb5c10(arg1 + 0x148, rbx_2.d)
                                    sub_140d6dfe0(arg1 + 8, r15_1)
                                    void* rax_24 = *(arg2 + 0x18)
                                    
                                    if (rax_24 != 0)
                                        sub_140d6dfe0(arg1 + 0xf8, *(rax_24 + 0xc))
                                    
                                    int64_t rdi_2 = sx.q(*(arg2 + 0x38))
                                    int32_t* rbx_5
                                    
                                    if (*(arg1 + 0x60) == *(arg1 + 0x8c))
                                    label_142372c6d:
                                        rbx_5 = nullptr
                                    else
                                        void* r8_5 = arg1 + 0x90
                                        void* rcx_16 = *(r8_5 + 8)
                                        
                                        if (rcx_16 != 0)
                                            r8_5 = rcx_16
                                        
                                        int32_t rax_26 =
                                            *(r8_5 + (((sx.q(*(arg1 + 0xa0)) - 1) & rdi_2) << 2))
                                        
                                        if (rax_26 == 0xffffffff)
                                        label_142372c6d_1:
                                            rbx_5 = nullptr
                                        else
                                            while (true)
                                                rbx_5 = sx.q(rax_26) * 0x60 + *(arg1 + 0x58)
                                                
                                                if (*rbx_5 == rdi_2.d)
                                                    break
                                                
                                                rax_26 = rbx_5[0x16]
                                                
                                                if (rax_26 == 0xffffffff)
                                                    goto label_142372c6d_2
                                            
                                            if (rax_26 == 0xffffffff)
                                            label_142372c6d_2:
                                                rbx_5 = nullptr
                                    
                                    void* rcx_18 = &rbx_5[2]
                                    
                                    if (rbx_5 == 0)
                                        rcx_18 = nullptr
                                    
                                    if (rcx_18 != 0 && sub_140d6dfe0(rcx_18, r15_1) != 0)
                                        void* rax_28 = &rbx_5[4]
                                        void* rdx_23 = &rbx_5[0xf]
                                        
                                        if (rbx_5 == 0)
                                            rax_28 = 8
                                        
                                        if (rbx_5 == 0)
                                            rdx_23 = 0x34
                                        
                                        if (*rax_28 == *rdx_23)
                                            sub_1423722c0(arg1 + 0x58, rdi_2.d)
                                    
                                    int32_t* rbx_8
                                    
                                    if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
                                    label_142372d31:
                                        rbx_8 = nullptr
                                    else
                                        void* rcx_20 = *(arg1 + 0xe8)
                                        void* r8_7 = arg1 + 0xe0
                                        
                                        if (rcx_20 != 0)
                                            r8_7 = rcx_20
                                        
                                        int32_t rax_31 =
                                            *(r8_7 + (((sx.q(*(arg1 + 0xf0)) - 1) & rdi_2) << 2))
                                        
                                        if (rax_31 == 0xffffffff)
                                        label_142372d31_1:
                                            rbx_8 = nullptr
                                        else
                                            while (true)
                                                rbx_8 = sx.q(rax_31) * 0x60 + *(arg1 + 0xa8)
                                                
                                                if (*rbx_8 == rdi_2.d)
                                                    break
                                                
                                                rax_31 = rbx_8[0x16]
                                                
                                                if (rax_31 == 0xffffffff)
                                                    goto label_142372d31_2
                                            
                                            if (rax_31 == 0xffffffff)
                                            label_142372d31_2:
                                                rbx_8 = nullptr
                                    
                                    void* rcx_22 = &rbx_8[2]
                                    
                                    if (rbx_8 == 0)
                                        rcx_22 = nullptr
                                    
                                    if (rcx_22 != 0)
                                        void* rax_32 = *(arg2 + 0x18)
                                        
                                        if (rax_32 != 0
                                                && sub_140d6dfe0(rcx_22, *(rax_32 + 0xc)) != 0)
                                            void* rax_34 = &rbx_8[4]
                                            void* r8_9 = &rbx_8[0xf]
                                            
                                            if (rbx_8 == 0)
                                                rax_34 = 8
                                            
                                            if (rbx_8 == 0)
                                                r8_9 = 0x34
                                            
                                            if (*rax_34 == *r8_9)
                                                sub_1423722c0(arg1 + 0xa8, rdi_2.d)
                                    
                                    int64_t rcx_24 = *r14_1
                                    
                                    if (rcx_24 != 0)
                                        sub_140a74f90(rcx_24)
                                    
                                    j_sub_140a74f90(r14_1)
                                    r15 = arg2 + 0x58
                            
                            r14 = var_90
                    
                    break
                
                i = *(r8_4 + (rcx_10 << 3) + 0x10)
            while (i != 0xffffffff)
    
    var_40:8.d &= not.d(var_50:0xc.d)
    sub_14059bdd0(&var_50:8)
    rdx_11 = arg_10
