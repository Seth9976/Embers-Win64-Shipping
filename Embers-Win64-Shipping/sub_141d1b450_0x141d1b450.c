// 函数: sub_141d1b450
// 地址: 0x141d1b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143f37078
int64_t rsi = data_143f36fd0
int64_t r15 = data_143f36fc0
int64_t var_60 = r15
char var_90 = 1
char var_68 = 1
char var_58 = 1
char var_80 = 1
int64_t arg_8
int64_t var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
int64_t var_48 = var_88
int32_t var_40 = var_80.d
void arg_10
sub_141d17230(arg1, *sub_140b58170(&arg_10, "TransformToGeometryIndex", 1), data_143f37078, 
    arg1 + 0x128, &var_48)
char var_80_1 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_1 = var_80_1.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "SimulationType", 1), data_143f37078, arg1 + 0x140, 
    &var_48)
char var_80_2 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_2 = var_80_2.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "StatusFlags", 1), data_143f37078, arg1 + 0x158, 
    &var_48)
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_3 = 1.d
sub_141d176b0(arg1, *sub_140b58170(&arg_10, "Vertex", 1), data_143f36fd0, arg1 + 0x170, &var_48)
char var_80_4 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_4 = var_80_4.d
sub_141d176b0(arg1, *sub_140b58170(&arg_10, "Normal", 1), data_143f36fd0, arg1 + 0x1e8, &var_48)
int64_t* rax_16 = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx = data_143f36fd0
arg_8 = rbx
int64_t rdi = *rax_16
void arg_18
int64_t r14 = *sub_140b58170(&arg_18, "UV", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_69:
    sub_141d1a650(arg1, rbx)
else
    int32_t rax_20 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_5 = arg1 + 0x90
    void* rcx_23 = *(r8_5 + 8)
    
    if (rcx_23 != 0)
        r8_5 = rcx_23
    
    int32_t rax_22 = *(r8_5 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_20)) << 2))
    
    if (rax_22 == 0xffffffff)
    label_141d1b754:
        sub_141d1a650(arg1, rbx)
    else
        int64_t r8_6 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_8 = sx.q(rax_22) * 5
            
            if (*(r8_6 + (rdx_8 << 2)) == rbx)
                break
            
            rax_22 = *(r8_6 + (rdx_8 << 2) + 0xc)
            
            if (rax_22 == 0xffffffff)
                goto label_141d1b754_1
        
        if (rax_22 == 0xffffffff)
        label_141d1b754_1:
            sub_141d1a650(arg1, rbx)

var_88.b = 3
sub_140b58170(&var_88:4, &data_1437020ab, 1)
int16_t var_7c = 0
(**(arg1 + 0x188))(arg1 + 0x188, zx.q(sub_141d1f690(arg1, rbx)))
var_7c.b = 1

if (sub_141d1e020(arg1, rbx, rdi) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_88 = arg_8
else
    var_88 = rdi

var_7c:1.b = 1
var_48 = r14
var_40_4.q = rbx
sub_141d17830(arg1 + 8, &var_48, &var_88)

if (arg1 != -0x188 && var_7c:1.b == 0)
    (*(*(arg1 + 0x188) + 0x28))(arg1 + 0x188, 1)

char var_80_5 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_5 = var_80_5.d
sub_141d17530(arg1, *sub_140b58170(&arg_10, "Color", 1), data_143f36fd0, arg1 + 0x1a0, &var_48)
char var_80_6 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_6 = var_80_6.d
sub_141d176b0(arg1, *sub_140b58170(&arg_10, "TangentU", 1), data_143f36fd0, arg1 + 0x1b8, &var_48)
char var_80_7 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_7 = var_80_7.d
sub_141d176b0(arg1, *sub_140b58170(&arg_10, "TangentV", 1), data_143f36fd0, arg1 + 0x1d0, &var_48)
var_48 = rax
int32_t var_40_8 = var_90.d
sub_141d17230(arg1, *sub_140b58170(&arg_8, "BoneMap", 1), data_143f36fd0, arg1 + 0x200, &var_48)
int64_t rbx_1 = data_143f36fc0
arg_8 = rbx_1
int64_t rdi_1 = *sub_140b58170(&arg_10, "Indices", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_51:
    sub_141d1a650(arg1, rbx_1)
else
    int32_t rax_42 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
    void* r8_13 = arg1 + 0x90
    void* rcx_49 = *(r8_13 + 8)
    
    if (rcx_49 != 0)
        r8_13 = rcx_49
    
    int32_t rax_44 = *(r8_13 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_42)) << 2))
    
    if (rax_44 == 0xffffffff)
    label_141d1ba24:
        sub_141d1a650(arg1, rbx_1)
    else
        int64_t r8_14 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_21 = sx.q(rax_44) * 5
            
            if (*(r8_14 + (rdx_21 << 2)) == rbx_1)
                break
            
            rax_44 = *(r8_14 + (rdx_21 << 2) + 0xc)
            
            if (rax_44 == 0xffffffff)
                goto label_141d1ba24_1
        
        if (rax_44 == 0xffffffff)
        label_141d1ba24_1:
            sub_141d1a650(arg1, rbx_1)

