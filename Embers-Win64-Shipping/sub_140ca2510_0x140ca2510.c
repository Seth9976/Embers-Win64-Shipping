// 函数: sub_140ca2510
// 地址: 0x140ca2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg1
int64_t rsi
rsi.b = 0
void* rbp_2 = &rdi[sx.q(arg1[1].d) * 0x28]

if (rdi != rbp_2)
    void* rbx_1 = &rdi[0xc]
    
    do
        int32_t rcx
        rcx.b = sub_140b5b8a0(*(rbx_1 - 0x2c), 0) == 0
        int32_t rcx_1
        
        if ((*(rbx_1 - 0x28) != 0 | rcx.b) == 0)
            rcx_1.b = sub_140b5b8a0(*(rbx_1 - 0x1c), 0) == 0
        
        if ((*(rbx_1 - 0x28) != 0 | rcx.b) != 0 || (*(rbx_1 - 0x18) != 0 | rcx_1.b) != 0)
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(*(rbx_1 - 0x14), 0) == 0
            bool rdx_1
            
            if ((*(rbx_1 - 0x10) != 0 | rcx_2.b) == 0)
                rdx_1 = sub_140b5b8a0(*(rbx_1 - 4), 0) == 0
            
            if (((*(rbx_1 - 0x10) != 0 | rcx_2.b) != 0 || (*rbx_1 != 0 | rdx_1) != 0)
                    && *(rbx_1 + 0x28) - *(rbx_1 + 0x54) s<= 0 && sub_140be0fa0(rbx_1 - 0x2c) != 0
                    && sub_140be0fa0(rbx_1 - 0x14) != 0)
                int32_t rcx_6
                
                if (*(rbx_1 - 4) != *(rbx_1 - 0x1c))
                    rcx_6.b = sub_140b5b8a0(*(rbx_1 - 0x24), 0) == 0
                
                if (*(rbx_1 - 4) == *(rbx_1 - 0x1c) || (*(rbx_1 - 0x20) != 0 | rcx_6.b) == 0)
                    rsi.b |= sub_140ca2650(rdi)
        
        rdi = &rdi[0x28]
        rbx_1 += 0xa0
    while (rdi != rbp_2)

return zx.q(rsi.b)
