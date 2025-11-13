// 函数: sub_141d2f300
// 地址: 0x141d2f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222548
EnterCriticalSection(&arg1[4])
int32_t r8 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = arg1[0xe].d
void* var_90 = &arg1[0xb]
int32_t rcx_1 = 0
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (r11 != 0)
    void* rax_1 = arg1[0xd]
    void* r9_1 = &arg1[0xb]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_84_2
    
    if (rdx_3 != 0)
    label_141d2f3c8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_80_1 = rcx_1
            var_98 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141d2f3c8
        
        var_84_2 = r11

int32_t rdx_6 = arg1[0xe].d
int128_t var_38 = 0xffffffff
int32_t r13 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r13
int32_t var_84_3 = rdx_6
int128_t var_78 = (&arg1[9]).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = arg1[0xd]
    void* r10_1 = &arg1[0xb]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r13
    int32_t var_84_5
    
    if (rdx_10 != 0)
    label_141d2f492:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_84_5 = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141d2f492
        
        var_84_5 = r11

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0xb] && rdx_11 == &arg1[9])
        sub_1408d84f0(&arg1[9])
        
        if (arg1 != -0x20)
            LeaveCriticalSection(&arg1[4])
        
        sub_1405ae080(&arg1[9])
        DeleteCriticalSection(&arg1[4])
        void* rcx_16 = arg1[1]
        *arg1 = &data_143222250
        
        if (rcx_16 == 0)
            return &data_143222250
        
        return sub_1409740e0(rcx_16 + 8, arg1)
    
    int64_t* rdi_2 = *(*rdx_11 + rax_20 * 0x18 + 8)
    
    if (rdi_2 != 0)
        sub_141d2ea50(rdi_2)
        j_sub_140a74f90(rdi_2)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
