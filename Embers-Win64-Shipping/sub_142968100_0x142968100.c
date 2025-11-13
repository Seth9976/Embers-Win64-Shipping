// 函数: sub_142968100
// 地址: 0x142968100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1170)
void var_1178
int64_t rax_1 = __security_cookie ^ &var_1178
int32_t rax_2 = sub_1428a5b10()
char var_1138
int32_t var_1134
char* var_1130
void* var_1128
int32_t i

for (i = sub_1428a4f10(&var_1128, &var_1134, &var_1130, &var_1138); i != 0; 
        i = sub_1428a4f10(&var_1128, &var_1134, &var_1130, &var_1138))
    char var_1118[0x100]
    sub_1428a4aa0(i, &var_1118, 0x100)
    char* const rax_3 = &data_1437020ab
    
    if ((var_1138 & 2) != 0)
        rax_3 = var_1130
    
    char* const var_1140_1 = rax_3
    int32_t var_1148_1 = var_1134
    void* var_1150_1 = var_1128
    char (* var_1158_1)[0x100] = &var_1118
    char var_1018[0x1000]
    sub_1428b7080(&var_1018, 0x1000, "%lu:%s:%s:%d:%s\n", zx.q(rax_2))
    int64_t rdx_2 = -1
    
    do
        rdx_2 += 1
    while (var_1018[rdx_2] != 0)
    
    i = arg1(&var_1018, rdx_2, arg2)
    
    if (i s<= 0)
        break

__security_check_cookie(rax_1 ^ &var_1178)
return i
