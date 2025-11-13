// 函数: sub_140f57720
// 地址: 0x140f57720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int64_t* rbx = nullptr
char var_238 = data_1439ae51c
void* var_110 = nullptr
int32_t var_108 = 0
int32_t var_104 = 4
char var_100 = 0
sub_140de8410(arg1, arg3, &var_238)
void var_230

if (var_108 s> 0)
    void* rsi_1 = &var_230
    
    if (var_110 != 0)
        rsi_1 = var_110
    
    int128_t var_2a8
    int128_t* rax_5 = (*(*arg1 + 0x200))(arg1, &var_2a8)
    int128_t var_2e8 = *rax_5
    char var_2d8_1 = rax_5[1].b
    int64_t var_2d0_1 = *(rax_5 + 0x18)
    int64_t* rcx_3 = rax_5[2].q
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int128_t zmm0_1 = *arg6
    char var_2c0_1 = 1
    int128_t zmm1 = arg6[1]
    int64_t var_2b8 = 0
    int128_t var_318 = zmm0_1
    int32_t var_2b0_1 = 0
    int128_t var_308_1 = zmm1
    int128_t var_2f8_1 = arg6[2]
    int64_t var_328
    
    if (arg1[0x69].d != 0)
        int64_t* rcx_4 = arg1[0x68]
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            if (arg1[0x69].d != 0)
                rbx = arg1[0x68]
            
            (*(*rbx + 0x48))(rbx, &var_328)
            *(arg1 + 0x328) = var_328.o
    
    zmm0_1.d = var_318.d.d f* arg1[0x65].d
    zmm1.d = var_318:4.d.d f* *(arg1 + 0x32c)
    var_318.d = zmm0_1.d
    zmm0_1.d = var_318:8.d.d f* arg1[0x66].d
    var_318:4.d = zmm1.d
    zmm1.d = var_318:0xc.d.d f* *(arg1 + 0x334)
    var_318:8.d = zmm0_1.d
    var_318:0xc.d = zmm1.d
    int128_t* rax_9 = sub_140e244d0(&var_318, &var_2e8, zmm1)
    int128_t var_268 = *rax_9
    int128_t var_258_1 = rax_9[1]
    int128_t var_248_1 = rax_9[2]
    sub_140745b20(&var_2b8)
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            (**rcx_3)(rcx_3)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_288
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t temp3_1 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    var_328 = *(rsi_1 + 0x38)
    int64_t* rax_15 = *(rsi_1 + 0x40)
    
    if (rax_15 != 0)
        rax_15[1].d += 1
    
    uint128_t zmm1_2 = *(rsi_1 + 0x10)
    var_2a8 = *rsi_1
    uint128_t var_298_1 = zmm1_2
    var_288.o = *(rsi_1 + 0x20)
    uint64_t var_278_1 = *(rsi_1 + 0x30)
    zmm1_2 = arg2[1]
    var_318 = *arg2
    uint128_t var_308_2 = zmm1_2
    var_308_2:8.q = arg1
    int128_t var_2f8_2 = arg2[2]
    void var_f8
    sub_140db8a10(arg4, 
        sub_140d91f10(&var_f8, &var_328, &var_318, &var_2a8, &var_268, sub_140e25600(arg1, arg7)))
    int64_t* var_f0
    
    if (var_f0 != 0)
        int32_t temp4_1 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_f0 + 8))(var_f0, 1)
    
    if (rax_15 != 0)
        rax_15[1].d -= 1
        
        if (rax_15[1].d == 1)
            (**rax_15)(rax_15)
            int32_t temp6_1 = *(rax_15 + 0xc)
            *(rax_15 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rax_15 + 8))(rax_15, 1)

sub_140d94d20(&var_230)
__security_check_cookie(rax_1 ^ &var_358)
return zx.q(arg5)
