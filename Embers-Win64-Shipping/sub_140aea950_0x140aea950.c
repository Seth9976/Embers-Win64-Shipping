// 函数: sub_140aea950
// 地址: 0x140aea950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t r13 = 0
int32_t var_c4 = 1
int32_t var_b8 = 0xffffffff
char result = *(arg1 + 0xd8)
void* r15 = arg2 + 0x10
int32_t* r14 = r15 + 0x10
int32_t rcx = 0
void* var_78 = r15
*(arg1 + 0xd8) = 1
int32_t r11 = r14[6]
int32_t r8 = 0
int32_t var_c8 = 0
int32_t* var_c0 = r14
int64_t var_b4 = 0

if (r11 != 0)
    int32_t* rax_1 = *(r14 + 0x10)
    int32_t* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140aeaa08:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_b4:4.d = r8
            var_c8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140aeaa08
        
        var_b4.d = r11

int32_t rdx_4 = *(r15 + 0x28)
int32_t rdi = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int128_t var_90 = 0xffffffff
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_a0
var_a0:8.d = rdi
var_a0:0xc.d = rdx_4
int128_t var_70 = r15.o

if (rdx_4 != r11)
    int32_t* rax_11 = *(r14 + 0x10)
    int32_t* r10_1 = r14
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = r10_1[sx.q(r8_3)] & rdi
    
    if (rdx_8 != 0)
    label_140aeaad2:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_a0:0xc.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_a0:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r10_1[rcx_5 + 1]
            var_a0:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140aeaad2
        
        var_a0:0xc.d = r11

uint64_t rdx_10 = var_a0:8.q u>> 0x20
uint64_t var_80 = rdx_10

