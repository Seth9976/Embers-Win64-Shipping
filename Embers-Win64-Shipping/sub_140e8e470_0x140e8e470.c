// 函数: sub_140e8e470
// 地址: 0x140e8e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void var_218
int64_t* rax_2 = sub_140e4fd00(&var_218)
void*** rax_3 = sub_140a84c80(0, 0x20, 0)

if (rax_3 != 0)
    *rax_3 = &data_142ed9dc8
    rax_3[1] = sub_140e75dd0
    rax_3[3] = sub_140a387b0()

void* var_240

if (&var_240 != &rax_2[0x36])
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, &rax_2[0x36])
    else if (rax_2[0x37].d != 0)
        int64_t* rcx_2 = rax_2[0x36]
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = rax_2[0x36]
            
            if (rcx_3 != 0)
                rax_2[0x36] = sub_140a84c80(rcx_3, 0, 0)
            
            rax_2[0x37].d = 0

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    int64_t rax_9 = sub_140a84c80(rax_3, 0, 0)
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)

void*** rax_10 = sub_140a84c80(0, 0x30, 0)

if (rax_10 != 0)
    rax_10[1] = arg1
    *rax_10 = &data_142d3fe58
    rax_10[2] = sub_140e759a0
    rax_10[4] = sub_140a387b0()
    *rax_10 = &data_142d3feb0

if (&var_240 != &rax_2[0x38])
    if (rax_10 != 0)
        (*rax_10)[8](rax_10, &rax_2[0x38])
    else if (rax_2[0x39].d != 0)
        int64_t* rcx_8 = rax_2[0x38]
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x38))(rcx_8, 0)
            int64_t rcx_9 = rax_2[0x38]
            
            if (rcx_9 != 0)
                rax_2[0x38] = sub_140a84c80(rcx_9, 0, 0)
            
            rax_2[0x39].d = 0

if (rax_10 != 0)
    (*rax_10)[7](rax_10, 0)
    int64_t rax_16 = sub_140a84c80(rax_10, 0, 0)
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)

*(rax_2 + 0x1d4) = arg5.d
rax_2[0x3a].d = arg4
int64_t* rbx_2 = arg3[1]
var_240 = *arg3

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_240 != &rax_2[0x34])
    var_240.o = *(rax_2 + 0x1a0)
    *(rax_2 + 0x1a0) = var_240.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void*** rax_20 = sub_140e48e20()
var_240 = &rax_20[2]
sub_140918950(&var_240, &rax_20[2])
int64_t var_258 = 0x3b0
void var_248
void* var_230 = &var_248
void* var_228
void** rax_21 = sub_140e56c70(&var_240, &var_228, rax_2, 
    sub_140e23ed0(&rax_20[2], "MenuStackInternal::SMenuContentWrapper"))
*arg2 = *rax_21
void* rax_23 = rax_21[1]
arg2[1] = rax_23

if (rax_23 != 0)
    *(rax_23 + 8) += 1

int64_t* var_220

if (var_220 != 0)
    var_220[1].d -= 1
    
    if (var_220[1].d == 1)
        (**var_220)(var_220)
        int32_t temp4_1 = *(var_220 + 0xc)
        *(var_220 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_220 + 8))(var_220, 1)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t temp6_1 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*rax_20)[1](rax_20, 1)

void var_58
sub_140745b20(&var_58)
void var_68
sub_140745b20(&var_68)
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp8_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

sub_140ddea30(&var_218)
int64_t* rbx_7 = arg3[1]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp9_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp9_1 == 1)
            int64_t r8_3 = *rbx_7
            (*(r8_3 + 8))(rbx_7, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_278)
return arg2
