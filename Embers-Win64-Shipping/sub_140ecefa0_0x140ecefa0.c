// 函数: sub_140ecefa0
// 地址: 0x140ecefa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* r13 = nullptr
int128_t* r14 = arg4
char var_180 = data_1439ae51c
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 4
char var_48 = 0
sub_140de8410(arg1, arg3, &var_180)
int32_t r12 = arg6
int64_t var_190
sub_140ebeb20(arg1, &var_190)
void* rbx = nullptr
int64_t r15 = var_190
int64_t rsi = sx.q(var_50 - 1)
void* var_1b8 = nullptr
int128_t var_208
float var_1f8
int32_t var_1f4
int32_t var_1f0
int32_t var_1ec
int32_t var_1e8
void var_178
int128_t zmm1
int128_t zmm2
int128_t zmm3

if (var_50 - 1 s>= 0)
    void* rax_7 = var_58
    int64_t r14_2 = rsi * 0x48
    int64_t temp3_1
    
    do
        void* rbx_1 = &var_178
        
        if (rax_7 != 0)
            rbx_1 = rax_7
        
        rbx = rbx_1 + r14_2
        
        if (r15 == 0 || r15 != *(rbx + 0x38))
            zmm2 = *(rbx + 8)
            zmm1 = *(rbx + 0x10)
            zmm3.d = zmm2.d f* *(rbx + 4)
            int64_t var_1dc_1 = 0
            zmm2.d = zmm2.d f* *rbx
            int32_t var_1d4_1 = zmm3.d
            var_1e8 = *(rbx + 0xc)
            int32_t var_1e4_1 = zmm1.d
            int32_t var_1e0_1 = zmm2.d
            sub_140dbe170(&var_1e8, &var_1f8)
            int32_t zmm3_1 = *(arg4 + 4)
            int32_t temp0_1 = __minss_xmmss_memss(*(arg4 + 0xc), var_1ec)
            int32_t temp0_2 = __maxss_xmmss_memss(zmm3_1, var_1f4)
            zmm1 = *arg4
            int128_t zmm0_2 = __minss_xmmss_memss((*(arg4 + 8)).d, var_1f0)
            zmm1 = __maxss_xmmss_memss(zmm1.d, var_1f8)
            
            if (temp0_1 f< temp0_2 || zmm0_2.d f< zmm1.d)
                var_208 = zx.o(0)
            else
                var_208.d = zmm1.d
                var_208:4.d = temp0_2
                var_208:8.d = zmm0_2.d
                var_208:0xc.d = temp0_1
            
            int128_t* rax_8
            
            if (arg8 == 0)
                rax_8.b = 0
            else
                if (arg1[0x34].d != 0)
                    int64_t* rcx_2 = arg1[0x33]
                    
                    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2).b != 0)
                        int64_t* rcx_3
                        
                        if (arg1[0x34].d == 0)
                            rcx_3 = nullptr
                        else
                            rcx_3 = arg1[0x33]
                        
                        arg1[0x32].b = (*(*rcx_3 + 0x48))(rcx_3).b
                
                if (arg1[0x32].b == 0)
                    rax_8.b = 0
                else
                    rax_8.b = 1
            
            var_1e8.o = *arg2
            var_1dc_1:4.o = arg2[1]
            int64_t* var_1d0_1 = arg1
            int128_t var_1c8_1 = arg2[2]
            int32_t rax_13 =
                sub_140e1f680(*(rbx + 0x38), &var_1e8, rbx, &var_208, arg5, r12, arg7, rax_8.b)
            rbx = var_1b8
            
            if (r12 s>= rax_13)
                rax_13 = r12
            
            r12 = rax_13
            rax_7 = var_58
        else
            var_1b8 = rbx
        
        r14_2 -= 0x48
        temp3_1 = rsi
        rsi -= 1
    while (temp3_1 - 1 s>= 0)
    r14 = arg4

if (r15 != 0)
    zmm3 = *(rbx + 8)
    zmm1 = *(rbx + 0x10)
    zmm2.d = zmm3.d f* *(rbx + 4)
    int64_t var_1dc_2 = 0
    zmm3.d = zmm3.d f* *rbx
    int32_t var_1d4_2 = zmm2.d
    var_1e8 = *(rbx + 0xc)
    int32_t var_1e4_2 = zmm1.d
    int32_t var_1e0_2 = zmm3.d
    sub_140dbe170(&var_1e8, &var_1f8)
    int32_t zmm3_2 = *(r14 + 4)
    int32_t temp0_5 = __minss_xmmss_memss(*(r14 + 0xc), var_1ec)
    int32_t temp0_6 = __maxss_xmmss_memss(zmm3_2, var_1f4)
    zmm1 = *r14
    int128_t zmm0_3 = __minss_xmmss_memss((*(r14 + 8)).d, var_1f0)
    zmm1 = __maxss_xmmss_memss(zmm1.d, var_1f8)
    
    if (temp0_5 f< temp0_6 || zmm0_3.d f< zmm1.d)
        var_208 = zx.o(0)
    else
        var_208.d = zmm1.d
        var_208:4.d = temp0_6
        var_208:8.d = zmm0_3.d
        var_208:0xc.d = temp0_5
    
    char rax_14
    
    if (arg8 == 0)
        rax_14 = 0
    else
        if (arg1[0x34].d != 0)
            int64_t* rcx_7 = arg1[0x33]
            
            if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                if (arg1[0x34].d != 0)
                    r13 = arg1[0x33]
                
                arg1[0x32].b = (*(*r13 + 0x48))(r13)
        
        if (arg1[0x32].b == 0)
            rax_14 = 0
        else
            rax_14 = 1
    
    var_1e8.o = *arg2
    var_1dc_2:4.o = arg2[1]
    int64_t* var_1d0_2 = arg1
    int128_t var_1c8_2 = arg2[2]
    int32_t rax_19 = sub_140e1f680(*(rbx + 0x38), &var_1e8, rbx, &var_208, arg5, r12, arg7, rax_14)
    
    if (r12 s>= rax_19)
        rax_19 = r12
    
    r12 = rax_19

int64_t* var_188

if (var_188 != 0)
    var_188[1].d -= 1
    
    if (var_188[1].d == 1)
        int64_t rdx_6 = *var_188
        (*rdx_6)(var_188, rdx_6)
        int32_t temp2_1 = *(var_188 + 0xc)
        *(var_188 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_3 = *var_188
            (*(r8_3 + 8))(var_188, 1, r8_3)

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_248)
return zx.q(r12)
