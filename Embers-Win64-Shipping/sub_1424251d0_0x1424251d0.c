// 函数: sub_1424251d0
// 地址: 0x1424251d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298
float arg_10

if (rcx != 0 && sub_1423e6860(rcx, nullptr) != 0)
    int64_t* rcx_1 = *(data_143f5b298 + 0xaf8)
    (*(*rcx_1 + 0x90))(rcx_1, &arg_10)
    int32_t rax_3 = *(arg1 + 0x78)
    int32_t rdx_2 = *(arg1 + 0x7c)
    *(arg1 + 0x90) = rax_3
    *(arg1 + 0x94) = rdx_2
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_3))
    zmm1.d = zmm1.d f- zmm1.d * arg_10
    zmm1.d = zmm1.d f* 0.5f
    int32_t rcx_2 = int.d(zmm1.d)
    zmm1 = _mm_cvtepi32_ps(zx.o(rdx_2))
    *(arg1 + 0x80) = rcx_2
    *(arg1 + 0x88) = rcx_2
    zmm1.d = zmm1.d f- zmm1.d * arg2
    zmm1.d = zmm1.d f* 0.5f
    int32_t rax_4 = int.d(zmm1.d)
    *(arg1 + 0x84) = rax_4
    *(arg1 + 0x8c) = rax_4
    return 

void* rcx_3 = data_143e29f28

if (rcx_3 == 0)
    return 

int64_t* rsi_1 = nullptr
int128_t var_38
__builtin_memset(&var_38, 0, 0x20)
int64_t var_70 = 0
int64_t var_68_1 = 0
int32_t var_78
uint128_t zmm0_1 = sub_140da60a0(rcx_3, &var_78)
*(arg1 + 0x90) = var_78
int32_t var_74
*(arg1 + 0x94) = var_74
int64_t* rcx_4 = data_143e29f28
void* var_88
(*(*rcx_4 + 0x30))(rcx_4, &var_88)
void* rcx_5 = var_88
int32_t rax_13
int32_t rcx_12
uint128_t zmm1_1

if (rcx_5 == 0)
    rax_13 = *(arg1 + 0x90)
    rcx_12 = *(arg1 + 0x94)
else
    sub_140e12930(rcx_5, &arg_10, zmm0_1)
    void* rcx_6 = var_88
    int64_t* rbx_1 = *(rcx_6 + 0x7b8)
    
    if (rbx_1 != 0)
        int32_t rax_8 = rbx_1[1].d
        
        if (rax_8 != 0)
            rbx_1[1].d = rax_8 + 1
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rsi_1 = *(rcx_6 + 0x7b0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi_1 == 0)
        zmm1_1 = arg2
        zmm0_1 = arg_10
    else
        void arg_20
        int64_t rcx_10 = *(*(*rsi_1 + 0x10))(rsi_1, &arg_20)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_10.d))
        zmm1_1 = _mm_cvtepi32_ps(zx.o((rcx_10 u>> 0x20).d))
    
    rax_13 = int.d(zmm0_1.d)
    rcx_12 = int.d(zmm1_1.d)
    *(arg1 + 0x90) = rax_13
    *(arg1 + 0x94) = rcx_12

void* rcx_13 = data_143e29f28
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_13))
zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_12))
int32_t arg_18 = zmm0_1.d
int128_t var_98 = zx.o(0)
int32_t arg_1c = zmm1_1.d
sub_140da9b20(rcx_13, &var_98)
float zmm0_2 = var_98:4.d * 2f
*(arg1 + 0x80) = neg.d(int.d(-0.5f - var_98.d * 2f) s>> 1)
int32_t rax_18 = int.d(-0.5f - zmm0_2) s>> 1
float zmm1_2 = -0.5f - var_98:8.d * 2f
zmm0_2 = var_98:0xc.d
*(arg1 + 0x84) = neg.d(rax_18)
*(arg1 + 0x88) = neg.d(int.d(zmm1_2) s>> 1)
*(arg1 + 0x8c) = neg.d(int.d(-0.5f - zmm0_2 * 2f) s>> 1)
int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp1_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

sub_140d72800(&var_70)
