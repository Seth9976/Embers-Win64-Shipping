// 函数: sub_141bd4db0
// 地址: 0x141bd4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
void*** rax_2 = sub_1406889c0()
int64_t* var_260 = &rax_2[2]
sub_14065fa30(&var_260, &rax_2[2])
int64_t var_288 = 0x470
void var_278
void* var_250 = &var_278
sub_140e23ed0(&rax_2[2], "SScaleBox")
void var_238
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_14068d5a0(&var_238)
int64_t* var_270
int64_t** rax_4 = sub_140696d20(&var_260, &var_270, rax_3, zmm1)
int64_t* rcx_4 = rax_4[1]

if (rcx_4 != 0)
    rcx_4[1].d += 1

void var_248

if (arg1 + 0x130 == &var_248)
label_141bd4e9c:
    
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
        goto label_141bd4e9c
    
    *(arg1 + 0x138) = rcx_4
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_268

if (var_268 != 0)
    var_268[1].d -= 1
    
    if (var_268[1].d == 1)
        (**var_268)(var_268)
        int32_t temp5_1 = *(var_268 + 0xc)
        *(var_268 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_268 + 8))(var_268, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp8_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_30
sub_140745b20(&var_30)
void var_48
sub_140745b20(&var_48)
void var_60
sub_140745b20(&var_60)
void var_78
sub_140745b20(&var_78)
int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp9_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

sub_140660250(&var_238)
int32_t rcx_19 = *(arg1 + 0x110)

if (rcx_19 s> 0)
    var_270 = *(arg1 + 0x130)
    void* rax_15 = *(arg1 + 0x138)
    void* var_268_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
        rcx_19 = *(arg1 + 0x110)
    
    void* const rcx_20
    
    if (rcx_19 s<= 0)
        rcx_20 = nullptr
    else
        rcx_20 = **(arg1 + 0x108)
    
    sub_141b94f50(rcx_20, &var_270)

int64_t* rbx_5 = *(arg1 + 0x138)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x130)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp11_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_3 = *rbx_5
                (*(r8_3 + 8))(rbx_5, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
