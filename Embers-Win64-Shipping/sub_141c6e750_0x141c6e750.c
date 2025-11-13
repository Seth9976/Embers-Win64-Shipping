// 函数: sub_141c6e750
// 地址: 0x141c6e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x20)
int64_t r12 = 0
int32_t rax

if (rbx != 0)
    rax = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_141c6e7a4:
        rbx = nullptr
    else
        while (true)
            bool z_2
            
            if (rax == rbx[1].d)
                rbx[1].d = rax + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    r12 = *(arg1 + 0x18)
                
                break
            
            rax = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_141c6e7a4

int64_t* rdi = arg2[1]
int64_t r15 = 0

if (rdi != 0)
    rax = 0
    bool z_4
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_4 = true
    else
        rax = rdi[1].d
        z_4 = false
    
    if (z_4)
    label_141c6e7e4:
        rdi = nullptr
    else
        while (true)
            bool z_5
            
            if (rax == rdi[1].d)
                rdi[1].d = rax + 1
                z_5 = true
            else
                rdi[1].d
                z_5 = false
            
            if (z_5)
                if (rdi != 0)
                    r15 = *arg2
                
                break
            
            rax = 0
            bool z_6
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_6 = true
            else
                rax = rdi[1].d
                z_6 = false
            
            if (z_6)
                goto label_141c6e7e4

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        rax = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        rax = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx + 8))(rbx, 1)

if (r12 != r15)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        int32_t rax_5 = 0
        bool z_7
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_7 = true
        else
            rax_5 = rbx_1[1].d
            z_7 = false
        
        if (z_7)
        label_141c6e894:
            rbx_1 = nullptr
        else
            while (true)
                bool z_8
                
                if (rax_5 == rbx_1[1].d)
                    rbx_1[1].d = rax_5 + 1
                    z_8 = true
                else
                    rbx_1[1].d
                    z_8 = false
                
                if (z_8)
                    if (rbx_1 != 0)
                        void* r15_1 = *(arg1 + 0x18)
                        
                        if (r15_1 != 0)
                            void* rdi_1 = arg2[1]
                            int32_t r12_1 = *(arg1 + 0x10)
                            int64_t r13_1 = *arg2
                            
                            if (rdi_1 != 0)
                                *(rdi_1 + 0xc) += 1
                            
                            void*** rax_7 = sub_140a82f30(0x28, 8)
                            rax_7[1] = arg1
                            rax_7[2].d = r12_1
                            rax_7[3] = r13_1
                            rax_7[4] = rdi_1
                            *rax_7 = &data_14320b0e0
                            void*** var_58_1 = rax_7
                            int64_t (* var_68)(int64_t* arg1)
                            int64_t (* rax_8)(int64_t* arg1) = var_68
                            
                            if (rax_7 != -8)
                                rax_8 = sub_141c56c00
                            
                            var_68 = rax_8
                            arg3 = sub_141c720f0(r15_1, &var_68, arg3)
                    
                    break
                
                rax_5 = 0
                bool z_9
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_9 = true
                else
                    rax_5 = rbx_1[1].d
                    z_9 = false
                
                if (z_9)
                    goto label_141c6e894
    
    void* rax_9 = arg2[1]
    int64_t rcx_8 = *arg2
    
    if (rax_9 != 0)
        *(rax_9 + 0xc) += 1
    
    void* var_70_1 = rax_9
    int64_t var_78_1 = rcx_8
    void** const var_88_1 = &data_14320ad80
    int64_t var_98_1 = 0
    int64_t (* var_a8)(int64_t* arg1) = j_sub_141c546e0
    void* var_80_1 = arg1
    sub_141c720f0(arg1, &var_a8, arg3)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_12 = arg2[1]

if (rcx_12 == 0)
    return 

int32_t rsi_1 = *(rcx_12 + 0xc)
*(rcx_12 + 0xc) -= 1

if (rsi_1 == 1 && rcx_12 != 0)
    (*(*rcx_12 + 8))(rcx_12, zx.q(rsi_1))
