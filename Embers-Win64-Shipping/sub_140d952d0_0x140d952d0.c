// 函数: sub_140d952d0
// 地址: 0x140d952d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0)
    uint64_t rax = *(arg1 + 0x18)
    
    if (rax != 0 && *(rax + 8) s> 0 && *(arg1 + 0x20) != 0)
        int64_t* rcx = *(arg1 + 0x28)
        
        if (rcx != 0)
            rax = zx.q(rcx[1].d)
            
            if (rax.d s> 0)
                void* r8_1 = nullptr
                int64_t rdx_1 = 0
                
                if (rcx != 0)
                    if (rax.d != 0)
                        rcx[1].d = rax.d + 1
                        rax.b = 1
                    
                    if (rax.b == 0)
                        rcx = nullptr
                    
                    if (rcx != 0)
                        rdx_1 = *(arg1 + 0x20)
                
                int64_t* rbx_1 = *(arg1 + 0x18)
                int64_t var_18 = rdx_1
                
                if (rbx_1 != 0)
                    int32_t rax_1 = rbx_1[1].d
                    
                    if (rax_1 != 0)
                        rbx_1[1].d = rax_1 + 1
                        rax_1.b = 1
                    
                    if (rax_1.b == 0)
                        rbx_1 = nullptr
                    
                    if (rbx_1 != 0)
                        r8_1 = *(arg1 + 0x10)
                
                sub_140e27040(r8_1, &var_18)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rcx != 0)
                    rcx[1].d -= 1
                    
                    if (rcx[1].d == 1)
                        (**rcx)(rcx)
                        int32_t temp6_1 = *(rcx + 0xc)
                        *(rcx + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rcx + 8))(rcx, 1)

if (*(arg1 + 0x30) != 0)
    sub_140a2fe90(sub_140b18f30(), *(arg1 + 0x30))

int64_t rcx_7 = *(arg1 + 0x38)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = *(arg1 + 0x28)

if (rcx_8 != 0)
    int32_t temp0_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_8 + 8))(rcx_8, 1)

int64_t* rcx_9 = *(arg1 + 0x18)

if (rcx_9 != 0)
    int32_t temp1_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* rcx_10 = *(arg1 + 8)

if (rcx_10 == 0)
    return 

int32_t temp2_1 = *(rcx_10 + 0xc)
*(rcx_10 + 0xc) -= 1

if (temp2_1 == 1)
    jump(*(*rcx_10 + 8))
