// 函数: sub_141bcdec0
// 地址: 0x141bcdec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int32_t rax_2 = *(arg1 + 0x108)
__maxss_xmmss_memss((*(arg1 + 0x10c))[0], 0x322bcc77)
int32_t rbx

if (rax_2 s>= 1)
    rbx = 0x19
    
    if (rax_2 s< 0x19)
        rbx = rax_2
else
    rbx = 1

void var_228
int64_t* rax_3
int32_t zmm6_1
rax_3, zmm6_1 = sub_140f1ea10(&var_228)
*(rax_3 + 0x1ac) = zmm6_1
rax_3[0x34] = arg1 + 0x120
rax_3[0x35].d = rbx
rax_3[0x36].d = *(arg1 + 0x110)
void*** rax_6 = sub_140f1cc50()
void* var_260 = &rax_6[2]
sub_140918950(&var_260, &rax_6[2])
int64_t var_278 = 0x370
void var_268
void* var_250 = &var_268
void* var_248
void** rax_7 =
    sub_140f27040(&var_260, &var_248, rax_3, sub_140e23ed0(&rax_6[2], "SCircularThrobber"))
int64_t* rcx_4 = rax_7[1]

if (rcx_4 != 0)
    rcx_4[1].d += 1

void var_238

if (arg1 + 0x1b0 == &var_238)
label_141bce007:
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp2_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
else
    *(arg1 + 0x1b0) = *rax_7
    int64_t* rbx_2 = *(arg1 + 0x1b8)
    
    if (rcx_4 == rbx_2)
        goto label_141bce007
    
    *(arg1 + 0x1b8) = rcx_4
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t temp5_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_240 + 8))(var_240, 1)

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        (**rax_6)(rax_6)
        int32_t temp8_1 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_6)[1](rax_6, 1)

void var_40
sub_140745b20(&var_40)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp9_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

sub_140ddea30(&var_228)
int64_t* rbx_6 = *(arg1 + 0x1b8)

if (rbx_6 != 0)
    rbx_6[1].d += 1

*arg2 = *(arg1 + 0x1b0)
arg2[1] = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp11_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_3 = *rbx_6
                (*(r8_3 + 8))(rbx_6, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_298)
return arg2
