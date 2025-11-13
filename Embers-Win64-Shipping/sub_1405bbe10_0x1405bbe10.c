// 函数: sub_1405bbe10
// 地址: 0x1405bbe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t rbx = *(arg1 + 0x90)
void* var_a0 = arg1 + 0x78
int32_t var_98 = 0xffffffff
int32_t rcx = 0
int32_t var_94 = 0
int32_t var_90 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x88)
    void* r9_1 = arg1 + 0x78
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_94_2
    
    if (rdx_3 != 0)
    label_1405bbeb8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_94_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_90_1 = rcx
            var_a8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1405bbeb8
        
        var_94_2 = rbx

int32_t rdx_6 = *(arg1 + 0x90)
double zmm2[0x2] = var_98.o
double var_38[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_a8.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r15
int32_t var_94_3 = rdx_6
int128_t var_78 = (arg1 + 0x68).o
int96_t var_68 = var_48:8.12

if (rdx_6 != rbx)
    void* rax_11 = *(arg1 + 0x88)
    void* r10_1 = arg1 + 0x78
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r15
    int32_t var_94_5
    
    if (rdx_10 != 0)
    label_1405bbf82:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_94_4 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_94_5 = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1405bbf82
        
        var_94_5 = rbx

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_7.d == (var_98_1.q u>> 0x20).d && var_68.q == arg1 + 0x78 && rax_20 == arg1 + 0x68)
        return sub_1405b8750(arg1 + 0x68, 0) __tailcall
    
    void* rdx_11 = *((rcx_7 << 5) + *rax_20)
    void* arg_10 = rdx_11
    int32_t rcx_9 = *(rdx_11 + 0xc4)
    int32_t var_88 = *(rdx_11 + 0xc0)
    int32_t var_84_1 = rcx_9
    uint32_t var_80_1 = zx.d(*(rdx_11 + 0xdb))
    var_a8.q = &var_88
    void** var_a0_1 = &arg_10
    int32_t arg_8
    sub_1405a8090(arg1 + 0x18, &arg_8, &var_a8, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
