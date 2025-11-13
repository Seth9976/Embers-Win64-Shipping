// 函数: sub_1419a0960
// 地址: 0x1419a0960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rdx = *(arg1 + 0x10)
void* r8 = &rdx[sx.q(*(arg1 + 0x18))]
uint64_t result

if (rdx == r8)
label_1419a0a05:
    uint64_t rax_7 = j_sub_140a82f30(0xd8)
    uint64_t rdx_1 = rax_7
    
    if (rax_7 == 0)
        rdx_1 = 0
    else
        __builtin_memset(rax_7, 0, 0x28)
        int64_t* rcx_1 = rax_7 + 0x28
        rcx_1[2] = 0
        rcx_1[3].d = 0
        *(rcx_1 + 0x1c) = 0x80
        int64_t* rax_8 = rcx_1[2]
        
        if (rax_8 != 0)
            rcx_1 = rax_8
        
        *rcx_1 = 0
        rcx_1[1] = 0
        void* rcx_2 = rdx_1 + 0x78
        *(rdx_1 + 0x48) = 0xffffffff
        *(rdx_1 + 0x4c) = 0
        *(rdx_1 + 0x58) = 0
        *(rdx_1 + 0x60) = 0
        *(rdx_1 + 0x68) = 0
        *(rdx_1 + 0x70) = 0
        *(rcx_2 + 0x1c) = 0x80
        void* rax_9 = *(rcx_2 + 0x10)
        
        if (rax_9 != 0)
            rcx_2 = rax_9
        
        __builtin_memset(rcx_2, 0, 0x1c)
        *(rdx_1 + 0x98) = 0xffffffff
        *(rdx_1 + 0x9c) = 0
        *(rdx_1 + 0xa8) = 0
        *(rdx_1 + 0xb0) = 0
        *(rdx_1 + 0xb8) = 1
        *(rdx_1 + 0xbc) = 1
        __builtin_memset(rdx_1 + 0xc4, 0, 0x14)
    
    uint64_t rbp_1 = *arg4
    *arg4 = rdx_1
    
    if (rdx_1 != 0)
        *(rdx_1 + 0xd0) += 1
    
    if (rbp_1 != 0)
        int32_t temp0_1 = *(rbp_1 + 0xd0)
        *(rbp_1 + 0xd0) -= 1
        
        if (temp0_1 == 1)
            sub_1405d16e0(rbp_1, nullptr)
            sub_14081d930(rbp_1 + 8, nullptr)
            sub_1405d16e0(rbp_1 + 0x10, nullptr)
            sub_141096260(rbp_1 + 0x18, 0)
            sub_141096040(rbp_1 + 0x68, 0)
    
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_12 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rax_12
    
    if (rax_12 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    uint64_t rdx_3 = *arg4
    *(*(arg1 + 0x10) + (rbp_2 << 3)) = rdx_3
    
    if (rdx_3 != 0)
        *(rdx_3 + 0xd0) += 1
    
    *(*arg4 + 0xb8) = *arg3
    *(*arg4 + 0xc8) = arg5
    *(*arg4 + 0xd4) = *(arg1 + 0x20)
    int128_t zmm1 = data_143dbb1e0
    result = zx.q(arg3[3])
    int32_t var_78_1 = 1
    int32_t rdx_5 = arg3[1] * *arg3
    int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
    int32_t var_50_1 = 0
    int128_t var_88 = zx.o(0)
    char var_60_1 = 0
    int64_t var_58_1 = arg5
    int128_t var_74_1 = zmm1
    void var_98
    
    if (result.d == 0)
        int64_t* rcx_13 = data_143f0f180
        (*(*rcx_13 + 0x498))(rcx_13, &var_98, &data_143f02b98, zx.q(rdx_5), arg3[2], &var_88)
        sub_1405d1600(*arg4, &var_98)
        result = sub_1405d1550(&var_98)
    else if (result.d == 2)
        int64_t* rcx_16 = data_143f0f180
        int128_t* var_a8_1 = &var_88
        int64_t var_b0
        var_b0.d = arg3[2]
        int32_t var_b8_2 = rdx_5
        (*(*rcx_16 + 0x4a0))(rcx_16, &var_98, &data_143f02b98)
        sub_1405d1600(*arg4 + 0x10, &var_98)
        result = sub_14081c9d0(&var_98)
else
    while (true)
        uint64_t rcx = *rdx
        
        if (*(rcx + 0xd0) u<= 1 && *(rcx + 0xb8) == *arg3 && *(rcx + 0xbc) == arg3[1]
                && *(rcx + 0xc0) == arg3[2] && *(rcx + 0xc4) == arg3[3])
            uint64_t rax_10 = *arg4
            *arg4 = rcx
            
            if (rcx != 0)
                *(rcx + 0xd0) += 1
            
            if (rax_10 != 0)
                sub_1411e8d60(rax_10)
            
            *(*arg4 + 0xd4) = *(arg1 + 0x20)
            result = *arg4
            *(result + 0xc8) = arg5
            break
        
        rdx = &rdx[1]
        
        if (rdx == r8)
            goto label_1419a0a05

__security_check_cookie(rax_1 ^ &var_d8)
return result
