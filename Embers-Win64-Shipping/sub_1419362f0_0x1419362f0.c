// 函数: sub_1419362f0
// 地址: 0x1419362f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14193d470()
sub_141938dd0(&data_1439c7620, 0)
sub_14193d400()
sub_141938e50(&data_1439c7670, 0)
sub_14193d1f0()
sub_141939600(&data_1439c76c0)
int32_t rsi = 0
data_143eff900 = 0
sub_14193c900()
int32_t r11 = data_1439c75f8
int32_t var_94 = 1
int32_t rcx = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
void* r9 = &data_1439c75e0
void* var_90 = &data_1439c75e0
int32_t r8 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = data_1439c75f0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1419363c9:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1419363c9
        
        var_84.d = r11

double zmm4[0x2] = var_88.o
int64_t* var_30 = &data_1439c75d0
int64_t* var_68 = &data_1439c75d0
double zmm3[0x2] = var_98.o
char var_60 = 0
double rax_11 = zmm3[0]
var_88.o = zmm3
var_98.o = (&data_1439c75d0).o
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_78[0x2] = zmm4
double var_40[0x2] = zmm4
int32_t i_2
char var_5f

if ((zmm4[0] u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i = i_2
    
    do
        int32_t r14_1 = *(*var_98.q + sx.q(i) * 0x18 + 0xc)
        uint64_t rcx_4 = zx.q(r14_1)
        
        if (data_143eff5c6 == 0)
            data_143effd98(rcx_4)
        else
            int32_t arg_8 = 0
            data_143effdd8(rcx_4, 0x8b85, &arg_8)
            int64_t rax_16 = sx.q(arg_8)
            
            if (rax_16.d s> 0)
                int32_t* rax_17 = sub_140a82f30(rax_16 << 2, 0)
                data_143effdc8(zx.q(r14_1), zx.q(arg_8), &arg_8, rax_17, var_98)
                int32_t rdi_1 = 0
                
                if (arg_8 s> 0)
                    int32_t* rbx_1 = rax_17
                    
                    do
                        data_143effda0(zx.q(r14_1), zx.q(*rbx_1))
                        data_143effd98(zx.q(*rbx_1))
                        rdi_1 += 1
                        rbx_1 = &rbx_1[1]
                    while (rdi_1 s< arg_8)
                
                sub_140a74f90(rax_17)
            
            data_143effd90(zx.q(r14_1))
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = i_2
    while (i s< *(var_88.q + 0x18))
    
    if (var_60 != 0 && var_5f != 0)
        sub_141934920(var_68, var_68[1].d - *(var_68 + 0x34), 1)

sub_141939090(&data_1439c75d0, 0)
TEB* gsbase

if (data_143eff86c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff86c)
    
    if (data_143eff86c == 0xffffffff)
        __builtin_memset(&data_1439c7580, 0, 0x2c)
        data_1439c75ac = 0x80
        data_1439c75b0 = 0xffffffff
        data_1439c75b4 = 0
        data_1439c75c0 = 0
        data_1439c75c8 = 0
        atexit(sub_142cee320)
        _Init_thread_footer(&data_143eff86c)

int32_t r9_2 = data_1439c75a8
int64_t* r8_5 = &data_1439c7590
var_90 = &data_1439c7590
int32_t rcx_16 = 0
var_84:4.d = 0
int32_t var_98_1 = 0
int32_t var_94_2 = 1
int32_t var_88_1 = 0xffffffff
var_84.d = 0

if (r9_2 != 0)
    int64_t* rax_23 = data_1439c75a0
    
    if (rax_23 != 0)
        r8_5 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_2 - 1)
    int32_t rdx_12 = *r8_5
    
    if (rdx_12 != 0)
    label_141936617:
        int32_t rax_30 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t var_94_3 = rax_30
        int32_t r12_1
        
        if (rax_30 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        int32_t rax_31 = rcx_16 - r12_1 + 0x1f
        
        if (rax_31 s> r9_2)
            rax_31 = r9_2
        
        var_84.d = rax_31
    else
        while (true)
            int64_t rdx_13 = sx.q(rsi)
            rcx_16 += 0x20
            rsi += 1
            var_84:4.d = rcx_16
            var_98_1 = rsi
            
            if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_84.d = r9_2
                break
            
            rdx_12 = *(r8_5 + (rdx_13 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_141936617

int64_t* var_30_1 = &data_1439c7580
int64_t* var_68_1 = &data_1439c7580
int128_t var_40_1 = 0xffffffff
char var_60_1 = 0
zmm3 = var_98_1.o
double rax_32 = zmm3[0]
var_98_1.o = (&data_1439c7580).o
int128_t zmm0_1
zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_88_1.o = zmm3
int128_t var_78_1 = zmm0_1

if (0 s< *(rax_32 i+ 0x18))
    int32_t i_1 = i_2
    
    do
        void* rbx_2 = *((sx.q(i_1) << 6) + *var_98_1.q + 0x18)
        
        if (rbx_2 != 0)
            int64_t rcx_19 = *(rbx_2 + 0xc8)
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int64_t rcx_20 = *(rbx_2 + 0xb8)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            sub_14192b980(rbx_2 + 8)
            j_sub_140a74f90(rbx_2)
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i_1 = i_2
    while (i_1 s< *(var_88_1.q + 0x18))
    
    if (var_60_1 != 0 && var_5f != 0)
        sub_141934a80(var_68_1, var_68_1[1].d - *(var_68_1 + 0x34), 1)

return sub_141939130(&data_1439c7580, 0) __tailcall
