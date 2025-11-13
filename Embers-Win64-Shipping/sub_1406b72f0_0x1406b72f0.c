// 函数: sub_1406b72f0
// 地址: 0x1406b72f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = nullptr
int64_t* rbx = arg1[6]
int64_t* var_10 = rbx
uint64_t rax

if (rbx != 0)
    rax = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = zx.q(rbx[1].d)
        z_1 = false
    
    if (z_1)
    label_1406b7333:
        rbx = nullptr
        var_10 = nullptr
        rdi = nullptr
    else
        while (true)
            bool z_2
            
            if (rax.d == rbx[1].d)
                rbx[1].d = (rax + 1).d
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                rbx = var_10
                rdi = nullptr
                
                if (rbx != 0)
                    rdi = arg1[5]
                    void* const var_18_1 = rdi
                
                break
            
            rax = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = zx.q(rbx[1].d)
                z_3 = false
            
            if (z_3)
                goto label_1406b7333

if (rdi != 0)
    arg1[4].b
    rax = sub_1406bea60(arg1[7], arg1, &arg1[2], arg2)
    
    if (rax != 0)
        sub_1406bd930(rdi, rax)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**var_10)(var_10)
int32_t rdi_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_10 + 8))(var_10, zx.q(rdi_1))
