// 函数: sub_1423742f0
// 地址: 0x1423742f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int512_t zmm0
zmm0.o = zx.o(0)
int128_t var_18 = zx.o(0)
int64_t result = (*(rax + 0x60))(zmm0, &var_18, 0, 0, 0, 0, var_18)
int64_t* rbx = var_18:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
