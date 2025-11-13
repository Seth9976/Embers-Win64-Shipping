// 函数: sub_142c66b60
// 地址: 0x142c66b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int32_t rbp = 7
SOCKET r13 = arg1[r15 + 0x49]
arg1[r15 + 0x49] = -1

if (arg2 == 0)
    void* rbx_1 = arg1[r15 + 0xf]
    int32_t rdi_1
    
    if (rbx_1 == 0)
        rbx_1 = arg1[0xf]
        
        if (rbx_1 != 0)
            rdi_1 = 2
            
            if (*(rbx_1 + 4) == 2)
                rdi_1 = 0x17
            
            goto label_142c66bd6
    else
        rdi_1 = *(rbx_1 + 4)
    label_142c66bd6:
        
        for (void* i = *(rbx_1 + 0x28); i != 0; i = *(i + 0x28))
            if (arg1[sx.q(arg3 ^ 1) + 0xf] != 0)
                do
                    if (*(i + 4) == rdi_1)
                        goto label_142c66c15
                    
                    i = *(i + 0x28)
                while (i != 0)
                
                break
            
        label_142c66c15:
            int32_t rax_3
            rax_3, arg4 = sub_142c66690(arg1, i, &arg1[r15 + 0x49], arg4)
            rbp = rax_3
            
            if (rax_3 != 7)
                arg1[r15 + 0xf] = i
                break

if (r13 != -1)
    sub_142c65200(arg1, r13)

return zx.q(rbp)
