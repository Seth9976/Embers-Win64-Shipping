// 函数: sub_141bd8750
// 地址: 0x141bd8750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int128_t zmm6 = *(arg1 + 0x128)
int32_t var_248 = zmm6.d
int64_t rbx
rbx.b = *(arg1 + 0x12c) == 0
char var_244 = 1
int64_t var_240 = 0
int32_t var_238 = 0
void var_220
int64_t* rax_2 = sub_141b7adc0(&var_220)
rax_2[0x3a].b = rbx.b
rax_2[0x36].d = zmm6.d
*(rax_2 + 0x1b4) = 1
sub_140692f90(&rax_2[0x37], &var_240)
void*** rax_3 = j_sub_140a82f30(0x308)
void*** rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rdi = &data_143084960
    
    if (rdi != -0x10)
        sub_140f23a00(&rdi[2])

void* var_260 = &rdi[2]
sub_140918950(&var_260, &rdi[2])
int64_t var_288 = 0x2f8
void var_278
void* var_250 = &var_278
void* var_270
void** rax_4 = sub_141b8b7c0(&var_260, &var_270, rax_2, sub_140e23ed0(&rdi[2], "SWrapBox"))
int64_t* rbx_2 = rax_4[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_230

if (arg1 + 0x130 == &var_230)
label_141bd88cb:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x130) = *rax_4
    int64_t* rdi_1 = *(arg1 + 0x138)
    
    if (rbx_2 == rdi_1)
        goto label_141bd88cb
    
    *(arg1 + 0x138) = rbx_2
    
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

void var_68
sub_140745b20(&var_68)
int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

sub_140ddea30(&var_220)
sub_140745b20(&var_240)
void** i = *(arg1 + 0x108)

for (void* rbp = &i[sx.q(*(arg1 + 0x110))]; i != rbp; i = &i[1])
    void* rdi_2 = *i
    
    if (rdi_2 != 0)
        void* rax_13 = sub_141c23e00()
        void* rdx_3 = *(rdi_2 + 0x10)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            *(rdi_2 + 0x28) = arg1
            var_270 = *(arg1 + 0x130)
            void* rax_17 = *(arg1 + 0x138)
            void* var_268_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            sub_141b95f40(rdi_2, &var_270)

int64_t* rbx_5 = *(arg1 + 0x138)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x130)
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

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
