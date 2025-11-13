// 函数: sub_1411e6230
// 地址: 0x1411e6230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rcx_1 = *(arg1 + 0x28)
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int128_t var_68 = zx.o(0)
int32_t var_58 = 1
int32_t var_44 = rax_3
int128_t var_54 = data_143dbb1e0
char var_40 = 0
wchar16 const* const var_38 = u"HaltonPrimes"
int64_t* rcx_3 = data_143f0f180
int32_t var_30 = 0
uint32_t rax_5 = (rcx_1 + 2) u/ 3 * 0xc
int64_t* var_78
(*(*rcx_3 + 0x4a0))(rcx_3, &var_78, &data_143f02b98, 0xc, rax_5, 0x3208, &var_68)

if (arg1 + 0x10 == &var_78)
label_1411e636e:
    int64_t* rbx_2 = var_78
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_11
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_11 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_2)
else
    int64_t* rbx_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_78
    var_78 = nullptr
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_8
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
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
                    sub_1405dcc10(&data_143f02390, rbx_1)
        
        goto label_1411e636e

int64_t* rcx_6 = data_143f0f180
memcpy((*(*rcx_6 + 0x158))(rcx_6, &data_143f02b98, *(arg1 + 0x10), 0, rax_5, 1), *(arg1 + 0x18), 
    *(arg1 + 0x28) << 2)
int64_t* rcx_8 = data_143f0f180
int64_t result = (*(*rcx_8 + 0x160))(rcx_8, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_b8)
return result
