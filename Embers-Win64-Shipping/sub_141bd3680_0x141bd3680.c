// 函数: sub_141bd3680
// 地址: 0x141bd3680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void*** rax_2 = j_sub_140a82f30(0x3d8)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142d8c570
    
    if (rdi != -0x10)
        sub_140f20750(&rdi[2])

void* var_2e0 = &rdi[2]
sub_14065fa30(&var_2e0, &rdi[2])
int64_t var_318 = 0x3c8
char var_308
char* var_2d0 = &var_308
sub_140e23ed0(&rdi[2], "SBox")
void var_2c8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_14068c940(&var_2c8)
void var_300
void** rax_4 = sub_140695d20(&var_2e0, &var_300, rax_3, zmm1)
int64_t* rcx_5 = rax_4[1]

if (rcx_5 != 0)
    rcx_5[1].d += 1

void** (* var_2f0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (arg1 + 0x120 == &var_2f0)
label_141bd37a3:
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
else
    *(arg1 + 0x120) = *rax_4
    int64_t* rbx_1 = *(arg1 + 0x128)
    
    if (rcx_5 == rbx_1)
        goto label_141bd37a3
    
    *(arg1 + 0x128) = rcx_5
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_2f8

if (var_2f8 != 0)
    var_2f8[1].d -= 1
    
    if (var_2f8[1].d == 1)
        (**var_2f8)(var_2f8)
        int32_t temp5_1 = *(var_2f8 + 0xc)
        *(var_2f8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_2f8 + 8))(var_2f8, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

sub_140690290(&var_2c8)

if (*(arg1 + 0x110) s> 0)
    int64_t* rcx_15 = *(**(arg1 + 0x108) + 0x30)
    
    if (rcx_15 != 0)
        var_308 = 0
        char* var_2e8_1 = &var_308
        var_2f0 = sub_141b970e0
        sub_141befea0(rcx_15, &var_300, &var_2f0)
        sub_140f5d9a0(*(arg1 + 0x120), &var_300)
        
        if (var_2f8 != 0)
            var_2f8[1].d -= 1
            
            if (var_2f8[1].d == 1)
                (**var_2f8)(var_2f8)
                int32_t temp10_1 = *(var_2f8 + 0xc)
                *(var_2f8 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_2f8 + 8))(var_2f8, 1)

int64_t* rbx_5 = *(arg1 + 0x128)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x120)
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
                int64_t r8_4 = *rbx_5
                (*(r8_4 + 8))(rbx_5, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_338)
return arg2
