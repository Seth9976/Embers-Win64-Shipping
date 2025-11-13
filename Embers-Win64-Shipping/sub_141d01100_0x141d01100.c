// 函数: sub_141d01100
// 地址: 0x141d01100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[3].d
int32_t var_64 = 1
int32_t var_68 = 0
void* var_60 = &arg1[2]
int32_t var_58 = 0xffffffff
int32_t r8 = 0
int64_t var_54 = 0
int32_t r9 = 0

if (r11 != 0)
    void* r10_1 = arg1[2]
    
    if ((r10_1.b & 1) != 0)
        r10_1 = (r10_1 s>> 1) + &arg1[2]
    
    int32_t rcx = *r10_1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    
    if (rcx != 0)
    label_141d0119a:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_64_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_54.d = r9 - rax_8 + 0x1f
        
        if (r9 - rax_8 + 0x1f s> r11)
            var_54.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_54:4.d = r9
            var_68 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_58_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141d0119a
        
        var_54.d = r11

int64_t* rcx_3 = arg1
int64_t* var_48 = rcx_3
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r11)
    int32_t rdx_2 = 0
    
    while (true)
        void* rax_11 = *rcx_3
        
        if ((rax_11.b & 1) != 0)
            rax_11 = (rax_11 s>> 1) + rcx_3
        
        void* rdi_3 = sx.q(rdx_2) * 0x50 + rax_11
        *(rdi_3 + 0x40) = 0
        sub_140a1d5c0(rdi_3 + 0x38)
        sub_141cf8580(rdi_3 + 0x10)
        sub_140a1d5c0(rdi_3)
        var_30.d &= not.d(var_40:4.d)
        sub_141d02a20(&var_40)
        rdx_2 = var_30:4.d
        
        if (rdx_2 s>= *(var_40:8.q + 8))
            break
        
        rcx_3 = var_48

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_14119ada0(arg1, arg2)

arg1[4].d = 0xffffffff
*(arg1 + 0x24) = 0
return sub_141d00fe0(&arg1[2], arg2) __tailcall
