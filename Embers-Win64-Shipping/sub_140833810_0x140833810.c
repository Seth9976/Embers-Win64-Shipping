// 函数: sub_140833810
// 地址: 0x140833810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rax_2 = sx.q(*(arg1 + 0x10))
char rcx = (data_1439c7a34).b
int128_t var_68 = zx.o(0)
int32_t var_58 = 1
char var_40 = 0
uint64_t count = zx.q((&data_1439c85f4)[rax_2 * 0xa])
int32_t var_44 = (1 << rcx) - 1
int128_t var_54 = data_143dbb1e0
int32_t var_30 = 0
int16_t* const rax_5

if (*(arg1 + 0x20) == 0)
    rax_5 = &data_142d40450
else
    rax_5 = *(arg1 + 0x18)

int64_t* rcx_1 = data_143f0f180
int16_t* const var_38 = rax_5
int64_t* var_80
(*(*rcx_1 + 0x498))(rcx_1, &var_80, &data_143f02b98, zx.q(count.d), 0x201, &var_68)

if (arg1 + 0x28 == &var_80)
label_140833955:
    int64_t* rbx_2 = var_80
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_13
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_13 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
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
    int64_t* rbx_1 = *(arg1 + 0x28)
    *(arg1 + 0x28) = var_80
    var_80 = nullptr
    
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
                    sub_1405dcc10(&data_143f02390, rbx_1)
        
        goto label_140833955

int64_t* rcx_4 = data_143f0f180
int128_t* var_90
var_90.d = 1
int32_t* rax_17 = (*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, *(arg1 + 0x28), 0, count.d, var_90)
memset(rax_17, 0, count)

if (*(arg1 + 0x10) == 0x25)
    *rax_17 = *(arg1 + 0x38)

int64_t* rcx_7 = data_143f0f180
(*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *(arg1 + 0x28))
int64_t* rcx_8 = data_143f0f180
var_90.b = *(arg1 + 0x10)
int64_t* result_1
(*(*rcx_8 + 0x4b8))(rcx_8, &result_1, &data_143f02b98, *(arg1 + 0x28), count.d, var_90)
int64_t* result = &result_1

if (arg1 + 0x30 == &result_1)
label_140833aa5:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result_2[1].d -= 1
        
        if (result_2[1].d == 1)
            char rax_22
            
            if (result_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_22 = sub_1405949a0()
            
            if (result_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_22 != 0))
                result = (**result_2)(result_2, 1)
            else
                result = nullptr
                bool z_4
                
                if (0 == *(result_2 + 0xc))
                    *(result_2 + 0xc) = 1
                    z_4 = true
                else
                    result = zx.q(*(result_2 + 0xc))
                    z_4 = false
                
                if (z_4)
                    result = sub_1405dcc10(&data_143f02390, result_2)
else
    int64_t* rbx_4 = *(arg1 + 0x30)
    result = result_1
    *(arg1 + 0x30) = result
    result_1 = nullptr
    
    if (rbx_4 != 0)
        result = zx.q(rbx_4[1].d)
        rbx_4[1].d -= 1
        
        if (result.d == 1)
            char rax_20
            
            if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_20 = sub_1405949a0()
            
            if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
                result = (**rbx_4)(rbx_4, 1)
            else
                result = nullptr
                bool z_3
                
                if (0 == *(rbx_4 + 0xc))
                    *(rbx_4 + 0xc) = 1
                    z_3 = true
                else
                    result = zx.q(*(rbx_4 + 0xc))
                    z_3 = false
                
                if (z_3)
                    result = sub_1405dcc10(&data_143f02390, rbx_4)
        
        goto label_140833aa5

__security_check_cookie(rax_1 ^ &var_b8)
return result
