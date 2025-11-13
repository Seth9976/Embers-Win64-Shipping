// 函数: sub_141facaa0
// 地址: 0x141facaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg5
int64_t rsi
rsi.b = 0
int128_t zmm6 = arg4
int128_t zmm8 = arg2

if (rbx == 0)
    return 0

uint128_t zmm2 = zx.o(arg5)
int64_t rcx = *(arg1 + 0x270)
uint128_t var_88
uint128_t var_98 = var_88
void var_78
sub_142404a90(rcx, &var_78, 0, 1, &var_98, zmm2.q, zmm2.q)
int64_t rax = sub_1423de050()
int32_t rdi_1 = 0

if ((*(*rbx + 0x6a0))(rbx) s<= 0)
    return 0

int128_t zmm7 = 0x3f800000
int32_t rax_7

do
    void* rax_4 = (*(*rbx + 0x548))(rbx, zx.q(rdi_1))
    
    if (rax_4 != 0)
        *arg3 = zmm6.d + *arg3
        arg5 = *(rax_4 + 0x18)
        int64_t* rax_6
        int32_t zmm6_1
        rax_6, zmm6_1 = sub_140b63b70(&arg5, &var_88)
        int16_t* const r8
        
        if (rax_6[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rax_6
        
        sub_140a2e390(&var_98, u"Material: '%s'", r8)
        uint64_t var_a8_1
        var_a8_1.d = zmm7.d
        arg4.d = zmm8.d f+ zmm6_1
        int64_t var_b0_1
        var_b0_1.d = zmm7.d
        uint128_t* var_b8_1
        var_b8_1.d = *arg3
        zmm6, zmm7, zmm8 = sub_14240ae40(*(arg1 + 0x270), rax, &var_98, arg4, var_b8_1.d, 
            var_b0_1.d, var_a8_1.d, &var_78)
        int64_t rcx_6 = var_98.q
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_88.q
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rsi.b = 1
    
    int64_t rdx_5 = *rbx
    rdi_1 += 1
    rax_7 = (*(rdx_5 + 0x6a0))(rbx, rdx_5)
while (rdi_1 s< rax_7)
return zx.q(rsi.b)
