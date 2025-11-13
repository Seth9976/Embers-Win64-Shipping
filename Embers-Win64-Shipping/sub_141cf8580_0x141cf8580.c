// 函数: sub_141cf8580
// 地址: 0x141cf8580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[3].d
int32_t r8 = 0
int32_t var_54 = 1
int32_t r9 = 0
int32_t var_58 = 0
void* var_50 = &arg1[2]
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r11 != 0)
    void* r10_1 = arg1[2]
    
    if ((r10_1.b & 1) != 0)
        r10_1 = (r10_1 s>> 1) + &arg1[2]
    
    int32_t rcx = *r10_1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    
    if (rcx != 0)
    label_141cf861a:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_54_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_44.d = r9 - rax_8 + 0x1f
        
        if (r9 - rax_8 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_44:4.d = r9
            var_58 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_48_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141cf861a
        
        var_44.d = r11

int64_t* rcx_3 = arg1
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r11)
    int32_t rdx_3 = 0
    
    while (true)
        void* rax_11 = *rcx_3
        
        if ((rax_11.b & 1) != 0)
            rax_11 = (rax_11 s>> 1) + rcx_3
        
        sub_140a1d5c0((sx.q(rdx_3) << 5) + rax_11)
        var_20.d &= not.d(var_30:4.d)
        sub_141d02a20(&var_30)
        rdx_3 = var_20:4.d
        
        if (rdx_3 s>= *(var_30:8.q + 8))
            break
        
        rcx_3 = arg1

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1408e7310(arg1, 0)

arg1[4].d = 0xffffffff
*(arg1 + 0x24) = 0
sub_141d00fe0(&arg1[2], 0)
sub_140a1d5c0(&arg1[2])
return sub_140a1d5c0(arg1) __tailcall
