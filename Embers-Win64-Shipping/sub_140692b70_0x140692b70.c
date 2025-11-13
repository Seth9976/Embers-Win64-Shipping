// 函数: sub_140692b70
// 地址: 0x140692b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1->__offset(0xa0).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx)

_Mtx_destroy_in_situ(&arg1[1])
return _Cnd_destroy_in_situ(arg1) __tailcall
