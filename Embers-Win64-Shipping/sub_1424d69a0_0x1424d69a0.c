// 函数: sub_1424d69a0
// 地址: 0x1424d69a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = data_143e202b8
int64_t rax_1 = data_143e202c0
int64_t* rax_2 = data_143e202c8

if (rax_2 != 0)
    rax_2[1].d += 1

int32_t var_50
int32_t var_50_1 = var_50 & 0xfffffff0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_88 = data_143e202b8
int64_t rax_5 = data_143e202c0
int64_t* rax_6 = data_143e202c8

if (rax_6 != 0)
    rax_6[1].d += 1

int32_t var_70
int32_t var_70_1 = var_70 & 0xfffffff0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_8 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_8 != 0
int64_t var_48 = var_88
int64_t var_40 = rax_5
*(arg2 + 0x20) = rcx_2 + rax_8
int64_t* var_38 = rax_6

if (rax_6 != 0)
    rax_6[1].d += 1

int64_t var_28 = var_68
int64_t var_20 = rax_1
int32_t var_30
int32_t var_30_1 = var_30 ^ ((var_30 ^ var_70_1) & 0xf)
int64_t* var_18 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

int32_t var_10
int32_t var_10_1 = var_10 ^ ((var_10 ^ var_50_1) & 0xf)
char result = sub_1420bc8b0(&var_28, &var_48, arg4)
*arg3 = result

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        result = (**rax_6)(rax_6)
        int32_t temp2_1 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rax_6 + 8))(rax_6, 1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp3_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rax_2 + 8))(rax_2, 1)

return result
