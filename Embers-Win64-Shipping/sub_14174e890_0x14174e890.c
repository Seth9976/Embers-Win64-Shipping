// 函数: sub_14174e890
// 地址: 0x14174e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x38)
int32_t r8 = 0
int64_t rdx = sx.q(*(arg1 + 0x60) + *(arg1 + 0x50))
int64_t rax_2 = sx.q(*(arg1 + 0x40))
int64_t var_e8 = 0
int64_t var_e0 = 0
void* r10 = r9 + rax_2 * 0x28

while (r9 != r10)
    int64_t rax_3 = sx.q(*(r9 + 8))
    r9 += 0x28
    rdx += rax_3

if (rdx.d s> 0)
    sub_1413f6f70(&var_e8, rdx.d)
    r8 = var_e0.d

int32_t i_5 = *(arg1 + 0x50)

if (i_5 != 0)
    int32_t rdx_1 = i_5 + r8
    
    if (rdx_1 s> var_e0:4.d)
        sub_1413f6f70(&var_e8, rdx_1)
        r8 = var_e0.d
    
    int32_t* r10_1 = *(arg1 + 0x48)
    int32_t i_3 = i_5
    int64_t* rdx_2 = &r10_1[1]
    int32_t* r9_2 = sx.q(r8) * 0x1c + var_e8
    void* rcx_3 = &r9_2[1]
    int32_t i
    
    do
        rcx_3 += 0x1c
        *r9_2 = *r10_1
        r9_2 = &r9_2[7]
        r10_1 = &r10_1[7]
        *(rcx_3 - 0x1c) = *rdx_2
        int32_t rax_6 = rdx_2[1].d
        rdx_2 += 0x1c
        *(rcx_3 - 0x14) = rax_6
        *(rcx_3 - 0x10) = rdx_2[-2]
        *(rcx_3 - 8) = rdx_2[-1].d
        i = i_3
        i_3 -= 1
    while (i != 1)
    r8 += i_5
    var_e0.d = r8

int32_t i_6 = *(arg1 + 0x60)

if (i_6 != 0)
    int32_t rdx_3 = i_6 + r8
    
    if (rdx_3 s> var_e0:4.d)
        sub_1413f6f70(&var_e8, rdx_3)
        r8 = var_e0.d
    
    int32_t* r10_2 = *(arg1 + 0x58)
    int32_t i_4 = i_6
    int64_t* rdx_4 = &r10_2[1]
    int32_t* r9_4 = sx.q(r8) * 0x1c + var_e8
    void* rcx_5 = &r9_4[1]
    int32_t i_1
    
    do
        rcx_5 += 0x1c
        *r9_4 = *r10_2
        r9_4 = &r9_4[7]
        r10_2 = &r10_2[7]
        *(rcx_5 - 0x1c) = *rdx_4
        int32_t rax_10 = rdx_4[1].d
        rdx_4 += 0x1c
        *(rcx_5 - 0x14) = rax_10
        *(rcx_5 - 0x10) = rdx_4[-2]
        *(rcx_5 - 8) = rdx_4[-1].d
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    r8 += i_6
    var_e0.d = r8

int64_t* i_2 = *(arg1 + 0x38)

for (void* r14 = &i_2[sx.q(*(arg1 + 0x40)) * 5]; i_2 != r14; i_2 = &i_2[5])
    int32_t j_2 = i_2[1].d
    
    if (j_2 != 0)
        int32_t rdx_5 = j_2 + r8
        
        if (rdx_5 s> var_e0:4.d)
            sub_1413f6f70(&var_e8, rdx_5)
            r8 = var_e0.d
        
        int32_t* r10_3 = *i_2
        int32_t j_1 = j_2
        void* rdx_6 = &r10_3[1]
        void* r9_6 = sx.q(r8) * 0x1c + var_e8
        void* rcx_8 = r9_6 + 4
        int32_t j
        
        do
            rcx_8 += 0x1c
            *r9_6 = *r10_3
            r9_6 += 0x1c
            r10_3 = &r10_3[7]
            *(rcx_8 - 0x1c) = *rdx_6
            int32_t rax_15 = *(rdx_6 + 8)
            rdx_6 += 0x1c
            *(rcx_8 - 0x14) = rax_15
            *(rcx_8 - 0x10) = *(rdx_6 - 0x10)
            *(rcx_8 - 8) = *(rdx_6 - 8)
            j = j_1
            j_1 -= 1
        while (j != 1)
        r8 += j_2
        var_e0.d = r8

int128_t var_c8
__builtin_memcpy(&var_c8, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
int128_t var_68
__builtin_memcpy(&var_68, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x10\x00\x00\x00\x00\x50\xc3\x47", 0x14)
int16_t var_d0 = 0x104
void** var_d8 = &data_142fc4b40
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
int32_t var_54 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
sub_1416800b0(&var_d8, &var_e8)
sub_141706940(arg1, &var_d8)
int64_t result = sub_1417053d0(&var_d8)
int64_t rcx_12 = var_e8

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
