// 函数: sub_1420e59b0
// 地址: 0x1420e59b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_b8
__builtin_memset(&var_b8, 0, 0x78)
void* rdi = nullptr
uint32_t rcx_1
void* rdx
int64_t* r8

if (*(arg1 + 0xc) u>= 4)
    rcx_1 = data_1439c7a08
    int128_t var_38
    rdx = &var_38
    __builtin_memset(&var_38, 0, 0x30)
    r8 = nullptr
else
    if (sub_1420e4c80(arg1) == 0)
        r8 = nullptr
    else
        r8 = sub_1420dbf90(arg1)
    
    char rax_3 = *(arg1 + 0xc)
    rcx_1 = data_1439c7a08
    
    if (rax_3 != 4)
        rcx_1 = zx.d(rax_3)
    
    rdx = arg1 + 0x10

sub_1422e51d0(rcx_1, rdx, r8, &var_b8)
int64_t* rcx_2 = data_143f0f180
int64_t arg_10
(*(*rcx_2 + 0xf8))(rcx_2, &arg_10, &var_b8, &data_143f55540, 2, 1)

if (arg1 + 0x48 != &arg_10)
    int64_t* rbx_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) = arg_10
    arg_10 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_7
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_9 = sub_140a20af0()
                    
                    if (rax_9 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_9) u>> 0xe << 3))
                            + (zx.q(rax_9) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_9)

return sub_1405d1550(&arg_10)
