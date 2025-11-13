// 函数: sub_141d5ca50
// 地址: 0x141d5ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1

if (*(arg1 + 0xa8) == 0)
    rdx_1 = 1
else
    rdx_1 = zx.d(sub_1423c1fe0(sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0))), *(arg1 + 0x90)))

if (*(arg1 + 0xac) == rdx_1)
    return 

void* r8_1 = *(arg1 + 0x90)
void* rdi_1 = nullptr
*(arg1 + 0xac) = rdx_1
int32_t rcx_3 = 0
char rax_4 = *(r8_1 + 0xb9)

if (rax_4 != 0)
    rcx_3.b = rax_4 != 1
    rcx_3 += 1

char r9_1 = *(r8_1 + 0xb8)
int32_t rax_5 = 0

if (r9_1 != 0)
    rax_5.b = r9_1 != 1
    rax_5 += 1

char var_26_1 = rcx_3.b
int64_t* rcx_4 = data_143f0f180
char var_28 = rdx_1.b
int32_t var_1c_1 = 0x7f7fffff
char var_27_1 = rax_5.b
char var_25_1 = 0
int64_t var_24_1 = 0
int64_t var_18_1 = 0
char var_10_1 = 0
int64_t arg_10
(*(*rcx_4 + 0x28))(rcx_4, &arg_10, &var_28, r9_1, var_28)

if (arg1 + 0x28 != &arg_10)
    int64_t* rbx_1 = *(arg1 + 0x28)
    *(arg1 + 0x28) = arg_10
    arg_10 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_9
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_9 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
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
                    int32_t rax_11 = sub_140a20af0()
                    
                    if (rax_11 != 0)
                        rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_11) u>> 0xe << 3))
                            + (zx.q(rax_11) & 0x3fff) * 0x18
                    
                    *(rdi_1 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_11)

sub_1405d1550(&arg_10)
