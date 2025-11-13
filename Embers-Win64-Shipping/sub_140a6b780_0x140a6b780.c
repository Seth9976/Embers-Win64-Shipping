// 函数: sub_140a6b780
// 地址: 0x140a6b780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int32_t r8 = 0
int32_t var_b4 = 1
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t var_a8 = 0xffffffff
int32_t r11 = *(arg1 + 0x58)
void* var_b0 = arg1 + 0x40
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x50)
    void* r9_1 = arg1 + 0x40
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140a6b838:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_a4.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_a4:4.d = rcx_1
            var_b8 = r8
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a6b838
        
        var_a4.d = r11

int32_t rdx_5 = *(arg1 + 0x58)
int32_t r8_2 = rdx_5 s>> 5
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t* var_98
var_98.d = r8_2
int128_t var_80 = 0xffffffff
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_90
var_90:8.d = r12
var_90:0xc.d = rdx_5
var_80.d = r9_3
int128_t var_70 = (arg1 + 0x30).o

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x50)
    void* r10_1 = arg1 + 0x40
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_9 != 0)
    label_140a6b91a:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_18 = temp0_3
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_90:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_90:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_80.d = r9_3
            var_98.d = r8_2
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_90:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140a6b91a
        
        var_90:0xc.d = r11

while (true)
    int32_t var_54
    int64_t rax_20 = sx.q(var_54)
    int64_t* rdx_10 = var_70.q
    
    if (rax_20.d == (var_90:8.q u>> 0x20).d && var_b8.o:8.q == arg1 + 0x40 && rdx_10 == arg1 + 0x30)
        sub_140a717b0(arg1 + 0x30, arg2)
        sub_140a71630(arg1 + 0x80, arg2)
        EnterCriticalSection(arg1 + 0x148)
        uint64_t result = sub_140a71730(arg1 + 0xf8, arg2)
        
        if (arg1 != -0x148)
            result = LeaveCriticalSection(arg1 + 0x148)
        
        if (arg1 == -0xd0)
            return result
        
        return LeaveCriticalSection(arg1 + 0xd0)
    
    int64_t* rdx_11 = *(*rdx_10 + rax_20 * 0x28 + 0x10)
    void var_48
    
    if (rdx_11 != &var_48)
        *rdx_11 = 0
        int64_t* rcx_9 = rdx_11[1]
        rdx_11[1] = 0
        
        if (rcx_9 != 0)
            int32_t rax_22 = *(rcx_9 + 0xc)
            *(rcx_9 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*rcx_9 + 8))(rcx_9, 1)
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