var_88.b = 2
sub_140b58170(&var_88:4, &data_1437020ab, 1)
int16_t var_7c_1 = 0
(**(arg1 + 0x218))(arg1 + 0x218, zx.q(sub_141d1f690(arg1, rbx_1)))
var_7c_1.b = 1

if (sub_141d1e020(arg1, rbx_1, rsi) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_88 = arg_8
else
    var_88 = rsi

var_7c_1:1.b = 1
var_48 = rdi_1
var_40_8.q = rbx_1
sub_141d17830(arg1 + 8, &var_48, &var_88)

if (arg1 != -0x218 && var_7c_1:1.b == 0)
    (*(*(arg1 + 0x218) + 0x28))(arg1 + 0x218, 1)

int64_t* rax_50 = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx_2 = data_143f36fc0
arg_8 = rbx_2
int64_t rdi_2 = *rax_50
int64_t rsi_1 = *sub_140b58170(&arg_18, "Visible", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_39:
    sub_141d1a650(arg1, rbx_2)
else
    int32_t rax_54 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
    void* r8_17 = arg1 + 0x90
    void* rcx_62 = *(r8_17 + 8)
    
    if (rcx_62 != 0)
        r8_17 = rcx_62
    
    int32_t rax_56 = *(r8_17 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_54)) << 2))
    
    if (rax_56 == 0xffffffff)
    label_141d1bb84:
        sub_141d1a650(arg1, rbx_2)
    else
        int64_t r8_18 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_30 = sx.q(rax_56) * 5
            
            if (*(r8_18 + (rdx_30 << 2)) == rbx_2)
                break
            
            rax_56 = *(r8_18 + (rdx_30 << 2) + 0xc)
            
            if (rax_56 == 0xffffffff)
                goto label_141d1bb84_1
        
        if (rax_56 == 0xffffffff)
        label_141d1bb84_1:
            sub_141d1a650(arg1, rbx_2)

var_88.b = 6
sub_140b58170(&var_88:4, &data_1437020ab, 1)
int16_t var_7c_2 = 0
(**(arg1 + 0x230))(arg1 + 0x230, zx.q(sub_141d1f690(arg1, rbx_2)))
var_7c_2.b = 1

if (sub_141d1e020(arg1, rbx_2, rdi_2) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_88 = arg_8
else
    var_88 = rdi_2

var_7c_2:1.b = 1
var_48 = rsi_1
var_40_8.q = rbx_2
sub_141d17830(arg1 + 8, &var_48, &var_88)

if (arg1 != -0x230 && var_7c_2:1.b == 0)
    (*(*(arg1 + 0x230) + 0x28))(arg1 + 0x230, 1)

char var_80_8 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_9 = var_80_8.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "MaterialIndex", 1), data_143f36fc0, arg1 + 0x248, 
    &var_48)
char var_80_9 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_10 = var_80_9.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "MaterialID", 1), data_143f36fc0, arg1 + 0x260, &var_48)
var_48 = rax
int32_t var_40_11 = var_90.d
sub_141d17230(arg1, *sub_140b58170(&arg_8, "TransformIndex", 1), data_143f36fc8, arg1 + 0x278, 
    &var_48)
int64_t* rax_70 = sub_140b58170(&arg_10, &data_1437020ab, 1)
int64_t rbx_3 = data_143f36fc8
arg_8 = rbx_3
int64_t rdi_3 = *rax_70
int64_t rsi_2 = *sub_140b58170(&arg_18, "BoundingBox", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_21:
    sub_141d1a650(arg1, rbx_3)
else
    int32_t rax_74 = sub_140b5ead0(rbx_3.d) + arg_8:4.d
    void* r8_24 = arg1 + 0x90
    void* rcx_85 = *(r8_24 + 8)
    
    if (rcx_85 != 0)
        r8_24 = rcx_85
    
    int32_t rax_76 = *(r8_24 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_74)) << 2))
    
    if (rax_76 == 0xffffffff)
    label_141d1be04:
        sub_141d1a650(arg1, rbx_3)
    else
        int64_t r8_25 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_42 = sx.q(rax_76) * 5
            
            if (*(r8_25 + (rdx_42 << 2)) == rbx_3)
                break
            
            rax_76 = *(r8_25 + (rdx_42 << 2) + 0xc)
            
            if (rax_76 == 0xffffffff)
                goto label_141d1be04_1
        
        if (rax_76 == 0xffffffff)
        label_141d1be04_1:
            sub_141d1a650(arg1, rbx_3)

