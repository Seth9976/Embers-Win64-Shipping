// 函数: sub_1423a66c0
// 地址: 0x1423a66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
(*(*rcx + 0x220))(rcx, *arg1, arg1[1])
int64_t* rbx = *arg1
int32_t result = rbx[1].d
rbx[1].d -= 1
void* rsi = nullptr

if (result == 1)
    char rax_1
    
    if (rbx[2].b == 0 && data_143f0f1d0 == 0)
        rax_1 = sub_1405949a0()
    
    if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
        result = (**rbx)(rbx, 1)
    else
        result = 0
        bool z_1
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_1 = true
        else
            result = *(rbx + 0xc)
            z_1 = false
        
        if (z_1)
            int32_t rax_2 = sub_140a20af0()
            uint64_t rdx_1 = zx.q(rax_2)
            void* const rax_3
            
            if (rax_2 != 0)
                rax_3 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_1.d) & 0x3fff) * 0x18
            else
                rax_3 = nullptr
            
            *(rax_3 + 8) = rbx
            result = sub_1405a42f0(&data_143f02390, rdx_1.d)

int64_t* rbx_1 = arg1[1]
rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    if (rbx_1[2].b != 0)
        return (**rbx_1)(rbx_1, 1)
    
    if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
        return (**rbx_1)(rbx_1, 1)
    
    result = 0
    bool z_2
    
    if (0 == *(rbx_1 + 0xc))
        *(rbx_1 + 0xc) = 1
        z_2 = true
    else
        result = *(rbx_1 + 0xc)
        z_2 = false
    
    if (z_2)
        int32_t rax_9 = sub_140a20af0()
        
        if (rax_9 != 0)
            rsi = *((zx.q(rax_9) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_9) & 0x3fff) * 0x18
        
        *(rsi + 8) = rbx_1
        return sub_1405a42f0(&data_143f02390, rax_9)

return result
