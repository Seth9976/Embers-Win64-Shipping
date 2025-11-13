// 函数: sub_141dcf810
// 地址: 0x141dcf810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t r10 = *(arg1 + 0x1c8)
int32_t rcx = 0
void* var_80 = arg1 + 0x1b0
int32_t var_88 = 0
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r9_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141dcf8b9:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
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
                goto label_141dcf8b9
        
        var_74.d = r10

int32_t rdx_5 = *(arg1 + 0x1c8)
var_74.d = rdx_5
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r15 = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15
int128_t var_68 = (arg1 + 0x1a0).o
int128_t var_58 = var_38

if (rdx_5 != r10)
    void* rax_12 = *(arg1 + 0x1c0)
    void* r11_1 = arg1 + 0x1b0
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_141dcf996:
        int32_t rax_18 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_4 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141dcf996
        
        var_74.d = r10

int32_t result

while (true)
    int64_t rdx_10 = sx.q(var_58:0xc.d)
    
    if (rdx_10.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x1b0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_6 = var_68.q
    
    if (result.b == 0 || rcx_6 != arg1 + 0x1a0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = *(*rcx_6 + rdx_10 * 0x10)
    
    if (rbx_2 != 0 && (rbx_2[0x11].b & 1) != 0)
        sub_141ee8490(rbx_2)
        void* rax_21 = sub_142493230()
        void* rdx_11 = rbx_2[2]
        int64_t rax_22 = sx.q(*(rax_21 + 0x38))
        
        if (rax_22.d s<= *(rdx_11 + 0x38) && *(*(rdx_11 + 0x30) + (rax_22 << 3)) == rax_21 + 0x30)
            int64_t rcx_10 = rbx_2[0x3f]
            
            if (rcx_10 != 0)
                sub_141dcf810(rcx_10)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return result
