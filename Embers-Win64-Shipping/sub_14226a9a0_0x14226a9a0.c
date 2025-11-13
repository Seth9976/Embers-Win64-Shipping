// 函数: sub_14226a9a0
// 地址: 0x14226a9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg1
int64_t* rbx = r14
void* rbp = &r14[sx.q(arg1[1].d)]

if (r14 != rbp)
    do
        int64_t rdi_1
        
        if (*rbx == 0)
            rdi_1 = 0
        else
            void* rax_1 = sub_1424a20d0()
            
            if (rax_1 == 0)
                rdi_1 = 0
            else
                rdi_1 = *rbx
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rdi_1 = 0
        
        int64_t rdx_1
        
        if (*arg2 == 0)
            rdx_1 = 0
        else
            void* rax_4 = sub_1424a20d0()
            
            if (rax_4 == 0)
                rdx_1 = 0
            else
                rdx_1 = *arg2
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    rdx_1 = 0
        
        if (rdi_1 == rdx_1)
            return zx.q(((rbx - r14) s>> 3).d)
        
        rbx = &rbx[1]
    while (rbx != rbp)

return 0xffffffff
