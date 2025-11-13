// 函数: sub_14210d8a0
// 地址: 0x14210d8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r15 = nullptr
int64_t* r13 = arg1
int32_t i_5 = 0
int64_t* var_90 = nullptr
int32_t var_84 = 0
int32_t rbx

switch (arg2)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        rbx = 3
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        rbx = 1
    default
        rbx = *(sx.q(arg2) * 0x14 + 0x143f025f8)

void* result_3 = nullptr
int32_t var_58 = 0
int32_t var_54 = 3
void var_68
int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_142110080(r13, &var_68, arg2)
void* result_1 = result_3
int32_t i = 0
int64_t rbp = 0
int32_t rdi = var_84
char* result

do
    result = &var_68
    
    if (result_1 != 0)
        result = result_1
    
    if (result[rbp] != 0)
        result = (*(*r13 + 0x470))(r13)
        void* result_4 = &var_68
        char* result_2 = result
        
        if (result_3 != 0)
            result_4 = result_3
        
        uint32_t rcx_6 = zx.d(*(result_4 + rbp))
        *(result + 0x20) &= 0xfffffffe
        *(result + 0x20) |= rcx_6 & 1
        *(result + 0x28) = r13
        int64_t i_6 = sx.q(i_5)
        *(result + 0x30) = 0
        *(result + 0x18) = i
        *(result + 0x1c) = rbx
        i_5 = (i_6 + 1).d
        
        if (i_5 s> rdi)
            result = sub_1405a4d70(&var_90)
            r15 = var_90
            rdi = var_84
        
        r15[i_6] = result_2
        result_1 = result_3
        r13 = arg1
    
    i += 1
    rbp += 1
while (i s< 3)

if (i_5 s> 0)
    int64_t* rbx_1 = r15
    uint64_t i_3 = zx.q(i_5)
    uint64_t i_4 = zx.q(i_5)
    uint64_t i_1
    
    do
        zmm1, zmm2 = sub_14211edb0(*rbx_1, arg2, zmm2, zmm1)
        rbx_1 = &rbx_1[1]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    int64_t* rsi = r15
    uint64_t i_2
    
    do
        int64_t rbx_2 = sx.q(arg3[1].d)
        int32_t rax_6 = (rbx_2 + 1).d
        arg3[1].d = rax_6
        
        if (rax_6 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        result = *rsi
        rsi = &rsi[1]
        *(*arg3 + (rbx_2 << 3)) = result
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    result_1 = result_3

if (result_1 != 0)
    result = sub_140a74f90(result_1)

if (r15 != 0)
    result = sub_140a74f90(r15)

__security_check_cookie(rax_1 ^ &var_b8)
return result
