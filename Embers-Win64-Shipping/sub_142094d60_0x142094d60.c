// 函数: sub_142094d60
// 地址: 0x142094d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cbe180(arg1)
int64_t* rbp = rax + 0x48

if (rax == 0)
    rbp = nullptr

char rax_1 = *(arg1 + 0xe0)
uint32_t rsi

if (rax_1 != 0)
    rsi = zx.d(rax_1)
else
    rsi = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

int64_t r14 = sx.q(sub_141998630(*(arg1 + 0xc0), *(arg1 + 0xc4), 0, rsi.b))
int64_t rax_4 = r14 + arg2[1]
arg2[1] = rax_4

if (rax_4 s> arg2[2])
    sub_140a4f990(arg2)

uint64_t rbx
rbx.b = 0
uint128_t var_68

if (rsi == 2)
    int64_t rdx_4 = *arg2
    int64_t var_58_1 = 6
    var_68 = zx.o(0)
    char var_50_1 = 1
    float zmm1[0x4] = var_58_1.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
    temp0_1[0] = 0x467a0000
    int32_t var_28_1 = 0.d
    float var_38[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    int128_t entry_zmm3
    rbx = zx.q(sub_1423eba80(rbp, rdx_4, &var_38, &var_68, entry_zmm3))
label_142094e8e:
    
    if (rbx.b == 0)
        goto label_142094e92
else
    if (rsi == 0xa)
        var_68.q = 0
        var_68:8.q = 0
        char rax_5
        rbx = zx.q(rax_5)
        memcpy(*arg2, var_68.q, r14.d)
        int64_t rcx_5 = var_68.q
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        goto label_142094e8e
    
label_142094e92:
    arg2[1] = 0
    
    if (arg2[2] != 0)
        sub_140a4fbe0(arg2, 0)
return zx.q(rbx.b)
