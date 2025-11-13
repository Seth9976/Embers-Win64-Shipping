// 函数: sub_140aae420
// 地址: 0x140aae420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int32_t arg_8 = 0
int64_t var_48
int64_t* var_30
int64_t* rax_1
int64_t rdx
int32_t rbx_1

if (rbx s> 1)
    int64_t rdi_1 = *arg2
    var_48 = 0
    int32_t var_40_1 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_48, rbx, 0)
        memcpy(var_48, rdi_1, rbx * 2)
    else
        int32_t var_3c_1 = 0
    
    void var_20
    rax_1 = sub_140a95a30(&var_20, &var_48)
    rbx_1 = 6
    rdx = *rax_1
else
    sub_1405d9400()
    int64_t* rcx = data_143cd6fe0
    rdx = data_143cd6fd8
    int64_t var_38 = rdx
    var_30 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rbx_1 = 1
    int32_t var_28_1 = data_143cd6fe8
    rax_1 = &var_38

*arg1 = rdx
void* rcx_4 = rax_1[1]
arg1[1] = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

arg1[2].d = rax_1[2].d

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rax_5 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_18 + 8))(var_18, 1)

if ((rbx_1.b & 2) != 0)
    int64_t rcx_7 = var_48
    rbx_1 &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx_1.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rbp_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rbp_1))

arg1[2].d |= 0x12
return arg1
