// 函数: sub_141b939a0
// 地址: 0x141b939a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x1d8))
void* rsi = nullptr
int64_t r15 = *(arg2 + 0x408)
int64_t rdi = *(arg1 + 0x1d0)
void* var_28 = nullptr
int32_t var_20 = rbx.d

if (rbx.d != 0)
    sub_1407751d0(&var_28, rbx.d, 0)
    rsi = var_28
    memcpy(rsi, rdi, (rbx * 0x28).d)
    rbx = zx.q(var_20)

int64_t result = sx.q(rbx.d)
void* rbp = rsi + result * 0x28

if (rsi != rbp)
    int64_t* rbx_1 = rsi + 0x10
    
    do
        if (rbx_1[-2] == r15 && rbx_1[1].b == arg3)
            int32_t rcx_3
            rcx_3.b = rbx_1[2].d == 0
            
            if ((rcx_3.b & sub_140b5b8a0(*(rbx_1 + 0xc), 0)) != 0
                    || *(rbx_1 + 0xc) == *(arg2 + 0x78c))
                int32_t rcx_4
                rcx_4.b = sub_140b5b8a0(*rbx_1, 0) == 0
                
                if ((*(rbx_1 + 4) != 0 | rcx_4.b) != 0)
                    void* rax_3 = sub_140d3c6e0(&rbx_1[-1])
                    
                    if (rax_3 != 0 && sub_140d1fd20(rax_3, *rbx_1) != 0)
                        int64_t* rax_5 = sub_140d3c6e0(&rbx_1[-1])
                        int64_t rax_6 = sub_140d1fd30(rax_5, *rbx_1)
                        int64_t r9_1 = *rax_5
                        (*(r9_1 + 0x210))(rax_5, rax_6, 0, r9_1)
        
        rbx_1 = &rbx_1[5]
        result = &rbx_1[-2]
    while (result != rbp)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
