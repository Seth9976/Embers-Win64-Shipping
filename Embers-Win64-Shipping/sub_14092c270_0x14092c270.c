// 函数: sub_14092c270
// 地址: 0x14092c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
int64_t r14 = 0

if (rbx != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_14092c2c4:
        rbx = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_1 == rbx[1].d)
                rbx[1].d = rax_1 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    r14 = *(arg1 + 0x20)
                    *(rbx + 0xc) += 1
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t rax_5 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rax_5 == 1)
                            (*(*rbx + 8))(rbx, 1)
                
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_1 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_14092c2c4

int64_t* var_40 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int64_t* var_38 = nullptr
int32_t var_30 = 0

if (arg4 != &var_38 && arg4[1].d != 0)
    int64_t* rcx_3 = *arg4
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3, &var_38)

void* r14_1 = *(arg1 + 0x30)
void*** var_58 = nullptr
void*** rax_8 = sub_140a84c80(0, 0x40, 0)
var_58 = rax_8
int32_t var_50 = 4

if (rax_8 != 0)
    *rax_8 = &data_142e21ea0
    rax_8[1] = r14
    rax_8[2] = var_40
    var_40 = nullptr
    int64_t var_48_1 = 0
    rax_8[3] = 0
    rax_8[4].d = 0
    
    if (&var_38 != &rax_8[3] && var_30 != 0)
        int64_t* rcx_6 = var_38
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x40))(rcx_6)
    
    rax_8[6] = sub_140a387b0()
    *rax_8 = &data_142e21ef8

sub_14093f370(r14_1, &var_58)
void*** rax_12

if (var_50 == 0)
    rax_12 = var_58
label_14092c40c:
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)
else
    void*** rcx_8 = var_58
    
    if (rcx_8 != 0)
        (*rcx_8)[7](rcx_8, 0)
        rax_12 = var_58
        
        if (rax_12 != 0)
            rax_12 = sub_140a84c80(rax_12, 0, 0)
            var_58 = rax_12
        
        int32_t var_50_1 = 0
        goto label_14092c40c
int32_t result = sub_140745b20(&var_38)

if (var_40 != 0)
    result = *(var_40 + 0xc)
    *(var_40 + 0xc) -= 1
    
    if (result == 1 && var_40 != 0)
        result = (*(*var_40 + 8))(var_40, 1)

if (rbx != 0)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        return (*(*rbx + 8))(rbx, zx.q(rsi_1))

return result
