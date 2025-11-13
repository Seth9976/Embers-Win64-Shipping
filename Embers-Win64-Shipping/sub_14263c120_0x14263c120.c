// 函数: sub_14263c120
// 地址: 0x14263c120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t* r14 = arg1[0x18]
int64_t* i = &r14[arg1[0x19]]
uint64_t r12_1 = sx.q(arg1[0x19].d) << 3 u>> 3

if (r14 u> i)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rbx_1 = *r14
        
        if (rbx_1 != 0 && (*(rbx_1 + 0x3c) & 1) != 0)
            for (i = arg1[0x1e]; i != &i[sx.q(arg1[0x1f].d)]; i = &i[1])
                if (*i == rbx_1)
                    goto label_14263c213
            
            (*(*rbx_1 + 0x268))(rbx_1, arg1)
            int64_t rbp_1 = sx.q(arg1[0x1f].d)
            int32_t rax_2 = (rbp_1 + 1).d
            arg1[0x1f].d = rax_2
            
            if (rax_2 s> *(arg1 + 0xfc))
                sub_1405a4d70(&arg1[0x1e])
            
            i = arg1[0x1e]
            i[rbp_1] = rbx_1
            
            if (arg1[0x1f].d == 1)
                i = (*(*arg1 + 0x3e8))(arg1)
                
                if ((*(arg1 + 0x8a) & 1) != i.b)
                    int64_t r9_1 = *arg1
                    i = (*(r9_1 + 0x278))(arg1, zx.q(i.b), 0, r9_1)
        
    label_14263c213:
        r14 = &r14[1]
        r15 += 1
    while (r15 != r12_1)

return i
