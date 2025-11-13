// 函数: sub_14183ffe0
// 地址: 0x14183ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xf8)
void* r13 = arg1
void* result = sx.q(*(arg1 + 0x100)) * 0x138 + r8
void* result_1 = result

if (r8 != result)
    void* result_2 = result
    int64_t* r12_1 = r8 + 0x88
    
    do
        int64_t* i_1 = r12_1[-2]
        
        if (i_1 != 0)
        label_141840179:
            int64_t* i
            
            do
                int64_t* var_60
                (*(*i_1 + 0x88))(i_1, &var_60)
                int64_t* rbx_1 = var_60
                int32_t var_58
                int64_t rdi_1 = sx.q(var_58)
                void* rsi_3 = &rbx_1[rdi_1 * 2]
                
                if (rbx_1 != rsi_3)
                    do
                        void arg_18
                        
                        if (*sub_140926e00(r13 + 0xa8, &arg_18, rbx_1) == 0xffffffff)
                            int32_t var_50
                            sub_140598750(arg2, &var_50)
                            int64_t* var_48
                            sub_140596d10(var_48, rbx_1)
                            var_48[2].d = 0xffffffff
                            int32_t rax_4 = var_48[1].d
                            int16_t* rdx_4
                            
                            if (rax_4 == 0)
                                rdx_4 = &data_142d40450
                            else
                                rdx_4 = *var_48
                            
                            int32_t rcx_4 = rax_4 - 1
                            
                            if (rax_4 == 0)
                                rcx_4 = 0
                            
                            void arg_20
                            sub_14059a6d0(arg2, &arg_20, sub_1405969c0(rcx_4, rdx_4), var_48, 
                                var_50, nullptr)
                        
                        rbx_1 = &rbx_1[2]
                    while (rbx_1 != rsi_3)
                    
                    r13 = arg1
                    rdi_1 = zx.q(var_58)
                    rbx_1 = var_60
                
                if (rdi_1.d != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_7 = *rbx_1
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        rbx_1 = &rbx_1[2]
                        j = rdi_1.d
                        rdi_1 = zx.q(rdi_1.d - 1)
                    while (j != 1)
                    rbx_1 = var_60
                
                if (rbx_1 != 0)
                    sub_140a74f90(rbx_1)
                
                i = *r12_1
                
                if (i == i_1)
                    break
                
                i_1 = i
            while (i != 0)
            result_2 = result_1
        else
            i_1 = *r12_1
            
            if (i_1 != 0)
                goto label_141840179
        
        r12_1 = &r12_1[0x27]
        result = &r12_1[-0x11]
    while (result != result_2)

return result
