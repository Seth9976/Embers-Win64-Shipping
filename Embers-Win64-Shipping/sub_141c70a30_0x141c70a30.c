// 函数: sub_141c70a30
// 地址: 0x141c70a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78

if (sub_140a80ea0() == 0)
    int64_t zmm0 = *arg3
    int32_t rax_1 = arg3[1].d
    var_78 = arg1
    int64_t var_70_1 = arg2
    int32_t var_60 = rax_1
    void*** rax_2 = sub_140a82f30(0x28, 8)
    int128_t zmm0_1 = var_78.o
    *rax_2 = &data_142ec17e8
    *(rax_2 + 8) = zmm0_1
    int128_t zmm1
    zmm1.q = zmm0
    *(rax_2 + 0x18) = zmm1
    void*** var_48 = rax_2
    int64_t (* var_58)(int64_t* arg1)
    int64_t (* rax_3)(int64_t* arg1) = var_58
    
    if (rax_2 != -8)
        rax_3 = sub_141c573f0
    
    var_58 = rax_3
    return sub_141e85cb0(&var_58, zmm0.b)

int64_t* rax_5 = sub_141c5eea0(arg1, &var_78, arg2)
void* const rsi = nullptr
void* var_88 = nullptr
int64_t* var_80
sub_141c4d620(&var_80, &rax_5[1])

if (var_80 != 0)
    var_88 = *rax_5
    *rax_5 = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_6 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_6 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)

int32_t result

if (var_88 == 0)
    void** rax_8 = *(arg1 + 0x7e0)
    int64_t* rbx_2 = rax_8[1]
    void* rdx_4 = *rax_8
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
    
    int64_t* rdi_1 = rbx_2
    bool cond:1_1 = rbx_2 != 0
    
    if (rbx_2 == 0)
    label_141c70bbb:
        
        if (cond:1_1)
            rsi = rdx_4
    else
        int32_t rax_9 = 0
        bool z_1
        
        if (0 == rbx_2[1].d)
            rbx_2[1].d = 0
            z_1 = true
        else
            rax_9 = rbx_2[1].d
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (rax_9 == rbx_2[1].d)
                    rbx_2[1].d = rax_9 + 1
                    z_2 = true
                else
                    rbx_2[1].d
                    z_2 = false
                
                if (z_2)
                    cond:1_1 = rbx_2 != 0
                    break
                
                rax_9 = 0
                bool z_3
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_3 = true
                else
                    rax_9 = rbx_2[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c70bb3
            
            goto label_141c70bbb
        
    label_141c70bb3:
        rdi_1 = nullptr
    
    result = sub_141c70c80(rsi, arg3)
    
    if (rdi_1 != 0)
        result = rdi_1[1].d
        rdi_1[1].d -= 1
        
        if (result == 1)
            (**rdi_1)(rdi_1)
            result = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_2 != 0)
        result = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)
else
    result = sub_141c70c80(var_88, arg3)

int64_t* rcx_12 = var_80

if (rcx_12 != 0)
    result = rcx_12[1].d
    rcx_12[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_3 = var_80
        result = (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_14 = var_80
            return (*(*rcx_14 + 8))(rcx_14, zx.q(rbp_1))

return result
