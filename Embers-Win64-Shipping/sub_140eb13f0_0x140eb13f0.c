// 函数: sub_140eb13f0
// 地址: 0x140eb13f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t rbx = *(*arg3 + 0x20)
void var_218
int64_t* rax_3 = sub_140e95130(&var_218)
rax_3[0x37].d = rbx
void*** rax_4 = j_sub_140a82f30(0x328)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142edf0e0
    
    if (rbx_1 != -0x10)
        sub_140f21070(&rbx_1[2])

void* var_240 = &rbx_1[2]
sub_140918950(&var_240, &rbx_1[2])
int64_t var_268 = 0x318
void var_258
void* var_230 = &var_258
int128_t zmm1 = sub_140e23ed0(&rbx_1[2], "SSplitter")

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* var_250

if (arg1 + 0x3a8 == &var_250)
label_140eb1506:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0x3a8) = &rbx_1[2]
    void*** rdi_1 = *(arg1 + 0x3b0)
    
    if (rbx_1 == rdi_1)
        goto label_140eb1506
    
    *(arg1 + 0x3b0) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void* var_228
void** rax_9 = sub_140e9e2f0(&var_240, &var_228, rax_3, zmm1)
int64_t* rbx_2 = rax_9[1]
var_250 = *rax_9
int64_t* var_248 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_250)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_220

if (var_220 != 0)
    var_220[1].d -= 1
    
    if (var_220[1].d == 1)
        (**var_220)(var_220)
        int32_t temp8_1 = *(var_220 + 0xc)
        *(var_220 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_220 + 8))(var_220, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp9_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

void var_38
sub_140745b20(&var_38)
void var_48
sub_140745b20(&var_48)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_140ddea30(&var_218)
void* result = *arg3
*(arg1 + 0x3a0) = *(result + 0x18)
__security_check_cookie(rax_1 ^ &var_288)
return result
