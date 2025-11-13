// 函数: sub_140e1eaf0
// 地址: 0x140e1eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rax_2 = *(arg1 + 0x2a8)
char var_e8 = *(arg1 + 0x2b0)
int64_t* var_e0 = nullptr
int32_t var_d8 = 0
sub_140692f90(&var_e0, arg1 + 0x2b8)
void* rdi

if (var_d8 == 0)
    rdi = rax_2
else
    int64_t* rcx_1 = var_e0
    
    if (rcx_1 == 0)
        rdi = rax_2
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rdi = rax_2
    else
        int64_t* rcx_2 = nullptr
        
        if (var_d8 != 0)
            rcx_2 = var_e0
        
        void* rax_7 = (*(*rcx_2 + 0x48))(rcx_2)
        rdi = rax_7
        void* var_f0_1 = rax_7

int128_t zmm1 = sub_140745b20(&var_e0)
uint64_t result

if (rdi == 0 || *(rdi + 0x6c) == 0)
    result = zx.q(arg5)
else
    char rax_8 = sub_140e25600(arg1, arg7)
    uint32_t rcx_5 = zx.d(*(rdi + 0x30))
    void* rdx_2 = rdi + 0x20
    char r15_1 = 0x20
    
    if (rax_8 != 0)
        r15_1 = 0
    
    if (rcx_5 != 0)
        if (rcx_5 == 1)
            rdx_2 = *(rdx_2 + 0x18)
        else if (rcx_5 == 3)
            rdx_2 = &arg6[4]
        else
            rdx_2 = &arg6[2]
    
    int128_t var_118 = *rdx_2
    int128_t* rax_9 = sub_140e11270(arg1 + 0x350, zmm1)
    uint32_t rdx_3 = zx.d(rax_9[1].b)
    
    if (rdx_3 != 0)
        if (rdx_3 == 1)
            rax_9 = *(rax_9 + 0x18)
        else if (rdx_3 == 3)
            rax_9 = &arg6[4]
        else
            rax_9 = &arg6[2]
    
    bool cond:2_1 = *(arg1 + 0x390) == 0
    int64_t zmm0_2
    zmm0_2.d = (*arg6).d f* *rax_9
    int128_t zmm1_1
    zmm1_1.d = (*(rax_9 + 4)).d f* *(arg6 + 4)
    zmm0_2.d = zmm0_2.d f* var_118.d
    zmm1_1.d = zmm1_1.d f* var_118:4.d
    float zmm2 = *(rax_9 + 8) f* arg6[1].d f* var_118:8.d
    float zmm3 = *(rax_9 + 0xc) f* *(arg6 + 0xc) f* var_118:0xc.d
    int32_t var_100 = zmm0_2.d
    int32_t var_fc_1 = zmm1_1.d
    float var_f8_1 = zmm2
    float var_f4_1 = zmm3
    int32_t var_70
    char var_3c
    
    if (cond:2_1 || data_143e20cf4 != 1)
        zmm2 = arg3[1].d
        char rcx_9 = *(arg3 + 0x34) & 1
        int32_t var_6c_2 = arg3[2].d.d
        zmm1_1 = *arg3
        var_70 = (*(arg3 + 0xc)).d
        int32_t var_5c_2 = zmm1_1.d
        char var_3c_2 = (rcx_9 * 2) | (var_3c & 0xfc)
        int32_t var_58_2 = (*(arg3 + 4)).d
        int128_t var_54_2 = *(arg3 + 0x1c)
        float var_68_2 = zmm2
        int64_t var_44_2 = *(arg3 + 0x2c)
    else
        zmm0_2 = *(arg3 + 0xc)
        int128_t var_c0 = data_142ecd460
        int32_t var_d0
        int128_t* var_130_1 = &var_d0
        var_d0 = arg3[1].d.d
        int32_t var_cc_1 = zmm0_2.d
        int32_t var_c8_1 = arg3[2].d.d
        char var_138
        int32_t var_108
        var_138.q = &var_108
        var_118.d = 0x3f800000
        var_108 = 0x3f000000
        int32_t var_104_1 = 0x3f000000
        int64_t var_b0_1 = 0
        var_118:4.q = 0
        int32_t var_a8
        sub_140dd8200(&var_a8, arg3, &var_118, &var_c0, var_138, var_130_1, arg3 + 0x1c)
        int32_t var_9c
        var_70 = var_9c.d
        int32_t var_a0
        int32_t var_68_1 = var_a0.d
        int32_t var_98
        int32_t var_6c_1 = var_98.d
        int32_t var_5c_1 = var_a8.d
        char var_74
        char var_3c_1 = ((var_74 & 1) * 2) | (var_3c & 0xfc)
        int32_t var_a4
        int32_t var_58_1 = var_a4.d
        int128_t var_8c
        int128_t var_54_1 = var_8c
        int64_t var_7c
        int64_t var_44_1 = var_7c
    int64_t var_64_1 = 0
    sub_140db3600(arg4, arg5, &var_70, rdi, r15_1, &var_100)
    result = zx.q(arg5)

__security_check_cookie(rax_1 ^ &var_158)
return result
