// 函数: sub_140e8ff00
// 地址: 0x140e8ff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t* rbx = *(arg2 + 0x18)
int64_t rcx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg2 + 0x10)

int64_t rbp = rcx - 8

if (rcx == 0)
    rbp = 0

if (rbx != 0)
    rbx[1].d += 1

*arg1 = 0
arg1[1].d = 0

if (rbx != 0)
    rbx[1].d += 1

void*** rax_2 = sub_1405978f0(0x38, arg1)

if (rax_2 != 0)
    *rax_2 = &data_142edf008
    rax_2[1] = rbp
    rax_2[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax_2 + 0x18) = zmm0
    rax_2[5].b = arg4
    rax_2[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

return arg1
