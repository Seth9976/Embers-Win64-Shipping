// 函数: sub_141f86a90
// 地址: 0x141f86a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
sub_141f7a100(&arg_8, arg1)
void* r14 = nullptr
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x58)
void* var_90 = arg1 + 0x40
int32_t rcx_1 = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int32_t var_84 = 0
int32_t var_80 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x50)
    void* r9_1 = arg1 + 0x40
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_84_2
    
    if (rdx_3 != 0)
    label_141f86b48:
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
                goto label_141f86b48
        
        var_84_2 = r11

int32_t rdx_6 = *(arg1 + 0x58)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
int32_t var_84_3 = rdx_6
int128_t var_78 = (arg1 + 0x30).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x50)
    void* r10_1 = arg1 + 0x40
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_84_5
    
    if (rdx_10 != 0)
    label_141f86c12:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
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
                goto label_141f86c12
        
        var_84_5 = r11

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x40 && rdx_11 == arg1 + 0x30)
        sub_1405b8890(arg1 + 0x30, 0)
        *(arg1 + 0x98) = 0
        data_143a2d8e4 += 1
        EnterCriticalSection(&data_143f3c8d0)
        void* rbx_4 = arg_8
        sub_140865c40(&data_143a2db70, &arg_8, rbx_4)
        int64_t rax_25 = sx.q(arg_8.d)
        
        if (rax_25.d != 0xffffffff)
            r14 = data_143a2db70 + rax_25 * 0x18
        
        int32_t temp4 = *(r14 + 8)
        *(r14 + 8) -= 1
        
        if (temp4 == 1)
            sub_140599090(rbx_4 + 0x80)
            sub_140868c90(&data_143a2db70, rbx_4)
        
        return LeaveCriticalSection(&data_143f3c8d0) __tailcall
    
    int64_t* rcx_9 = *(*rdx_11 + rax_20 * 0x18 + 8)
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
