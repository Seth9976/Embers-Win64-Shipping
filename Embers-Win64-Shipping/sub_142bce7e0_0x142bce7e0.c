// 函数: sub_142bce7e0
// 地址: 0x142bce7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int32_t rax_2 = *(arg2 + 0xc)
int32_t result_1 = 0
int104_t zmm1 = (arg2[1]).13
int128_t var_390 = *arg2
var_390:0xc.d = 2
int104_t var_380 = zmm1
int128_t var_370 = arg2[2]

if (rax_2 == 0xa || rax_2 == 7)
    var_390:0xc.d = 3

int32_t i_1
void var_358
sub_142bcdfe0(arg1, &var_358, 0x20, &i_1)
int32_t i = i_1
uint64_t result

if (i s>= 0)
    if (i u> arg2[2].d)
        i = arg2[2].d
    
    int64_t r12_1 = *arg1
    int64_t r13_1 = arg1[2]
    
    if (*(arg2 + 0xc) != 7)
        int32_t rax_3 = *(arg2 + 0x24)
        
        if (rax_3 != 0)
            *(zx.q(rax_3) + *arg3) = i.b
    
    void* rdi_1 = &var_358
    
    while (i s> 0)
        *arg1 = *rdi_1
        arg1[2] = *(rdi_1 + 8)
        int64_t var_3a8_1 = 0
        int32_t result_2 = sub_142bce2e0(arg1, &var_390, arg3, arg4)
        result_1 = result_2
        
        if (result_2 != 0)
            break
        
        i -= 1
        var_380:8.d += zx.d(var_380:0xc.b)
        rdi_1 += 0x18
    
    *arg1 = r12_1
    result = zx.q(result_1)
    arg1[2] = r13_1
else
    result = 0xa2

__security_check_cookie(rax_1 ^ &var_3c8)
return result
