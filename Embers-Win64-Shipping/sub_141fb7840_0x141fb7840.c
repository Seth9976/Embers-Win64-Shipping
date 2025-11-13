// 函数: sub_141fb7840
// 地址: 0x141fb7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_14216a6b0(arg1)
int64_t rcx = *(arg1 + 0x140)

if (rcx != 0)
    int64_t* var_58
    sub_142436b20(rcx, &var_58)
    int32_t var_50
    int32_t rdx_2 = var_50
    
    while (true)
        if (rdx_2 s< 0 || rdx_2 s>= var_58[1].d)
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            break
        
        int64_t rcx_2 = *(*var_58 + (sx.q(rdx_2) << 3))
        
        if (rcx_2 != 0)
            int64_t* rax_1 = sub_1420e4550(rcx_2)
            void* rdi_1 = *rax_1
            void* i = sx.q(rax_1[1].d) * 0x38 + rdi_1
            
            if (rdi_1 != i)
                void* rdi_2 = rdi_1 + 8
                
                do
                    int32_t var_48
                    sub_140598750(arg1 + 0x7a0, &var_48)
                    int64_t* var_40
                    sub_140596d10(var_40, rdi_2)
                    var_40[2].d = 0xffffffff
                    int32_t rax_2 = var_40[1].d
                    int16_t* rdx_5
                    
                    if (rax_2 == 0)
                        rdx_5 = &data_142d40450
                    else
                        rdx_5 = *var_40
                    
                    int32_t rcx_5 = rax_2 - 1
                    
                    if (rax_2 == 0)
                        rcx_5 = 0
                    
                    void arg_8
                    sub_14059a6d0(arg1 + 0x7a0, &arg_8, sub_1405969c0(rcx_5, rdx_5), var_40, 
                        var_48, nullptr)
                    int32_t var_38
                    sub_140598750(arg1 + 0x898, &var_38)
                    int64_t* var_30
                    sub_140596d10(var_30, rdi_2)
                    var_30[2].d = 0xffffffff
                    int32_t rax_4 = var_30[1].d
                    int16_t* rdx_9
                    
                    if (rax_4 == 0)
                        rdx_9 = &data_142d40450
                    else
                        rdx_9 = *var_30
                    
                    int32_t rcx_10 = rax_4 - 1
                    
                    if (rax_4 == 0)
                        rcx_10 = 0
                    
                    void arg_10
                    sub_14059a6d0(arg1 + 0x898, &arg_10, sub_1405969c0(rcx_10, rdx_9), var_30, 
                        var_38, nullptr)
                    rdi_2 += 0x38
                while (rdi_2 - 8 != i)
            
            rdx_2 = var_50
        
        rdx_2 += 1
        var_50 = rdx_2

return result
