// 函数: sub_14090cf70
// 地址: 0x14090cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
int32_t result = sub_140fcbc40(arg2, &arg_20)

if (result.b != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        result = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            result = rbx_1[1].d
            z_1 = false
        
        if (not(z_1))
            while (true)
                bool z_2
                
                if (result == rbx_1[1].d)
                    rbx_1[1].d = result + 1
                    z_2 = true
                else
                    result = rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    break
                
                result = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    result = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    return result
            
            if (rbx_1 != 0)
                void* rcx_2 = *(arg1 + 0x18)
                
                if (rcx_2 != 0)
                    sub_14090e610(rcx_2, &arg_20)
                
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t rdi_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
