// 函数: sub_141b9d340
// 地址: 0x141b9d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143e20d08
int32_t var_50 = 0
int64_t (* var_58)(void* arg1, char arg2) = sub_141bbea80
int128_t var_48 = var_58.o
int64_t arg_8
sub_140a3dfa0(rbx + 0xb8, &arg_8, sub_140dd1ec0(&var_58, arg1, &var_48))
int64_t (* rax_2)(void* arg1, char arg2)

if (var_50 == 0)
    rax_2 = var_58
label_141b9d3e6:
    
    if (rax_2 != 0)
        sub_140a74f90(rax_2)
else
    int64_t (* rcx_2)(void* arg1, char arg2) = var_58
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        rax_2 = var_58
        
        if (rax_2 != 0)
            rax_2 = sub_140a84c80(rax_2, 0, 0)
            var_58 = rax_2
        
        var_50 = 0
        goto label_141b9d3e6
void* rax_3 = sub_140cde0b0()
sub_140d19010(rax_3, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_5 = sub_140d2dfc0(sub_1425b6f00(), rax_3, 0, 0, 0, 0, 0, 0, 0)
*(rax_5 + 0xc8) = data_143dbb1e0
*(rax_5 + 0xdb) = 3
*(*(arg1 + 0x910) + 0x20) = rax_5
sub_140e24dd0(arg1 + 0x778, rax_5)
var_48.b = data_1439ae520
var_48:1.b = 1
var_48:8.q = 0
int32_t var_38 = 0
sub_140e253b0(*(arg1 + 0x818), &var_48)
sub_140f8cd90(*(arg1 + 0x818), 0)
sub_141bf61a0(arg1)
int64_t* rbx_2 = *(arg2 + 0x1a8)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (arg1 + 0x808 == &var_48)
label_141b9d507:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x808) = *(arg2 + 0x1a0)
    int64_t* rsi_1 = *(arg1 + 0x810)
    
    if (rbx_2 == rsi_1)
        goto label_141b9d507
    
    *(arg1 + 0x810) = rbx_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

*(arg1 + 0x8f2) = *(arg2 + 0x1b0)
*(arg1 + 0x8f3) = *(arg2 + 0x1b1)
*(arg1 + 0x8e8) = *(arg2 + 0x1b4)
*(arg1 + 0x8ec) = *(arg2 + 0x1b8)
int64_t zmm0_2 = data_143dbb3b8
*(arg1 + 0x900) = 0
*(arg1 + 0x8f8) = zmm0_2
*(arg1 + 0x8f0) = 1

if (data_1439ec460 != 0)
    *(arg1 + 0x8f1) = 1
    sub_140db2e20(arg1 + 0x390)

*(arg1 + 0x8f4) = 1
int64_t* rbx_3 = *(arg1 + 0x810)
var_58 = *(arg1 + 0x808)
var_50.q = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

void* result = sub_140de1b90(arg1 + 0x2b8, &var_58)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
