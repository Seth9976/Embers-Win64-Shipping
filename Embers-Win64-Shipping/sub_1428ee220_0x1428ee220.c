// 函数: sub_1428ee220
// 地址: 0x1428ee220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = sub_1428eddb0(arg1, arg2, arg3)

if (rax != 0)
    int32_t* rcx = rax[1]
    
    if (rcx != 0)
        int32_t rax_1 = *rcx
        
        if (rax_1 != 0 || *(rcx + 8) == 0)
            if (rax_1 == 1)
                int64_t rax_2 = *(rcx + 8)
                
                if (rax_2 != 0)
                    return rax_2
            
            void* rax_3 = sub_142898ba0()
            
            if (rax_3 != 0)
                if (arg2 == 1)
                    sub_142898e00(rax_3, sub_1428ee4c0)
                else if (arg2 == 2)
                    sub_142898e00(rax_3, sub_1428ee4e0)
                
                *rax[1] = 1
                *(rax[1] + 8) = rax_3
                return rax_3

return 0
