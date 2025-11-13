// 函数: sub_141da0660
// 地址: 0x141da0660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rdi = *(arg1 + 0x28)
int64_t r13 = 0

if (rdi != 0)
    int32_t rax_2 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_2 = rdi[1].d
        z_1 = false
    
    if (z_1)
    label_141da06c4:
        rdi = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_2 == rdi[1].d)
                rdi[1].d = rax_2 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                if (rdi != 0)
                    r13 = *(arg1 + 0x20)
                    rdi[1].d += 1
                
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_2 = rdi[1].d
                z_3 = false
            
            if (z_3)
                goto label_141da06c4

void*** var_a8 = nullptr
int64_t var_90 = r13

if (rdi != 0)
    rdi[1].d += 1

void** const var_98 = &data_1432399c0
int64_t (* var_b8)(int64_t* arg1) = j_sub_141d96e20
void*** rax_4 = j_sub_140a82f30(0xa0)
void*** rsi = rax_4

if (rax_4 == 0)
    rsi = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rsi = &data_142d5eca0
    InitializeCriticalSection(&rsi[2])
    SetCriticalSectionSpinCount(&rsi[2], 0xfa0)
    rsi[8] = var_b8
    rsi[0xa] = var_a8
    *(rsi + 0x60) = var_98.o
    *(rsi + 0x70) = rdi.o
    int64_t (* rax_7)(int64_t* arg1) = var_b8
    
    if (rsi[8] != 0)
        rax_7 = nullptr
    
    var_b8 = rax_7
    rsi[0x10] = sub_140a491d0(1)
    rsi[0x11].b = 0

void*** var_108 = rsi

if (rsi != 0)
    rsi[1].d += 1
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t rax_13 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (rax_13 == 1)
                (*rsi)[1](rsi, 1)

char var_100 = 0

if (rdi != 0)
    rdi[1].d += 1

void var_d0
int64_t* rax_15 = sub_141d9cd40(&var_d0, nullptr, 0xff)
int64_t var_50 = r13
void*** var_68 = nullptr
void* r15 = *rax_15

if (rdi != 0)
    rdi[1].d += 1

int64_t* var_d8 = nullptr
void** const var_58 = &data_143239a00
int64_t var_e0 = 0
int64_t (* var_78)(int64_t* arg1) = sub_141d9bdd0
*(r15 + 0x10) = sub_141d9bdd0
*(r15 + 0x20) = var_68
*(r15 + 0x30) = var_58.o
*(r15 + 0x40) = rdi.o
int64_t (* rax_17)(int64_t* arg1) = var_78

if (*(r15 + 0x10) != 0)
    rax_17 = nullptr

*(r15 + 0x50) = &rsi[2]
void*** rax_19 = var_108
var_108 = nullptr
int64_t var_110_1 = 0
*(r15 + 0x58) = rax_19
sub_1405aeff0(&var_108, &var_d8)
int64_t* rcx_8 = var_d8

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        int64_t* rbx_2 = var_d8
        (**rbx_2)(rbx_2)
        int32_t rax_22 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_22 == 1)
            int64_t* rcx_10 = var_d8
            (*(*rcx_10 + 8))(rcx_10, 1)

*(r15 + 0x60) = 0

if (rax_17 != 0)
    void** const* rcx_11 = &var_58
    
    if (var_68 != 0)
        rcx_11 = var_68
    
    (*rcx_11)[2](rcx_11)

void* rcx_12 = *rax_15
int32_t r8 = rax_15[2].d
int64_t* rdx_3 = rax_15[1]
int64_t* rbx_3 = *(rcx_12 + 0x78)
int64_t* var_f8 = rbx_3
int32_t* r15_1 = &rbx_3[9]

if (rbx_3 != 0)
    *r15_1 += 1
    rbx_3 = var_f8

int32_t result = sub_141da2a90(rcx_12, rdx_3, r8, 1)

if (rbx_3 != 0)
    result = *r15_1
    *r15_1 -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(var_f8)

if (rdi != 0)
    result = rdi[1].d
    rdi[1].d -= 1
    
    if (result == 1)
        (**rdi)(rdi)
        result = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rdi + 8))(rdi, 1)

void*** rcx_16 = var_108

if (rcx_16 != 0)
    result = rcx_16[1].d
    rcx_16[1].d -= 1
    
    if (result == 1)
        void*** rbx_4 = var_108
        (**rbx_4)(rbx_4)
        result = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (result == 1)
            void*** rcx_18 = var_108
            result = (*rcx_18)[1](rcx_18, 1)

if (var_b8 != 0)
    void** const* rcx_19 = &var_98
    
    if (var_a8 != 0)
        rcx_19 = var_a8
    
    result = (*rcx_19)[2](rcx_19)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_34 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rdi + 8))(rdi, 1)
    
    result = rdi[1].d
    rdi[1].d -= 1
    
    if (result == 1)
        result = (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rdi + 8))(rdi, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_138)
return result
