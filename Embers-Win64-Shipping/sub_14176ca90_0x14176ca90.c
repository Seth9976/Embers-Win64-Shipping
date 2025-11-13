// 函数: sub_14176ca90
// 地址: 0x14176ca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x28)
int64_t rbx_1 = sx.q(arg3) * 2
int128_t zmm6 = arg2
int64_t rsi = sx.q(*(result + (rbx_1 << 3) + 8))

if (rsi.d == 0)
    result.b = 0
    return result

int64_t rbx_2 = *(result + (rbx_1 << 3))
void* rdi = *(arg1 + 0x10)
int32_t r15 = 0
uint64_t var_60 = 0
int32_t var_58 = rsi.d
sub_1405c4a00(&var_60, rsi.d, 0)
memcpy(var_60, rbx_2, (rsi << 3).d)
char arg_18 = 0
int64_t r8_2
int512_t zmm2
r8_2, zmm2 = sub_14175e350(var_60, var_58, 0)
int32_t rbp = 0
uint64_t rbx_3 = var_60

if (*(rdi + 0xc) s> 0)
    int64_t r14_1 = 0
    int64_t rcx_3 = rbx_3 + (sx.q(var_58) << 3)
    uint64_t rsi_4 = (rcx_3 - rbx_3 + 7) u>> 3
    
    if (rbx_3 u> rcx_3)
        rsi_4 = 0
    
    if (rsi_4 != 0)
        do
            int32_t var_78_1 = arg4
            zmm2.o = zmm6
            int32_t r9
            int32_t var_80_1 = r9
            void var_68
            int64_t* rax_3
            rax_3, r8_2, zmm2, zmm6 = sub_14177d3e0(rdi, &var_68, r8_2, **rbx_3, *(rdi + 0xc))
            r14_1 += 1
            rbx_3 += 8
            rbp = *rax_3 + r15
            r15 = rbp
        while (r14_1 != rsi_4)
        
        rbx_3 = var_60

if (*(rdi + 0x140) != 0)
    void* rax_4 = *(rdi + 0x150)
    void* rcx_5 = rdi + 0x160
    int32_t arg_8 = zmm6.d
    
    if (rax_4 != 0)
        rcx_5 = rax_4
    
    (*(rdi + 0x140))((*(*rcx_5 + 8))(rcx_5), &arg_8, &var_60)
    rbx_3 = var_60

rdi.b = rbp s> 0

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

return zx.q(rdi.b)
