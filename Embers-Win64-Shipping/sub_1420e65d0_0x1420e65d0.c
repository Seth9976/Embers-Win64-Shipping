// 函数: sub_1420e65d0
// 地址: 0x1420e65d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (sub_140d23dc0(arg1, 0x30).b == 0)
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        int64_t rbx
        rbx.b = arg1[0x25] != 0
        result = (*(*arg1 + 0x268))(arg1)
        
        if (rbx.b != result.b)
            result.b = 1
            return result
        
        void* rax_1 = arg1[0x25]
        
        if (rax_1 == 0 || (*(rax_1 + 0x1f4) & 0x20) == 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        char rax_3 = (*(*arg1 + 0x270))(arg1)
        
        if (rbx.b != rax_3)
            result = (*(*arg1 + 0x268))(arg1)
        
        if (rbx.b != rax_3 && result.b != 0)
            result.b = 1
            return result
        
        void arg_18
        
        if (sub_14243ade0(rsi_1) == 0)
            result = sub_1420e4d10(arg1, &arg_18)
        else
            int64_t rax_6 = sx.q(arg1[0x16].d)
            int64_t arg_10
            
            if (rax_6.d s< 0 || rax_6.d s>= arg1[0xc].d)
                if ((*(arg1 + 0xba) & 2) == 0)
                    int64_t var_28
                    sub_140d30800(&arg1[7], &var_28)
                    int64_t var_18
                    int64_t* rax_8 = sub_140baf760(&var_18, &var_28)
                    int16_t* rdx_4
                    
                    if (rax_8[1].d == 0)
                        rdx_4 = &data_142d40450
                    else
                        rdx_4 = *rax_8
                    
                    arg1[0x27] = *sub_140b58260(&arg_10, rdx_4, 1)
                    int64_t rcx_9 = var_18
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    int64_t rcx_10 = var_28
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    *(arg1 + 0xba) |= 2
                
                result = &arg_10
                arg_10 = arg1[0x27]
            else
                result = &arg_10
                arg_10 = *(arg1[0xb] + (rax_6 << 3))
        
        if (arg1[0x25] != 0 && arg1[0x28] != *result)
            result.b = 1
            return result

result.b = 0
return result
