// 函数: sub_140d9c320
// 地址: 0x140d9c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x130))

if (result.d s> 0)
    void* rcx = arg1 + 8
    int64_t result_1 = result
    int64_t r8_1 = 0
    void* rax = *(rcx + 0x120)
    
    if (rax != 0)
        rcx = rax
    
    result = 0
    
    do
        if (*(result + rcx + 0x38) == *arg2)
            int64_t* rbx_1 = arg2[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result.b = 1
            return result
        
        r8_1 += 1
        result += 0x48
    while (r8_1 s< result_1)

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

result.b = 0
return result
