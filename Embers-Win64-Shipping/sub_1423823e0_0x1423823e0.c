// 函数: sub_1423823e0
// 地址: 0x1423823e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rsi = *arg1
sub_140b34200("SkStreamingMarkDirtyTime", 0)
bool (* var_b8)(int64_t arg1, int64_t* arg2)
void** const var_98

if (*(rsi + 0x54) != 0)
    (*(*rsi + 0x20))(rsi)
else
    int64_t rbx_1 = *arg2
    
    if (rbx_1 == 0)
        (*(*rsi + 0x20))(rsi)
    else
        void* rcx = arg2[1]
        
        if (rcx == 0)
            (*(*rsi + 0x20))(rsi)
        else
            *(rcx + 0x14) = rsi[1].b
            int64_t var_c8 = 0
            int64_t var_c0_1 = 0
            int64_t* rax_4 = sub_140963350(sub_141f88540())
            int64_t var_a8_1 = 0
            var_98 = &data_142d42d18
            var_b8 = sub_142385b70
            (*(*rax_4 + 0x108))(rax_4, rbx_1, &var_c8, &var_b8, var_c8, var_c0_1, var_b8)
            int32_t r8_2 = var_c0_1.d
            int32_t rdi_1 = 0
            int64_t rax_5 = var_c8
            
            if (r8_2 s> 0)
                int64_t* rbx_2 = nullptr
                
                do
                    int64_t* rcx_3 = *(rbx_2 + rax_5)
                    int32_t rdx_1 = rsi[1].d
                    
                    if (rcx_3[0xab].d s< rdx_1)
                        *(rcx_3 + 0x5a9) |= 2
                        rcx_3[0xab].d = rdx_1
                        sub_141ee8470(rcx_3)
                        r8_2 = var_c0_1.d
                        rax_5 = var_c8
                    
                    rdi_1 += 1
                    rbx_2 = &rbx_2[1]
                while (rdi_1 s< r8_2)
            
            if (rax_5 != 0)
                sub_140a74f90(rax_5)

int32_t rbx_3 = arg2[2].d
var_98 = &data_142da2668
void*** var_a8_2 = nullptr
var_b8 = sub_142385a10
int64_t* var_90 = rsi
void** const var_58 = &data_142da2668
int64_t (* var_78)(int64_t* arg1, int64_t* arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3) =
    sub_142385bc0
void*** var_68 = nullptr
int64_t* var_50 = rsi
rsi[0xc].d = 1
sub_140a3c510(&rsi[0xe], &var_78)
rsi[0x16].d = rbx_3
sub_140a3c510(&rsi[0x18], &var_b8)

if (var_78 != 0)
    void** const* rcx_8 = &var_58
    
    if (var_68 != 0)
        rcx_8 = var_68
    
    (*rcx_8)[2](rcx_8)

if (var_b8 != 0)
    void** const* rcx_9 = &var_98
    
    if (var_a8_2 != 0)
        rcx_9 = var_a8_2
    
    (*rcx_9)[2](rcx_9)

int64_t result = sub_140b38680("SkStreamingMarkDirtyTime", 0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
