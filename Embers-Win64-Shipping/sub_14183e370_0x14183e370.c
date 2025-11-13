// 函数: sub_14183e370
// 地址: 0x14183e370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
void* r15 = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))
void* r13_1 = result * 0x138 + r15

if (r15 != r13_1)
    int64_t* r15_1 = r15 + 0x88
    
    do
        if (r15_1[-3].d != 3)
            if (arg3 != 0)
                int64_t* rbx_1 = *r15_1
                int64_t* rax_1 = (*(*rbx_1 + 0x18))(rbx_1)
                int64_t rdx = *rbx_1
                int64_t* rax_2 = (*(rdx + 0x10))(rbx_1, rdx)
                int32_t rbx_2 = rax_1[1].d
                int32_t rdi_1 = rax_2[1].d
                uint64_t var_68
                uint64_t rsi_2
                int32_t r14_2
                
                if (rdi_1 s> 1)
                    int32_t rbx_3
                    
                    if (rbx_2 == 0)
                        rbx_3 = 0
                    else
                        rbx_3 = rbx_2 - 1
                    
                    int32_t rax_3
                    
                    if (rdi_1 != 0 || rbx_3 == 0)
                        rax_3 = 0
                    else
                        rax_3 = rdi_1 + 1
                    
                    int64_t rsi_3 = *rax_2
                    int32_t rcx_4 = rax_3 + rbx_3
                    uint64_t var_78 = 0
                    int32_t var_6c
                    
                    if (rdi_1 != 0 || rcx_4 != 0)
                        sub_1405a4c70(&var_78, rdi_1 + rcx_4, 0)
                        memcpy(var_78, rsi_3, rdi_1 * 2)
                    else
                        var_6c = rcx_4
                    
                    sub_140a20ba0(&var_78, *rax_1, rbx_3)
                    rsi_2 = var_78
                    rbx_2 = rdi_1
                    r14_2 = var_6c
                    var_78 = 0
                    int32_t var_70_1
                    var_70_1.q = 0
                else
                    int64_t rdi_2 = *rax_1
                    var_68 = 0
                    rsi_2 = 0
                    
                    if (rbx_2 != 0)
                        sub_1405a4c70(&var_68, rbx_2, 0)
                        rsi_2 = var_68
                        memcpy(rsi_2, rdi_2, rbx_2 * 2)
                        int32_t var_5c
                        r14_2 = var_5c
                    else
                        r14_2 = 0
                
                int32_t var_58
                sub_140598750(arg2, &var_58)
                int64_t* var_50
                *var_50 = rsi_2
                var_50[1].d = rbx_2
                *(var_50 + 0xc) = r14_2
                var_68 = 0
                int32_t var_60
                var_60.q = 0
                var_50[2].d = 0xffffffff
                int16_t* rdx_7
                
                if (rbx_2 == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *var_50
                
                int32_t rcx_9 = rbx_2 - 1
                
                if (rbx_2 == 0)
                    rcx_9 = 0
                
                void arg_8
                sub_14059a6d0(arg2, &arg_8, sub_1405969c0(rcx_9, rdx_7), var_50, var_58, nullptr)
            
            int64_t* rcx_12 = *r15_1
            int64_t* rax_6 = (*(*rcx_12 + 0x130))(rcx_12)
            int32_t var_48
            sub_140598750(arg2, &var_48)
            int64_t* var_40
            sub_140596d10(var_40, rax_6)
            var_40[2].d = 0xffffffff
            int32_t rax_7 = var_40[1].d
            int16_t* rdx_11
            
            if (rax_7 == 0)
                rdx_11 = &data_142d40450
            else
                rdx_11 = *var_40
            
            int32_t rcx_15 = rax_7 - 1
            
            if (rax_7 == 0)
                rcx_15 = 0
            
            void arg_20
            sub_14059a6d0(arg2, &arg_20, sub_1405969c0(rcx_15, rdx_11), var_40, var_48, nullptr)
            arg3 = arg_18
        
        r15_1 = &r15_1[0x27]
        result = &r15_1[-0x11]
    while (result != r13_1)

return result
