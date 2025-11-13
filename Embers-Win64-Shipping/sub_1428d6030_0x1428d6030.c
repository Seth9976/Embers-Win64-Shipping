// 函数: sub_1428d6030
// 地址: 0x1428d6030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1[0x11].d == 0xffffffff)
    return 0

int32_t i_5 = sub_142890e90(*arg1)
int64_t i_4 = sx.q(i_5)
*arg3 = i_4

if (arg2 != 0)
    int64_t rcx_1 = sx.q(arg1[0x11].d)
    
    if (rcx_1.d != i_4.d)
        *(rcx_1 + arg1 + 0x68) = 0x80
        int32_t rax_3 = i_4.d - rcx_1.d
        
        if (rax_3 s> 1)
            memset(rcx_1 + 0x69 + arg1, 0, sx.q(rax_3 - 1))
        
        if (i_4.d s> 0)
            void* rcx_5 = &arg1[5]
            int64_t i_3 = i_4
            int64_t i
            
            do
                *(arg2 - arg1 + rcx_5 - 0x28) = *(rcx_5 + 0x40) ^ *rcx_5
                rcx_5 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
    else if (i_5 s> 0)
        void* rcx_2 = &arg1[1]
        int64_t i_2 = i_4
        int64_t i_1
        
        do
            *(arg2 - arg1 + rcx_2 - 8) = *(rcx_2 + 0x60) ^ *rcx_2
            rcx_2 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (sub_142891550(*arg1, arg2, arg2, zx.q(i_4.d)) == 0)
        sub_1428b8960(arg2, i_4)
        return 0

return 1
