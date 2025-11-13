// 函数: sub_140e71d70
// 地址: 0x140e71d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
char rbx = data_1439ae520
void* r13 = nullptr
char var_260 = rbx
int64_t var_258 = 0
int32_t var_250 = 0
char var_25f = 1
void var_210
int64_t* rax_2 = sub_140e507b0(&var_210)
rax_2[0xf].b = rbx
*(rax_2 + 0x79) = 1
sub_1407473e0(&rax_2[0x10], &var_258)
int64_t var_238 = arg3
void arg_28
void* var_228 = &arg_28
int64_t r9
int64_t var_230 = r9
void*** rax_3 = sub_140e49220()
void* var_278 = &rax_3[2]
sub_140918950(&var_278, &rax_3[2])
int64_t var_288 = 0x488
int64_t* var_268 = &var_238
void* var_248
sub_140e58020(&var_278, &var_248, rax_2, sub_140e23ed0(&rax_3[2], "SWindowTitleBar"))

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp2_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_3)[1](rax_3, 1)

void var_40
sub_140745b20(&var_40)
int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t rdi_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_58 + 8))(var_58, zx.q(rdi_1))

sub_140ddea30(&var_210)
sub_140745b20(&var_258)
void* rsi_1 = var_248

if (rsi_1 != 0)
    r13 = rsi_1 + 0x390

int64_t* var_240

if (var_240 != 0)
    var_240[1].d += 1

void var_220

if (arg4 == &var_220)
label_140e71f4e:
    
    if (var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t temp4_1 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_240 + 8))(var_240, 1)
else
    *arg4 = r13
    int64_t* rdi_2 = arg4[1]
    
    if (var_240 == rdi_2)
        goto label_140e71f4e
    
    arg4[1] = var_240
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

*arg2 = rsi_1
arg2[1] = var_240

if (var_240 != 0)
    int32_t r8_2 = var_240[1].d
    var_240[1].d = r8_2
    
    if (r8_2 == 0)
        (**var_240)(var_240)
        int32_t temp6_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp6_1 == 1)
            int64_t r8_4 = *var_240
            (*(r8_4 + 8))(var_240, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
