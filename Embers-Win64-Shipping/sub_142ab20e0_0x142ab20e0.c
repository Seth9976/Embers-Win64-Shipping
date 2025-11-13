// 函数: sub_142ab20e0
// 地址: 0x142ab20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
rbx.b = 0
int32_t rax = sub_1405f8990(*(arg1 + 8))
int32_t rbp = 0

if (rax s<= 0)
    return 0

do
    int32_t* rax_1 = sub_142a86e70(*(arg1 + 8), arg1 + 0x10)
    int32_t* rdi_1 = rax_1
    
    if (rax_1 == 0)
        int64_t* rcx_2 = *(arg1 + 8)
        *(arg1 + 0x10) = 0xffffffff
        rdi_1 = sub_142a86e70(rcx_2, arg1 + 0x10)
    
    if (rdi_1 == 0)
        break
    
    if (arg2 != 0)
    label_142ab2186:
        rbx = *(rdi_1 + 8)
        sub_142a87020(*(arg1 + 8), rdi_1)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            *(arg1 + 0x14) -= 1
            
            if (sub_1408e52d0(rbx) != 0)
                rbx[2] = 0
            else
                (**rbx)(rbx, 1)
        
        rbx.b = 1
    else
        void* rcx_3 = *(rdi_1 + 8)
        void* rax_3 = *(rdi_1 + 0x10)
        
        if (rcx_3 != *(arg1 + 0x30) || *(rax_3 + 8) != 0)
            if (*(rax_3 + 0xc) == 0)
                goto label_142ab2186
            
            if (*(rcx_3 + 8) == 1 && sub_1408e52d0(rcx_3) == 0)
                goto label_142ab2186
    
    rbp += 1
while (rbp s< rax)

return zx.q(rbx.b)
