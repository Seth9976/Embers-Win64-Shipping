// 函数: sub_140ec4a10
// 地址: 0x140ec4a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void*** rax_2 = sub_140e92160()
void*** var_218 = rax_2
void* var_220 = &rax_2[2]
sub_140918950(&var_220, &rax_2[2])
int64_t var_238 = 0x4b0
void var_228
void* var_210 = &var_228
sub_140e23ed0(&rax_2[2], "SMultiBoxWidget")
void var_208
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140e94fd0(&var_208)
sub_140e9e010(&var_220, arg2, rax_3, zmm1)
void*** rbx_1 = var_218

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

void var_58
sub_140745b20(&var_58)
sub_140ddea30(&var_208)
int64_t* rsi = nullptr
int64_t rcx_8 = 0
*(*arg2 + 0x490) = arg3
int64_t* rbx_2 = *(arg1 + 0x10)

if (rbx_2 != 0)
    int32_t rax_7 = rbx_2[1].d
    
    if (rax_7 != 0)
        rbx_2[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rcx_8 = *(arg1 + 8)

void* rax_8 = *arg2

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t rax_11
int64_t* rcx_10

if (rax_8 + 0x3a0 != &var_220)
    *(rax_8 + 0x3a0) = rcx_8
    int64_t* rdi_1 = *(rax_8 + 0x3a8)
    
    if (rbx_2 == rdi_1)
        goto label_140ec4b7f
    
    *(rax_8 + 0x3a8) = rbx_2
    
    if (rdi_1 == 0)
        goto label_140ec4ba6
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_140ec4ba6
    
    (**rdi_1)(rdi_1)
    int32_t temp6_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp6_1 != 1)
        goto label_140ec4ba6
    
    rax_11 = *rdi_1
    rcx_10 = rdi_1
    goto label_140ec4ba3

label_140ec4b7f:

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d != 1)
        goto label_140ec4ba6
    
    (**rbx_2)(rbx_2)
    int32_t temp3_1 = *(rbx_2 + 0xc)
    *(rbx_2 + 0xc) -= 1
    
    if (temp3_1 != 1)
        goto label_140ec4ba6
    
    rax_11 = *rbx_2
    rcx_10 = rbx_2
label_140ec4ba3:
    (*(rax_11 + 8))(rcx_10, 1)
label_140ec4ba6:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

var_220.d = *arg5
var_220:4.b = arg5[1].b
var_218 = nullptr
var_210.d = 0
sub_140692f90(&var_218, &arg5[2])
void* rcx_15 = *arg2
*(rcx_15 + 0x498) = var_220.d
*(rcx_15 + 0x49c) = var_220:4.b
sub_140692f90(rcx_15 + 0x4a0, &var_218)
sub_140745b20(&var_218)

if (arg4 == 0 || arg4[1].d == 0)
    sub_140ea9880(*arg2)
else
    int64_t* rcx_18 = *arg4
    
    if (rcx_18 == 0)
        sub_140ea9880(*arg2)
    else if ((*(*rcx_18 + 0x28))(rcx_18) == 0)
        sub_140ea9880(*arg2)
    else
        void*** rcx_19 = *(arg1 + 0x10)
        void* rdx_4 = nullptr
        
        if (rcx_19 != 0)
            int32_t rax_19 = rcx_19[1].d
            
            if (rax_19 != 0)
                rcx_19[1].d = rax_19 + 1
                rax_19.b = 1
            
            if (rax_19.b == 0)
                rcx_19 = nullptr
            
            if (rcx_19 != 0)
                rdx_4 = *(arg1 + 8)
        
        var_220 = rdx_4
        var_218 = rcx_19
        
        if (arg4[1].d != 0)
            rsi = *arg4
        
        (*(*rsi + 0x48))(rsi, &var_220, arg2)
        void*** rbx_3 = var_218
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp9_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*rbx_3)[1](rbx_3, 1)

sub_140745b20(&arg5[2])
__security_check_cookie(rax_1 ^ &var_258)
return arg2
