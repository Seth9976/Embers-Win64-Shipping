// 函数: sub_1428feb70
// 地址: 0x1428feb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1 + 0xc0
int32_t* r8 = arg2

for (int32_t i = 0; i s< 9; )
    int32_t r10_1 = *rbx
    int32_t rax_1
    
    if (r10_1 != 0)
        int32_t rdi_1 = 0
        int32_t r11_1 = 0x10001
        int32_t r9_1 = 1
        
        while (true)
            int32_t temp1_1 = mods.dp.d(sx.q(r11_1), r10_1)
            
            if (temp1_1 == 0)
                break
            
            int32_t rax_7 = divs.dp.d(sx.q(r11_1 - temp1_1), r10_1) * r9_1
            r11_1 = r10_1
            r10_1 = temp1_1
            int32_t r9_2 = rdi_1
            rdi_1 = r9_1
            r9_1 = r9_2 - rax_7
        
        rax_1 = r9_1 + 0x10001
        
        if (r9_1 s>= 0)
            rax_1 = r9_1
    else
        rax_1 = 0
    
    *r8 = rax_1
    r8[1] = zx.d((neg.d(rbx[2])).w)
    r8[2] = zx.d((neg.d(rbx[1])).w)
    int32_t r10_2 = rbx[3]
    int32_t rax_14
    
    if (r10_2 != 0)
        int32_t rdi_2 = 0
        int32_t r11_3 = 0x10001
        int32_t r9_3 = 1
        
        while (true)
            int32_t temp1_3 = mods.dp.d(sx.q(r11_3), r10_2)
            
            if (temp1_3 == 0)
                break
            
            int32_t rax_20 = divs.dp.d(sx.q(r11_3 - temp1_3), r10_2) * r9_3
            r11_3 = r10_2
            r10_2 = temp1_3
            int32_t r9_4 = rdi_2
            rdi_2 = r9_3
            r9_3 = r9_4 - rax_20
        
        rax_14 = r9_3 + 0x10001
        
        if (r9_3 s>= 0)
            rax_14 = r9_3
    else
        rax_14 = 0
    
    r8[3] = rax_14
    
    if (i == 8)
        break
    
    int32_t rax_21 = rbx[-2]
    rbx -= 0x18
    r8[4] = rax_21
    i += 1
    r8[5] = rbx[5]
    r8 = &r8[6]

int32_t rcx_4 = arg2[1]
arg2[1] = arg2[2]
int32_t result = arg2[0x32]
arg2[2] = rcx_4
int32_t rcx_5 = arg2[0x31]
arg2[0x31] = result
arg2[0x32] = rcx_5
return result
