// 函数: sub_140954620
// 地址: 0x140954620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr
int64_t var_18

if (arg1 + 0x58 != &var_18)
    *(arg1 + 0x58) = 0
    var_18 = 0
    sub_1405aeff0(arg1 + 0x60, &var_10)
    int64_t* rdx_2 = var_10
    
    if (rdx_2 != 0)
        rdx_2[1].d -= 1
        
        if (rdx_2[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1, rdx_2)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_3 = var_10
                (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return sub_140cd7d40(arg1) __tailcall
