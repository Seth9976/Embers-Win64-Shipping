// 函数: sub_14195a420
// 地址: 0x14195a420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi_1

if (arg2 == 0)
    rsi_1 = nullptr
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rsi_1 = *(arg2 + 0x20)

arg2.b = 1
int32_t r14 = *(rsi_1 + 0x10)
int32_t r12_1 = data_1439c7498 - 1
void* rax_1 = sub_14190d690(arg1, arg2.b)
int64_t rdx = sx.q(r12_1) * 5
int64_t rcx_2 = *(rax_1 + 8)

if (*(rcx_2 + (rdx << 3) + 0x10) != 0x8c2a || *(rcx_2 + (rdx << 3) + 0x14) != r14)
    int32_t var_38_1 = 1
    sub_14190a090(arg1, rax_1, r12_1, 0x8c2a, r14, 0xffffffff)

uint64_t rdx_2 = zx.q(*(zx.q(arg4) * 0x1c + &data_143efeda0))
uint64_t result

if (arg3 != 0)
    data_143f001b8(0x8c2a, rdx_2, zx.q(*(arg3 + 0x28)))
    sub_1405d16e0(rsi_1 + 0x28, arg3)
    result = *(arg3 + 0x30)
    *(rsi_1 + 0x30) = result
else
    result = data_143f001b8(0x8c2a, rdx_2, 0)
    int64_t* rbx_1 = *(rsi_1 + 0x28)
    *(rsi_1 + 0x28) = 0
    
    if (rbx_1 == 0)
        *(rsi_1 + 0x30) = 0
    else
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d != 1)
            *(rsi_1 + 0x30) = 0
        else
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                result = (**rbx_1)(rbx_1, 1)
                *(rsi_1 + 0x30) = 0
            else
                result = 0
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    result = zx.q(*(rbx_1 + 0xc))
                    z_1 = false
                
                if (not(z_1))
                    *(rsi_1 + 0x30) = 0
                else
                    result = sub_1405dcc10(&data_143f02390, rbx_1)
                    *(rsi_1 + 0x30) = 0

return result
