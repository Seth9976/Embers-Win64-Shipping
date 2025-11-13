// 函数: sub_140a5aff0
// 地址: 0x140a5aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143db5340
int64_t rax = TlsGetValue(*(rbx + 0x40))
TlsSetValue(*(rbx + 0x40), rax + 1)
EnterCriticalSection(arg1 + 0x18)
TEB* gsbase

if (data_143db7a28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7a28)
    
    if (data_143db7a28 == 0xffffffff)
        atexit(sub_142cbd150)
        _Init_thread_footer(&data_143db7a28)

int64_t r15 = data_143db7148
int32_t rdi = 0

if (r15 != 0)
    int32_t arg_8
    sub_1405ba560(arg1 + 0xb0, &arg_8, r15)
    int32_t rdx_2 = arg_8
    
    if (rdx_2 == 0xffffffff)
        int32_t arg_18
        sub_1405ba560(arg1 + 0x100, &arg_18, r15)
        int64_t rax_3 = sx.q(arg_18)
        void* const rcx_10
        
        if (rax_3.d == 0xffffffff)
            rcx_10 = nullptr
        else
            rcx_10 = (rax_3 << 5) + *(arg1 + 0x100)
        
        int128_t* rax_4 = rcx_10 + 8
        
        if (rcx_10 == 0)
            rax_4 = nullptr
        
        data_14399ea80 = *rax_4
        breakpoint
    
    sub_140a5a7d0(arg1 + 0xb0, rdx_2)

int32_t arg_20
sub_1405ba560(arg1 + 0xb0, &arg_20, arg2)
int32_t rdx_5 = arg_20

if (rdx_5 == 0xffffffff)
    int32_t var_e8
    sub_1405ba560(arg1 + 0x100, &var_e8, arg2)
    int64_t rax_5 = sx.q(var_e8)
    void* const rcx_16
    
    if (rax_5.d == 0xffffffff)
        rcx_16 = nullptr
    else
        rcx_16 = (rax_5 << 5) + *(arg1 + 0x100)
    
    int128_t* rax_6 = rcx_16 + 8
    
    if (rcx_16 == 0)
        rax_6 = nullptr
    
    data_14399ea80 = *rax_6
    breakpoint

sub_140a5a7d0(arg1 + 0xb0, rdx_5)
int32_t var_e4
sub_1405ba560(arg1 + 0x100, &var_e4, arg2)
int64_t rax_7 = sx.q(var_e4)
void* const rcx_20

if (rax_7.d == 0xffffffff)
    rcx_20 = nullptr
else
    rcx_20 = (rax_7 << 5) + *(arg1 + 0x100)

int128_t* rax_8 = rcx_20 + 8

if (rcx_20 == 0)
    rax_8 = nullptr

if (rax_8 != 0)
    data_14399ea80 = *rax_8
    breakpoint

int32_t r10 = *(arg1 + 0x128)
void* r8_6 = arg1 + 0x110
int32_t var_e0 = 0
int32_t rcx_21 = 0
int32_t var_dc = 1
void* var_d8 = r8_6
int32_t var_d0 = 0xffffffff
int32_t var_cc = 0
int32_t var_c8 = 0

if (r10 != 0)
    void* rax_9 = *(r8_6 + 0x10)
    
    if (rax_9 != 0)
        r8_6 = rax_9
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *r8_6
    int32_t var_cc_2
    
    if (rdx_10 != 0)
    label_140a5b237:
        int32_t rax_16 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_dc_1 = rax_16
        int32_t var_78_1 = temp0_2
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_2
        
        int32_t var_cc_1 = rcx_21 - rax_17 + 0x1f
        
        if (rcx_21 - rax_17 + 0x1f s> r10)
            var_cc_2 = r10
    else
        while (true)
            int64_t rdx_11 = sx.q(rdi)
            rcx_21 += 0x20
            rdi += 1
            int32_t var_c8_1 = rcx_21
            var_e0 = rdi
            
            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r8_6 + (rdx_11 << 2) + 4)
            int32_t var_d0_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140a5b237
        
        var_cc_2 = r10

void* var_48 = arg1 + 0x100
int128_t zmm0 = var_e0.o
int128_t var_58 = 0xffffffff
int16_t var_80 = 0
void* rax_19 = zmm0.q
int128_t var_a8 = zmm0
int128_t var_b8 = (arg1 + 0x100).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_58 = zmm0
int128_t var_98 = zmm0

if (0 s< *(rax_19 + 0x18))
    int32_t i = var_a8:0xc.d
    
    do
        int64_t* r8_9 = (sx.q(i) << 5) + *var_b8.q
        int64_t rcx_23 = *r8_9
        
        if (arg2 s>= rcx_23 && arg2 s< rcx_23 + r8_9[1])
            data_14399ea80 = *(r8_9 + 8)
            breakpoint
        
        var_a8:8.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)
        i = var_a8:0xc.d
    while (i s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_1405b6520(arg1 + 0x100, *(arg1 + 0x108) - *(arg1 + 0x134), 1)

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

void* rbx_2 = data_143db5340
int64_t rax_24 = TlsGetValue(*(rbx_2 + 0x40))
return TlsSetValue(*(rbx_2 + 0x40), rax_24 - 1) __tailcall
