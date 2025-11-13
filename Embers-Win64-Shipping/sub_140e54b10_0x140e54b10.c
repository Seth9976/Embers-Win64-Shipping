// 函数: sub_140e54b10
// 地址: 0x140e54b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_14095cf80(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

void* rbp = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rbp != &arg2[2])
    sub_14059a8e0(rbp, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rbp + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rbp + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rbp = r10_1
        
        memcpy(rbp, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rcx_3 = *arg2
int32_t r10_2 = 0
int64_t i_1 = i_2

if (i_1 s> 0)
    int32_t r9_2 = 1
    void* r11_1 = *arg1 - rcx_3
    int32_t* rax_4 = rcx_3 + 0x18
    int64_t i
    
    do
        void* rcx_4 = arg2[4]
        void* rdx_4 = &arg2[2]
        
        if (rcx_4 != 0)
            rdx_4 = rcx_4
        
        int32_t rcx_5 = r10_2
        
        if (r10_2 s< 0)
            rcx_5 = r10_2 + 0x1f
        
        if ((*(rdx_4 + (sx.q(rcx_5 s>> 5) << 2)) & r9_2) == 0)
            *(rax_4 + r11_1 - 0x18) = rax_4[-6]
            *(rax_4 + r11_1 - 0x14) = rax_4[-5]
        else
            *(rax_4 + r11_1 - 0x18) = *(rax_4 - 0x18)
            *(rax_4 + r11_1 - 0x10) = *(rax_4 - 0x10)
            void* rcx_10 = *(rax_4 - 8)
            *(rax_4 + r11_1 - 8) = rcx_10
            
            if (rcx_10 != 0)
                *(rcx_10 + 8) += 1
            
            *(rax_4 + r11_1) ^= (*(rax_4 + r11_1) ^ *rax_4) & 1
            int32_t rdx_8 = ((*rax_4 ^ *(rax_4 + r11_1)) & 2) ^ *(rax_4 + r11_1)
            *(rax_4 + r11_1) = rdx_8
            int32_t r8_7 = ((*rax_4 ^ rdx_8) & 4) ^ rdx_8
            *(rax_4 + r11_1) = r8_7
            *(rax_4 + r11_1) = ((*rax_4 ^ r8_7) & 8) ^ r8_7
            *(rax_4 + r11_1 + 8) = *(rax_4 + 8)
            *(rax_4 + r11_1 + 0x10) = rax_4[4]
            *(rax_4 + r11_1 + 0x14) = rax_4[5]
        
        r10_2 += 1
        r9_2 = rol.d(r9_2, 1)
        rax_4 = &rax_4[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
