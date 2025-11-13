// 函数: sub_1423c2230
// 地址: 0x1423c2230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_38 = __security_cookie ^ &var_f8
void var_a8
int32_t var_a0
int128_t var_9c

if (*(arg1 + 0xa4) s> 0 && *(arg1 + 0xa8) s> 0)
    void* r8_1 = *(arg1 + 0x80)
    char rcx = *(r8_1 + 0xda)
    uint64_t rax_1
    
    if (*(r8_1 + 0xe0) != 0)
        rax_1.b = not.b(rcx)
        rax_1.b &= 1
    else
        rax_1.b = *(r8_1 + 0xdb) == 3
    
    var_9c = *(arg1 + 0x90)
    char rcx_1 = (data_1439c7a34).b
    var_a0 = 1
    int32_t rdx_4 = (zx.d(rcx) & 4) << 0x16 | zx.d(rax_1.b) << 4
    int128_t var_78 = zx.o(0)
    char var_50_1 = 0
    int32_t var_40_1 = 0
    char r15_1 = *(arg1 + 0xa0)
    int32_t rcx_3 = rdx_4 | 0x11000
    int32_t var_54_1 = (1 << rcx_1) - 1
    int32_t var_58_1 = var_9c:0xc.d
    wchar16 const* const var_48_1 = u"TextureRenderTarget2DResource"
    int128_t var_68_1 = var_a0.o
    int32_t r13_1 = *(r8_1 + 0xc0)
    int32_t r14_1 = *(r8_1 + 0xe4)
    uint64_t r9_1 = zx.q(r13_1)
    int32_t r12_1 = *(r8_1 + 0xc4)
    
    if ((*(r8_1 + 0xdc) & 1) == 0)
        rcx_3 = rdx_4
    
    char rdx_5 = (*(r8_1 + 0xbc)).b
    int32_t rbx_2 = rcx_3 | 0x10000
    
    if ((rdx_5 & 2) == 0)
        rbx_2 = rcx_3
    
    int64_t* rcx_4 = data_143f0f180
    int128_t* var_b0_1 = &var_78
    void* rdx_6 = &var_a8
    
    if ((rdx_5 & 1) != 0)
        (*(*rcx_4 + 0x560))(rcx_4, rdx_6, &data_143f02b98, r9_1, r12_1, r15_1, r14_1, 1, rbx_2 | 1, 
            var_b0_1)
        sub_1405d1600(arg1 + 0x50, &var_a8)
        sub_1405d1550(&var_a8)
        int64_t* rcx_9 = data_143f0f180
        (*(*rcx_9 + 0x560))(rcx_9, &var_a8, &data_143f02b98, zx.q(r13_1), r12_1, r15_1, r14_1, 1, 
            rbx_2 | 0xa, &var_78)
        sub_1405d1600(arg1 + 0x88, &var_a8)
    else
        (*(*rcx_4 + 0x560))(rcx_4, rdx_6, &data_143f02b98, r9_1, r12_1, r15_1, r14_1, 1, rbx_2 | 9, 
            var_b0_1)
        sub_1405d16e0(arg1 + 0x50, *sub_1405d1600(arg1 + 0x88, &var_a8))
    
    sub_1405d1550(&var_a8)
    sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0x88))
    int128_t entry_zmm2
    int128_t entry_zmm3
    sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x80) + 0x90), *(arg1 + 0x10), entry_zmm3, entry_zmm2)
    sub_1423bca20(arg1 + 0x58, 1)

void* r14_2 = *(arg1 + 0x80)
int32_t rbx_5 = 0
char rax_14 = *(r14_2 + 0xd9)

if (rax_14 != 0)
    rbx_5.b = rax_14 != 1
    rbx_5 += 1

char rax_15 = *(r14_2 + 0xd8)
int32_t rsi = 0

if (rax_15 != 0)
    rsi.b = rax_15 != 1
    rsi += 1

void* rax_18 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
uint32_t rdx_16 = zx.d(*(r14_2 + 0x5d))
uint64_t rcx_15

if (rdx_16 == 0)
    rcx_15.b = 0
else if (rdx_16 == 1)
    rcx_15.b = 1
else if (rdx_16 == 2)
    rcx_15.b = 2
else
    rcx_15 = zx.q(*(zx.q(*(r14_2 + 0x5f)) * 0x54 + *(rax_18 + 0x28) + 0x18))

var_a0.b = rcx_15.b
int64_t* rcx_17 = data_143f0f180
var_9c:8.d = 0x7f7fffff
var_a0:1.b = rsi.b
var_a0:2.b = rbx_5.b
var_a0:3.b = 0
var_9c.q = 0
var_9c:0xc.q = 0
char var_88 = 0
(*(*rcx_17 + 0x28))(rcx_17, &var_a8, &var_a0)
sub_1405d1600(arg1 + 0x18, &var_a8)
int64_t result = sub_1405d1550(&var_a8)
__security_check_cookie(var_38 ^ &var_f8)
return result
