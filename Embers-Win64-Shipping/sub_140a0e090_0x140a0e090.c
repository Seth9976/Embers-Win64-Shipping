// 函数: sub_140a0e090
// 地址: 0x140a0e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x20)
int64_t rax_3

if (rbx == 0)
    rax_3 = arg3
else
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_140a0e0d3:
        rbx = nullptr
        rax_3 = arg3
    else
        while (true)
            bool z_2
            
            if (rax_1 == rbx[1].d)
                rbx[1].d = rax_1 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_1 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_140a0e0d3
        
        if (rbx == 0)
            rax_3 = arg3
        else
            int64_t* r14_1 = *(arg1 + 0x18)
            
            if (r14_1 == 0)
                rax_3 = arg3
            else
                int32_t rax_9 = (*(*r14_1 + 8))(r14_1)
                int64_t rdx_1 = *r14_1
                int32_t arg_14 = rax_9
                rax_3 = (*rdx_1)(r14_1, rdx_1).q

*arg2 = rax_3

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

return arg2
