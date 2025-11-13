// 函数: sub_140ebcc70
// 地址: 0x140ebcc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* rbx = arg3[1]
void* rdi = *arg3

if (rbx != 0)
    rbx[1].d += 1

void var_288
int64_t* rax_2 = sub_140e92ba0(&var_288)
void* var_2b8 = rdi
int64_t* rdi_1 = rbx

if (rbx != 0)
    rbx[1].d += 1

if (&var_2b8 != &rax_2[0x48])
    var_2b8.o = *(rax_2 + 0x240)
    rdi_1 = rbx
    *(rax_2 + 0x240) = var_2b8.o

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t var_2a0 = arg4
void*** rax_8 = sub_140e91530()
var_2b8 = &rax_8[2]
sub_140e90fe0(&var_2b8, &rax_8[2])
int64_t var_2c8 = 0x578
int64_t* var_2a8 = &var_2a0
void var_298
int64_t* rax_9 = sub_140e9a6e0(&var_2b8, &var_298, rax_2, 
    sub_140e23ed0(&rax_8[3], "STableRow< TSharedPtr<SWidget> >"))
*arg2 = *rax_9
void* rax_11 = rax_9[1]
arg2[1] = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

int64_t* var_290

if (var_290 != 0)
    var_290[1].d -= 1
    
    if (var_290[1].d == 1)
        (**var_290)(var_290)
        int32_t temp6_1 = *(var_290 + 0xc)
        *(var_290 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_290 + 8))(var_290, 1)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp8_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_8)[1](rax_8, 1)

sub_140e977f0(&var_288)
int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp9_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp9_1 == 1)
            int64_t r8_3 = *rbx_4
            (*(r8_3 + 8))(rbx_4, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_2e8)
return arg2
