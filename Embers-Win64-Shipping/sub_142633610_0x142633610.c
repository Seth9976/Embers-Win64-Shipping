// 函数: sub_142633610
// 地址: 0x142633610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int64_t i = 0
int32_t* rax = arg1

do
    if (*rax == 0)
        if (r11 == 0xffffffff)
            break
        
        int32_t rsi = arg1[0xd0]
        arg1[0xd0] = rsi + 1
        
        if (rsi == 0xffffffff)
            arg1[0xd0] = rsi + 2
        
        void* rdi_1 = sx.q(r11) * 0x68 + arg1
        *rdi_1 = rsi
        *(rdi_1 + 4) = *arg4
        *(rdi_1 + 8) = arg4[1]
        *(rdi_1 + 0xc) = arg4[2]
        *(rdi_1 + 0x20) = arg2
        *(rdi_1 + 0x10) = *arg5
        *(rdi_1 + 0x14) = arg5[1]
        *(rdi_1 + 0x18) = arg5[2]
        *(rdi_1 + 0x50) = arg7
        *(rdi_1 + 0x30) = arg6.d
        *(rdi_1 + 0x28) = arg3
        *(rdi_1 + 0x40) = 0
        int64_t* rbx_1 = arg8[1]
        int64_t var_18 = *arg8
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_18 != rdi_1 + 0x58)
            var_18.o = *(rdi_1 + 0x58)
            *(rdi_1 + 0x58) = var_18.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        *(rdi_1 + 0x48) = 0
        int64_t* rbx_2 = arg8[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                int64_t rdx = *rbx_2
                (*rdx)(rbx_2, rdx)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    int64_t r8 = *rbx_2
                    (*(r8 + 8))(rbx_2, 1, r8)
        
        return zx.q(rsi)
    
    r11 += 1
    i += 1
    rax = &rax[0x1a]
while (i s< 8)

int64_t* rbx = arg8[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return 0
