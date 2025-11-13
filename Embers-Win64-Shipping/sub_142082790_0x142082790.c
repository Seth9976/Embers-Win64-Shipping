// 函数: sub_142082790
// 地址: 0x142082790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x4d].d s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    void* rbp_1 = *(rdi_1 + arg1[0x4c])
    
    if (rbp_1 != 0)
        void* rax_1 = sub_1424cd650()
        void* rdx_1 = *(rbp_1 + 0x10)
        int64_t rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            (*(*arg1 + 0x5e8))(arg1, rdx_1)
            break
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< arg1[0x4d].d)
