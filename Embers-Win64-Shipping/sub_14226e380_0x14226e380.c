// 函数: sub_14226e380
// 地址: 0x14226e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x298) != 0)
    void* rax_1 = sub_14254f450()
    int64_t* rdi_1 = *(arg1 + 0x298)
    void* rdx = rdi_1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rax_4
        int64_t rax_5
        void* rdx_1
        
        if (rdi_1 != 0)
            rax_4 = sub_14254f450()
            rdx_1 = rdi_1[2]
            rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rdi_1 == 0 || rax_5.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rdi_1 = nullptr
        
        (*(*rdi_1 + 0x270))(rdi_1, arg2, 0)
        return arg2

*arg2 = 0
arg2[1] = 0
return arg2
