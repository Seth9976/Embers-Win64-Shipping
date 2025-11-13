// 函数: sub_141bd7ec0
// 地址: 0x141bd7ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void*** rax_2 = j_sub_140a82f30(0x328)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142d8c5c0
    
    if (rdi != -0x10)
        sub_140f211a0(&rdi[2])

void* var_220 = &rdi[2]
sub_14065fa30(&var_220, &rdi[2])
int64_t var_248 = 0x318
void var_238
void* var_210 = &var_238
sub_140e23ed0(&rdi[2], "SWidgetSwitcher")
void var_1f8
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_14068dd50(&var_1f8)
void* var_230
void** rax_4 = sub_140697920(&var_220, &var_230, rax_3, zmm1)
int64_t* rbx_1 = rax_4[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_208

if (arg1 + 0x128 == &var_208)
label_141bd7fde:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x128) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x130)
    
    if (rbx_1 == rdi_1)
        goto label_141bd7fde
    
    *(arg1 + 0x130) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_228

if (var_228 != 0)
    var_228[1].d -= 1
    
    if (var_228[1].d == 1)
        (**var_228)(var_228)
        int32_t temp5_1 = *(var_228 + 0xc)
        *(var_228 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_228 + 8))(var_228, 1)

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
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140660250(&var_1f8)
void** i = *(arg1 + 0x108)

for (void* rbp = &i[sx.q(*(arg1 + 0x110))]; i != rbp; i = &i[1])
    void* rdi_2 = *i
    
    if (rdi_2 != 0)
        void* rax_13 = sub_141c24200()
        void* rdx_2 = *(rdi_2 + 0x10)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            *(rdi_2 + 0x28) = arg1
            var_230 = *(arg1 + 0x128)
            void* rax_17 = *(arg1 + 0x130)
            void* var_228_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            sub_141b95ab0(rdi_2, &var_230)

int64_t* rbx_4 = *(arg1 + 0x130)

if (rbx_4 != 0)
    rbx_4[1].d += 1

*arg2 = *(arg1 + 0x128)
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

__security_check_cookie(rax_1 ^ &var_268)
return arg2
