// 函数: sub_141f4dd60
// 地址: 0x141f4dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
int32_t zmm0 = *(arg1 + 0x20)
int32_t var_38
int32_t* r8 = &var_38
void* rdx = data_143f11688
int64_t* rcx = data_143f0f180

if (rax != 0)
    rdx = rax

var_38 = zmm0
int64_t var_34 = 0
int32_t var_2c = 0
int64_t var_28 = *(rdx + 0x10)
int64_t rdx_1 = *(arg1 + 0x10)
int64_t var_20 = *(rdx + 0x18)
int64_t rax_3 = *rcx

if (rdx_1 != 0)
    return (*(rax_3 + 0x100))(rcx, zmm0, rdx_1, r8)

int32_t var_48 = 2
void* arg_18
(*(rax_3 + 0xf8))(rcx, zmm0, &arg_18, r8, &data_143f555f0, 1)
void* const rbx = arg_18
void* const arg_10 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = arg_10

sub_1405d1550(&arg_18)

if (arg1 + 0x10 != &arg_10)
    int64_t* rdi_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = rbx
    void* rbx_1 = nullptr
    arg_10 = nullptr
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_6
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_6 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_8 = sub_140a20af0()
                    
                    if (rax_8 != 0)
                        rbx_1 = *(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                            + (zx.q(rax_8) & 0x3fff) * 0x18
                    
                    *(rbx_1 + 8) = rdi_1
                    sub_1405a42f0(&data_143f02390, rax_8)

return sub_1405d1550(&arg_10)
