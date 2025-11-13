// 函数: sub_142010ae0
// 地址: 0x142010ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

int64_t r9_1 = 0
int64_t* rdi_1 = *(arg1 + 0x40)

if (rdi_1 == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rdi_1[1].d)
    rdi_1[1].d = 0
    z_1 = true
else
    rax = rdi_1[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rdi_1[1].d)
        rdi_1[1].d = rax + 1
        z_2 = true
    else
        rdi_1[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rdi_1[1].d)
        rdi_1[1].d = 0
        z_3 = true
    else
        rax = rdi_1[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rdi_1 == 0)
    return 

int64_t* r11_1 = *(arg1 + 0x38)

if (r11_1 != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        int32_t rax_1 = 0
        bool z_4
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_4 = true
        else
            rax_1 = rbx_1[1].d
            z_4 = false
        
        if (z_4)
        label_142010b84:
            rbx_1 = nullptr
        else
            while (true)
                bool z_5
                
                if (rax_1 == rbx_1[1].d)
                    rbx_1[1].d = rax_1 + 1
                    z_5 = true
                else
                    rbx_1[1].d
                    z_5 = false
                
                if (z_5)
                    if (rbx_1 != 0)
                        r9_1 = *(arg1 + 0x18)
                    
                    break
                
                rax_1 = 0
                bool z_6
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_6 = true
                else
                    rax_1 = rbx_1[1].d
                    z_6 = false
                
                if (z_6)
                    goto label_142010b84
    
    int64_t var_28 = r9_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    (*(*r11_1 + 0x38))(r11_1, &var_18, &var_28, arg2, arg3)
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rax_6 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_10 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_14 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

rdi_1[1].d -= 1

if (rdi_1[1].d != 1)
    return 

(**rdi_1)(rdi_1)
int32_t rsi_1 = *(rdi_1 + 0xc)
*(rdi_1 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))
