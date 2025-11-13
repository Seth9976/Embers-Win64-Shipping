// 函数: sub_141ed2300
// 地址: 0x141ed2300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = &arg1[4]
uint64_t rsi = 0
__builtin_memset(arg1, 0, 0x20)
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

__builtin_memset(rdx, 0, 0x1c)
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_1419a21e0(0)
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_98 = 0xffffffff
sub_140d3cc80(sub_142459c10(), &var_a8, 1, 0x10, 0)
int64_t r12 = sx.q(var_a0)
int32_t i = var_98 + 1
int64_t rbx = var_a8
int32_t i_1 = i

if (i s< r12.d)
    int32_t i_2 = i
    
    while (*(rbx + (sx.q(i_2) << 3)) == 0)
        i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= r12.d)
            break

uint64_t var_90 = 0
int32_t rbp = r12.d
int32_t var_88 = r12.d

if (r12.d != 0)
    sub_1405c4a00(&var_90, r12.d, 0)
    rsi = var_90
    memcpy(rsi, rbx, (r12 << 3).d)
    i = i_1
    r12 = zx.q(var_a0)
    rbx = var_a8
    rbp = var_88

if (i != r12.d)
    do
        int64_t* r14_1 = *(rsi + (sx.q(i) << 3))
        
        if ((r14_1[0x11].b & 3) == 3)
            int64_t rbx_1 = sx.q(arg1[1].d)
            int32_t rax_5 = (rbx_1 + 1).d
            arg1[1].d = rax_5
            
            if (rax_5 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            int64_t* rbx_3 = (rbx_1 << 4) + *arg1
            rbx_3[1] = &arg1[2]
            
            if ((r14_1[0x11].b & 3) != 3)
                *rbx_3 = 0
            else
                (*(*r14_1 + 0x2e8))(r14_1)
                int64_t* rdx_5 = rbx_3[1]
                *rbx_3 = r14_1
                sub_141efe1c0(r14_1, rdx_5)
        
        int32_t i_3 = i + 1
        i = i_3
        
        if (i_3 s< rbp)
            while (*(rsi + (sx.q(i) << 3)) == 0)
                int32_t i_4 = i + 1
                i = i_4
                
                if (i_4 s>= rbp)
                    break
    while (i != r12.d)
    
    rbx = var_a8

if (rsi != 0)
    sub_140a74f90(rsi)
    rbx = var_a8

if (rbx != 0)
    sub_140a74f90(rbx)

void var_78
sub_141efdf70(sub_14077e140(&var_78, &arg1[2]))
return arg1
