// 函数: sub_1414819b0
// 地址: 0x1414819b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t i_1 = 0
void* r10 = arg2
int128_t var_d8
__builtin_memcpy(&var_d8, 
    "\x04\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x"
"04\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x01"
"00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00", 
    0x40)
int64_t r12 = 0
int64_t i = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x20)
int32_t var_f0[0x6]
char var_78[0x8]
int128_t zmm0
int128_t zmm1
float zmm2

do
    void* rax_2 = *(r10 + 0x60)
    void* rdi_1 = r10
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    void* rdi_2 = rdi_1 + i
    zmm0.d = (*arg1).d f* *rdi_2
    zmm1.d = (*(rdi_2 + 8)).d f* *(arg1 + 8)
    zmm2 = *(rdi_2 + 4) f* *(arg1 + 4) f+ zmm0.d f+ zmm1.d f- *(rdi_2 + 0xc)
    zmm2 - 0f
    var_f0[r12] = zmm2
    rax_2.b = zmm2 < 0f
    var_78[r12] = rax_2.b
    
    if (rax_2.b != 0)
        int64_t r15_1 = sx.q(arg3[7].d)
        int32_t rax_3 = (r15_1 + 1).d
        arg3[7].d = rax_3
        
        if (rax_3 s> *(arg3 + 0x74))
            sub_14149c260(arg3, r15_1.d)
            r10 = arg2
        
        int128_t* rax_4 = arg3[6].q
        int128_t* rcx_1 = arg3
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        rcx_1[r15_1] = *rdi_2
    
    r12 += 1
    i += 0x10
while (i s< 0x50)

int128_t var_48 = arg4
int128_t var_58 = arg5
int128_t var_68 = arg6

do
    int64_t r8 = sx.q(*(&var_d8:4 + (i_1 << 3)))
    int64_t rdx_1 = sx.q(*(&var_d8 + (i_1 << 3)))
    char r9_1 = var_78[r8]
    
    if (var_78[rdx_1] != r9_1)
        zmm2 = var_f0[rdx_1]
        void* rcx_2 = r10
        int128_t zmm6 = var_f0[r8]
        void* rax_7 = *(r10 + 0x60)
        
        if (rax_7 != 0)
            rcx_2 = rax_7
        
        void* rdx_3 = (rdx_1 << 4) + rcx_2
        void* rax_10 = (r8 << 4) + rcx_2
        arg4.d = zmm6.d f* *rdx_3
        arg5.d = zmm6.d f* *(rdx_3 + 4)
        float zmm3 = zmm2 f* *rax_10
        float zmm4 = zmm2 f* *(rax_10 + 4)
        arg6.d = zmm6.d f* *(rdx_3 + 8)
        zmm0.d = arg4.d f- zmm3
        zmm6.d = zmm6.d f* *(rdx_3 + 0xc)
        zmm1.d = arg5.d f- zmm4
        float zmm5 = zmm2 f* *(rax_10 + 8)
        zmm2 = zmm2 f* *(rax_10 + 0xc)
        float var_108_1 = zmm0.d
        int32_t var_104_1 = zmm1.d
        zmm0.d = arg6.d f- zmm5
        zmm1.d = zmm6.d f- zmm2
        int32_t var_100_1 = zmm0.d
        int32_t var_fc_1 = zmm1.d
        
        if (r9_1 != 0)
            var_108_1 = zmm3 f- arg4.d
            float var_104_2 = zmm4 f- arg5.d
            float var_100_2 = zmm5 f- arg6.d
            float var_fc_2 = zmm2 f- zmm6.d
        
        int64_t rdi_3 = sx.q(arg3[7].d)
        int32_t rax_11 = (rdi_3 + 1).d
        arg3[7].d = rax_11
        
        if (rax_11 s> *(arg3 + 0x74))
            sub_14149c260(arg3, rdi_3.d)
            r10 = arg2
        
        int128_t* rax_12 = arg3[6].q
        int128_t* rdx_5 = arg3
        
        if (rax_12 != 0)
            rdx_5 = rax_12
        
        rdx_5[rdi_3] = var_108_1.o
    
    i_1 += 1
while (i_1 s< 0xc)

uint64_t result
int512_t zmm7
int512_t zmm8
int512_t zmm9
result, zmm7, zmm8, zmm9 = sub_141f8cbb0(arg3)
zmm9.o = var_68
zmm8.o = var_58
zmm7.o = var_48
__security_check_cookie(rax_1 ^ &var_128)
return result
