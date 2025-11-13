// 函数: sub_140d70270
// 地址: 0x140d70270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

arg1[1] = (*(*rcx + 0x30))(rcx, r.DebugSafeZone.TitleRatio", &data_1439ae420, The safe zone ratio "
"that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that don't have a defined "
"safe zone (0..1)\n default: 1.0", 0)
*arg1 = &data_142d3ff10
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t rax_3 = (*(*rcx_1 + 0x30))(rcx_1, r.DebugActionZone.ActionRatio", &data_1439ae424, The "
"action zone ratio that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that "
"don't have a defined safe z", 0)
arg1[2] = &data_142d3ff10
arg1[3] = rax_3
int64_t* rsi = arg1[1]
void*** var_38 = nullptr
void*** rax_4 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_4
int32_t var_30 = 3

if (rax_4 != 0)
    *rax_4 = &data_142d3fe58
    rax_4[1] = arg1
    rax_4[2] = sub_140d80310
    rax_4[4] = sub_140a387b0()
    *rax_4 = &data_142d3feb0

(*(*rsi + 0xa8))(rsi, &var_38)
void*** rax_8

if (var_30 == 0)
    rax_8 = var_38
label_140d703bd:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    void*** rcx_3 = var_38
    
    if (rcx_3 != 0)
        (*rcx_3)[7](rcx_3, 0)
        rax_8 = var_38
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_38 = rax_8
        
        int32_t var_30_1 = 0
        goto label_140d703bd
int64_t* rsi_1 = arg1[3]
var_38 = nullptr
void*** rax_9 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_9
int32_t var_30_2 = 3

if (rax_9 != 0)
    *rax_9 = &data_142d3fe58
    rax_9[1] = arg1
    rax_9[2] = sub_140d80310
    rax_9[4] = sub_140a387b0()
    *rax_9 = &data_142d3feb0

(*(*rsi_1 + 0xa8))(rsi_1, &var_38)
void*** rax_13

if (var_30_2 == 0)
    rax_13 = var_38
label_140d7045d:
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)
else
    void*** rcx_7 = var_38
    
    if (rcx_7 != 0)
        (*rcx_7)[7](rcx_7, 0)
        rax_13 = var_38
        
        if (rax_13 != 0)
            rax_13 = sub_140a84c80(rax_13, 0, 0)
            var_38 = rax_13
        
        int32_t var_30_3 = 0
        goto label_140d7045d
return arg1
