// 函数: sub_1426929c0
// 地址: 0x1426929c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x30
        int32_t i
        
        do
            void* rcx_3 = *rdi_2
            
            if (rcx_3 != 0)
                if (0 == *(rcx_3 + 8))
                    *(rcx_3 + 8) = 0
                else
                    *(rcx_3 + 8)
                
                int64_t* rbx_2 = *rdi_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_5 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_5 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 += 0x38
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1408cf3a0(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x30
        int32_t i_1
        
        do
            void* rcx = *rdi_1
            
            if (rcx != 0)
                result = 0
                
                if (0 == *(rcx + 8))
                    *(rcx + 8) = 0
                else
                    result = *(rcx + 8)
                
                int64_t* rbx_1 = *rdi_1
                
                if (rbx_1 != 0)
                    result = rbx_1[1].d
                    rbx_1[1].d -= 1
                    
                    if (result == 1)
                        (**rbx_1)(rbx_1)
                        result = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (result == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 = &rdi_1[7]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
