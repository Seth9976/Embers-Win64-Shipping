// 函数: sub_141850c00
// 地址: 0x141850c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result

if (*(arg1 + 0x30) == 0)
    int64_t* rdi_1 = nullptr
    *(arg1 + 0x30) = sub_140a6e140(arg1 + 8, u"BuildPatchInstallerThread", 0, 0, -1, 0)
    int64_t* rbx_1 = *(arg1 + 0x18)
    int64_t rdx_1 = 0
    
    if (rbx_1 != 0)
        result = nullptr
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            result = zx.q(rbx_1[1].d)
            z_1 = false
        
        if (z_1)
        label_141850c77:
            rbx_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (result.d == rbx_1[1].d)
                    rbx_1[1].d = (result + 1).d
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    if (rbx_1 != 0)
                        rdx_1 = *(arg1 + 0x10)
                    
                    break
                
                result = nullptr
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rbx_1[1].d)
                    z_3 = false
                
                if (z_3)
                    goto label_141850c77
    
    int64_t var_18 = rdx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (*(arg1 + 0x40) != 0)
        int64_t* rcx_2 = *(arg1 + 0x38)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2).b != 0)
            if (*(arg1 + 0x40) != 0)
                rdi_1 = *(arg1 + 0x38)
            
            (*(*rdi_1 + 0x50))(rdi_1, &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            result = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (result.d == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rbp_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rbp_1))

result.b = *(arg1 + 0x30) != 0
return result