var_88.b = 0xd
sub_140b58170(&var_88:4, &data_1437020ab, 1)
int16_t var_7c_3 = 0
(**(arg1 + 0x290))(arg1 + 0x290, zx.q(sub_141d1f690(arg1, rbx_3)))
var_7c_3.b = 1

if (sub_141d1e020(arg1, rbx_3, rdi_3) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_88 = arg_8
else
    var_88 = rdi_3

var_7c_3:1.b = 1
var_48 = rsi_2
var_40_11.q = rbx_3
sub_141d17830(arg1 + 8, &var_48, &var_88)

if (arg1 != -0x290 && var_7c_3:1.b == 0)
    (*(*(arg1 + 0x290) + 0x28))(arg1 + 0x290, 1)

char var_80_10 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_12 = var_80_10.d
sub_141d173b0(arg1, *sub_140b58170(&arg_10, "InnerRadius", 1), data_143f36fc8, arg1 + 0x2a8, 
    &var_48)
char var_80_11 = 1
var_88 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_88
int32_t var_40_13 = var_80_11.d
sub_141d173b0(arg1, *sub_140b58170(&arg_10, "OuterRadius", 1), data_143f36fc8, arg1 + 0x2c0, 
    &var_48)
var_48 = rsi
int32_t var_40_14 = var_68.d
sub_141d17230(arg1, *sub_140b58170(&arg_8, "VertexStart", 1), data_143f36fc8, arg1 + 0x2d8, &var_48)
char var_68_1 = 1
var_48 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
int32_t var_40_15 = var_68_1.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "VertexCount", 1), data_143f36fc8, arg1 + 0x2f0, 
    &var_48)
var_48 = var_60
int32_t var_40_16 = var_58.d
sub_141d17230(arg1, *sub_140b58170(&arg_8, "FaceStart", 1), data_143f36fc8, arg1 + 0x308, &var_48)
char var_58_1 = 1
var_60 = *sub_140b58170(&arg_8, &data_1437020ab, 1)
var_48 = var_60
int32_t var_40_17 = var_58_1.d
sub_141d17230(arg1, *sub_140b58170(&arg_10, "FaceCount", 1), data_143f36fc8, arg1 + 0x320, &var_48)
int64_t rbx_4 = data_143f36fe0
arg_8 = rbx_4
int64_t rdi_4 = *sub_140b58170(&arg_10, "Sections", 1)

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_9:
    sub_141d1a650(arg1, rbx_4)
else
    int32_t rax_101 = sub_140b5ead0(rbx_4.d) + arg_8:4.d
    void* r8_34 = arg1 + 0x90
    void* rcx_117 = *(r8_34 + 8)
    
    if (rcx_117 != 0)
        r8_34 = rcx_117
    
    int32_t rax_103 = *(r8_34 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_101)) << 2))
    
    if (rax_103 == 0xffffffff)
    label_141d1c184:
        sub_141d1a650(arg1, rbx_4)
    else
        int64_t r8_35 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_57 = sx.q(rax_103) * 5
            
            if (*(r8_35 + (rdx_57 << 2)) == rbx_4)
                break
            
            rax_103 = *(r8_35 + (rdx_57 << 2) + 0xc)
            
            if (rax_103 == 0xffffffff)
                goto label_141d1c184_1
        
        if (rax_103 == 0xffffffff)
        label_141d1c184_1:
            sub_141d1a650(arg1, rbx_4)

var_60.b = 0xc
int64_t var_5c
sub_140b58170(&var_5c, &data_1437020ab, 1)
int16_t var_54 = 0
(**(arg1 + 0x338))(arg1 + 0x338, zx.q(sub_141d1f690(arg1, rbx_4)))
var_54.b = 1

if (sub_141d1e020(arg1, rbx_4, r15) != 0)
    sub_140b58170(&arg_8, &data_1437020ab, 1)
    var_5c = arg_8
else
    var_5c = r15

var_54:1.b = 1
var_48 = rdi_4
var_40_17.q = rbx_4
int64_t result = sub_141d17830(arg1 + 8, &var_48, &var_60)

if (arg1 != -0x338 && var_54:1.b == 0)
    return (*(*(arg1 + 0x338) + 0x28))(arg1 + 0x338, 1)

return result
