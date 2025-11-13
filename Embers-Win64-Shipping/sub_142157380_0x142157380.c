// 函数: sub_142157380
// 地址: 0x142157380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x1580)
void* var_80 = arg1 + 0x1568
int32_t var_78 = 0xffffffff
int32_t r9 = 0
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x1578)
    void* r11_1 = arg1 + 0x1568
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_14215742c:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_14215742c
        
        var_74.d = r10

int32_t rdx_3 = *(arg1 + 0x1580)
var_74.d = rdx_3
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r12 = 0xffffffff << (rdx_3 & 0x1f).b
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
int128_t var_68 = (arg1 + 0x1558).o
int128_t var_58 = var_38

if (rdx_3 != r10)
    void* rax_12 = *(arg1 + 0x1578)
    void* r11_2 = arg1 + 0x1568
    
    if (rax_12 != 0)
        r11_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_7 = *(r11_2 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_7 != 0)
    label_142157506:
        int32_t rax_18 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
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
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r11_2 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_142157506
        
        var_74.d = r10

int32_t result

while (true)
    int64_t rcx_7 = sx.q(var_58:0xc.d)
    
    if (rcx_7.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x1568)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_8 = var_68.q
    
    if (result.b == 0 || rdx_8 != arg1 + 0x1558)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    void* rbx_2 = *(*rdx_8 + rcx_7 * 0x18)
    
    if (rbx_2 != 0)
        void* rax_19 = sub_142527690()
        void* rdx_10 = *(rbx_2 + 0x10)
        int64_t rax_20 = sx.q(*(rax_19 + 0x38))
        
        if (rax_20.d s<= *(rdx_10 + 0x38) && *(*(rdx_10 + 0x30) + (rax_20 << 3)) == rax_19 + 0x30)
            sub_1421575d0(arg1, rbx_2)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return result
