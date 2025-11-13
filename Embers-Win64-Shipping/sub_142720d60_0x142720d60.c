// 函数: sub_142720d60
// 地址: 0x142720d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf8)

if (rcx != 0)
    sub_14264eeb0(rcx)

int64_t rbx = *(arg1 + 0xd0)

if (rbx != 0)
    void* r15_1 = *(arg1 + 0x68)
    
    if (r15_1 != 0)
        r15_1 = *(r15_1 + 0x2d8)
    
    if (r15_1 != 0)
        int32_t i = 0
        
        if (*(r15_1 + 0xd8) s> 0)
            int64_t r14_1 = 0
            
            do
                int64_t* rdi_2 = *(r15_1 + 0xd0) + r14_1
                
                if (rdi_2[1].d != 0)
                    int64_t* rcx_1 = *rdi_2
                    void arg_8
                    
                    if (rcx_1 != 0 && *(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx)
                        if (rdi_2[1].d != 0)
                            int64_t* rcx_2 = *rdi_2
                            
                            if (rcx_2 != 0)
                                (*(*rcx_2 + 0x38))(rcx_2, 0)
                                int64_t rcx_3 = *rdi_2
                                
                                if (rcx_3 != 0)
                                    *rdi_2 = sub_140a84c80(rcx_3, 0, 0)
                                
                                rdi_2[1].d = 0
                        
                        sub_140599630(r15_1 + 0xd0, 0)
                        break
                
                i += 1
                r14_1 += 0x10
            while (i s< *(r15_1 + 0xd8))
    
    *(arg1 + 0xd0) = 0

int64_t rdx_2 = *(arg1 + 0xd8)

if (rdx_2 == 0)
    return 

int64_t rcx_5 = *(arg1 + 0xf8)

if (rcx_5 != 0)
    sub_1405c2d80(rcx_5 + 0x80, rdx_2)

*(arg1 + 0xd8) = 0
