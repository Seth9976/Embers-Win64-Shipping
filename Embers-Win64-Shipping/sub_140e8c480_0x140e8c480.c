// 函数: sub_140e8c480
// 地址: 0x140e8c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rbp
rbp.b = 0
int32_t var_1a8

if (*data_143e29eb8 != 0)
    (*(*arg1 + 0x58))(arg1, &var_1a8)
    TEB* gsbase
    
    if (data_143e29fa0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e29fa0)
        
        if (data_143e29fa0 == 0xffffffff)
            (*(*arg1 + 0x58))(arg1, &data_143e29f98)
            _Init_thread_footer(&data_143e29fa0)
    
    uint128_t zmm1 = var_1a8
    float zmm3 = data_143e29f98
    int32_t var_1a4
    float zmm0[0x4] = var_1a4
    int64_t zmm2 = data_143e29f9c
    
    if (zmm1.d f!= zmm3 || not(zmm0[0] f== zmm2.d))
        if (data_143e29fa4 == 0)
            zmm0[0] = zmm0[0] f- zmm2.d
            zmm1.d = zmm1.d f- zmm3
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm1.d = zmm1.d f* zmm1.d
            zmm0[0] = zmm0[0] f+ zmm1.d
        
        if (data_143e29fa4 != 0 || zmm0[0] >= 4f)
            int64_t rax_6 = *arg1
            data_143e29fa4 = 1
            (*(rax_6 + 0x50))(arg1, zmm1)
            zmm2 = var_1a8.q
            arg1[0x64] = zmm0.q
            data_143e29f98.q = zmm2
        else
            zmm2 = var_1a8.q
    else
        zmm2 = var_1a8.q
    
    zmm1 = zx.o(arg1[0x6b])
    zmm0 = zmm1
    zmm0[0].q = zmm0[0].q f- arg1[0x60]
    zmm1.q = zmm1.q f- arg1[0x64]
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm0)
    
    if (_mm_cvtpd_ps(zmm1)[0] >= 0.100000001f)
        data_143e29fa4 = 0
        data_143e29f98.q = zmm2
    else
        void var_1a0
        int64_t rdi_1 = *(*(*arg1 + 0x30))(arg1, &var_1a0, zmm2)
        int64_t* var_198
        
        if (var_198 != 0)
            var_198[1].d -= 1
            
            if (var_198[1].d == 1)
                (**var_198)(var_198)
                int32_t temp1_1 = *(var_198 + 0xc)
                *(var_198 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_198 + 8))(var_198, 1)
        
        if (rdi_1 != 0 && not(temp0_1[0] <= 1f) && (*(*arg1 + 0xc0))(arg1) == 0)
            int64_t rdi_2 = *arg1
            int64_t* rax_13 = (*(rdi_2 + 0x58))(arg1, &var_1a0)
            void var_190
            int64_t* rax_14 = sub_140e67030(arg1, &var_190)
            void var_180
            char rax_16 =
                sub_140db3500((*(rdi_2 + 0xf8))(arg1, &var_180, *rax_13, rax_14, 0, 0xffffffff))
            void var_30
            sub_140596d80(&var_30)
            int64_t* var_38
            
            if (var_38 != 0)
                var_38[1].d -= 1
                
                if (var_38[1].d == 1)
                    (**var_38)(var_38)
                    int32_t temp3_1 = *(var_38 + 0xc)
                    *(var_38 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_38 + 8))(var_38, 1)
            
            void var_178
            sub_140d94d20(&var_178)
            sub_140596d80(&var_190)
            
            if (rax_16 != 0)
                rbp.b = 1

uint64_t result = zx.q(arg1[0x5e].d)

if (rbp.b == 0)
    if (result.d != 0xffffffff)
        result = sub_140da2c00()
        sub_140db35c0(result, &arg1[0x5e])
else if (result.d == 0xffffffff)
    result = sub_140d9f590(sub_140da2c00(), &var_1a8)
    arg1[0x5e].d = *result

__security_check_cookie(rax_1 ^ &var_1d8)
return result
