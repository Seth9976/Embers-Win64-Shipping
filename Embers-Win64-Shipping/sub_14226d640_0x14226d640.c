// 函数: sub_14226d640
// 地址: 0x14226d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e1ee88
int64_t r10 = data_143e1ee80

if (rbx != 0)
    rbx[1].d += 1

void* rcx = *(arg1 + 0x348)
void var_58
int64_t var_48
int64_t* rax_1

if (rcx == 0)
    rax_1 = &var_58
else
    var_48 = data_143e1ee78
    int64_t var_40_1 = r10
    int64_t* var_38_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
        rcx = *(arg1 + 0x348)
    
    rax_1 = sub_142411db0(rcx, &var_58, &var_48)

int64_t zmm0 = *rax_1
int32_t rsi = rax_1[1].d

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg2 = zmm0
arg2[1].d = rsi
int64_t* rbx_1 = data_143e1eea0
int64_t rdx_1 = data_143e1ee98

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* rcx_3 = *(arg1 + 0x348)
int64_t* rax_5

if (rcx_3 == 0)
    rax_5 = &var_58
else
    var_48 = data_143e1ee90
    int64_t var_40_2 = rdx_1
    int64_t* var_38_2 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rcx_3 = *(arg1 + 0x348)
    
    rax_5 = sub_142411db0(rcx_3, &var_58, &var_48)

zmm0 = *rax_5
int32_t rsi_1 = rax_5[1].d

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*arg3 = zmm0
arg3[1].d = rsi_1
int64_t* rbx_2 = data_143e1eeb8
int64_t rdx_3 = data_143e1eeb0

if (rbx_2 != 0)
    rbx_2[1].d += 1

void* rcx_6 = *(arg1 + 0x348)
int64_t* rax_9

if (rcx_6 == 0)
    rax_9 = &var_58
else
    var_48 = data_143e1eea8
    int64_t var_40_3 = rdx_3
    int64_t* var_38_3 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rcx_6 = *(arg1 + 0x348)
    
    rax_9 = sub_142411db0(rcx_6, &var_58, &var_48)

zmm0 = *rax_9
int32_t rsi_2 = rax_9[1].d

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

*arg4 = zmm0
arg4[1].d = rsi_2
int64_t* rbx_3 = data_143e1eed0
int64_t rdx_5 = data_143e1eec8

if (rbx_3 != 0)
    rbx_3[1].d += 1

void* rcx_9 = *(arg1 + 0x348)
int64_t* rax_13

if (rcx_9 == 0)
    rax_13 = &var_58
else
    var_48 = data_143e1eec0
    int64_t var_40_4 = rdx_5
    int64_t* var_38_4 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        rcx_9 = *(arg1 + 0x348)
    
    rax_13 = sub_142411db0(rcx_9, &var_58, &var_48)

zmm0 = *rax_13
int32_t rdi_1 = rax_13[1].d

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

*arg5 = zmm0
arg5[1].d = rdi_1
return arg5
