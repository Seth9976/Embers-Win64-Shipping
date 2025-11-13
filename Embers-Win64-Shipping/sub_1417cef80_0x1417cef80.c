// 函数: sub_1417cef80
// 地址: 0x1417cef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* rbp = *(result + 0x3e8)

if (rbp != 0)
    result = sx.q(*(rbp + 0x158))
    int32_t rdi_1 = 0
    
    if (result.d s> 0)
        void* result_2 = result
        int64_t rdx_1 = 0
        void* result_1 = *(rbp + 0x150)
        result = result_1
        
        do
            if (**result == arg1[3])
                int64_t* r15_1 = sx.q(rdi_1) << 3
                void* rbx_1 = *(r15_1 + result_1)
                (*(*(rbx_1 + 8) + 0x30))(rbx_1 + 8)
                (*(*(rbx_1 + 0x28) + 0x30))(rbx_1 + 0x28)
                (*(*(rbx_1 + 0x48) + 0x30))(rbx_1 + 0x48)
                (*(*(rbx_1 + 0x68) + 0x30))(rbx_1 + 0x68)
                (*(*(rbx_1 + 0x88) + 0x30))(rbx_1 + 0x88)
                (*(*(rbx_1 + 0xa8) + 0x30))(rbx_1 + 0xa8)
                void* rcx_7 = *(r15_1 + *(rbp + 0x150))
                
                if (rcx_7 != 0)
                    sub_1417cf410(rcx_7, 1)
                
                int32_t rcx_10 = *(rbp + 0x158)
                int32_t rax_10 = rcx_10 - rdi_1 - 1
                
                if (rax_10 s>= 1)
                    rax_10 = 1
                
                if (rax_10 != 0)
                    int64_t r9_1 = *(rbp + 0x150)
                    memcpy(r15_1 + r9_1, r9_1 + (sx.q(rcx_10 - rax_10) << 3), rax_10 << 3)
                    rcx_10 = *(rbp + 0x158)
                
                *(rbp + 0x158) = rcx_10 - 1
                result = sub_1405c53d0(rbp + 0x150)
                break
            
            rdi_1 += 1
            rdx_1 += 1
            result += 8
        while (rdx_1 s< result_2)
    
    void var_78
    
    if (arg1[0xd].b != 0)
        return sub_1417d2b30(rbp, sub_1417ce050(&var_78, &arg1[1]))

return result
