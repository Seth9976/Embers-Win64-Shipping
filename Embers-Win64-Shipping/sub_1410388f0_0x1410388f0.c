// 函数: sub_1410388f0
// 地址: 0x1410388f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r14 = *(arg1 + 0x28)
void* rax_2 = *(arg1 + 0x40)
void* const rsi

if (rax_2 == 0)
    rsi = nullptr
else
    rsi = *(rax_2 + 0xc0)

if (*(arg1 + 0x48) != 0)
    int64_t* rcx = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx + 0xf0))(rcx, *(rsi + 8))
    *(arg1 + 0x48) = 0
    __builtin_memset(arg1 + 0x7e8, 0xff, 0x28)
    *(arg1 + 0x2678) = 0xffff
    *(arg1 + 0x2670) = -1
    *(arg1 + 0x2c98) = -1
    *(arg1 + 0x2ca0) = 0xffff
    *(arg1 + 0x2060) = -1
    *(arg1 + 0x2068) = 0xffff
    rax_2 = *(arg1 + 0x40)

void* rcx_1 = *(rax_2 + 0xf0)
char rdi = *(arg1 + 0x2fb0)
int64_t rax_6
int512_t zmm1
int512_t zmm2

if (*(rcx_1 + 0x28) == 0)
    rax_6, zmm1, zmm2 = sub_141026e90(rcx_1)
else
    rax_6 = *(rcx_1 + 0x10)

int64_t rdx_2 = *(arg1 + 0x2fa8)

if (rdx_2 != rax_6)
    *(arg1 + 0x2fa8) = rax_6
    rdx_2 = rax_6
label_141038a28:
    int64_t* rcx_3 = *(*(*(arg1 + 0x28) + 0x1c8) + 0x30)
    (*(*rcx_3 + 0xc8))(rcx_3, rdx_2)
    *(arg1 + 0x2fb0) = 0
else if (rdi != 0)
    goto label_141038a28

if (*(arg1 + 0x30) != 0)
    *(arg1 + 0x30) = 0
    sub_141035c60(arg1 + 0x3020, arg1 + 0x1e8)

if (*(arg1 + 0x32) != 0)
    int32_t r8_1 = *(arg1 + 0x5f0)
    *(arg1 + 0x32) = 0
    sub_141035b00(arg1 + 0x3020, arg1 + 0x5f8, r8_1)

if (*(arg1 + 0x34) != 0)
    uint64_t rdx_5 = zx.q(*(arg1 + 0x60))
    *(arg1 + 0x34) = 0
    int64_t* rcx_6 = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx_6 + 0xa8))(rcx_6, rdx_5, arg1 + 0x64)

if (*(arg1 + 0x35) != 0)
    uint64_t rdx_6 = zx.q(*(arg1 + 0x758))
    *(arg1 + 0x35) = 0
    int64_t* rcx_7 = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx_7 + 0xb0))(rcx_7, rdx_6, arg1 + 0x658)

if (*(arg1 + 0x36) != 0)
    uint64_t rdx_7 = zx.q(*(arg1 + 0x63c))
    *(arg1 + 0x36) = 0
    int64_t* rcx_8 = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx_8 + 0xa0))(rcx_8, rdx_7)

if (*(arg1 + 0x37) != 0)
    *(arg1 + 0x37) = 0
    int64_t* rcx_9 = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx_9 + 0xb8))(rcx_9, arg1 + 0x50)

if (*(arg1 + 0x38) != 0)
    uint64_t rdx_9 = zx.q(*(arg1 + 0x4c))
    *(arg1 + 0x38) = 0
    int64_t* rcx_10 = *(*(r14 + 0x1c8) + 0x30)
    (*(*rcx_10 + 0xc0))(rcx_10, rdx_9)

