// 函数: sub_141e97440
// 地址: 0x141e97440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x51]
int32_t rax_1
rax_1.b = (*(*rcx + 0x630))(rcx).b & not.b(arg1[0x66].b)
rax_1.b &= 1

if (rax_1.b != 0)
    if ((arg1[0x66].d & 0x400) != 0)
        (*(*arg1 + 0x848))(arg1)
        arg2.o = zx.o(0)
        
        if (not(arg3 f<= 0f))
            int32_t rax_3
            
            if ((arg1[0x66].b & 4) != 0)
                (*(*arg1 + 0x848))(arg1)
                
                if (not(arg3 f<= *(arg1 + 0x334)))
                    rax_3 = arg1[0x69].d
                    int32_t rcx_3 = *(arg1 + 0x344)
                    
                    if (rax_3 s< rcx_3)
                        rax_3.b = 1
                        return rax_3
                    
                    if ((arg1[0x66].d & 0x400) != 0 && rax_3 == rcx_3)
                        rax_3.b = 1
                        return rax_3
            
            rax_3.b = 0
            return rax_3
    
    if (arg1[0x69].d == 0)
        int64_t* rcx_4 = arg1[0x51]
        
        if ((*(*rcx_4 + 0x548))(rcx_4, arg2) != 0)
            int32_t rax_8
            rax_8.b = arg1[0x69].d + 1 s< *(arg1 + 0x344)
            return rax_8
    
    rax_1.b = arg1[0x69].d s< *(arg1 + 0x344)

return rax_1
