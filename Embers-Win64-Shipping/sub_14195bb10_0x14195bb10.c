// 函数: sub_14195bb10
// 地址: 0x14195bb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg2

if ((arg2.b & 2) == 0)
    r13 = sub_1419665c0(arg1, arg2, 2)

struct _RTL_SRWLOCK r15 = arg1
int32_t rcx = 0
int32_t r11 = *(r15 + 0x28)
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_94 = 1
int32_t* var_90 = r15 + 0x10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    int32_t* rax_2 = *(r15 + 0x20)
    int32_t* r9_1 = r15 + 0x10
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14195bbd8:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14195bbd8
        
        var_84.d = r11

int32_t rdx_4 = *(r15 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_4
int128_t Ptr = r15.Ptr.o
int96_t var_68 = var_48:8.12

if (rdx_4 != r11)
    int32_t* rax_12 = *(r15 + 0x20)
    int32_t* r10_1 = r15 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = r10_1[sx.q(r8_3)] & r12
    
    if (rdx_8 != 0)
    label_14195bca2:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r10_1[rcx_5 + 1]
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14195bca2
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_21 = sx.q(var_5c)
    int64_t* rdx_9 = Ptr.q
    
    if (rax_21.d == (var_88_2.q u>> 0x20).d && var_68.q == r15 + 0x10 && rdx_9 == r15)
        struct _RTL_SRWLOCK rcx_11 = arg1
        int32_t rbx_4 = *(rcx_11 + 8) - *(rcx_11 + 0x34)
        sub_140865470(rcx_11, 0)
        *arg3 = r13
        return zx.q(rbx_4)
    
    int64_t* rbx_2 = *(*rdx_9 + rax_21 * 0x18 + 8)
    
    if (rbx_2 != 0)
        sub_14198b1c0(rbx_2)
        (**rbx_2)(rbx_2, 1)
    
    var_68:8.d &= not.d(Ptr:0xc.d)
    sub_14059bdd0(&Ptr:8)
