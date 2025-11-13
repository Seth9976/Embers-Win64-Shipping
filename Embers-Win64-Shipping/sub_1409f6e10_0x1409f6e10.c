// 函数: sub_1409f6e10
// 地址: 0x1409f6e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* result = nullptr
int64_t var_68
sub_1409f70b0(&var_68, arg1)
int64_t* var_60
int64_t* rcx_12

if (var_68 == 0)
    rcx_12 = var_60
else
    void* rax_2 = sub_140cde0b0()
    sub_140d19010(rax_2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t var_48_1 = 0
    result = sub_140d2dfc0(sub_1409f8df0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
    int64_t var_40
    int64_t* rax_5 = sub_140b254c0(&var_40)
    int32_t rcx_4 = arg1[1].d
    int32_t rbx_2 = rcx_4 - 1
    
    if (rcx_4 == 0)
        rbx_2 = 0
    
    int32_t rcx_6
    
    if (rax_5[1].d == 0)
        rcx_6 = 2
    
    if (rax_5[1].d != 0 || rbx_2 == 0xffffffff)
        rcx_6 = 1
    
    int64_t var_78 = *rax_5
    *rax_5 = 0
    int32_t rax_7 = rax_5[1].d
    int32_t rax_8 = *(rax_5 + 0xc)
    rax_5[1] = 0
    int32_t rdx_5 = rax_7 + rcx_6 + rbx_2
    
    if (rdx_5 s> rax_8)
        sub_1405947f0(&var_78, rdx_5)
    
    sub_140a2cf70(&var_78, *arg1, rbx_2)
    
    if (result + 0x28 == &var_78)
        int64_t rcx_10 = var_78
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    else
        int64_t rcx_9 = *(result + 0x28)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *(result + 0x28) = var_78
        *(result + 0x30) = rax_7
        *(result + 0x34) = rax_8
        int32_t var_70_1
        var_70_1.q = 0
        var_78 = 0
    
    int64_t rcx_11 = var_40
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    uint128_t zmm1_1 = var_68.o
    uint128_t var_58 = zmm1_1
    rcx_12 = _mm_bsrli_si128(zmm1_1, 8).q
    
    if (rcx_12 != 0)
        rcx_12[1].d += 1
        rcx_12 = var_60
        zmm1_1 = var_58
    
    if (&var_58 != result + 0x38)
        uint128_t var_30_1 = zmm1_1
        var_58 = *(result + 0x38)
        *(result + 0x38) = zmm1_1
    
    void* rdx_7 = var_58:8.q
    
    if (rdx_7 != 0)
        int32_t rax_13 = *(rdx_7 + 8)
        *(rdx_7 + 8) -= 1
        
        if (rax_13 == 1)
            int64_t* rbx_4 = var_58:8.q
            (**rbx_4)(rbx_4, rdx_7)
            int32_t rax_15 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_15 == 1)
                int64_t* rcx_14 = var_58:8.q
                (*(*rcx_14 + 8))(rcx_14, 1)
        
        rcx_12 = var_60

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**var_60)(var_60)
        int32_t rdi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_c8)
return result
