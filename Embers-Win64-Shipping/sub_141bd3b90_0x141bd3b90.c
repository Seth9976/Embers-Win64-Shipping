// 函数: sub_141bd3b90
// 地址: 0x141bd3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void*** rax_2 = j_sub_140a82f30(0x2e0)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142ecd308
    
    if (rdi != -0x10)
        sub_140dde040(&rdi[2])

void* var_210 = &rdi[2]
sub_140918950(&var_210, &rdi[2])
int64_t var_238 = 0x2d0
void var_228
void* var_200 = &var_228
sub_140e23ed0(&rdi[2], "SOverlay")
void var_1e8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140dd5d30(&var_1e8)
void* var_220
void** rax_4 = sub_140de49c0(&var_210, &var_220, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_1f8

if (arg1 + 0x120 == &var_1f8)
label_141bd3cae:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x120) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x128)
    
    if (rbx_1 == rdi_1)
        goto label_141bd3cae
    
    *(arg1 + 0x128) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_218

if (var_218 != 0)
    var_218[1].d -= 1
    
    if (var_218[1].d == 1)
        (**var_218)(var_218)
        int32_t temp5_1 = *(var_218 + 0xc)
        *(var_218 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_218 + 8))(var_218, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_140ddea30(&var_1e8)
int64_t** i = *(arg1 + 0x108)

for (void* rbp = &i[sx.q(*(arg1 + 0x110))]; i != rbp; i = &i[1])
    int64_t* rbx_4 = *i
    
    if (rbx_4 != 0)
        void* rax_13 = sub_141c04fc0()
        void* rdx_2 = rbx_4[2]
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            rbx_4[5] = arg1
            var_220 = *(arg1 + 0x120)
            void* rax_17 = *(arg1 + 0x128)
            void* var_218_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            (*(*rbx_4 + 0x270))(rbx_4, &var_220)

int64_t* rbx_5 = *(arg1 + 0x128)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x120)
arg2[1] = rbx_5

if (rbx_5 != 0)
    int32_t r8_3 = rbx_5[1].d
    rbx_5[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_5)(rbx_5)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_5 = *rbx_5
            (*(r8_5 + 8))(rbx_5, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_258)
return arg2
