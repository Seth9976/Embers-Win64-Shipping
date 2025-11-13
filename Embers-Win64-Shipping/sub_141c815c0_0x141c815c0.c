// 函数: sub_141c815c0
// 地址: 0x141c815c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t* rdi = arg2
int32_t var_64 = rsi.d
int64_t* r15 = arg1

if (rsi.d == 0)
    return 0

int32_t rbx = 0
int32_t r12 = 0
int32_t arg_20 = 0
int64_t var_58 = rsi
uint64_t r14
r14.b = sub_141c83c50(rdi, *arg1, arg3) == 0
int64_t rbp = 0
char arg_18 = r14.b

do
    int32_t rcx_7 = r12
    rbp += 1
    r12 += 1
    
    if (rbp s< rsi)
        int64_t r14_2 = rbp << 4
        
        do
            int64_t* rdx_1 = *r15
            int64_t r15_1 = 0
            int64_t* r8_1 = *rdi
            int64_t* rbx_1 = *(rdx_1 + r14_2 + 8)
            
            if (rbx_1 != 0)
                int32_t rax_2 = 0
                bool z_1
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_1 = true
                else
                    rax_2 = rbx_1[1].d
                    z_1 = false
                
                if (z_1)
                label_141c81694:
                    rbx_1 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_2 == rbx_1[1].d)
                            rbx_1[1].d = rax_2 + 1
                            z_2 = true
                        else
                            rbx_1[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rbx_1 != 0)
                                r15_1 = *(rdx_1 + r14_2)
                            
                            break
                        
                        rax_2 = 0
                        bool z_3
                        
                        if (0 == rbx_1[1].d)
                            rbx_1[1].d = 0
                            z_3 = true
                        else
                            rax_2 = rbx_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_141c81694
            
            int64_t* rdi_1 = r8_1[1]
            int64_t rsi_1 = 0
            
            if (rdi_1 != 0)
                int32_t rax_4 = 0
                bool z_4
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_4 = true
                else
                    rax_4 = rdi_1[1].d
                    z_4 = false
                
                if (not(z_4))
                    bool z_6
                    
                    do
                        bool z_5
                        
                        if (rax_4 == rdi_1[1].d)
                            rdi_1[1].d = rax_4 + 1
                            z_5 = true
                        else
                            rdi_1[1].d
                            z_5 = false
                        
                        if (z_5)
                            if (rdi_1 != 0)
                                rsi_1 = *r8_1
                                rdi_1[1].d -= 1
                                
                                if (rdi_1[1].d == 1)
                                    (**rdi_1)(rdi_1)
                                    int32_t rax_8 = *(rdi_1 + 0xc)
                                    *(rdi_1 + 0xc) -= 1
                                    
                                    if (rax_8 == 1)
                                        (*(*rdi_1 + 8))(rdi_1, 1)
                            
                            break
                        
                        rax_4 = 0
                        
                        if (0 == rdi_1[1].d)
                            rdi_1[1].d = 0
                            z_6 = true
                        else
                            rax_4 = rdi_1[1].d
                            z_6 = false
                    while (not(z_6))
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_12 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi = var_58
            int32_t rax_14
            rax_14.b = r15_1 != rsi_1
            
            if (zx.d(r14.b) != rax_14)
                break
            
            r15 = arg1
            r12 += 1
            rdi = arg2
            rbp += 1
            r14_2 += 0x10
        while (rbp s< rsi)
        
        r15 = arg1
        rbx = arg_20
        r14 = zx.q(arg_18)
    
    int32_t i_1 = r12 - rcx_7
    
    if (r14.b == 0)
        if (i_1 != 0)
            int64_t* rbx_5 = (sx.q(rcx_7) << 4) + 8 + *r15
            int32_t i
            
            do
                int64_t* rcx_11 = *rbx_5
                
                if (rcx_11 != 0)
                    int32_t rax_15 = *(rcx_11 + 0xc)
                    *(rcx_11 + 0xc) -= 1
                    
                    if (rax_15 == 1 && rcx_11 != 0)
                        (*(*rcx_11 + 8))(rcx_11, 1)
                
                rbx_5 = &rbx_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rbx = arg_20
    else
        if (rbx != rcx_7)
            memmove((sx.q(rbx) << 4) + *r15, (sx.q(rcx_7) << 4) + *r15, i_1 << 4)
        
        rbx += i_1
        arg_20 = rbx
    
    rdi = arg2
    r14.b ^= 1
    arg_18 = r14.b
while (rbp s< rsi)

r15[1].d = rbx
return zx.q(var_64 - rbx)
