// 函数: sub_141e719f0
// 地址: 0x141e719f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x50
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        int512_t zmm1
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x28))(rcx_1)
            int64_t* rcx_2 = *rbx_1
            zmm1.o = zx.o(0)
            (*(*rcx_2 + 0x10))(rcx_2, zmm1)
            int64_t* rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                *rbx_1 = 0
                (**rcx_3)(rcx_3, 1)
                int64_t* rcx_4 = *rbx_1
                
                if (rcx_4 != 0)
                    (**rcx_4)(rcx_4, 1)
        
        int64_t rcx_5 = rbx_1[-7]
        int64_t rax
        
        if (rcx_5 != 0)
            rax, zmm1 = sub_140a74f90(rcx_5)
        rbx_1 = &rbx_1[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
