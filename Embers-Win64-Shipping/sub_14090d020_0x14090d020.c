// 函数: sub_14090d020
// 地址: 0x14090d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20
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
                void* rdi_1 = *(arg1 + 0x18)
                
                if (rdi_1 != 0)
                    int64_t* rax_1 = j_sub_140a82f30(0x10)
                    
                    if (rax_1 != 0)
                        *rax_1 = 0
                        rax_1[1] = arg_20
                        int32_t temp0_1 = *(rdi_1 + 0xc0)
                        *(rdi_1 + 0xc0) = rax_1
                        int64_t** rcx_4 = temp0_1
                        *rcx_4
                        *rcx_4 = rax_1
                
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t rdi_2 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))

return result
