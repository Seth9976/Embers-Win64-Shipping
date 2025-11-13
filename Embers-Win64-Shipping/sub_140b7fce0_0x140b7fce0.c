// 函数: sub_140b7fce0
// 地址: 0x140b7fce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rbx = arg2[1].d
int64_t rdi = data_143ddb418
void var_f0
int64_t* rax_2 = sub_140a96170(&var_f0)
void var_b8
int128_t zmm6 = sub_140b2f260(&var_b8, _mm_cvtepi32_ps(zx.o(rbx)), rax_2, 1, rdi)
sub_140b40000(&var_b8)
int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t rax_5 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int32_t i = 0

if (arg2[1].d s> 0)
    int64_t r14_1 = 0
    int128_t var_38_1 = zmm6
    zmm6 = 0x3f800000
    
    do
        void var_d8
        int512_t zmm1_2
        zmm1_2, zmm6 = sub_140b389c0(&var_b8, zmm6, sub_140a96170(&var_d8))
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_10 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        int64_t* rbx_4 = *arg2 + r14_1
        j_sub_140b3db50()
        
        if (sub_140b404d0(&data_143de7d78, *rbx_4, zmm1_2) == 0 && arg1 == *(rbx_4 + 0xc)
                && sub_140b7e6e0(rbx_4) != 0)
            j_sub_140b3db50()
            void var_f8
            int64_t rax_14
            rax_14, zmm6 = sub_140b40940(&data_143de7d78, *rbx_4, &var_f8)
            
            if (rax_14 == 0)
                sub_140b76700(arg3, rbx_4, &var_f8)
        
        i += 1
        r14_1 += 0xa0
    while (i s< arg2[1].d)

int32_t result = sub_140b365b0(&var_b8)
char var_6c = 0
int64_t* var_98

if (var_98 != 0)
    result = var_98[1].d
    var_98[1].d -= 1
    
    if (result == 1)
        (**var_98)(var_98)
        result = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_98 + 8))(var_98, 1)

int64_t* var_b0

if (var_b0 != 0)
    result = var_b0[1].d
    var_b0[1].d -= 1
    
    if (result == 1)
        result = (**var_b0)(var_b0)
        int32_t rdi_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_b0 + 8))(var_b0, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_128)
return result
