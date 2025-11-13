// 函数: sub_141d1eef0
// 地址: 0x141d1eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t i_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t i_2 = sx.q(i_3)
int128_t* result = (*r8)(arg1, zx.q(i_2.d), r8)
int32_t rdi = 0
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t rsi_1 = 0
    int64_t i
    
    do
        int64_t* rdx_1 = arg2[1]
        result = (sx.q(rdi) << 4) + arg1[1]
        int64_t* rbx = *(rdx_1 + rsi_1 + 8)
        int64_t var_38 = *(rdx_1 + rsi_1)
        
        if (rbx != 0)
            rbx[1].d += 1
        
        if (&var_38 != result)
            var_38.o = *result
            *result = var_38.o
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                result = (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx + 8))(rbx, 1)
        
        rdi += 1
        rsi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
