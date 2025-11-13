// 函数: sub_142099630
// 地址: 0x142099630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg2
int64_t rbx
rbx.b = 1

if (arg1[0x48].d != 0)
    rbx.b = 0
    void* i = *(arg2 + 0x298)
    
    if (i != 0)
        void* rax_1 = sub_142531230()
        arg2 = *(i + 0x10)
        arg3 = rax_1 + 0x30
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == arg3)
            int64_t rax_5 = (*(*arg1 + 0x150))(arg1, arg2)
            void** rax_6 = sub_1423dd2a0(data_143f5b298, rax_5)
            arg3 = *rax_6
            int64_t* rcx_3 = arg3
            arg2 = arg3 + (sx.q(rax_6[1].d) << 3)
            int32_t rcx_4
            
            if (arg3 == arg2)
            label_1420996ce:
                rcx_4 = -1
            else
                while (*rcx_3 != i)
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == arg2)
                        goto label_1420996ce
                
                rcx_4 = ((rcx_3 - arg3) s>> 3).d
            
            rbx = 0
            
            if (rcx_4 + 1 == arg1[0x48].d)
                rbx = 1

if ((*(arg1 + 0x5b) & 1) != 0)
    return zx.q(rbx.b)

char rcx_6 = rbx.b

if ((*(*r14 + 0x6a8))(r14, arg2, arg3) == 0)
    rcx_6 = 0

return zx.q(rcx_6)
