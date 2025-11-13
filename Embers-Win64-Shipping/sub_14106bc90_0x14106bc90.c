// 函数: sub_14106bc90
// 地址: 0x14106bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void*** rax_2
int128_t zmm1
rax_2, zmm1 = sub_14106a4f0()
void* r15 = &rax_2[2]
void* var_168 = r15
void*** var_160 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rax_5 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*rax_2)[1](rax_2, 1)
    
    r15 = var_168

*arg2 = r15
arg2[1] = rax_2
char var_158 = 1

if (rax_2 != 0)
    rax_2[1].d += 1
    r15 = var_168

EnterCriticalSection(arg1 + 0x50)

if (*(arg1 + 0x80) != 0 || *(arg1 + 0x8c) != 0)
    int32_t rax_16 = *(arg1 + 0x88)
    int32_t rax_17 = *(arg1 + 0x8c)
    void* var_e0 = r15
    var_160 = nullptr
    int64_t* var_130 = nullptr
    int64_t var_168_1 = 0
    int64_t var_138_1 = 0
    sub_1405aeff0(&var_160, &var_130)
    int64_t* rcx_9 = var_130
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            int64_t* rdi_2 = var_130
            (**rdi_2)(rdi_2)
            int32_t rax_20 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_20 == 1)
                int64_t* rcx_11 = var_130
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    char var_d0_1 = 0
    int128_t* var_b8 = nullptr
    int64_t rax_22 = *arg3
    
    if (rax_22 != 0)
        void* rax_23 = arg3[2]
        void* rcx_13 = &arg3[4]
        
        if (rax_23 != 0)
            rcx_13 = rax_23
        
        (**rcx_13)(rcx_13, &var_b8)
    
    int64_t rdi_3 = sx.q(*(arg1 + 0x80))
    int32_t rax_25 = (rdi_3 + 1).d
    *(arg1 + 0x80) = rax_25
    
    if (rax_25 s> *(arg1 + 0x84))
        sub_14090a6a0(arg1 + 0x78)
    
    int32_t* rdi_6 = rdi_3 * 0x60 + *(arg1 + 0x78)
    *rdi_6 = rax_16
    rdi_6[1] = rax_17
    sub_1406b5490(&rdi_6[2], &var_e0)
    *(rdi_6 + 0x20) = rax_22
    *(rdi_6 + 0x30) = var_b8
    int128_t var_a8
    int128_t zmm0_1 = var_a8
    var_b8 = nullptr
    *(rdi_6 + 0x40) = zmm0_1
    int128_t var_98
    *(rdi_6 + 0x50) = var_98
    
    if (*(rdi_6 + 0x20) != 0)
        int64_t var_c8_2 = 0
    else if (rax_22 != 0)
        int128_t* rax_30 = var_b8
        int128_t* rcx_16 = &var_a8
        
        if (rax_30 != 0)
            rcx_16 = rax_30
        
        (*(*rcx_16 + 0x10))(rcx_16)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rax_34 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*rax_2)[1](rax_2, 1)
    
    *(arg1 + 0x88) += 1
    *(arg1 + 0x8c) = 0
else
    *(r15 + 0x80) = 0
    sub_1405fc0f0(r15, zmm1, arg5, arg4)
    int64_t rax_7 = *arg3
    
    if (rax_7 != 0)
        void* rax_8 = arg3[2]
        void* rcx_5 = &arg3[4]
        void* var_78 = nullptr
        
        if (rax_8 != 0)
            rcx_5 = rax_8
        
        (**rcx_5)(rcx_5, &var_78)
        void*** rax_10 = sub_140a82f30(0x50, 0x10)
        *rax_10 = &data_142f045c8
        rax_10[2] = rax_7
        rax_10[4] = 0
        void var_68
        
        if (rax_10[2] != 0)
            void* r8 = var_78
            void* rcx_6 = &var_68
            
            if (r8 != 0)
                rcx_6 = r8
            
            (**rcx_6)(rcx_6)
        
        *rax_10 = &data_142f045e8
        int64_t (* var_128)(int64_t* arg1)
        int64_t (* rax_13)(int64_t* arg1) = var_128
        
        if (rax_10 != -0x10)
            rax_13 = sub_14106bb20
        
        void*** var_118_1 = rax_10
        var_128 = rax_13
        sub_140a20e40(2, &var_128)
        
        if (rax_7 != 0)
            void* rax_14 = var_78
            void* rcx_7 = &var_68
            
            if (rax_14 != 0)
                rcx_7 = rax_14
            
            (*(*rcx_7 + 0x10))(rcx_7)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

void*** rcx_20 = var_160

if (rcx_20 != 0)
    rcx_20[1].d -= 1
    
    if (rcx_20[1].d == 1)
        void*** rbx_3 = var_160
        (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            void*** rcx_22 = var_160
            void** r8_2 = *rcx_22
            r8_2[1](rcx_22, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_188)
return arg2
