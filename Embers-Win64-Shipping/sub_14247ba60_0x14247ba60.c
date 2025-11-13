// 函数: sub_14247ba60
// 地址: 0x14247ba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0xc0)

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = sub_1408464b0(arg2 + 0xb0)
int64_t* rbx = *(arg2 + 0x88)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx + 8))(rbx, zx.q(rsi_1))

int64_t rcx_4 = *(arg2 + 0x70)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
