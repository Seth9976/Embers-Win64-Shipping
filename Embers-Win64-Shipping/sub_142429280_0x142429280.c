// 函数: sub_142429280
// 地址: 0x142429280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t var_78 = 0xffffffff
int32_t rdi = *(arg1 + 0x50)
void* var_80 = arg1 + 0x38
int32_t rcx = 0
int32_t var_88 = 0
int32_t r8 = 0
int64_t var_74 = 0

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_142429328:
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
        
        if (r8 - rax_9 + 0x1f s> rdi)
            var_74.d = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142429328
        
        var_74.d = rdi

int32_t rdx_5 = *(arg1 + 0x50)
int128_t var_28 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15
var_74.d = rdx_5
int128_t var_68 = (arg1 + 0x28).o
int128_t var_58 = var_38

if (rdx_5 != rdi)
    void* rax_11 = *(arg1 + 0x48)
    void* r10_1 = arg1 + 0x38
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_1424293f2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_74.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1424293f2
        
        var_74.d = rdi

while (true)
    int64_t rcx_7 = sx.q(var_58:0xc.d)
    int64_t* rax_20 = var_68.q
    
    if (rcx_7.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x38 && rax_20 == arg1 + 0x28)
        *(arg1 + 0x70) = 0
        int64_t rcx_10 = *(arg1 + 0x68)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        *(arg1 + 0x30) = 0
        
        if (*(arg1 + 0x34) != 0)
            sub_1405a5410(arg1 + 0x28, 0)
        
        *(arg1 + 0x58) = 0xffffffff
        *(arg1 + 0x5c) = 0
        void* result = sub_14059a8e0(arg1 + 0x38, 0)
        int64_t rcx_13 = *(arg1 + 0x48)
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(arg1 + 0x28)
        
        if (rcx_14 == 0)
            return result
        
        return sub_140a74f90(rcx_14)
    
    void* rdx_10 = *(*rax_20 + rcx_7 * 0x10)
    
    if (rdx_10 != 0)
        *(rdx_10 + 0x248) = 0
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
