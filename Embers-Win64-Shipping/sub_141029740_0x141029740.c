// 函数: sub_141029740
// 地址: 0x141029740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x130)
uint64_t rax_1

if (rax != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax)
    rax_1 = zx.q(temp0_1)
else
    rax_1 = 0x20

int32_t var_84 = 1
int64_t* r14_1 = arg2 + 0xc0 + rax_1 * 0x50
int32_t var_78 = 0xffffffff
int32_t rbx = r14_1[5].d
int32_t rcx_2 = 0
void* var_80 = &r14_1[2]
int32_t var_88 = 0
int32_t r8 = 0
int64_t var_74 = 0

if (rbx != 0)
    void* rax_2 = r14_1[4]
    void* r9_1 = &r14_1[2]
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141029808:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_9)
        int32_t var_84_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_3
        
        var_74.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_74:4.d = r8
            var_88 = rcx_2
            
            if (rdx_3.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141029808
        
        var_74.d = rbx

int32_t rdx_4 = r14_1[5].d
int128_t var_28 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
uint128_t var_38 = var_88.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15
var_74.d = rdx_4
uint128_t var_68 = r14_1.o
uint128_t var_58 = var_38

if (rdx_4 != rbx)
    void* rax_12 = r14_1[4]
    void* r10_1 = &r14_1[2]
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_8 != 0)
    label_1410298d2:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_5
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_7 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1410298d2
        
        var_74.d = rbx

while (true)
    int64_t rax_21 = sx.q(var_58:0xc.d)
    int64_t* rdx_9 = var_68.q
    
    if (rax_21.d == (var_78_2.q u>> 0x20).d && var_58.q == &r14_1[2] && rdx_9 == r14_1)
        return sub_1408d84f0(r14_1) __tailcall
    
    void* rbx_1 = _mm_bsrli_si128(*(*rdx_9 + rax_21 * 0x18), 8).q
    
    if (rbx_1 != 0)
        sub_14100faf0(rbx_1)
        j_sub_140a74f90(rbx_1)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
