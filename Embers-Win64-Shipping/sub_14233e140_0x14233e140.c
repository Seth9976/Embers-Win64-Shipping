// 函数: sub_14233e140
// 地址: 0x14233e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74
int32_t var_74_1 = var_74 & 0xffffff00
char var_128 = 1
int64_t var_120 = 0
int64_t var_118 = 0
char var_108 = 0
int64_t var_100
__builtin_memset(&var_100, 0, 0x88)
int32_t var_78 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_128)
sub_140597700(&var_128)
int64_t var_148 = *(arg4 + 0x18)
int64_t rax_1 = *(arg4 + 0x20)
int64_t* rax_2 = *(arg4 + 0x28)

if (rax_2 != 0)
    rax_2[1].d += 1

if (sub_140d6df00(&var_148) == 0)
    var_128 = 0
    int64_t var_120_2 = 0
    int64_t var_118_2 = 0
    char var_108_2 = 0
    int64_t var_100_2
    __builtin_memset(&var_100_2, 0, 0x88)
label_14233e3a6:
    int32_t var_74_2 = var_74_1 & 0xffffff00
    int32_t var_78_1 = 0x20702
    sub_1405979f0(arg1 + 0x10, &var_128)
    sub_140597700(&var_128)
else
    int32_t var_68
    sub_140a3ef70(arg1 + 0xc8, &var_68)
    int64_t* var_60
    *var_60 = var_148
    var_60[1] = rax_1
    var_60[2] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    var_60[3].b = 1
    var_60[4].d = 0xffffffff
    int64_t rbx_1 = *var_60
    int64_t var_160_1 = 0
    void arg_8
    sub_1423345e0(arg1 + 0xc8, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_60, var_68, 
        nullptr)
    int64_t* rdi_2 = *(arg1 - 0x98)
    
    if (rdi_2 != 0)
        int64_t rax_9 = var_148
        int128_t zmm6 = *(arg4 + 0x38)
        
        if (rax_9 == data_143e1ebc0)
            zmm6 ^= data_142d3f780
        
        uint128_t zmm7 = zx.o(data_14399f938)
        var_68.q = rax_9
        void* r12_1 = arg1 - 0xc8
        int64_t var_60_1 = rax_1
        
        if (arg1 == 0xd0)
            r12_1 = nullptr
        
        int64_t* var_58_1 = rax_2
        
        if (rax_2 != 0)
            rax_2[1].d += 1
            rdi_2 = *(arg1 - 0x98)
        
        int32_t rbx_3 = *(arg4 + 0xc)
        int64_t rdi_3 = *rdi_2
        char rax_12 = sub_140d6de70(&var_148)
        int64_t rcx_8 = *(arg1 - 0x98)
        var_160_1.d = _mm_cvtpd_ps(zmm7).d
        char rax_13 =
            (*(rdi_3 + 0x50))(rcx_8, r12_1, zx.q(rbx_3), &var_68, zmm6.d, var_160_1, 1, rax_12)
        
        if (rax_13 == 0)
            var_128 = rax_13
            int64_t var_120_1 = 0
            int64_t var_118_1 = 0
            char var_108_1 = 0
            int64_t var_100_1
            __builtin_memset(&var_100_1, 0, 0x88)
            goto label_14233e3a6

sub_140596b00(arg2, arg1 + 0x10)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

return arg2
