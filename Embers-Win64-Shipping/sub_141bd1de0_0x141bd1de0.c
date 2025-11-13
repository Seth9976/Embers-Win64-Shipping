// 函数: sub_141bd1de0
// 地址: 0x141bd1de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t var_1f8 = 0
void*** rax_2 = j_sub_140a82f30(0x8e8)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_143084980
    
    if (rdi != -0x10)
        sub_140f66500(&rdi[2])

void* var_220 = &rdi[2]
sub_140918950(&var_220, &rdi[2])
int64_t var_238 = 0x8d8
char var_228
char* var_210 = &var_228
sub_140e23ed0(&rdi[2], "SInvalidationPanel")
void var_1e0
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e4fff0(&var_1e0)
void var_208
void** rax_4 = sub_140e57320(&var_220, &var_208, rax_3, zmm1)
int64_t* rcx_5 = rax_4[1]

if (rcx_5 != 0)
    rcx_5[1].d += 1

uint128_t var_1f0

if (arg1 + 0x128 == &var_1f0)
label_141bd1f10:
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
else
    *(arg1 + 0x128) = *rax_4
    int64_t* rbx_1 = *(arg1 + 0x130)
    
    if (rcx_5 == rbx_1)
        goto label_141bd1f10
    
    *(arg1 + 0x130) = rcx_5
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t temp5_1 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_200 + 8))(var_200, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t temp9_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_38 + 8))(var_38, 1)

sub_140ddea30(&var_1e0)
sub_140f8a3e0(*(arg1 + 0x128), *(arg1 + 0x120))

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_18 = *(**(arg1 + 0x108) + 0x30)
    int64_t* rdx_5
    int32_t rdi_2
    
    if (rcx_18 == 0)
        uint128_t zmm0_1 = data_143e244b0.o
        var_1f0 = zmm0_1
        void* rax_15 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        rdx_5 = &var_1f0
        rdi_2 = 2
    else
        var_228 = 0
        char* var_218_1 = &var_228
        var_220 = sub_141b970e0
        sub_141befea0(rcx_18, &var_208, &var_220)
        rdx_5 = &var_208
        rdi_2 = 1
    
    sub_140f8a510(*(arg1 + 0x128), rdx_5)
    
    if ((rdi_2.b & 2) != 0)
        int64_t* rbx_5 = var_1f0:8.q
        rdi_2 &= 0xfffffffd
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp14_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    if ((rdi_2.b & 1) != 0 && var_200 != 0)
        var_200[1].d -= 1
        
        if (var_200[1].d == 1)
            (**var_200)(var_200)
            int32_t temp15_1 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_200 + 8))(var_200, 1)

int64_t* rbx_7 = *(arg1 + 0x130)

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = *(arg1 + 0x128)
arg2[1] = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp11_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_4 = *rbx_7
                (*(r8_4 + 8))(rbx_7, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_258)
return arg2
