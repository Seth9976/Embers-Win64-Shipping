// 函数: sub_14203a5b0
// 地址: 0x14203a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x90)
int64_t result

if (rcx != 0 && (*(*rcx + 0x60))(rcx).b != 0)
    int64_t* rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x340))(rcx_1) != 0)
        return 1
    
    result = *(arg1 + 0x58)
    
    if (result != 0)
        int64_t* i = *(result + 0x38)
        int64_t* i_1 = i
        void* r8_1 = &i[sx.q(*(result + 0x40))]
        
        if (i != r8_1)
            do
                result = *i_1
                
                if (result != 0 && *(result + 0x30) != 0)
                    int64_t* rdx_1
                    
                    for (; i != r8_1; i = &i[1])
                        int64_t rax_3 = *i
                        
                        if (rax_3 != 0)
                            rdx_1 = *(rax_3 + 0x30)
                            
                            if (rdx_1 != 0)
                                goto label_14203a65c
                    
                    rdx_1 = nullptr
                label_14203a65c:
                    jump(*(*rdx_1 + 0xd20))
                
                i_1 = &i_1[1]
            while (i_1 != r8_1)

result.b = 0
return result
