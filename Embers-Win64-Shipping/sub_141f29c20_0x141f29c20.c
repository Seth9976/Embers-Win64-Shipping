// 函数: sub_141f29c20
// 地址: 0x141f29c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax != 0)
label_141f29c3f:
    int64_t* rcx = *(rax + 0x1b0)
    
    if (rcx != 0)
        int32_t zmm0 = (zx.o(0)).d
        int32_t rax_2 = arg1[0x63].d & 1
        
        if (rax_2 == 0 && zmm0 f< *(arg1 + 0x204))
            sub_141ee8490(arg1)
        else if (rax_2 != 0)
            if (zmm0 f>= *(arg1 + 0x204))
                sub_141ee8490(arg1)
            else
                (*(*rcx + 0x160))(rcx, arg1)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141f29c3f

return sub_140920c10(&data_143a2d768, arg1) __tailcall
