// 函数: sub_142208cb0
// 地址: 0x142208cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t result = __security_cookie ^ &var_328
int64_t result_1 = result

if (*(arg1 + 0x350) == 0xffffffff)
    int64_t* rcx = *(arg1 + 0x108)
    int32_t rbp_1 = *(arg1 + 0x100)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x3f))
    uint8_t r14_1 = *(arg1 + 0x3b) u>> 2 & 1
    uint128_t zmm6 = zx.o(*(arg1 + 0xf8))
    int64_t rsi
    rsi.b = *(arg1 + 0x32) - 1 u<= 1
    uint8_t r15_1 = *(arg1 + 0x35) u>> 3 & 1
    char rax_3 = (*(*rcx + 0x128))(rcx)
    char rax_4 = sub_1422afcf0(arg1)
    int64_t* var_298_1 = nullptr
    int32_t var_2a8_1 = 0xffffffff
    int32_t var_2b0_1 = 0xffffffff
    uint64_t var_288 = zmm6.q
    int32_t var_280_1 = rbp_1
    void var_278
    sub_14075e140(&var_278, &data_14399f6e0, &data_14399f6e0, &var_288, arg1 + 0xc0, arg1 + 0xdc, 
        arg1 + 0xdc, r15_1, 0, 0, rax_4, rax_3, rsi.b, rdi_1, 0, var_2b0_1, var_2a8_1, r14_1, 
        var_298_1)
    int128_t* rax_5 = *(arg1 + 0x368)
    
    if (rax_5 == 0)
        rax_5 = sub_140a82f30(0x230, zx.q((&rax_5[1]).d))
        *(arg1 + 0x368) = rax_5
    
    void* rcx_3 = &var_278
    int64_t i_1 = 4
    int128_t zmm0_1
    int128_t zmm1_1
    int64_t i
    
    do
        rax_5 = &rax_5[8]
        zmm0_1 = *rcx_3
        zmm1_1 = *(rcx_3 + 0x10)
        rcx_3 += 0x80
        rax_5[-8] = zmm0_1
        zmm0_1 = *(rcx_3 - 0x60)
        rax_5[-7] = zmm1_1
        zmm1_1 = *(rcx_3 - 0x50)
        rax_5[-6] = zmm0_1
        zmm0_1 = *(rcx_3 - 0x40)
        rax_5[-5] = zmm1_1
        zmm1_1 = *(rcx_3 - 0x30)
        rax_5[-4] = zmm0_1
        zmm0_1 = *(rcx_3 - 0x20)
        rax_5[-3] = zmm1_1
        zmm1_1 = *(rcx_3 - 0x10)
        rax_5[-2] = zmm0_1
        rax_5[-1] = zmm1_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    zmm1_1 = *(rcx_3 + 0x10)
    *rax_5 = *rcx_3
    zmm0_1 = *(rcx_3 + 0x20)
    rax_5[1] = zmm1_1
    rax_5[2] = zmm0_1
    sub_1419ba620(arg1 + 0x348, i_1)
    result = (*(*(arg1 + 0x348) + 0x28))(arg1 + 0x348)

__security_check_cookie(result_1 ^ &var_328)
return result
