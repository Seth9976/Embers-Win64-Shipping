// 函数: sub_141881af0
// 地址: 0x141881af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdi = 0

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
    label_141881b43:
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
                    rdi = *(arg1 + 8)
                
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
                goto label_141881b43

int64_t rbp = *(arg1 + 0x18)
int32_t var_68 = *(arg1 + 0x20)
void var_60
sub_140596d10(&var_60, arg1 + 0x28)
int128_t zmm0 = *(arg1 + 0x40)
char var_50 = *(arg1 + 0x38)
int64_t zmm1 = *(arg1 + 0x50)
int32_t var_4c = *(arg1 + 0x3c)
int64_t var_88 = *arg3
void* rax_7 = arg3[1]
int64_t var_38 = zmm1
void* var_80 = rax_7
int128_t var_48 = zmm0

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int64_t var_78 = *arg2
void* rax_9 = arg2[1]
void* var_70 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int32_t result = rbp(rdi, &var_78, &var_88, zx.q(arg4), &var_68)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
