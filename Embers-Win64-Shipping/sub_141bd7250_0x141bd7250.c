// 函数: sub_141bd7250
// 地址: 0x141bd7250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
void*** rax_2 = j_sub_140a82f30(0x340)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142ef17a0
    
    if (rdi != -0x10)
        sub_140f21100(&rdi[2])

void* var_260 = &rdi[2]
sub_140918950(&var_260, &rdi[2])
int64_t var_288 = 0x330
void var_278
void* var_250 = &var_278
sub_140e23ed0(&rdi[2], "SUniformGridPanel")
void var_238
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140f99ff0(&var_238)
void* var_270
void** rax_4 = sub_140f9ecd0(&var_260, &var_270, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_248

if (arg1 + 0x138 == &var_248)
label_141bd736e:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x138) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x140)
    
    if (rbx_1 == rdi_1)
        goto label_141bd736e
    
    *(arg1 + 0x140) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_268

if (var_268 != 0)
    var_268[1].d -= 1
    
    if (var_268[1].d == 1)
        (**var_268)(var_268)
        int32_t temp5_1 = *(var_268 + 0xc)
        *(var_268 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_268 + 8))(var_268, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

void var_40
sub_140745b20(&var_40)
void var_58
sub_140745b20(&var_58)
void var_70
sub_140745b20(&var_70)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_140ddea30(&var_238)
void** i = *(arg1 + 0x108)

for (void* rbp = &i[sx.q(*(arg1 + 0x110))]; i != rbp; i = &i[1])
    void* rdi_2 = *i
    
    if (rdi_2 != 0)
        void* rax_13 = sub_141c10ca0()
        void* rdx_2 = *(rdi_2 + 0x10)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            *(rdi_2 + 0x28) = arg1
            var_270 = *(arg1 + 0x138)
            void* rax_17 = *(arg1 + 0x140)
            void* var_268_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            sub_141b95620(rdi_2, &var_270)

int64_t* rbx_4 = *(arg1 + 0x140)

if (rbx_4 != 0)
    rbx_4[1].d += 1

*arg2 = *(arg1 + 0x138)
arg2[1] = rbx_4

if (rbx_4 != 0)
    int32_t r8_3 = rbx_4[1].d
    rbx_4[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_5 = *rbx_4
            (*(r8_5 + 8))(rbx_4, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
