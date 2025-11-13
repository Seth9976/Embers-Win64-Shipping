// 函数: sub_1422ca350
// 地址: 0x1422ca350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rbx = nullptr
int32_t var_138 = 0
int32_t rdi = 0
int32_t var_148
int64_t* var_140

if (*(arg1 + 0x7c) == 0)
    var_138.q = 0
else
    int64_t* rcx = *(arg1 + 0x40)
    uint64_t r9_1
    int64_t* r14_1
    
    if (rcx == 0)
        r14_1 = nullptr
        r9_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x38))(rcx)
        r14_1 = rax_3
        
        if (rax_3 == 0)
            r9_1 = 0
        else
            int64_t rdx_1 = *rax_3
            r9_1 = zx.q((*(rdx_1 + 0x18))(rax_3, rdx_1))
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_b8
    var_140 = &var_b8
    var_b8 = 0
    int64_t* rcx_3 = data_143f0f180
    int32_t var_a8_1 = 1
    bool var_90_1 = *(arg1 + 0x40) == 0
    int32_t var_94_1 = (1 << rcx_2) - 1
    int128_t var_a4_1 = zmm0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    int64_t* var_b0_1 = r14_1
    var_148 = 0x201
    (*(*rcx_3 + 0x498))(rcx_3, &var_138, &data_143f02b98, r9_1, var_148, var_140)

sub_1405d1600(arg1 + 0x20, &var_138)
sub_1405d1550(&var_138)
int64_t var_130

if (*(arg1 + 0x78) == 0)
    var_130 = 0
else
    int64_t* rcx_6 = *(arg1 + 0x50)
    uint64_t r9_2
    int64_t* r14_2
    
    if (rcx_6 == 0)
        r14_2 = nullptr
        r9_2 = 0
    else
        int64_t* rax_9 = (*(*rcx_6 + 0x38))(rcx_6)
        r14_2 = rax_9
        
        if (rax_9 == 0)
            r9_2 = 0
        else
            int64_t rdx_4 = *rax_9
            r9_2 = zx.q((*(rdx_4 + 0x18))(rax_9, rdx_4))
    
    char rcx_8 = (data_1439c7a34).b
    int128_t zmm0_1 = data_143dbb1e0
    int64_t var_78
    var_140 = &var_78
    var_78 = 0
    int64_t* rcx_9 = data_143f0f180
    int32_t var_68_1 = 1
    bool var_50_1 = *(arg1 + 0x50) == 0
    int32_t var_54_1 = (1 << rcx_8) - 1
    int128_t var_64_1 = zmm0_1
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int64_t* var_70_1 = r14_2
    var_148 = 0x201
    (*(*rcx_9 + 0x498))(rcx_9, &var_130, &data_143f02b98, r9_2, var_148, var_140)

sub_1405d1600(arg1 + 0x38, &var_130)
char result = sub_1405d1550(&var_130)

if (*(arg1 + 0x20) != 0)
    int32_t r14_3 = data_143f0f1a0
    char rax_14 = sub_1419d5c70(r14_3)
    
    if (rax_14 == 0)
        result = sub_142060c40(r14_3)
    
    if (rax_14 != 0 || result != 0)
        void* const var_120
        int64_t var_108
        void* const rdx_7
        
        if (*(arg1 + 0x40) == 0)
            rdx_7 = nullptr
            var_108 = 0
            rdi = 2
        else
            rdx_7 = *(arg1 + 0x20)
            var_120 = rdx_7
            
            if (rdx_7 != 0)
                *(rdx_7 + 8) += 1
                rdx_7 = var_120
            
            rdi = 1
        
        int32_t r8_1 = 0x3d
        
        if (*(arg1 + 0x81) != 0)
            r8_1 = 0x3f
        
        void var_f8
        int128_t* rax_15 = sub_141961de0(&var_f8, rdx_7, r8_1)
        int64_t* rcx_15 = data_143f0f180
        void var_128
        (*(*rcx_15 + 0x4b0))(rcx_15, &var_128, &data_143f02b98, rax_15, var_148, var_140)
        sub_1405d1600(arg1 + 0x48, &var_128)
        result = sub_1405ec8a0(&var_128)
        
        if ((rdi.b & 2) != 0)
            rdi &= 0xfffffffd
            result = sub_1405d1550(&var_108)
        
        if ((rdi.b & 1) != 0)
            rdi &= 0xfffffffe
            result = sub_1405d1550(&var_120)

void* r14_4 = *(arg1 + 0x38)

if (r14_4 != 0)
    result = sub_1419d5c70(data_143f0f1a0)
    
    if (result != 0)
        void* var_110
        int64_t var_100
        int32_t rdi_1
        
        if (*(arg1 + 0x50) == 0)
            rdi_1 = rdi | 8
            var_100 = 0
        else
            rdi_1 = rdi | 4
            var_110 = r14_4
            *(r14_4 + 8) += 1
            rbx = var_110
        
        int32_t r8_2 = 0xf
        
        if (*(arg1 + 0x80) != 0)
            r8_2 = 0x11
        
        void var_d8
        int128_t* rax_16 = sub_141961de0(&var_d8, rbx, r8_2)
        int64_t* rcx_22 = data_143f0f180
        void var_118
        (*(*rcx_22 + 0x4b0))(rcx_22, &var_118, &data_143f02b98, rax_16, var_148, var_140)
        sub_1405d1600(arg1 + 0x58, &var_118)
        result = sub_1405ec8a0(&var_118)
        
        if ((rdi_1.b & 8) != 0)
            rdi_1 &= 0xfffffff7
            result = sub_1405d1550(&var_100)
        
        if ((rdi_1.b & 4) != 0)
            result = sub_1405d1550(&var_110)

__security_check_cookie(rax_1 ^ &var_168)
return result
