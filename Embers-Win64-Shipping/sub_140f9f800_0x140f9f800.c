// 函数: sub_140f9f800
// 地址: 0x140f9f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140fb2490(arg1 + 0x310)
void* rbp = *rax

if (*(arg1 + 0x350) != 0)
    int64_t* rcx_1 = *(arg1 + 0x348)
    
    if (rcx_1 != 0)
        int64_t* var_28 = nullptr
        int32_t var_20 = 0
        
        if (arg1 + 0x348 != &var_28)
            (*(*rcx_1 + 0x40))(rcx_1, &var_28)
        
        int64_t* rdx
        rdx.b = 1
        sub_140599630(rbp + 0x20, rdx.b)
        int64_t rdi = 0
        
        if (var_20 != 0)
            int64_t* rcx_3 = var_28
            void arg_8
            
            if (rcx_3 != 0)
                rdi = *(*(*rcx_3 + 0x30))(rcx_3, &arg_8)
        
        int64_t r14 = sx.q(*(rbp + 0x28))
        int32_t rax_4 = (r14 + 1).d
        *(rbp + 0x28) = rax_4
        
        if (rax_4 s> *(rbp + 0x2c))
            sub_1405a4f90(rbp + 0x20)
        
        int64_t** rcx_7 = (r14 << 4) + *(rbp + 0x20)
        *rcx_7 = nullptr
        *rcx_7 = var_28
        int32_t rax_6 = var_20
        var_28 = nullptr
        rcx_7[1].d = rax_6
        int64_t* rcx_8 = var_28
        int32_t var_20_1 = 0
        
        if (rcx_8 != 0)
            rax_6 = sub_140a74f90(rcx_8)
        
        *(arg1 + 0x358) = rdi
        return rax_6

*(arg1 + 0x358) = 0
return rax
