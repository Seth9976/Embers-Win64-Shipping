// 函数: sub_1423a5940
// 地址: 0x1423a5940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
PSGSI1::`scalar deleting destructor'(arg1, arg2, arg3)
arg1[0xc].d = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x16].d = 0
arg1[0x18] = 0
arg1[0x1a] = 0
*arg1 = &data_143339650
arg1[0x20] = -1
arg1[0x21] = 0
arg1[0x24] = 0
arg1[0x25].d = 0
*(arg1 + 0x12c) = 2
__builtin_memset(&arg1[0x26], 0, 0x18)
arg1[0x2a] = 0
arg1[0x76] = 0
arg1[0x77].d = 0
*(arg1 + 0x3bc) = 0xe
arg1[0x78].b = 0
arg1[0x20].d = (*(*arg4 + 0x28))(arg4, arg2)
int32_t r15 = 1
*(arg1 + 0x104) = arg1[1].d
int64_t* rcx_1 = arg1[0x21]

if (rcx_1 != arg4)
    arg1[0x21] = arg4
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)

if (arg7 != 0)
    void* rdi_1 = &arg1[0x22]
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x18))
    int32_t rax_6 = (rsi_1 + 1).d
    *(rdi_1 + 0x18) = rax_6
    
    if (rax_6 s> *(rdi_1 + 0x1c))
        sub_1408092e0(rdi_1, rsi_1.d)
    
    void* rax_7 = *(rdi_1 + 0x10)
    
    if (rax_7 != 0)
        rdi_1 = rax_7
    
    *(rdi_1 + (rsi_1 << 3)) = arg7

int64_t rsi_2 = sx.q(arg1[0x25].d)
int32_t rax_8 = (rsi_2 + 1).d
arg1[0x25].d = rax_8

if (rax_8 s> *(arg1 + 0x12c))
    sub_1408092e0(&arg1[0x22], rsi_2.d)

void* rax_9 = arg1[0x24]
void*** var_b0 = arg1
void* rdx_3 = &arg1[0x22]
void* (* rcx_4)(int64_t* arg1) = sub_1423ab240

if (rax_9 != 0)
    rdx_3 = rax_9

void* (* var_d8)(int64_t* arg1) = sub_1423ab240
*(rdx_3 + (rsi_2 << 3)) = arg8
arg1[0x26] = arg1 + 0x55
void*** rdx_4 = nullptr
arg1[0x27] = &arg1[0xa]
void** const var_b8 = &data_142da2668

if (&arg1[0x28] != &var_d8)
    arg5 = *(arg1 + 0x140)
    arg6 = *(arg1 + 0x150)
    int128_t zmm4_1 = *(arg1 + 0x160)
    int128_t zmm5_1 = *(arg1 + 0x170)
    *(arg1 + 0x140) = var_d8.o
    int128_t zmm0 = var_b8.o
    *(arg1 + 0x150) = nullptr.o
    *(arg1 + 0x160) = zmm0
    var_d8.o = arg5
    rcx_4 = var_d8
    void*** var_c8
    var_c8.o = arg6
    rdx_4 = var_c8
    int128_t var_a8
    *(arg1 + 0x170) = var_a8
    var_b8.o = zmm4_1
    int128_t var_a8_1 = zmm5_1

if (rcx_4 != 0)
    void** const* rcx_5 = &var_b8
    
    if (rdx_4 != 0)
        rcx_5 = rdx_4
    
    (*rcx_5)[2](rcx_5, rdx_4, arg5, arg6)

int32_t var_ec = arg1[1].d
int32_t var_e8 = arg1[0x20].d
int32_t var_e4 = *(arg1 + 0xc)
int64_t* var_f8 = arg2
int32_t var_f0 = 0
void* rax_18
void* r8

if (*(arg1 + 0x54) == 0)
    void* rcx_6 = arg1[0x24]
    rax_18 = &arg1[0x22]
    
    if (rcx_6 != 0)
        rax_18 = rcx_6
    
    r8 = rax_18 + (sx.q(arg1[0x25].d) << 3)

if (*(arg1 + 0x54) != 0 || rax_18 == r8)
label_1423a5bc5:
    sub_1423b1c20(arg1, &var_f8)
else
    while (true)
        void* rdx_5 = *rax_18
        
        if (*(rdx_5 + 8) == 0)
            int32_t rdx_6 = *(rdx_5 + 0xc)
            
            if (rdx_6 == 0)
                r15 = 2
            label_1423a5bfa:
                int64_t var_98 = 0
                var_b8 = &data_142da2668
                void* var_88_1 = nullptr
                var_d8 = sub_1423ab4f0
                void*** var_c8_1 = nullptr
                void*** var_b0_1 = arg1
                arg1[0xc].d = r15
                sub_140a3c510(&arg1[0xe], &var_d8)
                arg1[0x16].d = 0
                sub_140a3c510(&arg1[0x18], &var_98)
                
                if (var_d8 != 0)
                    void** const* rcx_13 = &var_b8
                    
                    if (var_c8_1 != 0)
                        rcx_13 = var_c8_1
                    
                    (*rcx_13)[2](rcx_13)
                
                if (var_98 != 0)
                    void var_78
                    void* rcx_14 = &var_78
                    
                    if (var_88_1 != 0)
                        rcx_14 = var_88_1
                    
                    int64_t rdx_11 = *rcx_14
                    (*(rdx_11 + 0x10))(rcx_14, rdx_11)
                
                break
            
            if (rdx_6 == 1)
                goto label_1423a5bfa
        
        rax_18 += 8
        
        if (rax_18 == r8)
            goto label_1423a5bc5

__security_check_cookie(rax_1 ^ &var_118)
return arg1
