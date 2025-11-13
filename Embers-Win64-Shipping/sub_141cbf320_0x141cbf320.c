// 函数: sub_141cbf320
// 地址: 0x141cbf320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int64_t result = *arg3
int64_t* r13 = arg3

if (result != 0)
    int64_t* rsi_1 = *(result + 0x28)
    void* rbp_3 = &rsi_1[sx.q(*(result + 0x30)) * 2]
    
    if (rsi_1 != rbp_3)
        do
            int64_t* rbx_1 = rsi_1[1]
            void* rdi_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (rdi_1 != 0)
                int32_t* rdx
                
                if (*(rdi_1 + 0x10) s<= 0)
                    rdx = &data_143f35860
                else
                    rdx = *(rdi_1 + 8)
                
                int64_t r9
                result, r9 = sub_141cbf4b0(arg2, rdx)
                
                if (arg4 != 0)
                    void* var_48 = rdi_1
                    int64_t* var_40_1 = rbx_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    r9.b = 1
                    result = sub_141cbf320(arg1, arg2, &var_48, r9, arg5)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[2]
        while (rsi_1 != rbp_3)
        
        r13 = arg3

int64_t* rbx_2 = r13[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