if (*(arg1 + 0x31) != 0)
    void* r9_2 = *(arg1 + 0x7c8)
    int32_t r8_4 = *(arg1 + 0x7c0)
    *(arg1 + 0x31) = 0
    sub_141035910(arg1 + 0x3020, arg1 + 0x780, r8_4, r9_2)

if (*(arg1 + 0x39) != 0)
    int64_t* rcx_12 = *(arg1 + 0x28)
    zmm2.o = *(arg1 + 0x7d4)
    zmm1.o = *(arg1 + 0x7d0)
    *(arg1 + 0x39) = 0
    (*(*rcx_12 + 0x310))(rcx_12, zmm1, zmm2)

sub_141043f10(arg1, rsi, 0, 5)
int64_t* rdx_12 = arg1 + 0x7e8
int64_t var_48 = 0
void* r8_5 = arg1 + 0x2060
uint32_t r14_1 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x18)
uint32_t r13 = 0
uint32_t r12 = 0
uint32_t r15 = 0
uint32_t var_ac = 0
int16_t var_36 = 0
int32_t i_1 = 0
int64_t* var_a0 = rdx_12
int16_t* var_98 = r8_5
uint32_t var_b0 = 0
int16_t var_40
int16_t var_3e
int16_t var_3c
int16_t var_3a
int16_t var_38
int16_t rax_20
int64_t rax_24
int64_t rax_29
int64_t rax_34
int64_t rax_39
int64_t rax_44
uint32_t rdi_1
int32_t i

do
    uint32_t rcx_14 = *(arg1 + 0x3008)
    rdi_1 = 0
    rax_20 = ((1 << rcx_14.b) - 1) & *(arg1 + 0x2676)
    
    if (rax_20 != 0)
        if (*(arg1 + 0x3c) s> 2)
            r14_1 = rcx_14
        else
            r14_1 = zx.d(*(rsi + 0x45))
        
        rdi_1 = r14_1
    
    uint32_t rcx_15 = *(arg1 + 0x2fcc)
    int64_t rax_21
    rax_21.b = rcx_15 u< 0x40
    rax_24 = ((rax_21 << rcx_15.b) - 1) & *rdx_12
    
    if (rax_24 != 0)
        if (*(arg1 + 0x3c) != 1)
            r15 = rcx_15
        else
            r15 = zx.d(*(rsi + 0x2b))
        
        rdi_1 += r15
    
    uint32_t rcx_17 = *(arg1 + 0x2fd0)
    var_40 = ((1 << (*(arg1 + 0x2fe4)).b) - 1) & *r8_5
    int64_t rax_26
    rax_26.b = rcx_17 u< 0x40
    rax_29 = ((rax_26 << rcx_17.b) - 1) & *(arg1 + 0x7f0)
    
    if (rax_29 != 0)
        if (*(arg1 + 0x3c) != 1)
            r12 = rcx_17
        else
            r12 = zx.d(*(rsi + 0x33))
        
        rdi_1 += r12
    
    uint32_t rcx_19 = *(arg1 + 0x2fd4)
    var_3e = ((1 << (*(arg1 + 0x2fe8)).b) - 1) & *(arg1 + 0x2062)
    int64_t rax_31
    rax_31.b = rcx_19 u< 0x40
    rax_34 = ((rax_31 << rcx_19.b) - 1) & *(arg1 + 0x7f8)
    
    if (rax_34 != 0)
        if (*(arg1 + 0x3c) != 1)
            r13 = rcx_19
        else
            r13 = zx.d(*(rsi + 0x3b))
        
        rdi_1 += r13
    
    uint32_t rcx_21 = *(arg1 + 0x2fd8)
    var_3c = ((1 << (*(arg1 + 0x2fec)).b) - 1) & *(arg1 + 0x2064)
    int64_t rax_36
    rax_36.b = rcx_21 u< 0x40
    rax_39 = ((rax_36 << rcx_21.b) - 1) & *(arg1 + 0x800)
    
    if (rax_39 != 0)
        uint32_t rdx_13
        
        if (*(arg1 + 0x3c) != 1)
            rdx_13 = rcx_21
            var_ac = rcx_21
        else
            rdx_13 = zx.d(*(rsi + 0x43))
            var_ac = rdx_13
        
        rdi_1 += rdx_13
    
    uint32_t rcx_23 = *(arg1 + 0x2fdc)
    var_3a = ((1 << (*(arg1 + 0x2ff0)).b) - 1) & *(arg1 + 0x2066)
    int64_t rax_41
    rax_41.b = rcx_23 u< 0x40
    rax_44 = ((rax_41 << rcx_23.b) - 1) & *(arg1 + 0x808)
    
    if (rax_44 != 0)
        uint32_t rax_45
        
        if (*(arg1 + 0x3c) != 1)
            rax_45 = rcx_23
            var_b0 = rcx_23
        else
            rax_45 = zx.d(*(rsi + 0x4b))
            var_b0 = rax_45
        
        rdi_1 += rax_45
    
    int64_t* rcx_25 = *(arg1 + 0x3070)
    var_38 = ((1 << (*(arg1 + 0x2ff4)).b) - 1) & *(arg1 + 0x2068)
    
    if (sub_141016130(rcx_25, rdi_1) != 0)
        break
    
    int64_t* rcx_26 = *(arg1 + 0x3070)
    
    if ((*(*rcx_26 + 8))(rcx_26) == 0)
        break
    
    rdx_12 = arg1 + 0x7e8
    i = i_1 + 1
    r8_5 = arg1 + 0x2060
    rdi_1 = 0
    i_1 = i
