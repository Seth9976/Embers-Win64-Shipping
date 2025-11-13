// 函数: sub_1409546c0
// 地址: 0x1409546c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr
int64_t var_18

if (arg1 + 0x60 != &var_18)
    *(arg1 + 0x60) = 0
    var_18 = 0
    sub_1405aeff0(arg1 + 0x68, &var_10)
    int64_t* rcx_2 = var_10
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_4 = var_10
                (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

sub_140975040(arg1)
return sub_140cd7d40(arg1) __tailcall
