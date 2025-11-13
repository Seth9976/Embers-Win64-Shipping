// 函数: sub_140921a00
// 地址: 0x140921a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2

if (rbx == 0)
    *arg2 = 0
    return 

int32_t i = 0

if (*(arg1 + 0x10) s<= 0)
    *arg2 = 0
    return 

int64_t r14 = 0

do
    int64_t* rdi_2 = *(arg1 + 8) + r14
    
    if (rdi_2[1].d != 0)
        int64_t* rcx = *rdi_2
        void arg_8
        
        if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &arg_8) == rbx)
            if (rdi_2[1].d != 0)
                int64_t* rcx_1 = *rdi_2
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x38))(rcx_1, 0)
                    int64_t rcx_2 = *rdi_2
                    
                    if (rcx_2 != 0)
                        *rdi_2 = sub_140a84c80(rcx_2, 0, 0)
                    
                    rdi_2[1].d = 0
            
            sub_140599630(arg1 + 8, 0)
            break
    
    i += 1
    r14 += 0x10
while (i s< *(arg1 + 0x10))

*arg2 = 0
