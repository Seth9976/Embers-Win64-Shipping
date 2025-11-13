// 函数: sub_140cb1d30
// 地址: 0x140cb1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        goto label_140cb1dd1

if (*(arg1 + 0x78) != 0)
    int32_t rax_1 = (rdx + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *((rdx << 3) + *arg2) = arg1
    void* arg_8
    
    for (int64_t* i_1 = *(*(arg1 + 0x78) + 0x70); i_1 != 0; i_1 = i_1[0xb])
        char rax_4
        rax_4, i = (*(*i_1 + 0x110))(i_1, arg2)
        
        if (rax_4 != 0)
            i.b = 1
            arg_8 = arg1
            sub_140838b90(arg2, &arg_8, i.b)
            int64_t rax_5
            rax_5.b = 1
            return rax_5
    
    i.b = 1
    arg_8 = arg1
    sub_140838b90(arg2, &arg_8, i.b)

label_140cb1dd1:
void* rax
rax.b = 0
return rax
