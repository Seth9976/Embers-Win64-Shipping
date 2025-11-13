// 函数: sub_14045c730
// 地址: 0x14045c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char rax_2 = data_1439ae51e
int64_t var_1f8 = 0
int32_t var_1f0 = 0
char var_1ff = 1
void var_1b8
int64_t* rax_3 = sub_140dd5ba0(&var_1b8)
rax_3[0xf].b = rax_2
*(rax_3 + 0x79) = var_1ff
sub_1407473e0(&rax_3[0x10], &var_1f8)
void*** rax_4 = sub_140dd3870()
void* var_1e8 = &rax_4[2]
sub_140918950(&var_1e8, &rax_4[2])
void* rbx = var_1e8
void var_208
void* var_1d8 = &var_208
int64_t var_1d0
int128_t zmm1 = sub_140b58170(&var_1d0, "SNullWidgetContent", 1)
*(rbx + 0x218) = var_1d0
void* var_1c8
void** rax_6 = sub_140de4680(&var_1e8, &var_1c8, rax_3, zmm1)
data_143e244b0 = *rax_6
void* rcx_8 = rax_6[1]
data_143e244b8 = rcx_8

if (rcx_8 != 0)
    *(rcx_8 + 8) += 1

int64_t* var_1c0

if (var_1c0 != 0)
    var_1c0[1].d -= 1
    
    if (var_1c0[1].d == 1)
        (**var_1c0)(var_1c0)
        int32_t temp2_1 = *(var_1c0 + 0xc)
        *(var_1c0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_1c0 + 8))(var_1c0, 1)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp3_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rax_4)[1](rax_4, 1)

sub_140ddea30(&var_1b8)
sub_140745b20(&var_1f8)
uint64_t result = atexit(sub_142cca500)
__security_check_cookie(rax_1 ^ &var_228)
return result
