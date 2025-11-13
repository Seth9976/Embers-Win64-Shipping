// 函数: sub_141e07760
// 地址: 0x141e07760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
int64_t* rax

if (arg4 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t* rdi_1 = nullptr
        int128_t zmm6 = zx.o(0)
        
        do
            int64_t* rcx_3 = *(rdi_1 + *(arg1 + 0x78))
            
            if (rcx_3 != 0 && *rcx_3 != 0 && not(zmm6.d f== rcx_3[0x2a].d))
                rax, zmm6 = sub_141e30fc0(rcx_3, &arg_10, &arg_18)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(arg1 + 0x80))
else
    int32_t arg_20
    sub_140865c40(arg1 + 0x88, &arg_20, arg4)
    int64_t rax_1 = sx.q(arg_20)
    void* rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax_1 * 0x18
    
    rax = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax = nullptr
    
    if (rax != 0)
        int64_t* rcx_2 = *rax
        
        if (rcx_2 != 0)
            sub_141e30fc0(rcx_2, &arg_10, &arg_18)
