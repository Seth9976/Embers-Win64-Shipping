// 函数: sub_142778290
// 地址: 0x142778290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r14 = arg1[0x10]
int32_t r12 = arg1[0xf].d
int64_t* i = &r14[arg1[0x11]]
uint64_t r15_1 = sx.q(arg1[0x11].d) << 3 u>> 3

if (r14 u> i)
    r15_1 = 0

if (r15_1 != 0)
    int64_t rdi
    int64_t arg_10 = rdi
    
    do
        void* rbx_1 = *r14
        
        if (r12 == 0)
        label_142778313:
            rdi.b = 1
        else
            for (i = arg1[0xe]; i != &i[sx.q(arg1[0xf].d)]; i = &i[1])
                if (*i == rbx_1)
                    goto label_142778313
            
            rdi.b = 0
        
        if (*(rbx_1 + 0x80) != 0)
            i = sub_141d3cff0(rbx_1)
            
            if (i.b != 0)
                int32_t rax_6 = *(rbx_1 + 0x448) + *(rbx_1 + 0x438) + *(rbx_1 + 0x428)
                    + *(rbx_1 + 0x418) + *(rbx_1 + 0x408) + *(rbx_1 + 0x3f8)
                i = zx.q(rax_6 + *(rbx_1 + 0x3e8))
                
                if (rax_6 != neg.d(*(rbx_1 + 0x3e8)) && rdi.b != 0)
                    i = sub_141d34720(*arg1, rbx_1, &arg1[1])
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

return i
