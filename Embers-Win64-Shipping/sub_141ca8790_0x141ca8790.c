// 函数: sub_141ca8790
// 地址: 0x141ca8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14 = arg7
*r14 = 0
void** const var_208
sub_140b4c2a0(&var_208)
var_208 = &data_1432102a8
int16_t* var_178 = nullptr
int32_t var_170 = 0
void var_160
sub_140cd3be0(&var_160)
void** const rax = var_208
int64_t rdx
rdx.b = 1
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t var_168 = 0
rax[0x14](&var_208, rdx)
int64_t rdx_1
rdx_1.b = 1
var_208[0x1b](&var_208, rdx_1)
sub_140597df0(&var_178, arg2)
sub_140a464c0()
int16_t* const rdi_1 = &data_142d40450
int16_t* const rdx_3 = &data_142d40450

if (var_170 != 0)
    rdx_3 = var_178

char const (* r9)[0x4] = data_14399ea08
int64_t* rax_2 = (*(r9 + 0x18))(&data_14399ea08, rdx_3, 0, r9)
int64_t* rbx

if (sub_141ca7af0(&var_208, &arg7, arg5) != 0)
    if (sub_141ca9170(&var_208, arg3, arg6) == 0)
        if (sub_141ca8a50(&var_208, arg3) == 0)
            sub_141ca8410(&var_208, arg3)
        
        if (*(arg1 + 0xb0) != 0)
            uint64_t var_220[0x3]
            uint64_t* rax_6 = sub_140ba59c0(&var_220, &var_178)
            
            if (rax_6[1].d != 0)
                rdi_1 = *rax_6
            
            void var_228
            int64_t* rax_7
            int512_t zmm0_1
            int512_t zmm1
            rax_7, zmm0_1, zmm1 = sub_140b58260(&var_228, rdi_1, 1)
            arg4[0x12] = *rax_7
            uint64_t rcx_12 = var_220[0]
            
            if (rcx_12 != 0)
                zmm0_1, zmm1 = sub_140a74f90(rcx_12)
            
            int128_t var_e4
            zmm0_1.o = var_e4
            int64_t var_38
            arg4[0x13] = var_38
            *(arg4 + 0xa0) = zmm0_1.o
            int512_t zmm1_1 = sub_141cb3d50(&var_208, zmm1, zmm0_1)
            int32_t var_100
            
            if (var_100 s> 0)
                int32_t var_fc
                var_208[0x2f](&var_208, sx.q(var_fc))
                int32_t rsi_1 = 0
                
                if (var_100 s> 0)
                    do
                        int64_t rdi_2 = sx.q(arg4[1].d)
                        int32_t rax_10 = (rdi_2 + 1).d
                        arg4[1].d = rax_10
                        
                        if (rax_10 s> *(arg4 + 0xc))
                            sub_1407c3b60(arg4)
                        
                        int64_t rcx_16 = rdi_2 * 0x38
                        void* const rax_11
                        
                        if (rcx_16 == neg.q(*arg4))
                            rax_11 = nullptr
                        else
                            rax_11 = sub_140cd3bc0(rcx_16 + *arg4)
                        
                        sub_140cd4a70(&var_208, rax_11, zmm1_1)
                        rsi_1 += 1
                    while (rsi_1 s< var_100)
            
            int512_t zmm1_2 = sub_141cb3e60(&var_208, &arg4[6], zmm1_1)
            int32_t var_1c8
            
            if (var_1c8 s>= 0x1fe)
                int32_t var_ec
                int64_t rax_12 = sx.q(var_ec)
                
                if (rax_12.d s> 0)
                    var_208[0x2f](&var_208, rax_12)
                    sub_140ccef70(arg4, &var_208, zmm1_2)
    
    rbx.b = 1
else
    *r14 = 0
    rbx.b = 0

var_208 = &data_1432102a8

if (rax_2 != 0)
    (**rax_2)(rax_2, 1)

int64_t rcx_23 = var_48

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_140b977c0(&var_160)
int16_t* rcx_25 = var_178

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_140b4cb40(&var_208)
return zx.q(rbx.b)
