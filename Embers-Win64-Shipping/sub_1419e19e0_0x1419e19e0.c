// 函数: sub_1419e19e0
// 地址: 0x1419e19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float r8 = 0f
int32_t var_94 = 1
float var_98 = 0f
int32_t rbx = *(arg1 + 0x58)
void* var_90 = arg1 + 0x40
int32_t var_88 = 0xffffffff
int32_t rcx = 0
int32_t var_84 = 0
int32_t var_80 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x50)
    void* r9_1 = arg1 + 0x40
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_84_2
    
    if (rdx_3 != 0)
    label_1419e1a88:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_84_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1419e1a88
        
        var_84_2 = rbx

int32_t rdx_6 = *(arg1 + 0x58)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r12
int32_t var_84_3 = rdx_6
int128_t var_78 = (arg1 + 0x30).o
int96_t var_68 = var_48:8.12

if (rdx_6 != rbx)
    void* rax_11 = *(arg1 + 0x50)
    void* r10_1 = arg1 + 0x40
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_84_5
    
    if (rdx_10 != 0)
    label_1419e1b52:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84_5 = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1419e1b52
        
        var_84_5 = rbx

uint32_t rdi_1 = (var_88_1.q u>> 0x20).d

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_7.d == rdi_1 && var_68.q == arg1 + 0x40 && rax_20 == arg1 + 0x30)
        return sub_1419e1590(arg1 + 0x30, 0) __tailcall
    
    double (* rbx_1)[0x2] = *(*rax_20 + rcx_7 * 0x10)
    
    if (rbx_1[5][0].b != 0)
        double (* arg_8)[0x2] = rbx_1
        int128_t zmm0 = rbx_1[3][0].d
        double rax_22 = (*rbx_1)[7]
        zmm2 = *rbx_1
        float zmm4 = zmm0.d
        int128_t zmm3 = *(rbx_1 + 4)
        int96_t zmm1 = zmm2[0].12
        zmm0.d = zmm0.d f* *(rax_22 i+ 0x298)
        var_88_1.b = 1
        float temp0_5 = _mm_max_ss(zmm4 f* *(rax_22 i+ 0x29c), zmm0.d)
        zmm1.d = zmm1.d f+ temp0_5
        zmm0.d = zmm3.d f+ temp0_5
        zmm2[0].d = zmm2[0].d f- temp0_5
        zmm3.d = zmm3.d f- temp0_5
        var_90.d = zmm1.d
        var_90:4.d = zmm0.d
        var_98 = zmm2[0].d
        int32_t var_94_2 = zmm3.d
        sub_1419e4ce0(arg1 + 0xe8, &arg_8, &var_98)
        rbx_1[5][0].b = 0
    
    sub_1409740e0(arg1 + 0x80, rbx_1)
    j_sub_140a74f90(rbx_1)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
