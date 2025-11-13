// 函数: sub_14268d440
// 地址: 0x14268d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t result = *arg1

if (result != 0 && arg1[1] != 0)
    int32_t i_1 = 0
    void* rdx_1 = *(*(result + 0x338) + 0x10)
    int32_t* r15_1 = rdx_1 + 8
    void* var_90 = nullptr
    int64_t var_88_1 = 0
    
    if (rdx_1 == 0)
        r15_1 = nullptr
    
    sub_141d26590(&var_90, 0x40)
    int32_t rdx_2 = var_88_1.d
    int32_t i = 0
    void* r14_1 = var_90
    int64_t rbp_1 = 8
    
    do
        float zmm0_1 = *(r15_1 + rbp_1) f+ *(r15_1 + rbp_1 + 0x100)
        int64_t rsi_1 = sx.q(rdx_2)
        int32_t i_2 = i
        rdx_2 = (rsi_1 + 1).d
        var_88_1.d = rdx_2
        
        if (rdx_2 s> var_88_1:4.d)
            sub_1409da2a0(&var_90)
            rdx_2 = var_88_1.d
            r14_1 = var_90
        
        i += 1
        rbp_1 += 4
        *(r14_1 + (rsi_1 << 3)) = zmm0_1.q
    while (i s< 0x40)
    
    char var_98
    sub_14099c290(r14_1, rdx_2, var_98)
    int32_t* rdx_4 = r14_1 + 4
    char var_78[0x40]
    
    do
        result = sx.q(*rdx_4)
        rdx_4 = &rdx_4[2]
        var_78[result] = i_1.b
        i_1 += 1
    while (i_1 s< 0x40)
    
    sub_142603ea0(arg1[1], &var_78)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
