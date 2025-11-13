// 函数: sub_140d9c250
// 地址: 0x140d9c250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_8 = rdi
int32_t rsi = 0
uint64_t result

if (arg1[1].d s<= 0)
label_140d9c2f2:
    result.b = 0
else
    int64_t r14_1 = 0
    
    while (true)
        result = *arg1
        int64_t* rbx_1 = *(r14_1 + result + 8)
        uint64_t* rdx = r14_1 + result
        
        if (rbx_1 == 0)
            rdi.b = 0
        else
            result = zx.q(rbx_1[1].d)
            
            if (result.d == 0)
                rbx_1 = nullptr
                rdi.b = 0
            else
                rbx_1[1].d = result.d + 1
                
                if (rbx_1 == 0)
                    rdi.b = 0
                else
                    result = *rdx
                    
                    if (result == 0 || result != *arg2)
                        rdi.b = 0
                    else
                        rdi.b = 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rdi.b != 0)
            result.b = 1
            break
        
        rsi += 1
        r14_1 += 0x10
        
        if (rsi s>= arg1[1].d)
            goto label_140d9c2f2

return result
