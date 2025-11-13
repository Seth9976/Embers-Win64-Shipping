// 函数: sub_141c83c50
// 地址: 0x141c83c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t r8 = 0
int64_t* r9 = *arg1
int64_t r10 = 0

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
    label_141c83c94:
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
                    r10 = *arg2
                
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
                goto label_141c83c94

int64_t* rdi = r9[1]

if (rdi != 0)
    int32_t rax_3 = 0
    bool z_4
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_4 = true
    else
        rax_3 = rdi[1].d
        z_4 = false
    
    if (z_4)
    label_141c83cc8:
        rdi = nullptr
    else
        while (true)
            bool z_5
            
            if (rax_3 == rdi[1].d)
                rdi[1].d = rax_3 + 1
                z_5 = true
            else
                rdi[1].d
                z_5 = false
            
            if (z_5)
                if (rdi != 0)
                    r8 = *r9
                
                break
            
            rax_3 = 0
            bool z_6
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_6 = true
            else
                rax_3 = rdi[1].d
                z_6 = false
            
            if (z_6)
                goto label_141c83cc8

int64_t rbp
rbp.b = r10 == r8

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_8 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg3, r8_1)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, zx.q(rsi_1), r8_2)

return zx.q(rbp.b)
