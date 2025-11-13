// 函数: sub_141c55b70
// 地址: 0x141c55b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78

if (sub_140a80ea0() == 0)
    int128_t zmm0 = *arg3
    var_78 = arg1
    int64_t var_70_1 = arg2
    int64_t var_88
    var_88.o = zmm0
    void*** rax_1 = sub_140a82f30(0x28, 8)
    int128_t zmm0_1 = var_78.o
    *rax_1 = &data_142ec17e8
    *(rax_1 + 8) = zmm0_1
    *(rax_1 + 0x18) = var_88.o
    void*** var_48 = rax_1
    int64_t (* var_58)(int64_t* arg1)
    int64_t (* rax_2)(int64_t* arg1) = var_58
    
    if (rax_1 != -8)
        rax_2 = sub_141c57200
    
    var_58 = rax_2
    return sub_141e85cb0(&var_58, arg4)

int64_t* rax_4 = sub_141c5eea0(arg1, &var_78, arg2)
void* const rsi = nullptr
void* var_88_1 = nullptr
int64_t* var_80
sub_141c4d620(&var_80, &rax_4[1])

if (var_80 != 0)
    var_88_1 = *rax_4
    *rax_4 = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_5 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_5 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)

int32_t result

if (var_88_1 == 0)
    void** rax_7 = *(arg1 + 0x7e0)
    int64_t* rbx_2 = rax_7[1]
    void* rdx_4 = *rax_7
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
    
    int64_t* rdi_1 = rbx_2
    bool cond:1_1 = rbx_2 != 0
    
    if (rbx_2 == 0)
    label_141c55cdb:
        
        if (cond:1_1)
            rsi = rdx_4
    else
        int32_t rax_8 = 0
        bool z_1
        
        if (0 == rbx_2[1].d)
            rbx_2[1].d = 0
            z_1 = true
        else
            rax_8 = rbx_2[1].d
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (rax_8 == rbx_2[1].d)
                    rbx_2[1].d = rax_8 + 1
                    z_2 = true
                else
                    rbx_2[1].d
                    z_2 = false
                
                if (z_2)
                    cond:1_1 = rbx_2 != 0
                    break
                
                rax_8 = 0
                bool z_3
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_3 = true
                else
                    rax_8 = rbx_2[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c55cd3
            
            goto label_141c55cdb
        
    label_141c55cd3:
        rdi_1 = nullptr
    
    result = sub_141c55da0(rsi, arg3)
    
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
    result = sub_141c55da0(var_88_1, arg3)

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
