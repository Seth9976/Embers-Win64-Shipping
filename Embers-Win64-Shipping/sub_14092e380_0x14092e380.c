// 函数: sub_14092e380
// 地址: 0x14092e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)
int64_t r12 = 0

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
    label_14092e3e3:
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
                    r12 = *(arg1 + 0x20)
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
                goto label_14092e3e3

void** const var_a8 = &data_142e1f860
int128_t var_a0 = zx.o(0)
int64_t var_90
sub_140596d10(&var_90, arg2 + 0x18)
int64_t var_80 = *(arg2 + 0x28)
var_a8 = &data_142e1f860
int64_t var_78 = r12

if (rbx != 0)
    *(rbx + 0xc) += 1

int64_t var_68
sub_140596d10(&var_68, arg3)
int64_t var_58
sub_140596d10(&var_58, &arg3[2])
int64_t var_48
sub_140596d10(&var_48, &arg3[4])
int64_t var_38 = 0
int32_t var_30 = 0

if (arg4 != &var_38 && arg4[1].d != 0)
    int64_t* rcx_7 = *arg4
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x40))(rcx_7, &var_38)

void* rsi_1 = *(arg1 + 0x30)
void*** var_b8 = nullptr
void*** rax_9 = sub_140a84c80(0, 0xa0, 0)
var_b8 = rax_9
int32_t var_b0 = 0xa

if (rax_9 != 0)
    sub_1409190f0(rax_9, &var_a8)

sub_14093f370(rsi_1, &var_b8)
void*** rax_11

if (var_b0 == 0)
    rax_11 = var_b8
label_14092e533:
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)
else
    void*** rcx_10 = var_b8
    
    if (rcx_10 != 0)
        (*rcx_10)[7](rcx_10, 0)
        rax_11 = var_b8
        
        if (rax_11 != 0)
            rax_11 = sub_140a84c80(rax_11, 0, 0)
            var_b8 = rax_11
        
        int32_t var_b0_1 = 0
        goto label_14092e533
int32_t result = sub_140745b20(&var_38)
int64_t rcx_14 = var_48

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_58

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = var_68

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

if (rbx != 0)
    result = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (result == 1 && rbx != 0)
        result = (*(*rbx + 8))(rbx, 1)

int64_t rcx_18 = var_90

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t* rcx_19 = var_a0:8.q

if (rcx_19 != 0)
    int32_t temp1_1 = *(rcx_19 + 0xc)
    *(rcx_19 + 0xc) -= 1
    
    if (temp1_1 == 1)
        result = (*(*rcx_19 + 8))(rcx_19, 1)

if (rbx != 0)
    int32_t rdi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rdi_1 == 1)
        return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
