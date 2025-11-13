// 函数: sub_142640050
// 地址: 0x142640050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140d3c6e0(arg1 + 0x50)
uint64_t rbx = rax

if (rax != 0)
label_1426400df:
    void* rax_4 = sub_140bdf2e0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        *arg2 = 0
    else
        void* rax_7 = sub_142452380()
        
        if (rax_7 == 0)
            *arg2 = 0
        else
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                *arg2 = 0
            else
                *arg2 = rbx
else if (*(arg1 + 0x60) == 0)
    *arg2 = 0
else
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != *(arg1 + 0x58) || *(arg1 + 0x50) != 0xffffffff)
        void* rax_1 = sub_140d2bce0(arg1 + 0x60)
        sub_140d3a3a0(arg1 + 0x50, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            *(arg1 + 0x58) = rax_2
        
        uint64_t rax_3 = sub_140d3c6e0(arg1 + 0x50)
        rbx = rax_3
        
        if (rax_3 != 0)
            goto label_1426400df
        
        *arg2 = 0
    else
        *arg2 = 0

return arg2
