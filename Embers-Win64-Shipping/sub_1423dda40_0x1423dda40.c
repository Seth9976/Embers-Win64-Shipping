// 函数: sub_1423dda40
// 地址: 0x1423dda40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* r9_1 = &rax[sx.q(*(arg1 + 0xc40))]

if (rax != r9_1)
    while (*(*rax + 0x210) != arg2)
        rax = &rax[1]
        
        if (rax == r9_1)
            return 0
    
    int64_t* rax_2 = sub_1423dd310(arg1, arg2)
    
    for (int64_t* i = *rax_2; i != &i[sx.q(rax_2[1].d)]; i = &i[1])
        void* const result = *i
        
        if (result != 0 && *(result + 0xb8) == arg3)
            return result

return nullptr
