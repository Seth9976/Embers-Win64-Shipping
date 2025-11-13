// 函数: sub_14215ddd0
// 地址: 0x14215ddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (arg1[5].b s>= 0 || (*(arg1 + 0x2b) & 8) != 0)
    sub_14216e5d0(arg2, arg1, 0, &arg_8, arg3)
else
    int64_t* rcx = arg2[1]
    char rax_2
    
    if (rcx != 0)
        rax_2 = (*(*rcx + 0x28))(rcx)
    
    int32_t rax_4
    
    if (rcx == 0 || rax_2 == 0)
        rax_4 = 0
    else
        int64_t* rcx_1 = arg2[1]
        rax_4 = (*(*rcx_1 + 0x20))(rcx_1)
    
    int64_t* rcx_2 = arg1[1]
    arg_8 = rax_4
    int32_t* rdx = *rcx_2
    
    if (&rdx[1] u> rcx_2[1])
        int32_t* rdx_1 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_8 = *rdx
        *rcx_2 += 4
    
    char rax_8 = arg1[5].b
    int128_t var_28
    
    if (arg_8 s<= 0)
        if ((rax_8 & 1) != 0)
            int64_t rax_19 = *arg2
            var_28 = zx.o(0)
            (*(rax_19 + 8))(arg2, &var_28)
            int64_t* rdi_1 = var_28:8.q
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    else
        uint64_t var_38
        int64_t arg_18
        
        if ((rax_8 & 2) != 0)
            int64_t* rcx_4 = arg2[1]
            char rax_10
            
            if (rcx_4 != 0)
                rax_10 = (*(*rcx_4 + 0x28))(rcx_4)
            
            int64_t* rax_12
            
            if (rcx_4 == 0 || rax_10 == 0)
                arg_18 = 0
                rax_12 = &arg_18
            else
                int64_t* rcx_5 = arg2[1]
                rax_12 = (*(*rcx_5 + 0x10))(rcx_5, &var_38)
            
            int64_t arg_20 = *rax_12
            (*(*arg1 + 0x140))(arg1, &arg_20)
            int64_t* rcx_7 = arg2[1]
            (*(*rcx_7 + 0x30))(rcx_7, &var_28)
            sub_140a1d9d0(arg1, &var_28, arg3)
            int64_t rcx_9 = var_28.q
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else if ((rax_8 & 1) != 0)
            int64_t rax_17 = *arg1
            arg_18 = 0
            (*(rax_17 + 0x140))(arg1, &arg_18)
            var_38 = 0
            int64_t var_30_1 = 0
            sub_140a1d9d0(arg1, &var_38, arg3)
            sub_14217e3a0(arg2, arg_18, &var_38)
            uint64_t rcx_13 = var_38
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
return arg1
