// 函数: sub_141e886f0
// 地址: 0x141e886f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t (* var_68)(int64_t* arg1)

if (sub_140a80ea0() == 0)
    void** const var_48 = &data_142d42ed8
    char var_b0_1 = arg2
    var_68 = sub_141e76770
    int64_t var_58_1 = 0
    int128_t var_40 = arg1.o
    return sub_141e85cb0(&var_68, arg3)

int32_t rax_2 = *(arg1 + 0x380)
int64_t rsi = sx.q(rax_2 - 1)
int64_t var_b8
char var_b0
int128_t var_98
int64_t var_58

if (rax_2 - 1 s>= 0)
    int64_t temp5_1
    
    do
        void* rdi_1 = *(*(arg1 + 0x378) + (rsi << 3))
        
        if (arg2 != 0)
        label_141e888fb:
            sub_141e744f0(arg1, rdi_1)
        else if (*(rdi_1 + 0x181) s>= 0)
            var_b8.d = 0
            int32_t r11_1 = *(rdi_1 + 0x158)
            int64_t (* r9_1)(int64_t* arg1) = rdi_1 + 0x140
            var_b8:4.d = 1
            int32_t rcx_1 = 0
            var_b0.q = r9_1
            int32_t r8_1 = 0
            int32_t var_a8_1 = 0xffffffff
            int64_t var_a4_1 = 0
            
            if (r11_1 != 0)
                int64_t (* rax_5)(int64_t* arg1) = *(r9_1 + 0x10)
                
                if (rax_5 != 0)
                    r9_1 = rax_5
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r11_1 - 1)
                int32_t rdx_3 = *r9_1
                
                if (rdx_3 != 0)
                label_141e88848:
                    int32_t rax_12 = neg.d(rdx_3) & rdx_3
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
                    var_b8:4.d = rax_12
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_1
                    
                    var_a4_1.d = r8_1 - rax_13 + 0x1f
                    
                    if (r8_1 - rax_13 + 0x1f s> r11_1)
                        var_a4_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_4 = sx.q(rcx_1)
                        r8_1 += 0x20
                        rcx_1 += 1
                        var_a4_1:4.d = r8_1
                        var_b8.d = rcx_1
                        
                        if (rdx_4.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                        int32_t var_a8_2 = 0xffffffff
                        
                        if (rdx_3 != 0)
                            goto label_141e88848
                    
                    var_a4_1.d = r11_1
            
            var_68 = rdi_1 + 0x130
            int128_t var_50_1 = 0xffffffff
            int128_t var_60_1 = var_b8.o
            var_98 = var_68.o
            int64_t var_78_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int128_t var_88_1 = var_58.o
            
            if (0 s< r11_1)
                int32_t i = var_88_1:0xc.d
                
                do
                    void* rax_17 = *(*var_98.q + sx.q(i) * 0x18 + 8)
                    
                    if (rax_17 != 0 && (*(rax_17 + 0x100) & 0x100) == 0)
                        goto label_141e888fb
                    
                    var_88_1:8.d &= not.d(var_98:0xc.d)
                    sub_14059bdd0(&var_98:8)
                    i = var_88_1:0xc.d
                while (i s< *(var_88_1.q + 0x18))
        
        temp5_1 = rsi
        rsi -= 1
    while (temp5_1 - 1 s>= 0)

var_b8.d = 0
int32_t r10 = *(arg1 + 0x418)
var_b8:4.d = 1
int32_t rcx_6 = 0
var_b0.q = arg1 + 0x400
int32_t var_a8_3 = 0xffffffff
int64_t var_a4_2 = 0

if (r10 != 0)
    void* rax_21 = *(arg1 + 0x410)
    void* r8_3 = arg1 + 0x400
    
    if (rax_21 != 0)
        r8_3 = rax_21
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *r8_3
    
    if (rdx_9 != 0)
    label_141e88986:
        int32_t rax_28 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_28)
        var_b8:4.d = rax_28
        int32_t rax_29
        
        if (rax_28 == 0)
            rax_29 = 0x20
        else
            rax_29 = 0x1f - temp0_3
        
        var_a4_2.d = rcx_6 - rax_29 + 0x1f
        
        if (rcx_6 - rax_29 + 0x1f s> r10)
            var_a4_2.d = r10
    else
        while (true)
            int64_t rdx_10 = sx.q(rbx)
            rcx_6 += 0x20
            rbx += 1
            var_a4_2:4.d = rcx_6
            var_b8.d = rbx
            
            if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r8_3 + (rdx_10 << 2) + 4)
            int32_t var_a8_4 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141e88986
        
        var_a4_2.d = r10

int32_t rdx_12 = *(arg1 + 0x418)
var_68 = arg1 + 0x3f0
int128_t var_50_2 = 0xffffffff
int32_t r14_2 = 0xffffffff << (rdx_12.b & 0x1f)
int128_t var_60_2 = var_b8.o
int32_t r8_5 = rdx_12 s>> 5
int32_t r9_3 = rdx_12 & 0xffffffe0
int64_t var_78_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_a8_5 = r14_2
var_a4_2.d = rdx_12
var_98 = var_68.o
int128_t var_88_2 = var_58.o

if (rdx_12 != r10)
    void* rax_31 = *(arg1 + 0x410)
    void* r10_1 = arg1 + 0x400
    
    if (rax_31 != 0)
        r10_1 = rax_31
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_16 = *(r10_1 + (sx.q(r8_5) << 2)) & r14_2
    
    if (rdx_16 != 0)
    label_141e88a52:
        int32_t rax_38 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_38)
        int32_t r12_1
        
        if (rax_38 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_5
        
        var_a4_2.d = r9_3 - r12_1 + 0x1f
        
        if (r9_3 - r12_1 + 0x1f s> r10)
            var_a4_2.d = r10
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_11.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_16 = *(r10_1 + (rcx_11 << 2) + 4)
            var_a8_5 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_141e88a52
        
        var_a4_2.d = r10

while (true)
    int64_t rax_40 = sx.q(var_88_2:0xc.d)
    int64_t* rdx_17 = var_98.q
    
    if (rax_40.d == (var_a8_5.q u>> 0x20).d && var_88_2.q == arg1 + 0x400 && rdx_17 == arg1 + 0x3f0)
        return sub_141e82850(arg1, 0) __tailcall
    
    sub_141e744f0(arg1, *(*rdx_17 + rax_40 * 0x28))
    var_88_2:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
