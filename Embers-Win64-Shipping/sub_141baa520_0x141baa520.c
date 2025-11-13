// 函数: sub_141baa520
// 地址: 0x141baa520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638c50(arg2, 0)

if (arg3 == 0)
    return 

uint64_t rax = sub_141c122a0()

if (rax == 0)
    return 

void* rdx = rax + 0x30
rax = sx.q(*(rdx + 8))

if (rax.d s> *(arg3 + 0x38) || *(*(arg3 + 0x30) + (rax << 3)) != rdx || arg1 == 0)
    return 

rax = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t r15_1 = rax

if (rax == 0)
    return 

int64_t var_38 = 0
int32_t var_30_1 = 0
int32_t var_28_1 = 0xffffffff
sub_140d3cc80(sub_141c122a0(), &var_38, 1, 0x10, 0)
int32_t r8_1 = var_30_1
int32_t i = var_28_1 + 1
int64_t rdx_3 = var_38
int32_t i_1 = i

if (i s< r8_1)
    while (*(rdx_3 + (sx.q(i) << 3)) == 0)
        rax = zx.q(i + 1)
        i_1 = rax.d
        i = rax.d
        
        if (rax.d s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int64_t* rbx_1 = *(rdx_3 + (sx.q(i) << 3))
    
    if ((*(*rbx_1 + 0x150))(rbx_1) == r15_1)
        rax = sub_141c122a0()
        
        if (rax != 0)
            int64_t rdx_4 = sx.q(*(arg3 + 0x38))
            int64_t r8_2 = rax + 0x30
            rax = sx.q(*(rax + 0x38))
            
            if (rax.d s<= rdx_4.d && *(*(arg3 + 0x30) + (rax << 3)) == r8_2)
                rax = rbx_1[2]
                
                if (rdx_4.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rdx_4 << 3)) == arg3 + 0x30)
                    if (arg4 == 0)
                    label_141baa6b2:
                        int64_t rsi_1 = sx.q(arg2[1].d)
                        int32_t rax_4 = (rsi_1 + 1).d
                        arg2[1].d = rax_4
                        
                        if (rax_4 s> *(arg2 + 0xc))
                            sub_140638870(arg2)
                        
                        *(*arg2 + (rsi_1 << 3)) = rbx_1
                    else if (rbx_1[0x41] != 0)
                        rax = rbx_1[0x42]
                        
                        if (rax != 0 && *(rax + 8) s> 0)
                            goto label_141baa6b2
    
    r8_1 = var_30_1
    i = i_1 + 1
    rdx_3 = var_38
    i_1 = i
    
    if (i s< r8_1)
        while (*(rdx_3 + (sx.q(i) << 3)) == 0)
            rax = zx.q(i + 1)
            i_1 = rax.d
            i = rax.d
            
            if (rax.d s>= r8_1)
                break

if (rdx_3 != 0)
    sub_140a74f90(rdx_3)
