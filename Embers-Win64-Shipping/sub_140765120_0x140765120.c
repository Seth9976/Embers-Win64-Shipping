// 函数: sub_140765120
// 地址: 0x140765120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int64_t result

if (*(arg1 + 0x158) != 0xffffffff)
    result = *(arg1 + 0x168)
else
    void* rbx_1 = *(arg1 + 0x110)
    int64_t* rcx = *(arg1 + 0x108)
    char var_2c8
    void var_2c7
    int32_t var_2c4
    void var_2a8
    (*(*rcx + 0x150))(rcx, rbx_1, &var_2c8, &var_2a8, &var_2c4, &var_2c7)
    int32_t r12_1
    
    if (rbx_1 == 0)
        r12_1 = 0
    else
        r12_1 = *(rbx_1 + 0x124)
    
    uint8_t r14_1 = *(arg1 + 0x35)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x3f))
    int32_t var_2b0_1 = *(arg1 + 0x100)
    char rax_4 = *(arg1 + 0x32) - 1
    int64_t var_2b8 = *(arg1 + 0xf8)
    int64_t rsi
    rsi.b = rax_4 u<= 1
    void var_268
    int128_t* rax_8 = sub_14075e140(&var_268, arg1 + 0x80, &var_2a8, &var_2b8, arg1 + 0xc0, 
        arg1 + 0xdc, arg1 + 0xdc, r14_1 u>> 3 & 1, 0, 0, sub_1422afcf0(arg1), var_2c8, rsi.b, 
        rdi_1, (*(arg1 + 0x44)).d, r12_1, var_2c4, 0, arg1 + 0x20)
    int128_t* rcx_4 = *(arg1 + 0x170)
    int128_t* rbx_3 = rax_8
    
    if (rcx_4 == 0)
        int128_t* rax_9 = sub_140a82f30(0x230, zx.q((&rcx_4[1]).d))
        *(arg1 + 0x170) = rax_9
        rcx_4 = rax_9
    
    int64_t i_1 = 4
    int64_t i
    
    do
        rcx_4 = &rcx_4[8]
        int128_t zmm0_1 = *rbx_3
        rbx_3 = &rbx_3[8]
        rcx_4[-8] = zmm0_1
        rcx_4[-7] = rbx_3[-7]
        rcx_4[-6] = rbx_3[-6]
        rcx_4[-5] = rbx_3[-5]
        rcx_4[-4] = rbx_3[-4]
        rcx_4[-3] = rbx_3[-3]
        rcx_4[-2] = rbx_3[-2]
        rcx_4[-1] = rbx_3[-1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    *rcx_4 = *rbx_3
    rcx_4[1] = rbx_3[1]
    rcx_4[2] = rbx_3[2]
    sub_1419ba620(arg1 + 0x150)
    int64_t rdx_4 = *(arg1 + 0x150)
    (*(rdx_4 + 0x28))(arg1 + 0x150, rdx_4)
    result = *(arg1 + 0x168)

__security_check_cookie(rax_1 ^ &var_368)
return result
