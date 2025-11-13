// 函数: sub_141d1c260
// 地址: 0x141d1c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t* rax = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx = data_143f37078
int64_t rsi = data_143f37090
int64_t arg_8 = rbx
int64_t rdi = *rax

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_39:
    sub_141d1a650(arg1, rbx)
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = arg1 + 0x90
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141d1c314:
        sub_141d1a650(arg1, rbx)
    else
        int64_t r8_2 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 5
            
            if (*(r8_2 + (rdx_4 << 2)) == rbx)
                break
            
            rax_5 = *(r8_2 + (rdx_4 << 2) + 0xc)
            
            if (rax_5 == 0xffffffff)
                goto label_141d1c314_1
        
        if (rax_5 == 0xffffffff)
        label_141d1c314_1:
            sub_141d1a650(arg1, rbx)

char var_68 = 7
int64_t var_64
sub_140b58170(&var_64, &data_1437020ab, 1)
int16_t var_5c = 0
(**(arg1 + 0xb0))(arg1 + 0xb0, zx.q(sub_141d1f690(arg1, rbx)))
var_5c.b = 1

if (sub_141d1e020(arg1, rbx, rdi) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_64 = arg_8
else
    var_64 = rdi

var_5c:1.b = 1
int64_t var_48 = rsi
int64_t var_40 = rbx
sub_141d17830(arg1 + 8, &var_48, &var_68)

if (arg1 != -0xb0 && var_5c:1.b == 0)
    (*(*(arg1 + 0xb0) + 0x28))(arg1 + 0xb0, 1)

int64_t* rax_11 = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx_1 = data_143f37078
arg_8 = rbx_1
int64_t rdi_1 = *rax_11
void arg_18
int64_t rsi_1 = *sub_140b58170(&arg_18, "BoneName", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_21:
    sub_141d1a650(arg1, rbx_1)
else
    int32_t rax_15 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
    void* r8_5 = arg1 + 0x90
    void* rcx_15 = *(r8_5 + 8)
    
    if (rcx_15 != 0)
        r8_5 = rcx_15
    
    int32_t rax_17 = *(r8_5 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_15)) << 2))
    
    if (rax_17 == 0xffffffff)
    label_141d1c474:
        sub_141d1a650(arg1, rbx_1)
    else
        int64_t r8_6 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_13 = sx.q(rax_17) * 5
            
            if (*(r8_6 + (rdx_13 << 2)) == rbx_1)
                break
            
            rax_17 = *(r8_6 + (rdx_13 << 2) + 0xc)
            
            if (rax_17 == 0xffffffff)
                goto label_141d1c474_1
        
        if (rax_17 == 0xffffffff)
        label_141d1c474_1:
            sub_141d1a650(arg1, rbx_1)

var_68 = 8
sub_140b58170(&var_64, &data_1437020ab, 1)
int16_t var_5c_1 = 0
(**(arg1 + 0xc8))(arg1 + 0xc8, zx.q(sub_141d1f690(arg1, rbx_1)))
var_5c_1.b = 1

if (sub_141d1e020(arg1, rbx_1, rdi_1) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_64 = arg_8
else
    var_64 = rdi_1

var_5c_1:1.b = 1
var_48 = rsi_1
int64_t var_40_1 = rbx_1
sub_141d17830(arg1 + 8, &var_48, &var_68)

if (arg1 != -0xc8 && var_5c_1:1.b == 0)
    (*(*(arg1 + 0xc8) + 0x28))(arg1 + 0xc8, 1)

int64_t* rax_23 = sub_140b58170(&arg_8, &data_1437020ab, 1)
var_64:4.b = 1
int32_t rax_24 = var_64:4.d
var_68.q = *rax_23
var_48 = var_68.q
var_40_1.d = rax_24
sub_141d17530(arg1, *sub_140b58170(&arg_10, "BoneColor", 1), data_143f37078, arg1 + 0xe0, &var_48)
int64_t* rax_26 = sub_140b58170(&arg_8, &data_1437020ab, 1)
int64_t r8_10 = data_143f37078
int64_t rdx_20 = data_143f37098
var_64:4.b = 1
var_68.q = *rax_26
var_40_1.d = var_64:4.d
var_48 = var_68.q
sub_141d17230(arg1, rdx_20, r8_10, arg1 + 0xf8, &var_48)
int64_t* rax_28 = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx_2 = data_143f37078
int64_t rsi_2 = data_143f370a0
arg_8 = rbx_2
int64_t rdi_2 = *rax_28

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_9:
    sub_141d1a650(arg1, rbx_2)
else
    int32_t rax_31 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
    void* r8_11 = arg1 + 0x90
    void* rcx_34 = *(r8_11 + 8)
    
    if (rcx_34 != 0)
        r8_11 = rcx_34
    
    int32_t rax_33 = *(r8_11 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_31)) << 2))
    
    if (rax_33 == 0xffffffff)
    label_141d1c684:
        sub_141d1a650(arg1, rbx_2)
    else
        int64_t r8_12 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_24 = sx.q(rax_33) * 5
            
            if (*(r8_12 + (rdx_24 << 2)) == rbx_2)
                break
            
            rax_33 = *(r8_12 + (rdx_24 << 2) + 0xc)
            
            if (rax_33 == 0xffffffff)
                goto label_141d1c684_1
        
        if (rax_33 == 0xffffffff)
        label_141d1c684_1:
            sub_141d1a650(arg1, rbx_2)

var_68 = 0xe
sub_140b58170(&var_64, &data_1437020ab, 1)
int16_t var_5c_2 = 0
(**(arg1 + 0x110))(arg1 + 0x110, zx.q(sub_141d1f690(arg1, rbx_2)))
var_5c_2.b = 1

if (sub_141d1e020(arg1, rbx_2, rdi_2) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_64 = arg_8
else
    var_64 = rdi_2

var_5c_2:1.b = 1
var_48 = rsi_2
int64_t var_40_2 = rbx_2
int64_t result = sub_141d17830(arg1 + 8, &var_48, &var_68)

if (arg1 != -0x110 && var_5c_2:1.b == 0)
    return (*(*(arg1 + 0x110) + 0x28))(arg1 + 0x110, 1)

return result
