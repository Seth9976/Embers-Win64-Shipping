// 函数: sub_142071780
// 地址: 0x142071780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12 = zx.q(arg4[1].d)
void* r14 = nullptr
int64_t* r11 = arg3
void* rbx = nullptr

if (arg8 s<= 1)
    int64_t rax_1 = sx.q(data_143f0f1a0)
    
    if (rax_1.d u> 0x30 || not(test_bit(0x1000030320000, rax_1)))
        int64_t rcx = *(rax_1 * 0x14 + &data_143f025f0)
        
        if (rcx != data_143f025c0 && (rax_1.d u> 0x1f || not(test_bit(0xc8451800, rax_1.d)))
                && rcx != data_143f025b0)
            void* rax_2 = &data_143f413a0
            
            if (r12.d == 0)
                rax_2 = nullptr
            
            r14 = rax_2
            goto label_142071acc

int32_t rax_3 = *(arg1 + 0x38)
int32_t r8 = rax_3
int32_t rdx_1

if (rax_3 == arg6)
    rax_3 = *(arg1 + 0x34)
    rdx_1 = *(arg1 + 0x30)
else
    *(arg1 + 0x34) = rax_3
    rdx_1 = 1 - *(arg1 + 0x30)
    r8 = arg6
    *(arg1 + 0x30) = rdx_1
    *(arg1 + 0x38) = arg6

char rcx_2 = 0
uint64_t r9 = 0

if (r8 - rax_3 u<= 1)
    rcx_2 = arg7

uint32_t r10_1 = 0x11
rbx = (((zx.q(rcx_2) ^ zx.q(rdx_1)) + 1) << 4) + arg1
uint32_t rbp_2 = (r12 * 3).d << 4
uint32_t r8_3
uint32_t rax_6

do
    r8_3 = (r10_1 + r9.d) u>> 1
    rax_6 = r8_3
    int32_t temp1_1 = *((zx.q(r8_3 - 1) << 2) + &data_143a2e1d0)
    
    if (rbp_2 u> temp1_1)
        rax_6 = r10_1
    
    if (rbp_2 u> temp1_1)
        r9 = zx.q(r8_3)
    
    r10_1 = rax_6
while (rax_6 - r9.d u> 1)
void* rax_8 = *rbx
void* r15_1

if (rax_8 != 0)
    r15_1 = rbx + 8

if (rax_8 == 0 || *(rbx + 8) == 0)
    r15_1 = rbx + 8
label_1420718eb:
    
    if (rax_8 != 0 && *(rbx + 8) != 0)
        void* var_70 = rax_8
        *(rax_8 + 8) += 1
        void* rax_9 = *(rbx + 8)
        void* var_68_1 = rax_9
        
        if (rax_9 != 0)
            *(rax_9 + 8) += 1
        
        sub_142065280(&data_143f421b0, &var_70)
    
    sub_140a80f40()
    int128_t var_80
    
    if (data_143f42618 == 0xffffffff)
        var_80 = zx.o(0)
    else
        sub_142053ad0(&data_143f421b0, &var_80, rbp_2)
    
    sub_1405d1600(rbx, &var_80)
    sub_1405d1600(r15_1, &var_80:8)
    sub_1405ec8a0(&var_80:8)
    r8_3, arg5 = sub_1405d1550(&var_80)
    r11 = arg3
else if (*((r9 << 2) + &data_143a2e1d0) != *(rax_8 + 0x18))
    goto label_1420718eb

if (r12.d == 0)
    goto label_142071acc

int64_t result

if (arg9 != 0 || data_143f01c92 == 0 || *(data_143f41238 + 4) s<= 0)
    int64_t* rcx_18 = data_143f0f180
    r14 = (*(*rcx_18 + 0x130))(rcx_18, &data_143f02b98, *rbx, 0, rbp_2, 1)
label_142071acc:
    sub_140343150(r14, *arg3, *arg4, r12.d)
    
    if (arg8 s> 1)
    label_142071b78:
        
        if (r12.d != 0)
            int64_t* rcx_24 = data_143f0f180
            (*(*rcx_24 + 0x138))(rcx_24, &data_143f02b98, *rbx)
    else
        result = sx.q(data_143f0f1a0)
        
        if (result.d u<= 0x30 && test_bit(0x1000030320000, result))
            goto label_142071b78
        
        int64_t rcx_20 = *(result * 0x14 + &data_143f025f0)
        
        if (rcx_20 == data_143f025c0)
            goto label_142071b78
        
        if (result.d u> 0x1f)
            if (rcx_20 == data_143f025b0)
                goto label_142071b78
            
            goto label_142071b22
        
        if (test_bit(0xc8451800, result.d) || rcx_20 == data_143f025b0)
            goto label_142071b78
        
    label_142071b22:
        int64_t* rcx_21 = data_143f0f180
        void arg_20
        (*(*rcx_21 + 0xf8))(rcx_21, &arg_20, &data_143f413a0, &data_143f41320, 2, 1)
        sub_1405d1600(arg1 + 0x40, &arg_20)
        sub_1405d1550(&arg_20)
    
    result.b = 0
else
    int64_t var_60 = *rbx
    uint32_t var_58_1 = rbp_2
    int64_t* var_48_1 = arg4
    
    if (*(arg2 + 0x10) == 0)
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_12[6]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_12[6]
        
        *(arg2 + 0x30) = rax_12
        int64_t* rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        int128_t zmm0 = var_60.o
        *rax_13 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        *(rcx_12 + 0x10) = zmm0
        *rcx_12 = &data_1432abcf8
        *(rcx_12 + 0x20) = r11.o
    else
        sub_14204acf0(&var_60, arg5)
    
    r8_3.b = 1
    int64_t* var_88
    sub_141980430(arg2, &var_88, r8_3.b)
    int64_t* rcx_17 = var_88
    
    if (rcx_17 != 0)
        rcx_17[9].d -= 1
        
        if (rcx_17[9].d == 1)
            sub_140a2f6e0(rcx_17)
    
    result.b = 1

return result
