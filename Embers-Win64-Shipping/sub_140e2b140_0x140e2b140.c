// 函数: sub_140e2b140
// 地址: 0x140e2b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* rbp = arg2

if (arg4 != 0)
    void* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int128_t* rcx = rbp
        rbp += 0x28
        *rcx = *(rdi_1 - 0x10)
        rcx[1].b = *rdi_1
        int64_t* rbx_1 = *(rdi_1 + 0x10)
        int64_t var_18 = *(rdi_1 + 8)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_18 != rcx + 0x18)
            var_18.o = *(rcx + 0x18)
            *(rcx + 0x18) = var_18.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
