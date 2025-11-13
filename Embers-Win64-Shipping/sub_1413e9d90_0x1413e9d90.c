// 函数: sub_1413e9d90
// 地址: 0x1413e9d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x6308)
int32_t rcx = 0
int32_t var_78 = 0
int32_t var_74 = 1
int32_t r8 = 0
void* var_70 = arg1 + 0x62f0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x6300)
    void* r9_1 = arg1 + 0x62f0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1413e9e38:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1413e9e38
        
        var_64.d = r11

int32_t rdx_4 = *(arg1 + 0x6308)
int32_t r9_3 = rdx_4 s>> 5
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r10_1 = rdx_4 & 0xffffffe0
int32_t var_68_2 = r12
int64_t* r8_2 = arg1 + 0x62e0
var_64.d = rdx_4
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (rdx_4 != r11)
    void* rax_11 = *(arg1 + 0x6300)
    void* r11_1 = arg1 + 0x62f0
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r9_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_1413e9ef4:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_64.d = r10_1 - rbx_1 + 0x1f
        
        if (r10_1 - rbx_1 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r9_3)
            r10_1 += 0x20
            r9_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_5 << 2) + 4)
            var_68_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1413e9ef4
        
        var_64.d = r11

int32_t* rdx_9

while (true)
    int64_t rax_20 = sx.q(var_40:4.d)
    
    if (rax_20.d == (var_68_2.q u>> 0x20).d && var_50:8.q == arg1 + 0x62f0 && r8_2 == arg1 + 0x62e0)
        return 0
    
    rdx_9 = *(*r8_2 + (rax_20 << 3))
    
    if (rdx_9[1] == arg2)
        break
    
    var_40.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r8_2 = arg1 + 0x62e0

return zx.q(*rdx_9)
