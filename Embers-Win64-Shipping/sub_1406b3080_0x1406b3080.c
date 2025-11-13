// 函数: sub_1406b3080
// 地址: 0x1406b3080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void** var_98 = arg1
int64_t* var_98_1 = arg4
void*** r15 = nullptr
int32_t var_138 = 0
int64_t rax_2 = *arg3
int64_t var_88 = rax_2
int128_t* var_78 = nullptr

if (rax_2 != 0)
    void* rax_3 = arg3[2]
    void* rcx = &arg3[4]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_78)

void*** rax_5 = sub_1405eac40(arg4)
char var_138_1 = 4
void* var_128 = &rax_5[2]
void*** rbx = rax_5
void*** var_120 = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax_5

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_9 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_9 == 1)
            (*rbx)[1](rbx, 1)

char var_118 = 1
void* rax_11 = var_128

if (var_120 != 0)
    var_120[1].d += 1

int128_t var_68
int32_t var_130
int128_t var_58

if (arg2 == 0 || arg2 == 1)
    void var_b0
    void** rax_34 = sub_1405f45f0(&var_b0, nullptr, 0xff)
    int32_t rdi_2 = 2
    
    if (arg2 == 0)
        rdi_2 = 0xff
    
    int64_t* rbx_7 = *rax_34 + 0x10
    var_130.q = rbx_7
    *rbx_7 = var_88
    rbx_7[2] = var_78
    var_78 = nullptr
    *(rbx_7 + 0x20) = var_68
    *(rbx_7 + 0x30) = var_58
    int64_t rax_37 = var_88
    
    if (*rbx_7 != 0)
        rax_37 = 0
    
    var_88 = rax_37
    sub_1406b5490(&rbx_7[8], &var_128)
    rbx_7[0xb].d = rdi_2
    void* rcx_27 = *rax_34
    int64_t* rbx_8 = *(rcx_27 + 0x78)
    int64_t* var_b8_1 = rbx_8
    
    if (rbx_8 != 0)
        rbx_8[9].d += 1
    
    int32_t var_138_2 = 0x14
    sub_1405ff810(rcx_27, rax_34[1], rax_34[2].d, 1)
    
    if (rbx_8 != 0)
        rbx_8[9].d -= 1
        
        if (rbx_8[9].d == 1)
            sub_140a2f6e0(rbx_8)
else if (arg2 == 2)
    char rax_17
    int128_t zmm1_2
    rax_17, zmm1_2 = sub_140a54810()
    
    if (rax_17 == 0)
        int128_t* rax_31 = var_78
        int128_t* rcx_22 = &var_68
        
        if (rax_31 != 0)
            rcx_22 = rax_31
        
        var_88((*(*rcx_22 + 8))(rcx_22))
        void* rcx_24 = var_128
        *(rcx_24 + 0x80) = 0
        sub_1405fc0f0(rcx_24, zmm1_2, arg5, arg6)
    else
        CRITICAL_SECTION* var_110
        sub_1405eb890(&var_110)
        void*** rax_18 = j_sub_140a82f30(0x80)
        var_130.q = rax_18
        int64_t* var_108
        int64_t* rbx_2 = var_108
        int64_t* var_e0
        
        if (rax_18 != 0)
            char var_100_1 = 1
            CRITICAL_SECTION* var_e8 = var_110
            var_e0 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                rbx_2 = var_108
            
            var_138_1 = 5
            r15 = sub_1406b5400(rax_18, &var_88, &var_128, &var_e8)
        
        if ((var_138_1 & 1) != 0 && var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t rax_23 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
            
            rbx_2 = var_108
        
        int16_t* var_d8
        sub_140a2e390(&var_d8, u"TAsync %d", zx.q(sub_1405f81c0()))
        int16_t* const rdx_5 = &data_142d40450
        int32_t var_d0
        
        if (var_d0 != 0)
            rdx_5 = var_d8
        
        void*** rax_26
        int128_t zmm1_3
        rax_26, zmm1_3 = sub_140a6e140(r15, rdx_5, 0, 0, -1, 0)
        CRITICAL_SECTION* rcx_18 = var_110
        rcx_18->__offset(0x80).q = rax_26
        sub_1405fc0f0(rcx_18, zmm1_3, arg5, arg6)
        int16_t* rcx_19 = var_d8
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**var_108)(var_108)
                int32_t rax_29 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*var_108 + 8))(var_108, 1)
else if (arg2 == 3)
    int64_t rdi_1 = *(*data_143db7ac8 + 0x10)
    void*** rax_13 = j_sub_140a82f30(0x70)
    void*** rbx_1 = rax_13
    var_130.q = rax_13
    
    if (rax_13 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = &data_142d5ec70
        rbx_1[2] = var_88
        rbx_1[4] = var_78
        var_78 = nullptr
        *(rbx_1 + 0x30) = var_68
        *(rbx_1 + 0x40) = var_58
        int64_t rax_16 = var_88
        
        if (rbx_1[2] != 0)
            rax_16 = 0
        
        var_88 = rax_16
        sub_1406b5490(&rbx_1[0xa], &var_128)
    
    rdi_1(data_143db7ac8, rbx_1)
*arg1 = rax_11
arg1[1] = var_120

if (var_120 != 0)
    var_120[1].d -= 1
    
    if (var_120[1].d == 1)
        (**var_120)(var_120)
        int32_t r14_1 = *(var_120 + 0xc)
        *(var_120 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*var_120)[1](var_120, zx.q(r14_1))

if (var_88 != 0)
    int128_t* rax_44 = var_78
    int128_t* rcx_32 = &var_68
    
    if (rax_44 != 0)
        rcx_32 = rax_44
    
    (*(*rcx_32 + 0x10))(rcx_32)

if (*arg4 != 0)
    void* rdx_9 = arg4[2]
    void* rcx_33 = &arg4[4]
    
    if (rdx_9 != 0)
        rcx_33 = rdx_9
    
    int64_t rdx_10 = *rcx_33
    (*(rdx_10 + 0x10))(rcx_33, rdx_10)

__security_check_cookie(rax_1 ^ &var_168)
return arg1
