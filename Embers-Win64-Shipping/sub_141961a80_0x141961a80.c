// 函数: sub_141961a80
// 地址: 0x141961a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141961bf0(arg1, arg2)
void* rbp = nullptr
*arg1 = &data_1430032d8
arg1[2] = 0
int64_t* rcx = data_143f0f180
int64_t* arg_18
(*(*rcx + 0xa8))(rcx, &arg_18)

if (&arg1[2] == &arg_18)
label_141961b64:
    int64_t* rbx_2 = arg_18
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            if (rbx_2[2].b == 0)
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_12 = sub_140a20af0()
                    
                    if (rax_12 != 0)
                        rbp = *((zx.q(rax_12) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rax_12) & 0x3fff) * 0x18
                    
                    *(rbp + 8) = rbx_2
                    sub_1405a42f0(&data_143f02390, rax_12)
            else
                (**rbx_2)(rbx_2, 1)
else
    int64_t* rbx_1 = arg1[2]
    arg1[2] = arg_18
    arg_18 = nullptr
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            if (rbx_1[2].b == 0)
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_5 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_5)
                    void* const rax_6
                    
                    if (rax_5 != 0)
                        rax_6 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_6 = nullptr
                    
                    *(rax_6 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)
            else
                (**rbx_1)(rbx_1, 1)
        
        goto label_141961b64

return arg1
