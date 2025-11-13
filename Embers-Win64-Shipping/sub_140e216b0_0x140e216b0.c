// 函数: sub_140e216b0
// 地址: 0x140e216b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* rdx = *(rdi_1 + *(arg1 + 0x10))
    
    if (*rdx == 0)
    label_140e21733:
        sub_140911e80(arg1 + 0x10, i, 1, 1)
        i -= 1
        rdi_1 -= 0x10
    else
        void* rax_2 = rdx[1]
        
        if (rax_2 == 0 || *(rax_2 + 8) s<= 0)
            goto label_140e21733
        
        int64_t j = rdx[2]
        
        if (j == 0)
            goto label_140e21733
        
        int64_t* rax = *arg2
        void* r8_1 = &rax[sx.q(arg2[1].d)]
        
        if (rax == r8_1)
            goto label_140e21733
        
        while (*rax != j)
            rax = &rax[1]
            
            if (rax == r8_1)
                goto label_140e21733
    
    i += 1
    rdi_1 = &rdi_1[2]
while (i s< *(arg1 + 0x18))
