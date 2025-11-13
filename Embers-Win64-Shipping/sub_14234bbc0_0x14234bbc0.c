// 函数: sub_14234bbc0
// 地址: 0x14234bbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rcx = *(**arg1 + (sx.q(arg1[1].d) << 3))
uint64_t r8_2 = *(arg2 + 0x18)

if (r8_2 == 0 || *(r8_2 + 0x40) != *(rcx + 0xec))
    r8_2 = *(arg2 + 0x20)
    
    if (r8_2 == 0 || *(r8_2 + 0x40) != *(rcx + 0xec))
        r8_2 = *(rcx + 0x308)
        
        if (r8_2 == 0)
            r8_2 = rcx + 0x138

if (arg1[0x14] == r8_2)
    return 

uint64_t var_70_1 = r8_2
void* var_78 = rcx + 0x30
int128_t zmm0 = var_78.o
void* var_60_1 = &arg1[2]
int128_t zmm1 = arg1[0x15].o
arg1[0x14] = r8_2
int32_t var_50_1 = *(rcx + 0xec)
int128_t var_b0 = zmm0
int64_t* var_80_1 = arg1
int128_t var_a0_1 = zmm1
int128_t var_90_1 = (rcx + 0x1c0).o

if (sub_140a80f40() != 0)
    sub_14234bdd0(&arg1[0xc], &var_b0)
    return 

if (data_143f138f4 == 0)
    uint32_t rax_9
    
    if (data_143de5480 != 0)
        rax_9.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_9.b != 0)
        zmm1 = var_b0
        int128_t var_48 = r8_2.o
        int128_t var_38 = zmm1
        int128_t var_28 = var_a0_1
        int128_t var_18 = var_90_1
        sub_14234bdd0(&arg1[0xc], &var_48:8)
        return 

int64_t* rax_11 = sub_142333690(&var_78, nullptr, 0xff)
int128_t zmm1_1 = var_b0
void* rcx_4 = *rax_11
*(rcx_4 + 0x10) = r8_2.o
*(rcx_4 + 0x20) = zmm1_1
*(rcx_4 + 0x30) = var_a0_1
*(rcx_4 + 0x40) = var_90_1
void* rcx_5 = *rax_11
int32_t r8_3 = rax_11[2].d
int64_t* rdx_2 = rax_11[1]
int64_t* rbx_2 = *(rcx_5 + 0x58)
int64_t* arg_10 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_10

sub_1405dafa0(rcx_5, rdx_2, r8_3, 1)

if (rbx_2 == 0)
    return 

uint64_t rax = zx.q(*rdi_1)
*rdi_1 -= 1

if (rax.d == 1)
    sub_140a2f6e0(arg_10)
