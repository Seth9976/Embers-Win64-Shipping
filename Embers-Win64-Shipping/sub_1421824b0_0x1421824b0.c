// 函数: sub_1421824b0
// 地址: 0x1421824b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int32_t* var_70 = &arg1[4]
*arg1 = &data_1432e6ba8
int32_t r11 = arg1[7].d
int32_t var_64 = 0
int32_t rcx = 0
int32_t var_60 = 0
int32_t r8 = 0

if (r11 != 0)
    int32_t* rax_1 = arg1[6]
    int32_t* r9_1 = &arg1[4]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_64_2
    
    if (rdx_3 != 0)
    label_142182568:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142182568
        
        var_64_2 = r11

int32_t rdx_6 = arg1[7].d
int32_t r9_3 = rdx_6 s>> 5
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r10_1 = rdx_6 & 0xffffffe0
int32_t var_68_2 = r12
int64_t* r8_1 = &arg1[2]
int32_t var_64_3 = rdx_6
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (rdx_6 != r11)
    int32_t* rax_11 = arg1[6]
    int32_t* r11_1 = &arg1[4]
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = r11_1[sx.q(r9_3)] & r12
    int32_t var_64_5
    
    if (rdx_10 != 0)
    label_142182622:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_3
        
        int32_t var_64_4 = r10_1 - rsi_1 + 0x1f
        
        if (r10_1 - rsi_1 + 0x1f s> r11)
            var_64_5 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r9_3)
            r10_1 += 0x20
            r9_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = r11_1[rcx_5 + 1]
            var_68_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_142182622
        
        var_64_5 = r11

while (true)
    int64_t rax_20 = sx.q(var_40:4.d)
    
    if (rax_20.d == (var_68_2.q u>> 0x20).d && var_50:8.q == &arg1[4] && r8_1 == &arg1[2])
        arg1[3].d = 0
        
        if (*(arg1 + 0x1c) != 0)
            sub_1405c5570(&arg1[2], 0)
        
        arg1[8].d = 0xffffffff
        *(arg1 + 0x44) = 0
        sub_14059a8e0(&arg1[4], 0)
        sub_1421b1ca0(arg1)
        int64_t rcx_14 = arg1[0x15]
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int32_t i_1 = arg1[0x14].d
        void* rcx_15 = arg1[0x13]
        
        if (i_1 != 0)
            int64_t* rdi_2 = rcx_15 + 0x18
            int32_t i
            
            do
                sub_1405ec8a0(rdi_2)
                rdi_2 = &rdi_2[6]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_15 = arg1[0x13]
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int64_t* rcx_17 = arg1[0x12]
        
        if (rcx_17 != 0)
            rcx_17[1].d -= 1
            
            if (rcx_17[1].d == 1)
                (**rcx_17)(rcx_17, 1)
        
        arg1[0xa].d = 0
        
        if (*(arg1 + 0x54) != 0)
            sub_1405c5570(&arg1[9], 0)
        
        arg1[0xf].d = 0xffffffff
        *(arg1 + 0x7c) = 0
        sub_14059a8e0(&arg1[0xb], 0)
        int64_t rcx_20 = arg1[0xd]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = arg1[9]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        arg1[3].d = 0
        
        if (*(arg1 + 0x1c) != 0)
            sub_1405c5570(&arg1[2], 0)
        
        arg1[8].d = 0xffffffff
        *(arg1 + 0x44) = 0
        sub_14059a8e0(&arg1[4], 0)
        int64_t rcx_24 = arg1[6]
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = arg1[2]
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        *arg1 = &data_142dd5c80
        return &data_142dd5c80
    
    int64_t* rdi_1 = *(*r8_1 + (rax_20 << 3))
    
    if (rdi_1 != 0)
        sub_1423ff2a0(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    var_40.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r8_1 = &arg1[2]
