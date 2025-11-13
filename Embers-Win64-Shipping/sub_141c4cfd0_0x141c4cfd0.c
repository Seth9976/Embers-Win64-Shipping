// 函数: sub_141c4cfd0
// 地址: 0x141c4cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int64_t* rdx_2
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rdi) << 2)); i != 0xffffffff; 
            i = rdx_2[7].d)
        rdx_2 = (sx.q(i) << 6) + *arg1
        
        if (*rdx_2 == *arg3 && rdx_2[1].d == arg3[1].d)
            if (i != 0xffffffff && rdx_2 != 0)
                return &rdx_2[2]
            
            break

int64_t* arg_20 = arg3
int32_t arg_8
sub_141c4ce50(arg1, &arg_8, rdi.d, &arg_20, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x10
