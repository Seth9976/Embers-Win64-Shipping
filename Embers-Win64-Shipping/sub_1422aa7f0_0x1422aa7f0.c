// 函数: sub_1422aa7f0
// 地址: 0x1422aa7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ce3f0()
sub_1419d2010()
int64_t* rax = sub_142006940()
sub_1422dd740()
int32_t r11 = *(arg1 + 0x28)
void* r8_1 = arg1 + 0x10
void* var_a0 = r8_1
int32_t var_a8 = 0
int32_t var_a4 = 1
int32_t rcx = 0
int32_t var_98 = 0xffffffff
int32_t r9 = 0
int32_t var_94 = 0
int32_t var_90 = 0

if (r11 != 0)
    void* rax_1 = *(r8_1 + 0x10)
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8_1
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_1422aa8b8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_94_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            var_90 = rcx
            var_a8 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1422aa8b8
        
        var_94_2 = r11

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_a8.o
var_a8.o = arg1.o
int64_t var_88 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_98.o = var_48

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_5 = sx.q(i) * 3
        int64_t rcx_2 = *var_a8.q
        void* rdi_1 = *(rcx_2 + (rdx_5 << 3))
        (*(*rax + 0x50))(rax, rdi_1, *(rdi_1 + 0x11e) u>> 3 & 1, zx.q(*(rcx_2 + (rdx_5 << 3) + 8)), 
            zx.d(*(rdi_1 + 0x118)))
        int32_t rbx_1 = 0
        
        if (sub_141abb820(rdi_1) s> 0)
            int32_t rax_16
            
            do
                sub_1420e5fa0(sub_142436b10(rdi_1, rbx_1))
                rbx_1 += 1
                rax_16 = sub_141abb820(rdi_1)
            while (rbx_1 s< rax_16)
        
        var_90 &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
        i = i_1
    while (i s< *(var_98.q + 0x18))

sub_142114290(arg2)
int64_t var_80
__builtin_memset(&var_80, 0, 0x30)
int32_t r14_1 = 1 << (data_1439c7a08).b | data_143f4a12c
int64_t var_70
int64_t var_60

if (r14_1 != 0)
    int32_t rsi_1
    int32_t rdi_4
    
    do
        int32_t rcx_12 = 0
        rdi_4 = neg.d(r14_1) & r14_1
        rsi_1 = r14_1
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rdi_4)
        
        if (rdi_4 != 0)
            rcx_12 = temp0_4
        
        r14_1 ^= rdi_4
        sub_1421175c0(&var_70, &var_80, &var_60, (*U"1111")[sx.q(rcx_12)])
    while (rsi_1 != rdi_4)

int64_t result = sub_1422e3b70()
int64_t rcx_14 = var_80

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_60

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = var_70

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
