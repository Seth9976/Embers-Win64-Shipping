// 函数: sub_141a4fed0
// 地址: 0x141a4fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int64_t result = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        void* rcx = *arg1
        
        if (rcx != 0)
            void* rax_3 = sub_141a4ad10(rcx, arg1[2])
            
            if (rax_3 != 0)
                int64_t rax_4 = sx.q(arg1[3].d)
                
                if (rax_4.d s>= 0 && rax_4.d s< *(rax_3 + 0x10))
                    result = *(*(rax_3 + 8) + (rax_4 << 3))
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                int64_t rdx_3 = *rbx
                (*rdx_3)(rbx, rdx_3)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_1 = *rbx
                    (*(r8_1 + 8))(rbx, 1, r8_1)

return result
