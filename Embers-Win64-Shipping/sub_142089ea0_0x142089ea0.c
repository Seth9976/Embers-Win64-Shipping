// 函数: sub_142089ea0
// 地址: 0x142089ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t rax_2 = *(arg2 + 0xc4)
int64_t rdi = 0
*arg1 = rax_2.d
arg1[1] = (rax_2 u>> 0x20).d
int32_t* r15 = arg1
int64_t r13
r13.b = 1
int128_t var_1c8
__builtin_memset(&var_1c8, 0, 0x18)
int64_t* var_1f0 = nullptr
int32_t var_1e4 = 0
int32_t rbx

if (arg2[0x1a] == 0)
    rbx = 0
else
    char rax_5 = (*(*arg2 + 0x318))(arg2)
    void* rcx_1 = arg2[0x1a]
    
    if (rax_5 == 0)
        rbx = *(rcx_1 + 0x20)
    else
        rbx = sub_1423c1c80(rcx_1)

if (rbx s> 0)
    sub_1405a4d70(&var_1f0)

memset(var_1f0, 0, sx.q(rbx) << 3)
sub_1423c19f0(arg2, 0, var_1f0)
void* rcx_5 = arg2[0x1a]
void* const rcx_6
int32_t r12

if (rcx_5 == 0)
    r12 = 0
    rcx_6 = nullptr
else
    int32_t rax_7 = sub_1423c1990(rcx_5, 0)
    rcx_6 = arg2[0x1a]
    r12 = rax_7

if (*(rcx_6 + 0x20) == 0)
    void var_1a8
    sub_140b58170(&var_1a8, "ImageUtils", 1)
    int64_t var_1b0 = arg2[3]
    int64_t var_168
    sub_140b63b70(&var_1b0, &var_168)
    void var_90
    int64_t* rax_9 = sub_140aae2f0(&var_90, &var_168)
    void var_120
    char* var_f0
    char** rax_11 = sub_140a96390(&var_f0, 
        _vfprintf_p_l(&var_120, Failed to read Mip Data in: '{0}'", ImageUtils"))
    int64_t rcx_12 = *rax_9
    int64_t* rcx_13 = rax_9[1]
    int32_t var_78_1 = 4
    
    if (rcx_13 != 0)
        rcx_13[1].d += 1
    
    int32_t rcx_14 = rax_9[2].d
    char var_50_1 = 1
    int32_t* var_1d8 = nullptr
    int32_t var_1d0_1 = 1
    sub_1405a4b40(&var_1d8, 1, 0)
    int32_t* rcx_16 = var_1d8
    *rcx_16 = var_78_1
    int64_t var_70
    *(rcx_16 + 8) = var_70
    *(rcx_16 + 8) = var_70
    rcx_16[2] = var_70.d
    *(rcx_16 + 8) = var_70
    rcx_16[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_16 + 0x10) = rcx_12
        *(rcx_16 + 0x18) = rcx_13
        
        if (rcx_13 != 0)
            rcx_13[1].d += 1
        
        rcx_16[8] = rcx_14
        rcx_16[0xa].b = 1
    
    char* var_178 = *rax_11
    void* rax_19 = rax_11[1]
    void* var_170_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    void var_138
    int64_t* rax_20 = sub_140aac870(&var_138, &var_178, &var_1d8)
    int64_t var_190 = *rax_20
    int64_t* rcx_19 = rax_20[1]
    
    if (rcx_19 != 0)
        rcx_19[1].d += 1
    
    int32_t var_180_1 = rax_20[2].d
    int64_t* var_130
    
    if (var_130 != 0)
        var_130[1].d -= 1
        
        if (var_130[1].d == 1)
            (**var_130)(var_130)
            int32_t rax_24 = *(var_130 + 0xc)
            *(var_130 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*var_130 + 8))(var_130, 1)
    
    sub_140596f50(&var_1d8)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_13 != 0)
            rcx_13[1].d -= 1
            
            if (rcx_13[1].d == 1)
                (**rcx_13)(rcx_13)
                int32_t rax_28 = *(rcx_13 + 0xc)
                *(rcx_13 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rcx_13 + 8))(rcx_13, 1)
    
    int64_t* rbx_3 = rax_11[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_32 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = rax_9[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_36 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    void var_158
    void var_e0
    sub_140ae44d0(sub_140accdf0(&var_e0, &var_1a8), &var_158, &var_190)
    int64_t* var_150
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t temp4_1 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_150 + 8))(var_150, 1)
    
    sub_140acd9c0(&var_e0)
    
    if (rcx_19 != 0)
        rcx_19[1].d -= 1
        
        if (rcx_19[1].d == 1)
            (**rcx_19)(rcx_19)
            int32_t rax_43 = *(rcx_19 + 0xc)
            *(rcx_19 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rcx_19 + 8))(rcx_19, 1)
    
    int64_t* var_118
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            (**var_118)(var_118)
            int32_t rax_47 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (rax_47 == 1)
                (*(*var_118 + 8))(var_118, 1)
    
    int64_t rcx_38 = var_168
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    r15 = arg1
    r13 = 0

int32_t rax_49

if (r12 != 2)
    if (r12 == 0xa)
        rax_49 = r12
        goto label_14208a30a
    
    r13.b = 0
    void var_1a0
    sub_140b58170(&var_1a0, "ImageUtils", 1)
    void var_108
    int64_t* rax_51 = _vfprintf_p_l(&var_108, Unsupported texture format provided.", ImageUtils")
    void var_148
    void var_b8
    sub_140ae44d0(sub_140accdf0(&var_b8, &var_1a0), &var_148, rax_51)
    int64_t* var_140
    
    if (var_140 != 0)
        var_140[1].d -= 1
        
        if (var_140[1].d == 1)
            (**var_140)(var_140)
            int32_t temp2_1 = *(var_140 + 0xc)
            *(var_140 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_140 + 8))(var_140, 1)
    
    sub_140acd9c0(&var_b8)
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rsi_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_100 + 8))(var_100, zx.q(rsi_1))
else
    rax_49 = r12
label_14208a30a:
    r15[2] = rax_49
    
    if (r13.b != 0)
        int32_t count_1 = sub_140bc7f20(**(arg2[0x1a] + 0x18) + 0x10)
        uint64_t count = zx.q(count_1)
        var_1c8:8.q = count
        
        if (count_1 != 0)
            sub_140a4f990(&var_1c8)
        
        memset(var_1c8.q, 0, count)
        memcpy(var_1c8.q, *var_1f0, count.d)
int64_t* rbx_11 = var_1f0
void* rcx_54 = &rbx_11[sx.q(rbx)]
uint64_t rsi_5 = (rcx_54 - rbx_11 + 7) u>> 3

if (rbx_11 u> rcx_54)
    rsi_5 = 0

if (rsi_5 != 0)
    do
        sub_140a74f90(*rbx_11)
        rdi += 1
        rbx_11 = &rbx_11[1]
    while (rdi != rsi_5)

if (r13.b == 0)
    rdi.b = 0
else
    sub_1420aeb70(r15, &var_1c8, arg3)
    rdi.b = 1

int64_t* rbx_12 = var_1f0

if (rbx_12 != 0)
    sub_140a74f90(rbx_12)

int64_t rbx_13 = var_1c8.q

if (rbx_13 != 0)
    sub_140a74f90(rbx_13)

__security_check_cookie(rax_1 ^ &var_218)
return zx.q(rdi.b)
