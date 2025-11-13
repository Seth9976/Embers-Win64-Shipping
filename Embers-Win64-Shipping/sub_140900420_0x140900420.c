// 函数: sub_140900420
// 地址: 0x140900420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

uint64_t r14_1 = arg1[1]

if (r14_1 != 0)
    int16_t* const var_28
    
    if (arg1[6].d == 0)
        var_28 = &data_142d40450
    else
        var_28 = arg1[5]
    
    if (arg1[4].d == 0)
        int16_t* const var_20_2 = &data_142d40450
    else
        int64_t var_20_1 = arg1[3]
    
    uint64_t var_38 = 0
    int64_t var_30_1 = 0
    sub_140b0f5f0(&var_38, &var_28, 2)
    
    if (sub_140b12f50(&var_38) == 0 && &var_38 != &arg1[5])
        int32_t r8_1 = var_30_1:4.d
        int32_t rbp_1 = arg1[6].d
        int64_t rsi_2 = arg1[5]
        var_30_1.d = rbp_1
        
        if (rbp_1 != 0 || r8_1 != 0)
            sub_1405a4c70(&var_38, rbp_1, r8_1)
            memcpy(var_38, rsi_2, rbp_1 * 2)
        else
            var_30_1:4.d = 0
    
    sub_140904080(r14_1, &var_38, arg1, arg1[7].b, var_38.b)
    *(r14_1 + 0xd0) = 1
    uint64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_1))
