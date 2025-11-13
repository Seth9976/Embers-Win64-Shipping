// 函数: sub_140d6fba0
// 地址: 0x140d6fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140d6fcb0:
    *arg2 = 0xffffffff
else
    int64_t rcx = *arg1
    
    while (true)
        int64_t r14_1 = 0
        int64_t* r12_1 = sx.q(rbx_2) * 0x38
        int64_t* rdi_1 = *(r12_1 + rcx + 8)
        
        if (rdi_1 != 0)
            int32_t rax_3 = rdi_1[1].d
            
            if (rax_3 == 0)
                rdi_1 = nullptr
            else
                rdi_1[1].d = rax_3 + 1
                
                if (rdi_1 != 0)
                    r14_1 = *(r12_1 + rcx)
        
        int64_t* rsi_1 = arg4[1]
        int64_t rbp_1 = 0
        
        if (rsi_1 != 0)
            int32_t rax_5 = rsi_1[1].d
            
            if (rax_5 != 0)
                rsi_1[1].d = rax_5 + 1
                
                if (rsi_1 != 0)
                    rbp_1 = *arg4
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp3_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (r14_1 == rbp_1)
            *arg2 = rbx_2
            break
        
        rcx = *arg1
        arg4 = arg_20
        rbx_2 = *(r12_1 + rcx + 0x30)
        
        if (rbx_2 == 0xffffffff)
            goto label_140d6fcb0

return arg2
