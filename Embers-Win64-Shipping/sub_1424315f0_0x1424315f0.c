// 函数: sub_1424315f0
// 地址: 0x1424315f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rax_2 = *(arg1 + 8)
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int64_t* rdx = nullptr
int32_t r9 = 0
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
void* rbx = *(rax_2 + 0x28)
void* rdi_2 = (sx.q(*(rax_2 + 0x30)) << 6) + rbx
int32_t var_f8

if (rbx != rdi_2)
    do
        void var_d8
        sub_140a5cad0(&var_78, &var_d8, sub_140bc8510(rbx, &var_f8), nullptr)
        int64_t rcx_2 = var_f8.q
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx += 0x40
    while (rbx != rdi_2)
    
    int32_t var_50
    r9 = var_50
    int64_t* var_58
    rdx = var_58

int32_t var_f4 = 1
int32_t rcx_3 = 0
var_f8 = 0
int64_t var_68
int64_t* var_f0 = &var_68
int32_t var_e8 = 0xffffffff
int32_t r8_2 = 0
int64_t var_e4 = 0

if (r9 != 0)
    int64_t* r11_1 = &var_68
    
    if (rdx != 0)
        r11_1 = rdx
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_5 = *r11_1
    
    if (rdx_5 != 0)
    label_142431728:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_f4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8_2 - rax_11 + 0x1f
        
        if (rax_12 s> r9)
            rax_12 = r9
        
        var_e4.d = rax_12
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            r8_2 += 0x20
            rcx_3 += 1
            var_e4:4.d = r8_2
            var_f8 = rcx_3
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_e4.d = r9
                break
            
            rdx_5 = *(r11_1 + (rdx_6 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_142431728

double zmm2[0x2] = var_e8.o
double var_90[0x2] = zmm2
int128_t var_a0 = var_f8.o
var_e4.d = r9
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_d0 = (&var_78).o
int128_t var_c0 = var_a0
int64_t var_b0 = temp0_3.q

while (true)
    int64_t rax_13 = sx.q(var_c0:0xc.d)
    int64_t* rdx_7 = var_d0.q
    
    if (rax_13.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d && var_c0.q == &var_68
            && rdx_7 == &var_78)
        int32_t var_30_1 = 0
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        void* result = sub_140669e00(&var_78)
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    int64_t rcx_7 = rax_13 * 3
    var_f8.q = 0
    int64_t rax_14 = *rdx_7
    int32_t rbx_1 = *(rax_14 + (rcx_7 << 3) + 8)
    int64_t rdi_3 = *(rax_14 + (rcx_7 << 3))
    var_f0.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_f8, rbx_1, 0)
        int64_t rbx_2 = var_f8.q
        memcpy(rbx_2, rdi_3, rbx_1 * 2)
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
    else
        var_f0:4.d = 0
    
    var_c0:8.d &= not.d(var_d0:0xc.d)
    sub_14059bdd0(&var_d0:8)
