// 函数: sub_140b1f3f0
// 地址: 0x140b1f3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t i_3 = arg1[1].d
int64_t* rbx = *arg1

if (i_3 != 0)
    uint32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_14061cd70(arg1, 0)

uint64_t var_28 = 0
int64_t var_20 = 0
sub_140a464c0()
char const (* r9)[0x4] = data_14399ea08
int64_t* rax = (*(r9 + 0x18))(&data_14399ea08, arg2, 0, r9, var_28, var_20)
char rax_1

if (rax != 0)
    rax_1 = sub_140b1f110(&var_28, rax, arg3)
    int64_t r8_1 = *rax
    (*r8_1)(rax, 1, r8_1)

uint64_t rbx_2

if (rax == 0 || rax_1 == 0)
    rbx_2 = var_28
    i_3.b = 0
else
    rbx_2 = var_28
    
    if (var_20.d != 0)
        int16_t i_1 = *rbx_2
        
        if (i_1 != 0)
            do
                uint64_t rbp_1 = rbx_2
                
                if (i_1 != 0)
                    while (i_1 != 0xd)
                        if (i_1 == 0xa)
                            break
                        
                        i_1 = *(rbx_2 + 2)
                        rbx_2 += 2
                        
                        if (i_1 == 0)
                            break
                
                int64_t rsi_1 = sx.q(arg1[1].d)
                i_3 = ((rbx_2 - rbp_1) s>> 1).d
                int32_t rax_2 = (rsi_1 + 1).d
                arg1[1].d = rax_2
                
                if (rax_2 s> *(arg1 + 0xc))
                    sub_1405a4f90(arg1)
                
                int64_t* rsi_3 = (rsi_1 << 4) + *arg1
                *rsi_3 = 0
                rsi_3[1] = 0
                
                if (rbp_1 != 0 && *rbp_1 != 0 && i_3 s> 0)
                    int32_t rdx_3 = 0
                    
                    if (i_3 + 1 s> 0)
                        sub_1405947f0(rsi_3, i_3 + 1)
                        rdx_3 = rsi_3[1].d
                    
                    int32_t rax_6 = rdx_3 + 1 + i_3
                    rsi_3[1].d = rax_6
                    
                    if (rax_6 s> *(rsi_3 + 0xc))
                        sub_140594770(rsi_3)
                    
                    UnDecorator::getReferenceType(*rsi_3, rbp_1, i_3 * 2)
                    *(*rsi_3 + (sx.q(rsi_3[1].d) << 1) - 2) = 0
                
                i_1 = *rbx_2
                int16_t i_2 = i_1
                
                if (i_1 == 0xd)
                    i_1 = *(rbx_2 + 2)
                
                uint64_t rcx_9 = rbx_2 + 2
                int16_t i_4 = i_1
                
                if (i_2 != 0xd)
                    rcx_9 = rbx_2
                
                if (i_1 == 0xa)
                    i_1 = *(rcx_9 + 2)
                
                rbx_2 = rcx_9 + 2
                
                if (i_4 != 0xa)
                    rbx_2 = rcx_9
            while (i_1 != 0)
            
            rbx_2 = var_28
    
    i_3.b = 1

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return zx.q(i_3.b)
