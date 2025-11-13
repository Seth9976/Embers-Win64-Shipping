// 函数: sub_1412ebdd0
// 地址: 0x1412ebdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_58 = 1
int64_t var_78
int64_t* var_90 = &var_78
int128_t var_68 = zx.o(0)
int128_t* var_98 = &var_68
int32_t var_a0 = 1
int128_t var_54 = data_143dbb1e0
uint64_t rdi = 0
char var_40 = 0
int64_t var_38 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_44 = (1 << (data_1439c7a34).b) - 1
int32_t var_30 = 0
var_78 = 0
int64_t* var_88
(*(*rcx_1 + 0x490))(rcx_1, &var_88, &data_143f02b98, 2, 0xc0, var_a0, var_98, var_90)

if (arg1 + 0x10 == &var_88)
label_1412ebeeb:
    int64_t* rbx_2 = var_88
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_10
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_10 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
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
    *(arg1 + 0x10) = var_88
    var_88 = nullptr
    
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
                    sub_1405dcc10(&data_143f02390, rbx_1)
        
        goto label_1412ebeeb

int64_t rbx_3 = var_78

do
    int16_t r11_1 = rdi.w << 2
    uint64_t r10_1 = zx.q((rdi * 3).d * 2)
    *(rbx_3 + (r10_1 << 1)) = r11_1
    rdi = zx.q(rdi.d + 1)
    *(rbx_3 + (zx.q((r10_1 + 1).d) << 1)) = r11_1 + 3
    *(rbx_3 + (zx.q((r10_1 + 2).d) << 1)) = r11_1 + 2
    *(rbx_3 + (zx.q((r10_1 + 3).d) << 1)) = r11_1
    *(rbx_3 + (zx.q((r10_1 + 4).d) << 1)) = r11_1 + 1
    *(rbx_3 + (zx.q((r10_1 + 5).d) << 1)) = r11_1 + 3
while (rdi.d u< 0x10)

int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x118))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_c8)
return result
