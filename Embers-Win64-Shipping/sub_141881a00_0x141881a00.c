// 函数: sub_141881a00
// 地址: 0x141881a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r10 = 0

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
    label_141881a44:
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
                    r10 = *(arg1 + 8)
                
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
                goto label_141881a44

int64_t rdi = *(arg1 + 0x18)
int64_t var_18 = *arg2
void* rax_4 = arg2[1]
void* var_10 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int32_t var_28 = *(arg1 + 0x20)
int32_t result = rdi(r10, &var_18)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx + 8))(rbx, zx.q(rdi_1))

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
