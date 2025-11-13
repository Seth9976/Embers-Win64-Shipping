// 函数: sub_140a3f110
// 地址: 0x140a3f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4

if (arg2 u<= zx.q(arg3) u>> 2 && rbx != arg5)
    void* rdi_1 = rbx
    
    while (true)
        int64_t rcx_3 = *(rdi_1 + 8)
        int64_t result
        
        if (rcx_3 == arg2)
            int64_t result_1 = *rdi_1
            
            if (result_1 == 0)
                sub_140af98a0("Unknown", (result_1 + 0x30).d, 
                    OS memory allocation cache has been corrupted!", arg4)
                sub_140afbb40()
                rcx_3 = *(rdi_1 + 8)
            
            *arg7 -= rcx_3
            
            if (rdi_1 + 0x10 != arg5)
                memmove(rdi_1, rdi_1 + 0x10, ((((arg5 - rdi_1) s>> 4) - 1) << 4).d)
            
            result = result_1
            *arg6 -= 1
        else
            rdi_1 += 0x10
            
            if (rdi_1 != arg5)
                continue
            else
                result = sub_140b655e0(arg2)
                
                if (result == 0)
                    break
        
        return result
    
    do
        rbx[1]
        sub_140b65600(*rbx)
        *rbx = 0
        rbx[1] = 0
        rbx = &rbx[2]
    while (rbx != arg5)
    
    *arg6 = 0
    *arg7 = 0

return sub_140b655e0(arg2)
