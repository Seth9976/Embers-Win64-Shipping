// 函数: sub_141f3b1e0
// 地址: 0x141f3b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
sub_140bd9620(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r9 = sx.q(arg1[9].d)

if (r9.d != 0)
    void* rdx_2 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rdx_2 != 0)
        r8 = rdx_2
    
    int32_t i_1 = *(r8 + (((sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & (r9 - 1)) << 2))
    
    if (i_1 != 0xffffffff)
        int64_t arg_8
        int64_t arg_10
        int32_t i
        int32_t j
        
        do
            arg_8 = arg2
            int64_t rcx_3 = sx.q(i_1) * 3
            int64_t rax_6 = *arg1
            i = *(rax_6 + (rcx_3 << 3) + 0x10)
            j = i
            arg_10 = *(rax_6 + (rcx_3 << 3))
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            i_1 = i
        while (i != 0xffffffff)
        
        while (i_1 != 0xffffffff)
            if (sub_14077a170(*arg1 + ((sx.q(i_1) * 3 + 1) << 3), &arg_18) != 0)
                return *arg1 + sx.q(i_1) * 0x18 + 8
            
            i_1 = j
            
            if (i == 0xffffffff)
                break
            
            do
                arg_8 = arg2
                int64_t rcx_8 = sx.q(i_1) * 3
                int64_t rax_12 = *arg1
                j = *(rax_12 + (rcx_8 << 3) + 0x10)
                arg_10 = *(rax_12 + (rcx_8 << 3))
                
                if (sub_14077a170(&arg_10, &arg_8) != 0)
                    break
                
                i_1 = j
            while (j != 0xffffffff)
            
            i = j

return 0
