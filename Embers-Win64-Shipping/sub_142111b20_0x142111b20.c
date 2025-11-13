// 函数: sub_142111b20
// 地址: 0x142111b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r8 = 0

if (rbx != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_142111b57:
        rbx = nullptr
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
                if (rbx != 0)
                    r8 = *(arg1 + 8)
                
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
                goto label_142111b57

int64_t rdi
rdi.b = r8 == arg2

if (rbx == 0)
    return zx.q(rdi.b)

rbx[1].d -= 1

if (rbx[1].d == 1)
    int64_t rdx = *rbx
    (*rdx)(rbx, rdx)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_1 = *rbx
        (*(r8_1 + 8))(rbx, zx.q(rsi_1), r8_1)

return zx.q(rdi.b)
