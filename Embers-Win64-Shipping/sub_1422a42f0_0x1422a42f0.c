// 函数: sub_1422a42f0
// 地址: 0x1422a42f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r12 = 1
int32_t var_c8
int64_t* var_c0
int64_t var_b8
int32_t rbx

if (*(arg1 + 0x34) == 0)
    rbx = 0
    var_b8 = 0
else
    void* rcx = *(arg1 + 0x20)
    int64_t rax_3 = rcx s>> 1
    void* r8_1 = rax_3 + arg1 + 0x20
    char rdx_1 = *(arg1 + 0x20) & 1
    
    if (rdx_1 == 0)
        r8_1 = rcx
    
    rbx = 0
    int64_t* rdi_1
    uint64_t r9_1
    
    if (r8_1 == 0)
        rdi_1 = nullptr
        r9_1 = 0
    else
        if (rdx_1 != 0)
            rcx = arg1 + 0x20 + rax_3
        
        int64_t* rax_5 = (*(*rcx + 0x38))(rcx)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            r9_1 = 0
        else
            int64_t rdx_2 = *rax_5
            r9_1 = zx.q((*(rdx_2 + 0x18))(rax_5, rdx_2))
    
    int128_t zmm0 = data_143dbb1e0
    int32_t rax_8 = (1 << (data_1439c7a34).b) - 1
    int64_t var_78 = 0
    int32_t var_54_1 = rax_8
    void* rax_9 = *(arg1 + 0x20)
    int32_t var_68_1 = 1
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int64_t* var_70_1 = rdi_1
    int128_t var_64_1 = zmm0
    
    if ((1 & rax_9.b) != 0)
        rax_9 = (rax_9 s>> 1) + arg1 + 0x20
    
    int64_t* rcx_4 = data_143f0f180
    var_c0 = &var_78
    var_c8 = 0x201
    bool var_50_1 = rax_9 == 0
    (*(*rcx_4 + 0x498))(rcx_4, &var_b8, &data_143f02b98, r9_1, var_c8, var_c0)

sub_1405d1600(arg1 + 0x10, &var_b8)
int64_t result = sub_1405d1550(&var_b8)

if (*(arg1 + 0x10) != 0)
    int32_t rdi_2 = data_143f0f1a0
    char rax_12 = sub_1419d5c70(rdi_2)
    char rax_13
    
    if (rax_12 == 0)
        rax_13 = sub_142060c40(rdi_2)
    
    int64_t r15
    
    if (rax_12 != 0 || rax_13 != 0)
        r15 = 1
    else
        r15.b = 0
    
    void* rcx_10 = *(arg1 + 0x20)
    result = rcx_10 s>> 1
    void* r8_2 = result + arg1 + 0x20
    char rdx_5 = *(arg1 + 0x20) & 1
    
    if (rdx_5 == 0)
        r8_2 = rcx_10
    
    if (r8_2 != 0)
        if (rdx_5 != 0)
            rcx_10 = arg1 + 0x20 + result
        
        result = (*(*rcx_10 + 0x58))(rcx_10)
    
    if (r8_2 == 0 || result.b == 0)
        result.b = 0
    else
        result = 1
    
    result.b |= r15.b
    
    if (result.b != 0)
        void* rax_16 = *(arg1 + 0x20)
        
        if ((1 & rax_16.b) != 0)
            rax_16 = (rax_16 s>> 1) + arg1 + 0x20
        
        void* const var_a8
        int64_t var_a0
        void* const rdx_6
        
        if (rax_16 == 0)
            rdx_6 = nullptr
            var_a0 = 0
            r12 = 0
            rbx = 2
        else
            rdx_6 = *(arg1 + 0x10)
            var_a8 = rdx_6
            
            if (rdx_6 != 0)
                *(rdx_6 + 8) += 1
                rdx_6 = var_a8
        
        void var_98
        int128_t* rax_18 = sub_141961de0(&var_98, rdx_6, 0xd)
        int64_t* rcx_12 = data_143f0f180
        void var_b0
        (*(*rcx_12 + 0x4b0))(rcx_12, &var_b0, &data_143f02b98, rax_18, var_c8, var_c0)
        sub_1405d1600(arg1 + 0x18, &var_b0)
        result = sub_1405ec8a0(&var_b0)
        
        if (rbx != 0)
            result = sub_1405d1550(&var_a0)
        
        if (r12 != 0)
            result = sub_1405d1550(&var_a8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
