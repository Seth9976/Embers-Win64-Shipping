// 函数: sub_141006b10
// 地址: 0x141006b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t r8 = zx.q(arg4)
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x24)

if (r8.d u> 0x10)
    goto label_141006c5f

int16_t r15_1 = *(arg3 + 2)
var_1a8.d = r8.d

if (r8.d != 0)
    void* rcx = &var_1a8:4
    uint64_t i_3 = zx.q(r8.d)
    void* rax_2 = arg3 + 0x90
    uint64_t i
    
    do
        void* rdx = *rax_2
        int16_t rdx_1
        
        if (rdx == 0)
            rdx_1 = 0
        else
            rdx_1 = *(rdx + 0x3c)
        
        *rcx = rdx_1
        rax_2 += 8
        rcx += 2
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r8.d u< 0x10)
    __builtin_memset(&var_1a8:4 + (r8 << 1), 0, zx.q(0x10 - r8.d) << 1)

char* rdi_4 =
    sx.q(modu.dp.d(0:(sub_140a6b260(&var_1a8:4, var_1a8.d * 2)), arg1[0x41].d)) * 0x30 + arg1[0x40]
int64_t rdi_6

if (*rdi_4 == 0)
label_141006c55:
    r8 = zx.q(arg4)
label_141006c5f:
    int32_t rdi_7 = *arg5
    *arg5 = rdi_7 + r8.d
    void* rdx_5 = arg1[0xb]
    int64_t var_1b8 = zx.q(*(rdx_5 + 0x38) * rdi_7) + *(rdx_5 + 0x40)
    int32_t i_1 = 0
    rdi_6 = zx.q(rdi_7 * *(rdx_5 + 0x38)) + *(rdx_5 + 0x48)
    int64_t var_c8[0x10]
    
    if (r8.d != 0)
        do
            uint64_t i_2 = zx.q(i_1)
            void* rdx_6 = *(arg3 + (i_2 << 3) + 0x90)
            int64_t rax_10
            
            if (rdx_6 == 0)
                rax_10 = *(arg1[7] + 0x30)
            else
                rax_10 = *(rdx_6 + 0x30)
            
            i_1 += 1
            var_c8[i_2] = rax_10
        while (i_1 u< r8.d)
    
    int32_t var_1c0_1 = 1
    int64_t var_1c8_1 = 0
    int64_t (* var_1d0_1)[0x10] = &var_c8
    *(arg3 + 2) &= 0xffff << r8.b
    int64_t* rcx_10 = *(*(*arg1 + 0x20) + 0x18)
    (*(*rcx_10 + 0xb8))(rcx_10, 1, &var_1b8, &arg4, r8.d, var_1d0_1, var_1c8_1, var_1c0_1)
    
    if (arg4 u<= 0x10)
        int128_t zmm1 = var_1a8.o
        int64_t var_d0_1 = 0
        void var_150
        memcpy(&var_150, &var_c8, zmm1.d << 3)
        int64_t r15_2 = sx.q(arg1[0x43].d)
        int32_t rax_16 = (r15_2 + 1).d
        arg1[0x43].d = rax_16
        
        if (rax_16 s> *(arg1 + 0x21c))
            sub_140a05e50(&arg1[0x42])
        
        int128_t* rdx_10 = r15_2 * 0xb0 + arg1[0x42]
        *rdx_10 = zmm1
        int64_t var_198
        rdx_10[1] = var_198.o
        int32_t var_188
        rdx_10[2] = var_188.o
        int128_t var_148
        rdx_10[3] = var_148
        int128_t var_138
        rdx_10[4] = var_138
        int128_t var_128
        rdx_10[5] = var_128
        int128_t var_118
        rdx_10[6] = var_118
        int128_t var_108
        rdx_10[7] = var_108
        int128_t var_f8
        rdx_10[8] = var_f8
        int128_t var_e8
        rdx_10[9] = var_e8
        int128_t var_d8
        rdx_10[0xa] = var_d8
        char* rcx_16 =
            sx.q(modu.dp.d(0:(sub_140a6b260(&var_1a8:4, var_1a8.d * 2)), arg1[0x41].d)) * 0x30
            + arg1[0x40]
        *rcx_16 = 1
        *(rcx_16 + 4) = var_1a8.o
        *(rcx_16 + 0x14) = var_198.o
        *(rcx_16 + 0x24) = var_188
        *(rcx_16 + 0x28) = rdi_6
else
    int32_t rax_7 = *(rdi_4 + 4)
    
    if (rax_7 != var_1a8.d)
        goto label_141006c55
    
    if (memcmp(&rdi_4[8], &var_1a8:4, zx.q(rax_7) * 2) != 0 || rdi_4 == -0x28)
        goto label_141006c55
    
    rdi_6 = *(rdi_4 + 0x28)
    *(arg3 + 2) = r15_1 & 0xffff << r8.b

int64_t* rcx_18 = *(*(arg1[3] + 0x1c8) + 0x30)
int64_t result = (*(*rcx_18 + 0x100))(rcx_18, zx.q(*(arg2 + 0x1f)), rdi_6)
*(arg3 + 2) |= 0xffff << arg4.b
__security_check_cookie(rax_1 ^ &var_1f8)
return result
