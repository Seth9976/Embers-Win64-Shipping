// 函数: sub_1426e6370
// 地址: 0x1426e6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_7 = 0

if (*(arg1 + 0x48) s> 0)
    int64_t rbx_1 = *(arg1 + 0x40)
    int32_t i_5 = *(arg1 + 0x48)
    int32_t i_6 = i_5
    uint64_t r13_1 = 0
    uint64_t var_38 = 0
    int32_t i_8 = i_5
    
    if (i_5 != 0)
        sub_1405a4be0(&var_38, i_5, 0)
        r13_1 = var_38
        uint64_t rcx_1 = r13_1
        int64_t rbx_2 = rbx_1 - r13_1
        int32_t i
        
        do
            *rcx_1 = *(rbx_2 + rcx_1)
            void* rax_2 = *(rbx_2 + rcx_1 + 8)
            *(rcx_1 + 8) = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
            
            rcx_1 += 0x10
            i = i_5
            i_5 -= 1
        while (i != 1)
        i_6 = *(arg1 + 0x48)
        i_5 = i_8
    
    int32_t rax_7 = *(arg1 + 0x4c)
    void* rsi_1 = *(arg1 + 0x40)
    
    if (rax_7 s< 0)
        if (i_6 != 0)
            void* rsi_3 = rsi_1 + 8
            int32_t i_1
            
            do
                int64_t* rbx_4 = *rsi_3
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp5_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
                
                rsi_3 += 0x10
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            rax_7 = *(arg1 + 0x4c)
        
        *(arg1 + 0x48) = 0
        
        if (rax_7 != 0)
            sub_1405a5410(arg1 + 0x40, 0)
    else
        if (i_6 != 0)
            int64_t* rsi_2 = rsi_1 + 8
            int32_t i_2
            
            do
                int64_t* rbx_3 = *rsi_2
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp6_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rsi_2 = &rsi_2[2]
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        *(arg1 + 0x48) = 0
    
    if (i_5 s> 0)
        uint64_t rsi_4 = r13_1
        i_7 = zx.q(i_5)
        uint64_t i_3
        
        do
            void* rax_8 = *rsi_4
            
            if (*(rax_8 + 0x28) == 0)
                *(rax_8 + 0x28) = 2
                int64_t* rbx_5 = *(rsi_4 + 8)
                uint64_t r14_1 = *rsi_4
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                void* rdi_1 = *rsi_4
                
                if (*(rdi_1 + 0x68) != 0)
                    int64_t* rcx_7 = *(rdi_1 + 0x60)
                    
                    if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                        int64_t* rcx_8
                        
                        if (*(rdi_1 + 0x68) == 0)
                            rcx_8 = nullptr
                        else
                            rcx_8 = *(rdi_1 + 0x60)
                        
                        var_38 = r14_1
                        i_8.q = rbx_5
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d += 1
                        
                        (*(*rcx_8 + 0x50))(rcx_8, &var_38)
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp12_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
            
            rsi_4 += 0x10
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    if (i_5 != 0)
        int64_t* rdi_2 = r13_1 + 8
        int32_t i_4
        
        do
            int64_t* rbx_6 = *rdi_2
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp10_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
            
            rdi_2 = &rdi_2[2]
            i_4 = i_5
            i_5 -= 1
        while (i_4 != 1)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)

int32_t result = *(arg1 + 0xd4)
*(arg1 + 0xd0) = i_7.d

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0xc8, 0) __tailcall

return result
