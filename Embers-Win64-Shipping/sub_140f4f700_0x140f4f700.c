// 函数: sub_140f4f700
// 地址: 0x140f4f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (arg1[0x68].b != 0 && arg1[0x58] != 0)
    rax_1 = arg1[0x59]

if (arg1[0x68].b == 0 || arg1[0x58] == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    sub_140e78f50(data_143e29f28, &arg1[0x7f], 0)
    
    if (arg1[0x8f].d != 0)
        int64_t* rcx_8 = arg1[0x8e]
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
            int64_t* rcx_9
            
            if (arg1[0x8f].d == 0)
                rcx_9 = nullptr
            else
                rcx_9 = arg1[0x8e]
            
            (*(*rcx_9 + 0x50))(rcx_9)
else
    int64_t* rcx_1 = arg1[0x8a] + 0x4e8
    int64_t* var_28
    (*(*rcx_1 + 0xc8))(rcx_1, &var_28)
    int32_t i_2
    int32_t i_1 = i_2
    bool cond:1_1 = i_1 == 0
    
    if (i_1 s> 0)
        int64_t* rcx_2 = var_28
        int64_t var_18 = *rcx_2
        void* rax_4 = rcx_2[1]
        void* var_10_1 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        arg3 = sub_140f59470(arg1, &var_18, 3)
        i_1 = i_2
        cond:1_1 = i_1 == 0
    
    if (not(cond:1_1))
        void* rdi_2 = &var_28[1]
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int64_t* rcx_6 = var_28
    
    if (rcx_6 != 0)
        arg3 = sub_140a74f90(rcx_6)

sub_140f09b10(arg1, arg2, arg3)
return arg2
