// 函数: sub_140e10340
// 地址: 0x140e10340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int64_t* rcx = *arg1
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* r14
        
        if (arg1[1].d == 0)
            r14 = nullptr
        else
            r14 = *arg1
        
        int64_t var_58 = *arg2
        void* rax_4 = arg2[1]
        void* var_50 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        int64_t rdi_1 = *r14 + 0x50
        void var_48
        int32_t* rax_5 = sub_140d70490(&var_48, arg5)
        void var_30
        char rax_7 = (*rdi_1)(r14, &var_58, zx.q(arg3), sub_140d70490(&var_30, arg4), rax_5)
        int64_t* rbx_2 = arg2[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                int64_t rdx_3 = *rbx_2
                (*rdx_3)(rbx_2, rdx_3)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t rcx_6 = *(arg4 + 8)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(arg5 + 8)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        return zx.q(rax_7)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_10 = *(arg4 + 8)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg5 + 8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t* result
result.b = 0
return result
