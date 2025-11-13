// 函数: sub_141bac5a0
// 地址: 0x141bac5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
bool rdx = sub_140b5b8a0(*(arg1 + 0x148), 0) == 0
int64_t* var_70
int64_t var_58
int64_t rcx_5
int64_t* rdx_3
int32_t rbp

if ((*(arg1 + 0x14c) != 0 | rdx) == 0)
label_141bac647:
    int64_t* rax_6 = *(arg1 + 0x130)
    rcx_5 = *(arg1 + 0x128)
    int64_t var_78 = rcx_5
    var_70 = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rdx_3 = &var_78
    int32_t var_68_1 = *(arg1 + 0x138)
    rbp = 2
    char var_60_1 = 1
    var_58 = 0
    int32_t var_50_1 = 0
else
    void* rax_1 = sub_140d3c6e0(arg1 + 0x140)
    
    if (rax_1 == 0)
        goto label_141bac647
    
    if (sub_140d1fd20(rax_1, *(arg1 + 0x148)) == 0)
        goto label_141bac647
    
    arg_8.q = *(arg1 + 0x148)
    void var_48
    int64_t* rax_5 = sub_141b70480(&var_48, sub_140d3c6e0(arg1 + 0x140), &arg_8)
    rdx_3 = rax_5
    rbp = 1
    rcx_5 = *rax_5

*arg2 = rcx_5
void* rax_8 = rdx_3[1]
arg2[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

arg2[2].d = rdx_3[2].d
arg2[3].b = rdx_3[3].b
arg2[4] = 0
arg2[5].d = 0
sub_1407473e0(&arg2[4], &rdx_3[4])

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    sub_140745b20(&var_58)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_13 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_70 + 8))(var_70, 1)

if ((rbp.b & 1) != 0)
    void var_28
    sub_140745b20(&var_28)
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rsi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_40 + 8))(var_40, zx.q(rsi_1))

return arg2
