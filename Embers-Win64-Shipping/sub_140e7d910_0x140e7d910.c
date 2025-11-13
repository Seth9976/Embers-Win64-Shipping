// 函数: sub_140e7d910
// 地址: 0x140e7d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
uint64_t var_298
int128_t zmm0 = sub_140e683e0(arg1, &var_298, *(arg2 + 0xc))
*(var_298 + 0x34) = 2
int64_t* var_290

if (var_290 != 0)
    var_290[1].d -= 1
    
    if (var_290[1].d == 1)
        (**var_290)(var_290)
        int32_t temp1_1 = *(var_290 + 0xc)
        *(var_290 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_290 + 8))(var_290, 1)

uint64_t result

if (arg3 == 0)
    zmm0 = zx.o(0)
    
    if (0f f!= *(arg2 + 0x64))
    label_140e7d9af:
        (*(*arg1 + 0x50))(arg1)
        sub_140e89370(arg1, zmm0)
        var_298 = arg3
        void** var_268_1 = &var_298
        int64_t* var_278 = arg1
        int64_t** var_280_1 = &var_278
        void* var_270_1 = arg2
        int64_t (* var_288)(int64_t* arg1, int64_t* arg2) = sub_140e5a280
        
        if (sub_140e79540(&arg1[0xb1], &var_288).b == 0)
            int32_t rbx_1 = *(arg2 + 0xc)
            int64_t rdi_2 = *arg1 + 0xf8
            int64_t* rax_5 = sub_140e67030(arg1, &var_288)
            void var_260
            (*rdi_2)(arg1, &var_260, *(arg2 + 0x18), rax_5, 0, rbx_1)
            sub_140596d80(&var_288)
            char var_2a8_1
            var_2a8_1.q = arg3
            void var_f8
            char result_1 = *sub_140e86b10(arg1, &var_f8, &var_260, arg2)
            sub_140597700(&var_f8)
            void var_110
            sub_140596d80(&var_110)
            int64_t* var_118
            
            if (var_118 != 0)
                var_118[1].d -= 1
                
                if (var_118[1].d == 1)
                    (**var_118)(var_118)
                    int32_t temp3_1 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int64_t r8_4 = *var_118
                        (*(r8_4 + 8))(var_118, 1, r8_4)
            
            void var_258
            sub_140d94d20(&var_258)
            result = zx.q(result_1)
        else
            result.b = 1
    else
        result.b = 0
else
    if (*(arg3 + 0x5d) == 5)
        goto label_140e7d9af
    
    zmm0 = data_143dbb1f0.d
    
    if (zmm0.d f!= *(arg3 + 0x60))
        goto label_140e7d9af
    
    zmm0 = data_143dbb1f0:4.d
    
    if (not(zmm0.d f== *(arg3 + 0x64)))
        goto label_140e7d9af
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_2c8)
return result
