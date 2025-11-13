// 函数: sub_14141ae40
// 地址: 0x14141ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 1
char arg_10 = 0
int64_t* rcx = *(arg2 + 8)
char arg_20 = 1
char arg_18 = 0
int64_t* result = (*(*rcx + 0x80))(rcx, *(arg1 + 0x20), &arg_8, &arg_10, &arg_20, &arg_18)

if (arg_10 != 0)
    char r9_1 = arg_8
    
    if (r9_1 != 0)
        void* r8_1 = *(arg1 + 0x20)
        char rcx_1 = *(r8_1 + 0x138)
        char rdx_1 = rcx_1 & 8
        
        if (rdx_1 != 0)
            result = *(arg2 + 8)
        
        if (rdx_1 == 0 || (*(result + 0x37) & 8) == 0 || result[7].b s< 0)
            if ((rcx_1 & 0x40) != 0)
                result = *(arg2 + 8)
            
            int64_t rdi
            
            if ((rcx_1 & 0x40) == 0 || (*(result + 0x39) & 0x20) == 0)
                rdi.b = 0
            else
                rdi.b = 1
            
            char rcx_2 = *(r8_1 + 0x13c)
            
            if (rcx_2 == 0)
                result = *(arg2 + 8)
            
            int64_t rbx
            
            if (rcx_2 != 0 || (*(result + 0x3a) & 8) == 0)
                rbx.b = 0
                
                if (rcx_2 != 0 || rdx_1 != 0 || rdi.b != 0 || rbx.b != 0)
                label_14141af20:
                    int64_t* r10_1 = data_143ececc0
                    
                    if (r10_1 == 0)
                        void** rax_1 = sub_140a82f30(0x3fe0, 0)
                        r10_1 = rax_1
                        void** r8_2 = rax_1
                        void* rcx_4
                        
                        for (int32_t i = 0; i u< 0x123; )
                            int32_t rax_2 = i + 1
                            i += 1
                            rcx_4 = zx.q(rax_2 * 0x38) + r10_1
                            *r8_2 = rcx_4
                            r8_2 = rcx_4
                        
                        *rcx_4 = data_143ececc0
                        data_143ececc8 += 0x124
                        r9_1 = arg_8
                        data_143ececc0 = r10_1
                    
                    int64_t rax_4 = *r10_1
                    data_143ececcc += 1
                    data_143ececc0 = rax_4
                    char* var_40
                    var_40.b = arg_18
                    char* var_48
                    var_48.b = arg_20
                    return sub_141410eb0(r10_1, arg1, arg2, r9_1, var_48.b, var_40.b, rdi.b, rbx.b)
            else
                rbx.b = 1
                
                if (rdx_1 != 0 || rdi.b != 0 || rbx.b != 0)
                    goto label_14141af20

return result
