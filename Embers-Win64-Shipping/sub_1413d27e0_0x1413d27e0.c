// 函数: sub_1413d27e0
// 地址: 0x1413d27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rdi = sx.q(arg1[4].d)
int64_t r14
r14.b = 0
int64_t result = zx.q(arg2[1].d)
int32_t rbx = 0

if (result.d != rdi.d)
    int64_t rdi_1 = sx.q(arg1[4].d)
    r14.b = 1
    
    if (result.d s> rdi_1.d)
        arg1[4].d = result.d
        
        if (result.d s> *(arg1 + 0x24))
            sub_1405a4d70(&arg1[3])
        
        result = memset(arg1[3] + (rdi_1 << 3), 0, sx.q(result.d - rdi_1.d) << 3)
    else if (result.d s< rdi_1.d && result.d != rdi_1.d)
        arg1[4].d = result.d
        result = sub_1405c53d0(&arg1[3])
else if (rdi.d s> 0)
    int64_t* rcx_3 = *arg2
    int64_t rdx_1 = 0
    int64_t* rdi_3 = arg1[3] - rcx_3
    
    do
        result = *rcx_3
        
        if (*(rdi_3 + rcx_3) != result)
            r14.b = 1
            break
        
        rdx_1 += 1
        rcx_3 = &rcx_3[1]
    while (rdx_1 s< rdi)

int32_t rsi = arg2[1].d

if (r14.b != 0 && rsi != 0)
    int64_t rdi_4 = sx.q(arg1[2].d)
    int32_t rax_4 = rsi << 0xa
    
    if (rax_4 s> rdi_4.d)
        arg1[2].d = rax_4
        int32_t rbp_4 = rax_4 - rdi_4.d
        
        if (rax_4 s> *(arg1 + 0x14))
            sub_140594770(&arg1[1])
        
        if (rbp_4 != 0)
            __builtin_memset(arg1[1] + (rdi_4 << 1), 0, zx.q(rbp_4) << 1)
    else if (rax_4 s< rdi_4.d && rax_4 != rdi_4.d)
        arg1[2].d = rax_4
        sub_1405a50a0(&arg1[1])
    
    int32_t rdi_6 = 0
    int64_t var_80
    
    if (rsi != 0)
        int32_t rbp_5 = 0
        
        do
            int64_t rdx_3 = sx.q(rdi_6)
            *(arg1[3] + (rdx_3 << 3)) = *(*arg2 + (rdx_3 << 3))
            void* r8_4 = *(arg1[3] + (rdx_3 << 3))
            var_80 = arg1[1] + (sx.q(rbp_5) << 1)
            
            if (r8_4 != 0)
                void* rax_10 = *(r8_4 + 0xd0)
                
                if (rax_10 != 0 && *(rax_10 + 0xc) == 0xa && *(rax_10 + 0x20) == 1)
                    int32_t* rcx_10 = **(rax_10 + 0x18)
                    
                    if (*rcx_10 == 0x100 && rcx_10[1] == 1)
                        sub_140bc7fd0(&rcx_10[4], &var_80, 0)
            
            rdi_6 += 1
            rbp_5 += 0x400
        while (rdi_6 u< rsi)
    
    void* r8_5 = *arg1
    int32_t var_a0
    int32_t var_98
    int128_t* var_90
    
    if (r8_5 == 0 || *(r8_5 + 0x64) != rsi)
        int128_t zmm1 = data_143dbb1e0
        int128_t var_78
        var_90 = &var_78
        var_98 = 0x148
        var_a0 = 1
        int64_t* rcx_13 = data_143f0f180
        int32_t rax_13 = (1 << (data_1439c7a34).b) - 1
        var_78 = zx.o(0)
        int32_t var_68_1 = 1
        int128_t var_64_1 = zmm1
        int32_t var_54_1 = rax_13
        char var_50_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        (*(*rcx_13 + 0x560))(rcx_13, &var_80, &data_143f02b98, 0x100, rsi, 0xa, 1, var_a0, var_98, 
            var_90)
        sub_1405d1600(arg1, &var_80)
        sub_1405d1550(&var_80)
        r8_5 = *arg1
    
    int64_t* rcx_16 = data_143f0f180
    var_a0.b = 1
    int32_t var_a8
    var_a8.b = 0
    char var_b0
    int32_t var_88
    var_b0.q = &var_88
    int64_t rax_16 = (*(*rcx_16 + 0x510))(rcx_16, &data_143f02b98, r8_5, 0, 1, var_b0, var_a8, 
        var_a0, var_98, var_90)
    
    if (rsi != 0)
        do
            memcpy(rax_16 + (zx.q(rbx * var_88) u>> 1 << 1), arg1[1] + (zx.q(rbx << 0xa) << 1), 
                0x800)
            rbx += 1
        while (rbx u< rsi)
    
    int64_t* rcx_19 = data_143f0f180
    int32_t var_b8_2
    var_b8_2.b = 0
    result = (*(*rcx_19 + 0x518))(rcx_19, &data_143f02b98, *arg1, 0, var_b8_2, 1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