while (true)
    int32_t var_54
    int64_t rcx_7 = sx.q(var_54)
    int64_t rax_21 = var_70.q
    int32_t var_58
    int64_t arg_18
    int64_t arg_20
    
    if (rcx_7.d == rdx_10.d && var_c8.o:8.q == r14 && rax_21 == r15)
        int32_t rcx_13 = 0
        void* r15_4 = arg_10 + 0x60
        int32_t var_c8_1 = 0
        int32_t r11_1 = *(r15_4 + 0x28)
        void* r14_2 = r15_4 + 0x10
        void* var_80_1 = r15_4
        int32_t r8_5 = 0
        int32_t var_c4_2 = 1
        void* var_c0_1 = r14_2
        int32_t var_b8_2 = 0xffffffff
        int64_t var_b4_1 = 0
        
        if (r11_1 != 0)
            void* rax_29 = *(r14_2 + 0x10)
            void* r9_5 = r14_2
            
            if (rax_29 != 0)
                r9_5 = rax_29
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r9_5
            
            if (rdx_15 != 0)
            label_140aeac5e:
                int32_t rax_36 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_36)
                int32_t var_c4_3 = rax_36
                int32_t rax_37
                
                if (rax_36 == 0)
                    rax_37 = 0x20
                else
                    rax_37 = 0x1f - temp0_5
                
                var_b4_1.d = r8_5 - rax_37 + 0x1f
                
                if (r8_5 - rax_37 + 0x1f s> r11_1)
                    var_b4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_13)
                    r8_5 += 0x20
                    rcx_13 += 1
                    var_b4_1:4.d = r8_5
                    var_c8_1 = rcx_13
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_b4_1.d = r11_1
                        break
                    
                    rdx_15 = *(r9_5 + (rdx_16 << 2) + 4)
                    int32_t var_b8_3 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_140aeac5e
        
        int32_t rdx_17 = *(r15_4 + 0x28)
        int32_t rdi_2 = 0xffffffff << (rdx_17.b & 0x1f)
        int32_t r8_8 = rdx_17 s>> 5
        int32_t r9_7 = rdx_17 & 0xffffffe0
        int128_t var_90_1 = 0xffffffff
        int64_t var_50_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_a0_1
        var_a0_1:8.d = rdi_2
        var_a0_1:0xc.d = rdx_17
        var_70 = r15_4.o
        
        if (rdx_17 != r11_1)
            void* rax_39 = *(r14_2 + 0x10)
            void* r10_2 = r14_2
            
            if (rax_39 != 0)
                r10_2 = rax_39
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *(r10_2 + (sx.q(r8_8) << 2)) & rdi_2
            
            if (rdx_21 != 0)
            label_140aead42:
                int32_t rax_46 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_46)
                int32_t r12_4
                
                if (rax_46 == 0)
                    r12_4 = 0x20
                else
                    r12_4 = 0x1f - temp0_7
                
                var_a0_1:0xc.d = r9_7 - r12_4 + 0x1f
                
                if (r9_7 - r12_4 + 0x1f s> r11_1)
                    var_a0_1:0xc.d = r11_1
            else
                while (true)
                    int64_t rcx_18 = sx.q(r8_8)
                    r9_7 += 0x20
                    r8_8 += 1
                    
                    if (rcx_18.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r10_2 + (rcx_18 << 2) + 4)
                    var_a0_1:8.d = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_140aead42
                
                var_a0_1:0xc.d = r11_1
        
        uint64_t rdx_23 = var_a0_1:8.q u>> 0x20
        uint64_t var_78_1 = rdx_23
        
        while (true)
            int64_t rcx_20 = sx.q(var_54)
            int64_t rax_48 = var_70.q
            
            if (rcx_20.d == rdx_23.d && var_c8_1.o:8.q == r14_2 && rax_48 == r15_4)
                void* rax_56 = arg_10
                void** rbx_6 = *(rax_56 + 0xb0)
                uint64_t rdi_5 = sx.q(*(rax_56 + 0xb8)) << 3 u>> 3
                
                if (rbx_6 u> &rbx_6[sx.q(*(rax_56 + 0xb8))])
                    rdi_5 = 0
                
                if (rdi_5 != 0)
                    do
                        arg_10 = *rbx_6
                        sub_140664c50(arg1 + 0xb0, &arg_10)
                        
                        if (*(arg1 + 0xd8) == 0)
                            sub_140599090(arg1 + 0xc0)
                        
                        rbx_6 = &rbx_6[1]
                        r13 += 1
                    while (r13 != rdi_5)
                
                *(arg1 + 0xd8) = result
                
                if (result != 0)
                    return result
                
                return sub_140599090(arg1 + 0xc0)
            
            int64_t rdi_3 = 0
            int64_t* r12_7 = (rcx_20 << 5) + *rax_48
            int64_t* r14_3 = r12_7[1]
            uint64_t r15_6 = sx.q(r12_7[2].d) << 3 u>> 3
            
            if (r14_3 u> &r14_3[r12_7[2]])
                r15_6 = 0
            
            if (r15_6 != 0)
                do
                    int64_t rbx_4 = *r12_7
                    int64_t rax_51 = *r14_3
                    arg_18 = rbx_4
                    arg_20 = rax_51
                    sub_140664c50(
                        sub_140ae5460(arg1 + 0x60, (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d), 
                            &arg_18), 
                        &arg_20)
                    
                    if (*(arg1 + 0xd8) == 0)
                        sub_140599090(arg1 + 0xc0)
                    
                    r14_3 = &r14_3[1]
                    rdi_3 += 1
                while (rdi_3 != r15_6)
                
                r13 = 0
            
            var_58 &= not.d(var_70:0xc.d)
            sub_14059bdd0(&var_70:8)
            rdx_23 = var_78_1
            r14_2 = var_c0_1
            r15_4 = var_80_1
    
    int64_t rdi_1 = 0
    int64_t* r12_3 = (rcx_7 << 5) + *rax_21
    int64_t* r14_1 = r12_3[1]
    uint64_t r15_2 = sx.q(r12_3[2].d) << 3 u>> 3
    
    if (r14_1 u> &r14_1[r12_3[2]])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t rbx_1 = *r12_3
            int64_t rax_24 = *r14_1
            arg_18 = rbx_1
            arg_20 = rax_24
            sub_140664c50(
                sub_140ae5460(arg1 + 0x10, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), &arg_18), 
                &arg_20)
            
            if (*(arg1 + 0xd8) == 0)
                sub_140599090(arg1 + 0xc0)
            
            r14_1 = &r14_1[1]
            rdi_1 += 1
        while (rdi_1 != r15_2)
        
        r13 = 0
    
    var_58 &= not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    rdx_10 = var_80
    r14 = var_c0
    r15 = var_78
