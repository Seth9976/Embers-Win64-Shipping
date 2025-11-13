// 函数: sub_1408db0a0
// 地址: 0x1408db0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419a21e0(0)
sub_1408deda0(arg1, zx.o(0))
int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r11 = *(arg1 + 0x50)
void* r9 = arg1 + 0x38
void* var_a0 = r9
int32_t rcx_1 = 0
int32_t var_a8 = 0
int32_t r8 = 0
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1408db158:
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
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_94:4.d = r8
            var_a8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1408db158
        
        var_94.d = r11

int64_t* var_20 = arg1 + 0x28
int128_t zmm0 = var_a8.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* rax_11 = zmm0.q
int128_t var_78 = zmm0
int128_t var_88 = (arg1 + 0x28).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i = var_78:0xc.d
    
    do
        int64_t rbx_1 = sx.q(i) * 5
        int64_t rdi_1 = *var_88.q
        int64_t rcx_3 = *(rdi_1 + (rbx_1 << 3) + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t rax_15 = not.d(var_88:0xc.d)
        *(rdi_1 + (rbx_1 << 3) + 8) = 0
        var_78:8.d &= rax_15
        *(rdi_1 + (rbx_1 << 3) + 0x18) = 0
        *(rdi_1 + (rbx_1 << 3) + 0x10) = 0
        sub_14059bdd0(&var_88:8)
        i = var_78:0xc.d
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_1408df340(arg1 + 0x28, *(arg1 + 0x30) - *(arg1 + 0x5c), 1)

sub_1408e2150(arg1 + 0x28, 0)
DeleteCriticalSection(arg1 + 0xc0)

while (*(arg1 + 0xb8) != 0)
    int64_t* rcx_8 = *(arg1 + 0xb8)
    *(arg1 + 0xb8) = *rcx_8
    j_sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x98)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 0x88)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x78)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

void* result = sub_1405ae000(arg1 + 0x28)
int64_t rcx_13 = *(arg1 + 0x18)

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg1 + 8)

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
