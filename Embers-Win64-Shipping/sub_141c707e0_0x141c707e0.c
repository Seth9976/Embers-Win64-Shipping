// 函数: sub_141c707e0
// 地址: 0x141c707e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78

if (sub_140a80ea0() == 0)
    void** const var_38_1 = &data_142e345d8
    var_78 = arg1
    uint128_t zmm1
    zmm1.d = arg3.d
    int64_t var_70_1 = arg2
    int128_t zmm0 = var_78.o
    int64_t (* var_58)(int64_t* arg1) = sub_141c56ca0
    int64_t var_48_1 = 0
    int128_t var_30_1 = zmm0
    uint64_t var_20_1 = zmm1.q
    return sub_141e85cb0(&var_58, arg4)

int64_t* rax_1 = sub_141c5eea0(arg1, &var_78, arg2)
void* const rsi_1 = nullptr
void* var_88_1 = nullptr
int64_t* var_80
sub_141c4d620(&var_80, &rax_1[1])

if (var_80 != 0)
    var_88_1 = *rax_1
    *rax_1 = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_2 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_2 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)

int32_t result

if (var_88_1 == 0)
    void** rax_4 = *(arg1 + 0x7e0)
    int64_t* rbx_2 = rax_4[1]
    void* rdx_3 = *rax_4
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
    
    int64_t* rdi_1 = rbx_2
    bool cond:0_1 = rbx_2 != 0
    
    if (rbx_2 == 0)
    label_141c7092e:
        
        if (cond:0_1)
            rsi_1 = rdx_3
    else
        int32_t rax_5 = 0
        bool z_1
        
        if (0 == rbx_2[1].d)
            rbx_2[1].d = 0
            z_1 = true
        else
            rax_5 = rbx_2[1].d
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (rax_5 == rbx_2[1].d)
                    rbx_2[1].d = rax_5 + 1
                    z_2 = true
                else
                    rbx_2[1].d
                    z_2 = false
                
                if (z_2)
                    cond:0_1 = rbx_2 != 0
                    break
                
                rax_5 = 0
                bool z_3
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_3 = true
                else
                    rax_5 = rbx_2[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c70926
            
            goto label_141c7092e
        
    label_141c70926:
        rdi_1 = nullptr
    
    result = sub_141c67250(rsi_1, arg3)
    
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
    result = sub_141c67250(var_88_1, arg3)

int64_t* rcx_11 = var_80

if (rcx_11 != 0)
    result = rcx_11[1].d
    rcx_11[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_3 = var_80
        result = (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_13 = var_80
            return (*(*rcx_13 + 8))(rcx_13, zx.q(rbp_1))

return result
