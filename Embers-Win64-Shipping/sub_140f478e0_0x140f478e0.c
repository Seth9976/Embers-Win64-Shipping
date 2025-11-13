// 函数: sub_140f478e0
// 地址: 0x140f478e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0x340))
void* r8 = nullptr
*arg2 = 0

if (rax.b != 0)
    if (*(arg1 + 0x358) != 0 || *(arg1 + 0x2b0) == 0)
    label_140f479a0:
        
        if (rax.b != 0 && *(arg1 + 0x358) == 1 && *(arg1 + 0x2c0) != 0)
            void* rax_5 = *(arg1 + 0x2c8)
            
            if (rax_5 != 0 && *(rax_5 + 8) s> 0)
                *arg2 = *(arg1 + 0x36c)
    else
        int64_t* rbx_1 = *(arg1 + 0x2b8)
        
        if (rbx_1 == 0)
            goto label_140f479a0
        
        int32_t rdx = rbx_1[1].d
        
        if (rdx s<= 0)
            goto label_140f479a0
        
        if (rbx_1 != 0)
            if (rdx != 0)
                rbx_1[1].d = rdx + 1
                rax.b = 1
            else
                rax.b = 0
            
            if (rax.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                r8 = *(arg1 + 0x2b0)
        
        void arg_8
        *arg2 = *sub_140e15940(r8, &arg_8)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
