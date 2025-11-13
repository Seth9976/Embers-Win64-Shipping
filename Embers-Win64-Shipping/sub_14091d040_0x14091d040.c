// 函数: sub_14091d040
// 地址: 0x14091d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[1]
int64_t* var_28 = nullptr
int32_t var_20 = 0

if (rax != &var_28 && rax[1].d != 0)
    int64_t* rcx = *rax
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_28)

int64_t rax_2 = *arg2
*arg2 = 0
int64_t var_18 = rax_2
int32_t rax_3 = arg2[1].d
int32_t rax_4 = *(arg2 + 0xc)
arg2[1] = 0
void* rax_5 = *arg1
void*** var_38 = nullptr
void* rsi = *(rax_5 + 0x30)
void*** rax_6 = sub_140a84c80(0, 0x40, 0)
var_38 = rax_6
int32_t var_30 = 4

if (rax_6 != 0)
    *rax_6 = &data_142e21920
    rax_6[1] = 0
    rax_6[2].d = 0
    
    if (&var_28 != &rax_6[1] && var_20 != 0)
        int64_t* rcx_1 = var_28
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &rax_6[1])
    
    rax_6[3] = 0
    rax_6[3] = var_18
    var_18 = 0
    rax_6[4].d = rax_3
    *(rax_6 + 0x24) = rax_4
    int32_t var_10
    var_10.q = 0
    rax_6[6] = sub_140a387b0()
    *rax_6 = &data_142e21978

sub_14093f370(rsi, &var_38)
void*** rax_13

if (var_30 == 0)
    rax_13 = var_38
label_14091d188:
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)
else
    void*** rcx_3 = var_38
    
    if (rcx_3 != 0)
        (*rcx_3)[7](rcx_3, 0)
        rax_13 = var_38
        
        if (rax_13 != 0)
            rax_13 = sub_140a84c80(rax_13, 0, 0)
            var_38 = rax_13
        
        int32_t var_30_1 = 0
        goto label_14091d188

if (var_18 != 0)
    sub_140a74f90(var_18)

return sub_140745b20(&var_28)
