// 函数: sub_14099a640
// 地址: 0x14099a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x28)
int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = arg1 + 0x10
int32_t var_78 = 0xffffffff
int32_t r9 = 0
int64_t var_74 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_14099a6ea:
        int32_t rax_8 = neg.d(rcx) & rcx
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
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rcx != 0)
                goto label_14099a6ea
        
        var_74.d = rbx

int32_t rdx_2 = *(arg1 + 0x28)
double zmm2[0x2] = var_78.o
double var_28[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_78_1 = r15
var_74.d = rdx_2
int128_t result = arg1.o
int128_t result_1 = result
int128_t var_58 = var_38

if (rdx_2 != rbx)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_2 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & r15
    
    if (rdx_6 != 0)
    label_14099a7b2:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_14099a7b2
        
        var_74.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_58:0xc.d)
    int64_t* rdx_7 = result_1.q
    
    if (rax_20.d == (var_78_1.q u>> 0x20).d && var_58.q == arg1 + 0x10 && rdx_7 == arg1)
        return result
    
    result = *arg2
    int64_t rcx_8 = rax_20 * 3
    int64_t rax_21 = *rdx_7
    void* r8_3 = *(rax_21 + (rcx_8 << 3) + 8)
    var_88.o = result
    (&data_142e40988)[zx.q(*(r8_3 + 8))](*(rax_21 + (rcx_8 << 3)), &var_88, r8_3)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&result_1:8)
