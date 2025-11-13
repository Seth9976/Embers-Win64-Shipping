// 函数: sub_141c861b0
// 地址: 0x141c861b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[3]

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
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
        return 

if (rbx == 0)
    return 

int64_t* r14_1 = arg1[2]

if (r14_1 != 0)
    int64_t* rdi_1 = arg1[6]
    void* r15_1 = nullptr
    
    if (rdi_1 != 0)
        int32_t rax_1 = 0
        bool z_4
        
        if (0 == rdi_1[1].d)
            rdi_1[1].d = 0
            z_4 = true
        else
            rax_1 = rdi_1[1].d
            z_4 = false
        
        if (z_4)
        label_141c86264:
            rdi_1 = nullptr
        else
            while (true)
                bool z_5
                
                if (rax_1 == rdi_1[1].d)
                    rdi_1[1].d = rax_1 + 1
                    z_5 = true
                else
                    rdi_1[1].d
                    z_5 = false
                
                if (z_5)
                    if (rdi_1 != 0)
                        r15_1 = arg1[5]
                        
                        if (r15_1 != 0)
                            int64_t* var_48 = r14_1
                            int64_t* var_40_1 = rbx
                            rbx[1].d += 1
                            sub_141c8dba0(r15_1, arg1, &var_48, 1)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                (**rbx)(rbx)
                                int32_t rax_5 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (rax_5 == 1)
                                    (*(*rbx + 8))(rbx, 1)
                    
                    break
                
                rax_1 = 0
                bool z_6
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_6 = true
                else
                    rax_1 = rdi_1[1].d
                    z_6 = false
                
                if (z_6)
                    goto label_141c86264
    
    (*(*r14_1 + 0x20))(r14_1, arg1)
    
    if (arg1[5] != 0)
        void* rdx_3 = arg1[6]
        
        if (rdx_3 != 0)
            int32_t rax_8 = 0
            
            if (0 == *(rdx_3 + 8))
                *(rdx_3 + 8) = 0
            else
                rax_8 = *(rdx_3 + 8)
            
            if (rax_8 s> 0)
                int64_t* var_38 = r14_1
                int64_t* var_30_1 = rbx
                rbx[1].d += 1
                sub_141c8dde0(r15_1, arg1, &var_38)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t rax_11 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*rbx + 8))(rbx, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_15 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rsi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi_1))
