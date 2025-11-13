// 函数: sub_1420735e0
// 地址: 0x1420735e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[1].d
int32_t r13 = 0
int64_t i_1 = sx.q(arg1[1].d)
int32_t rbx = -1
int64_t j_2 = sx.q(arg3)
int32_t r11 = -1
int32_t rax = 0

if (r10 s> 0)
    int32_t* rcx = nullptr
    
    do
        int64_t rdx = *arg2
        
        if (rbx == 0xffffffff && not(*(arg1 + 0x54) f> *(rcx + rdx)))
            rbx = rax
        else if (arg1[0xb].d f< *(rcx + rdx))
            r11 = rax
            break
        
        rax += 1
        rcx = &rcx[0xb]
    while (rax s< r10)

int32_t rcx_1 = r10

if (r11 != 0xffffffff)
    rcx_1 = r11

int32_t rdi_1 = rcx_1 - rbx

if (rcx_1 != rbx)
    int32_t rax_2 = r10 - rdi_1
    
    if (rax_2 != rbx)
        memmove(sx.q(rbx) * 0x2c + *arg2, sx.q(rcx_1) * 0x2c + *arg2, (rax_2 - rbx) * 0x2c)
        r10 = arg2[1].d
    
    arg2[1].d = r10 - rdi_1
    sub_141febab0(arg2)

int32_t rdi_2 = arg2[1].d
int32_t rax_7 = rdi_2 + i_1.d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_140ac0cd0(arg2)

int32_t* r12 = sx.q(rbx) * 0x2c
void* rdx_5 = *arg2 + r12
uint32_t result = memmove(i_1 * 0x2c + rdx_5, rdx_5, (rdi_2 - rbx) * 0x2c)

if (i_1 s> 0)
    int32_t* rbx_1 = nullptr
    int64_t i
    
    do
        *(r12 + *arg2) = *(rbx_1 + *arg1)
        result = zx.d(*(*arg1 + rbx_1 + 0x4c))
        *(*arg2 + r12 + 0x28) = result.b
        
        if (j_2 s> 0)
            void* r9 = &r12[4]
            int32_t r8_2 = arg4
            int64_t j_1 = j_2
            int64_t r10_3 = sx.q(r13) * 0x50
            int64_t j
            
            do
                int32_t* rdx_8 = *arg1 + 4 + r10_3
                
                if (r8_2 != 0)
                    if (r8_2 == 1)
                        rdx_8 = &rdx_8[3]
                    else if (r8_2 == 2)
                        rdx_8 = &rdx_8[1]
                    else if (r8_2 == 3)
                        rdx_8 = &rdx_8[4]
                    else if (r8_2 == 4)
                        rdx_8 = &rdx_8[2]
                    else
                        rdx_8 = &rdx_8[5]
                
                *(*arg2 + r9 - 0xc) = *rdx_8
                int32_t* rdx_11 = *arg1 + 0x1c + r10_3
                
                if (r8_2 != 0)
                    if (r8_2 == 1)
                        rdx_11 = &rdx_11[3]
                    else if (r8_2 == 2)
                        rdx_11 = &rdx_11[1]
                    else if (r8_2 == 3)
                        rdx_11 = &rdx_11[4]
                    else if (r8_2 == 4)
                        rdx_11 = &rdx_11[2]
                    else
                        rdx_11 = &rdx_11[5]
                
                *(r9 + *arg2) = *rdx_11
                uint32_t* rdx_14 = *arg1 + 0x34 + r10_3
                
                if (r8_2 != 0)
                    if (r8_2 == 1)
                        rdx_14 = &rdx_14[3]
                    else if (r8_2 == 2)
                        rdx_14 = &rdx_14[1]
                    else if (r8_2 == 3)
                        rdx_14 = &rdx_14[4]
                    else if (r8_2 == 4)
                        rdx_14 = &rdx_14[2]
                    else
                        rdx_14 = &rdx_14[5]
                
                r8_2 += 1
                result = *rdx_14
                *(*arg2 + r9 + 0xc) = result
                r9 += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r13 += 1
        r12 = &r12[0xb]
        rbx_1 = &rbx_1[0x14]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
