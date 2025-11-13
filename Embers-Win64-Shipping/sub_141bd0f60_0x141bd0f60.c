// 函数: sub_141bd0f60
// 地址: 0x141bd0f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void*** rax_2 = j_sub_140a82f30(0x328)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142ef1750
    
    if (rdi != -0x10)
        sub_140f20a30(&rdi[2])

int64_t* var_230 = &rdi[2]
sub_140918950(&var_230, &rdi[2])
int64_t var_258 = 0x318
void var_248
void* var_220 = &var_248
sub_140e23ed0(&rdi[2], "SGridPanel")
void var_208
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140f99760(&var_208)
int64_t* var_240
int64_t** rax_4 = sub_140f9de50(&var_230, &var_240, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_218

if (arg1 + 0x140 == &var_218)
label_141bd107e:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x140) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x148)
    
    if (rbx_1 == rdi_1)
        goto label_141bd107e
    
    *(arg1 + 0x148) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_238

if (var_238 != 0)
    var_238[1].d -= 1
    
    if (var_238[1].d == 1)
        (**var_238)(var_238)
        int32_t temp5_1 = *(var_238 + 0xc)
        *(var_238 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_238 + 8))(var_238, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

int32_t i_6
int32_t i_3 = i_6
void* var_48

if (i_3 != 0)
    int64_t* rbx_5 = var_48 + 8
    int32_t i
    
    do
        sub_140745b20(rbx_5)
        rbx_5 = &rbx_5[3]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t i_5
int32_t i_4 = i_5
void* var_58

if (i_4 != 0)
    int64_t* rbx_7 = var_58 + 8
    int32_t i_1
    
    do
        sub_140745b20(rbx_7)
        rbx_7 = &rbx_7[3]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140ddea30(&var_208)
void** i_2 = *(arg1 + 0x108)

for (void* rbp = &i_2[sx.q(*(arg1 + 0x110))]; i_2 != rbp; i_2 = &i_2[1])
    void* rdi_2 = *i_2
    
    if (rdi_2 != 0)
        void* rax_13 = sub_141bfb280()
        void* rdx_2 = *(rdi_2 + 0x10)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            *(rdi_2 + 0x28) = arg1
            var_240 = *(arg1 + 0x140)
            void* rax_17 = *(arg1 + 0x148)
            void* var_238_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            sub_141b947b0(rdi_2, &var_240)

int64_t* rbx_8 = *(arg1 + 0x148)

if (rbx_8 != 0)
    rbx_8[1].d += 1

*arg2 = *(arg1 + 0x140)
arg2[1] = rbx_8

if (rbx_8 != 0)
    int32_t r8_3 = rbx_8[1].d
    rbx_8[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_8)(rbx_8)
        int32_t temp10_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp10_1 == 1)
            int64_t r8_5 = *rbx_8
            (*(r8_5 + 8))(rbx_8, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_278)
return arg2
