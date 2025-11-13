// 函数: sub_142340900
// 地址: 0x142340900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t var_44
int32_t var_44_1 = var_44 & 0xffffff00
char var_f8 = 1
char rsi = 0
int64_t var_f0 = 0
char var_d8 = 0
int64_t var_e8 = 0
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x88)
int32_t var_48 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_f8)
sub_140597700(&var_f8)
sub_140d96150(arg1 + 0x120, arg3)
int512_t zmm1 = sub_142348be0(arg1 - 0xd0, arg3, arg4)
int64_t* rbx_1
void* const r14

if (*(arg1 + 0x180) == 0)
    rbx_1 = arg_8.q
    r14.b = 0
else
    rbx_1 = *(arg1 + 0x188)
    
    if (rbx_1 == 0)
        rbx_1 = arg_8.q
        r14.b = 0
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            rbx_1 = arg_8.q
            r14.b = 0
        else
            void* rcx_4 = nullptr
            
            if (rbx_1 != 0)
                if (rax_1 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1[1].d = rax_1 + 1
                    rcx_4 = *(arg1 + 0x180)
            
            rsi = 1
            
            if (sub_140e19840(rcx_4, zmm1) == 0)
                r14.b = 0
            else
                r14 = 1

if ((rsi & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg1 - 0x98) != 0)
    void* rsi_1 = arg1 - 0xc8
    int32_t* rax_7 = (*(*rsi_1 + 0x18))(rsi_1, &arg_8)
    
    if (*rax_7 != data_143dbb180.d || rax_7[1] != data_143dbb180:4.d)
        int64_t r15_1 = **(arg1 - 0x98)
        int32_t rax_10 = (*(*rsi_1 + 0xc8))(rsi_1)
        uint128_t zmm0_1
        
        if (r14.b == 0)
            int32_t rax_16 = (*(*rsi_1 + 0xc0))(rsi_1)
            
            if (arg1 == 0xd0)
                rsi_1 = nullptr
            
            (*(r15_1 + 0x98))(*(arg1 - 0x98), rsi_1, zx.q(rax_16), zx.q(rax_10))
        else
            int64_t rdx_4 = *rsi_1
            int32_t rax_11 = (*(rdx_4 + 0xc0))(rsi_1, rdx_4)
            
            if (arg1 == 0xd0)
                rsi_1 = nullptr
            
            (*(r15_1 + 0xa0))(*(arg1 - 0x98), rsi_1, zx.q(rax_11), zx.q(rax_10))
            zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1ac)))
            zmm1.o = *(arg4 + 0x2c)
            zmm0_1.d = zmm0_1.d f+ *(arg4 + 0x28)
            *(arg1 + 0x1a0) += 1
            *(arg1 + 0x1a4) += 1
            int32_t rax_14 = int.d(zmm0_1.d)
            zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1b0)))
            *(arg1 + 0x1ac) = rax_14
            zmm0_1.d = zmm0_1.d f- zmm1.d
            *(arg1 + 0x1b0) = int.d(zmm0_1.d)
        
        if (*(arg1 + 0x1d1) != 0)
            zmm1.o = zx.o(*(arg1 + 0x1d8))
            void* rcx_14 = data_143e29f28
            zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1d4)))
            zmm1.o = _mm_cvtepi32_ps(zmm1.o)
            arg_8 = zmm0_1.d
            int32_t arg_c = zmm1.d
            (*(*(rcx_14 + 0x118) + 0x1a8))(rcx_14 + 0x118, &arg_8)

sub_140596b00(arg2, arg1 + 0x10)
return arg2
