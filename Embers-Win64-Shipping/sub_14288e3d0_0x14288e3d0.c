// 函数: sub_14288e3d0
// 地址: 0x14288e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* var_28 = nullptr
int64_t i_1 = 0

if ((not(test_bit(arg3, 0xc)) || arg6 u<= 0) && sub_142851cf0(arg1, &var_28, &i_1) != 0)
    void* rcx = var_28
    *arg4 = 0
    *arg5 = 0
    
    if (rcx != 0)
        int64_t i = i_1
        
        if (i - 1 u<= 0x7ffffffffffffffe)
            while (i u>= 4)
                int64_t var_10_1 = i - 4
                
                if (i - 4 u< 2)
                    break
                
                void* var_18_1
                var_18_1.o = (rcx + 6).o
                
                if (i - 6 u< 2)
                    break
                
                uint64_t rdx_4 = zx.q(*(rcx + 6)) << 8 | zx.q(*(rcx + 7))
                void* var_18_2 = rcx + 8
                int64_t var_10_3 = i - 8
                
                if (i - 8 u< rdx_4)
                    break
                
                int64_t i_2 = i - 8 - rdx_4
                void* var_18_3
                var_18_3.o = (rcx + 8 + rdx_4).o
                
                if ((zx.d(*(rcx + 4)) << 8 | zx.d(*(rcx + 5))) == arg2)
                    *arg4 = rcx + 8
                    *arg5 = rdx_4
                    return 1
                
                if (i_2 == 0)
                    return 0
                
                i = i_2
                rcx = var_18_3
    
    *arg7 = 0x50
    return 0xffffffff

return 0