while (i u< 2)
int32_t result
int32_t r9_4
result, r9_4 = sub_141033be0(*(arg1 + 0x3070), rdi_1)
int32_t result_1 = result

if (rax_20 != 0)
    int32_t* var_c0_1 = &result_1
    result, r9_4 = sub_141008070(arg1 + 0x3020, rsi, arg1 + 0x2670, r9_4, r14_1)

if (rax_24 != 0)
    int32_t* var_c0_2 = &result_1
    result, r9_4 = sub_1410068b0(arg1 + 0x3020, rsi, var_a0, r9_4, r15)

if (rax_29 != 0)
    int32_t* var_c0_3 = &result_1
    result, r9_4 = sub_141005cd0(arg1 + 0x3020, rsi, var_a0, r9_4, r12)

if (rax_34 != 0)
    int32_t* var_c0_4 = &result_1
    result, r9_4 = sub_141005f30(arg1 + 0x3020, rsi, var_a0, r9_4, r13)

if (rax_44 != 0)
    int32_t* var_c0_5 = &result_1
    result, r9_4 = sub_1410063f0(arg1 + 0x3020, rsi, var_a0, r9_4, var_b0)

if (rax_39 != 0)
    int32_t* var_c0_6 = &result_1
    result = sub_141006190(arg1 + 0x3020, rsi, var_a0, r9_4, var_ac)

if (var_40 != 0)
    result = sub_141002c80(arg1 + 0x3020, rsi, var_98, &var_40)

if (var_3e != 0)
    result = sub_141002820(arg1 + 0x3020, rsi, var_98, &var_3e)

if (var_3c != 0)
    result = sub_141002900(arg1 + 0x3020, rsi, var_98, &var_3c)

if (var_38 != 0)
    result = sub_141002ac0(arg1 + 0x3020, rsi, var_98, &var_38)

if (var_3a != 0)
    result = sub_1410029e0(arg1 + 0x3020, rsi, var_98, &var_3a)

void* rbx_4 = *(r14 + 0x1c8)
int32_t rdx_27 = *(rbx_4 + 0x128)
int64_t* rcx_40 = *(rbx_4 + 0x30)

if (rdx_27 != 0)
    result = (*(*rcx_40 + 0xd0))(rcx_40, rdx_27, *(rbx_4 + 0x120))
    *(rbx_4 + 0x128) = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
