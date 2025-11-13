// 函数: sub_141d7c4c0
// 地址: 0x141d7c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce1310(arg1, nullptr, nullptr, 0, 0)
sub_141d7c390(arg1)
int64_t* rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    sub_140ce1310(rcx_1, nullptr, nullptr, 0, 0)

int64_t* rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140ce1310(rcx_2, nullptr, nullptr, 0, 0)

void* rcx_3 = arg1[2]
uint64_t var_58 = 0
int64_t var_50 = 0
int64_t var_18
int64_t* rax = sub_140d21e10(rcx_3, &var_18, 0)
int16_t* rcx_4 = *rax
int32_t rdx_1 = rax[1].d
int32_t rdx_2 = neg.d(rdx_1)
*rax = 0
int32_t r8 = rax[1].d
int16_t* var_68 = rcx_4
int32_t rcx_5 = *(rax + 0xc)
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 6 + r8
int32_t var_5c = rcx_5
rax[1] = 0

if (rdx_5 s> rcx_5)
    sub_1405947f0(&var_68, rdx_5)

sub_140a20ba0(&var_68, u"_Json", 5)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int16_t* const rdx_6 = &data_142d40450

if (r8 != 0)
    rdx_6 = var_68

char result = sub_140af5b90(data_143ddb400, rdx_6, u"Data", &var_58, &data_143de57c0)

if (result != 0)
    int64_t var_28
    sub_140a305b0(sub_140b45670(&var_28, &var_58), &var_18, nullptr)
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int128_t var_38 = zx.o(0)
    void*** rax_2 = j_sub_140a82f30(0x88)
    void*** rbx_1
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_1406ca050(rax_2, &var_18)
    
    void*** rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        rax_4[1].d = 1
        *rax_4 = &data_142d83c20
        *(rax_4 + 0xc) = 1
        rax_4[2] = rbx_1
    
    uint128_t zmm0_2 = rbx_1.o
    var_28.o = zmm0_2
    void* rax_5 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
        int64_t* rbx_2 = rax_4
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    result = sub_1409173d0(&var_28, &var_38, 0)
    
    if (result != 0)
        int64_t rdx_11 = var_38.q
        
        if (rdx_11 != 0)
            result = (*(*arg1 + 0x278))(arg1, rdx_11)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp5_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)
    
    int64_t* rbx_4 = var_38:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            result = (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t rcx_22 = var_18
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

uint64_t rcx_24 = var_58

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
