// 函数: sub_141bd5390
// 地址: 0x141bd5390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_143083df0
    sub_140d3a3a0(&rax_2[1], arg1)
    rax_2[2] = sub_141be85d0
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_143083e48

uint32_t rbx = zx.d(*(arg1 + 0x828))
void var_258
int64_t* rax_4 = sub_14068d760(&var_258)
rax_4[0x36] = arg1 + 0x120
rax_4[0x37] = arg1 + 0x348
rax_4[0x3a].d = rbx
rax_4[0x43].b = *(arg1 + 0x82a)
rax_4[0x3f].b = *(arg1 + 0x848)
*(rax_4 + 0x1fc) = *(arg1 + 0x84c)
rax_4[0x40].b = *(arg1 + 0x850)
*(rax_4 + 0x1f1) = *(arg1 + 0x847)
*(rax_4 + 0x1f4) = *(arg1 + 0x854)
void var_268

if (&var_268 != &rax_4[0x41])
    if (rax_2 != 0)
        (*rax_2)[8](rax_2, &rax_4[0x41])
    else if (rax_4[0x42].d != 0)
        int64_t* rcx_3 = rax_4[0x41]
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = rax_4[0x41]
            
            if (rcx_4 != 0)
                rax_4[0x41] = sub_140a84c80(rcx_4, 0, 0)
            
            rax_4[0x42].d = 0

void*** rax_14 = j_sub_140a82f30(0x4e0)
void*** rdi = rax_14

if (rax_14 == 0)
    rdi = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rdi = &data_142d8c5e0
    
    if (rdi != -0x10)
        sub_140f20e50(&rdi[2])

void* var_280 = &rdi[2]
sub_14065fa30(&var_280, &rdi[2])
int64_t var_2a8 = 0x4d0
void var_298
void* var_270 = &var_298
void* var_290
void** rax_15 = sub_140697120(&var_280, &var_290, rax_4, sub_140e23ed0(&rdi[2], "SScrollBox"))
int64_t* rbx_3 = rax_15[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (arg1 + 0x870 == &var_268)
label_141bd55ce:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp2_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *(arg1 + 0x870) = *rax_15
    int64_t* rdi_1 = *(arg1 + 0x878)
    
    if (rbx_3 == rdi_1)
        goto label_141bd55ce
    
    *(arg1 + 0x878) = rbx_3
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_288

if (var_288 != 0)
    var_288[1].d -= 1
    
    if (var_288[1].d == 1)
        (**var_288)(var_288)
        int32_t temp5_1 = *(var_288 + 0xc)
        *(var_288 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_288 + 8))(var_288, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi)[1](rdi, 1)

void var_50
sub_140745b20(&var_50)
int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp9_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

sub_140660250(&var_258)

if (rax_2 != 0)
    (*rax_2)[7](rax_2, 0)
    int64_t rax_26 = sub_140a84c80(rax_2, 0, 0)
    
    if (rax_26 != 0)
        sub_140a74f90(rax_26)

void** i = *(arg1 + 0x108)

for (void* r14_1 = &i[sx.q(*(arg1 + 0x110))]; i != r14_1; i = &i[1])
    void* rdi_2 = *i
    
    if (rdi_2 != 0)
        void* rax_28 = sub_141c08e80()
        void* rdx_4 = *(rdi_2 + 0x10)
        int64_t rax_29 = sx.q(*(rax_28 + 0x38))
        
        if (rax_29.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_29 << 3)) == rax_28 + 0x30)
            *(rdi_2 + 0x28) = arg1
            var_290 = *(arg1 + 0x870)
            void* rax_32 = *(arg1 + 0x878)
            void* var_288_1 = rax_32
            
            if (rax_32 != 0)
                *(rax_32 + 8) += 1
            
            sub_141b951e0(rdi_2, &var_290)

int64_t* rbx_7 = *(arg1 + 0x878)

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = *(arg1 + 0x870)
arg2[1] = rbx_7

if (rbx_7 != 0)
    int32_t r8_3 = rbx_7[1].d
    rbx_7[1].d = r8_3
    
    if (r8_3 == 0)
        (**rbx_7)(rbx_7)
        int32_t temp10_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp10_1 == 1)
            int64_t r8_5 = *rbx_7
            (*(r8_5 + 8))(rbx_7, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_2c8)
return arg2
