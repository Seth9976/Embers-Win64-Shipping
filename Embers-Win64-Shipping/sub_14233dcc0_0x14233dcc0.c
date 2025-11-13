// 函数: sub_14233dcc0
// 地址: 0x14233dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0

if (*(arg1 + 0x248) == 0)
    return 0

int64_t* rbx = *(arg1 + 0x250)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 s> 0)
        int64_t* r9_1 = data_143e29f28
        int64_t rdx_1 = 0
        
        if (rbx != 0)
            if (rax_1 != 0)
                rbx[1].d = rax_1 + 1
                rax_1.b = 1
            
            if (rax_1.b == 0)
                rbx = nullptr
            
            if (rbx != 0)
                rdx_1 = *(arg1 + 0x248)
        
        int64_t var_28 = rdx_1
        
        if (rbx != 0)
            rbx[1].d += 1
        
        void* var_18
        (*(*r9_1 + 0x28))(r9_1, &var_18, &var_28)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        void* rcx_3 = var_18
        
        if (rcx_3 != 0)
            int64_t* rcx_4 = *sub_140e152a0(rcx_3, &var_28)
            rdi = zx.q((*(*rcx_4 + 0xc8))(rcx_4))
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    int64_t rdx_4 = *rbx
                    (*rdx_4)(rbx, rdx_4)
                    int32_t temp5_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp4_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi.b)
