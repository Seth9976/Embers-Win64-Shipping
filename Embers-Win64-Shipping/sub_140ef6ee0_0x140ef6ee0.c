// 函数: sub_140ef6ee0
// 地址: 0x140ef6ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t var_1d8 = 1
char var_1d4 = 1
char var_1d0 = 1
int64_t var_1c8 = 0
int32_t var_1c0 = 0
void var_1b8
int64_t* rax_2 = sub_140e93f70(&var_1b8)

if (&var_1d8 != &rax_2[8])
    rax_2[8].d = 1
    *(rax_2 + 0x44) = 1

rax_2[9].b = 1

if (&var_1c8 != &rax_2[0xa] && rax_2[0xb].d != 0)
    int64_t* rcx_1 = rax_2[0xa]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = rax_2[0xa]
        
        if (rcx_2 != 0)
            rax_2[0xa] = sub_140a84c80(rcx_2, 0, 0)
        
        rax_2[0xb].d = 0

void*** rax_5 = sub_140ee1080()
void* var_200 = &rax_5[2]
sub_140e90fe0(&var_200, &rax_5[2])
int64_t var_218 = 0x3c0
void var_208
void* var_1f0 = &var_208
void var_1e8
int64_t* rax_6 = sub_140ee6180(&var_200, &var_1e8, rax_2, sub_140e23ed0(&rax_5[3], "SWidgetBlock"))
*arg2 = *rax_6
void* rax_8 = rax_6[1]
arg2[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int64_t* var_1e0

if (var_1e0 != 0)
    var_1e0[1].d -= 1
    
    if (var_1e0[1].d == 1)
        (**var_1e0)(var_1e0)
        int32_t temp2_1 = *(var_1e0 + 0xc)
        *(var_1e0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_1e0 + 8))(var_1e0, 1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp3_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_2 = *rax_5
            r8_2[1](rax_5, 1, r8_2)

sub_140ddea30(&var_1b8)
sub_140745b20(&var_1c8)
__security_check_cookie(rax_1 ^ &var_238)
return arg2
