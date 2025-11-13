// 函数: sub_141bd7a80
// 地址: 0x141bd7a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_1e8 = 0
void*** rax_2 = sub_141b771b0()
void*** var_208 = rax_2
void* var_210 = &rax_2[2]
sub_140918950(&var_210, &rax_2[2])
int64_t var_228 = 0x468
char var_218
char* var_200 = &var_218
sub_140e23ed0(&rax_2[2], "SAutoRefreshViewport")
void var_1d0
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e93f70(&var_1d0)
void var_1f8
void** rax_4 = sub_141b88c80(&var_210, &var_1f8, rax_3, zmm1)
int64_t* rcx_4 = rax_4[1]

if (rcx_4 != 0)
    rcx_4[1].d += 1

void* var_1e0

if (arg1 + 0x130 == &var_1e0)
label_141bd7b79:
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp2_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
else
    *(arg1 + 0x130) = *rax_4
    int64_t* rbx_1 = *(arg1 + 0x138)
    
    if (rcx_4 == rbx_1)
        goto label_141bd7b79
    
    *(arg1 + 0x138) = rcx_4
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_1f0

if (var_1f0 != 0)
    var_1f0[1].d -= 1
    
    if (var_1f0[1].d == 1)
        (**var_1f0)(var_1f0)
        int32_t temp5_1 = *(var_1f0 + 0xc)
        *(var_1f0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_1f0 + 8))(var_1f0, 1)

if (var_208 != 0)
    var_208[1].d -= 1
    
    if (var_208[1].d == 1)
        (**var_208)(var_208)
        int32_t temp7_1 = *(var_208 + 0xc)
        *(var_208 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*var_208)[1](var_208, 1)

sub_140ddea30(&var_1d0)

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_14 = *(**(arg1 + 0x108) + 0x30)
    void** rcx_15
    int32_t rdi_1
    
    if (rcx_14 == 0)
        uint128_t zmm0_1 = data_143e244b0.o
        var_210.o = zmm0_1
        void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        rcx_15 = &var_210
        rdi_1 = 2
    else
        var_218 = 0
        var_208 = &var_218
        var_210 = sub_141b970e0
        sub_141befea0(rcx_14, &var_1f8, &var_210)
        rcx_15 = &var_1f8
        rdi_1 = 1
    
    var_1e0 = *rcx_15
    void* rax_15 = rcx_15[1]
    void* var_1d8_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    sub_140f8a540(*(arg1 + 0x130), &var_1e0)
    
    if ((rdi_1.b & 2) != 0)
        rdi_1 &= 0xfffffffd
        
        if (var_208 != 0)
            var_208[1].d -= 1
            
            if (var_208[1].d == 1)
                (**var_208)(var_208)
                int32_t temp12_1 = *(var_208 + 0xc)
                *(var_208 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*var_208)[1](var_208, 1)
    
    if ((rdi_1.b & 1) != 0 && var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t temp13_1 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)

int64_t* rbx_6 = *(arg1 + 0x138)

if (rbx_6 != 0)
    rbx_6[1].d += 1

*arg2 = *(arg1 + 0x130)
arg2[1] = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp9_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_4 = *rbx_6
                (*(r8_4 + 8))(rbx_6, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
