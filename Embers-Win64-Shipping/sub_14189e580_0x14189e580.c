// 函数: sub_14189e580
// 地址: 0x14189e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t var_78 = 0xffffffff
int32_t* var_80 = &arg1[4]
*arg1 = &data_142fe9620
int32_t r11 = arg1[7].d
int32_t rcx = 0
int32_t r8 = 0
int32_t var_88 = 0
int64_t var_74 = 0

if (r11 != 0)
    int32_t* rax_1 = arg1[6]
    int32_t* r9_1 = &arg1[4]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14189e638:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14189e638
        
        var_74.d = r11

int32_t rdx_5 = arg1[7].d
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_5
int128_t var_68 = (&arg1[2]).o
int128_t var_58 = var_38

if (rdx_5 != r11)
    int32_t* rax_11 = arg1[6]
    int32_t* r10_1 = &arg1[4]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & r12
    
    if (rdx_9 != 0)
    label_14189e702:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - rsi_1 + 0x1f
        
        if (r9_3 - rsi_1 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_78_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14189e702
        
        var_74.d = r11

while (true)
    int64_t rdx_10 = sx.q(var_58:0xc.d)
    int64_t r8_4 = var_68.q
    
    if (rdx_10.d == (var_78_2.q u>> 0x20).d && var_58.q == &arg1[4] && r8_4 == &arg1[2])
        if (arg1[0x1e] != 0)
            int64_t* rcx_9 = arg1[0xe]
            (*(*rcx_9 + 0x10))(rcx_9, &arg1[0x1c])
        
        int64_t* rcx_10 = arg1[0xe]
        (*(*rcx_10 + 0x20))(rcx_10, 0)
        DeleteCriticalSection(&arg1[0x1f])
        int64_t* rcx_12 = arg1[0x1e]
        
        if (rcx_12 != 0)
            (**rcx_12)(rcx_12, 1)
        
        if (arg1[0x14] != 0)
            void* rax_26 = arg1[0x16]
            void* rcx_13 = &arg1[0x18]
            
            if (rax_26 != 0)
                rcx_13 = rax_26
            
            (*(*rcx_13 + 0x10))(rcx_13)
        
        DeleteCriticalSection(&arg1[0xf])
        arg1[0xb].d = 0
        int64_t rcx_15 = arg1[0xa]
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        sub_1418a2170(&arg1[2], 0)
        int64_t rcx_17 = arg1[6]
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t rcx_18 = arg1[2]
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        *arg1 = &data_142e85a30
        return &data_142e85a30
    
    int64_t* rcx_7 = arg1[0xe]
    (*(*rcx_7 + 0x10))(rcx_7, (rdx_10 << 5) + *r8_4)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
