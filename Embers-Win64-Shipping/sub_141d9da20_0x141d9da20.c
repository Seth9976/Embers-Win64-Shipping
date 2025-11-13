// 函数: sub_141d9da20
// 地址: 0x141d9da20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x100) != 0)
    void* rax_1 = *(arg1 + 0x110)
    void* rcx = arg1 + 0x120
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(arg1 + 0x100))((*(*rcx + 8))(rcx), arg1 + 0x30)

int64_t rdx_2 = 0
int32_t result = 0
bool z

if (0 == *(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0
    z = true
else
    result = *(arg1 + 0x1c)
    z = false

if (z && *(arg1 + 8) != 0)
    int64_t* rbx_1 = *(arg1 + 0x28)
    
    if (rbx_1 != 0)
        int32_t rax_4 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_4 = rbx_1[1].d
            z_1 = false
        
        if (z_1)
        label_141d9daa3:
            rbx_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_4 == rbx_1[1].d)
                    rbx_1[1].d = rax_4 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    if (rbx_1 != 0)
                        rdx_2 = *(arg1 + 0x20)
                    
                    break
                
                rax_4 = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_4 = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141d9daa3
    
    int64_t var_18 = rdx_2
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_141da1040(*(arg1 + 8), &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_8 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            result = (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result
