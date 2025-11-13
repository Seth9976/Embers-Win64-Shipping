// 函数: sub_141472180
// 地址: 0x141472180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* rcx = arg3[1]
void* rbp = *(arg4 + 0x5c0)
void* r15 = *arg3
uint64_t rdi
rdi.b = 0
int64_t var_158 = 0
char rdx = *(rcx + 0x39)
int32_t var_148 = 0
int32_t var_144 = 6
int64_t var_b8 = 0
int32_t var_a8 = 0
int32_t var_a4 = 8
int64_t* rbx = *(rbp + 0x20)
char result

if ((rdx & 1) == 0 || (*(rcx + 0x3c) & 0x20) == 0 || (*(rcx + 0x3f) & *(rbx + 0x13d)) == 0)
label_141472414:
    
    if (var_b8 != 0)
        sub_140a74f90(var_b8)
    
    if (var_158 != 0)
        sub_140a74f90(var_158)
    
    result = rdi.b
else
    if ((*(arg4 + 0x570) & 0x80) == 0 || (rdx & 4) != 0)
        int128_t zmm6
        zmm6.d = (*(arg4 + 0x3b8)).d f- *(arg3 + 0x14)
        int128_t zmm7
        zmm7.d = (*(arg4 + 0x3b4)).d f- arg3[2].d
        int128_t zmm8
        zmm8.d = (*(arg4 + 0x3bc)).d f- arg3[3].d
        int128_t zmm9
        zmm9.d = (*(arg4 + 0x3c0)).d f+ arg3[5].d
        int128_t zmm11
        zmm11.d = zmm6.d f* rbx[0xa].d
        zmm9.d = zmm9.d f* zmm9.d
        zmm11.d = zmm11.d f+ zmm7.d f* rbx[8].d
        zmm11.d = zmm11.d f+ zmm8.d f* rbx[0xc].d
        int128_t zmm10
        zmm10.d = zmm6.d f- zmm11.d f* rbx[0xa].d
        float zmm2 = zmm7.d - zmm11.d f* rbx[8].d
        zmm10.d = zmm10.d f* zmm10.d
        float zmm1 = zmm8.d - zmm11.d f* rbx[0xc].d
        zmm10.d = zmm10.d f+ zmm2 * zmm2
        zmm10.d = zmm10.d f+ zmm1 * zmm1
        
        if ((rbx[0x27].b & 4) == 0)
        label_141472340:
            
            if (not(zmm10.d f>= zmm9.d))
                if (not(zmm11.d f>= (zx.o(0)).d))
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm6.d = zmm6.d f+ zmm7.d
                    zmm6.d = zmm6.d f+ zmm8.d
                
                if (zmm11.d f>= (zx.o(0)).d || not(zmm6.d f> zmm9.d))
                    int16_t* rax_7 = (sx.q(*(r15 + 0x110)) << 4) + *(arg2 + 0x1658)
                    
                    if (*rax_7 != 1 && (rax_7[1].b & 3) != 0
                            && sub_1414767a0(arg5, &arg3[2], arg3 + 0x1c) != 0)
                        char rax_9
                        
                        if ((rbx[0x27].b & 2) != 0)
                            rax_9 = sub_1412c75b0(rbp)
                        
                        char rcx_4
                        
                        if ((rbx[0x27].b & 2) == 0 || rax_9 == 0)
                            rcx_4 = 0
                        else
                            rcx_4 = 1
                        
                        rdi = zx.q(sub_141489280(rcx_4, r15, arg2 + 0x4810, arg2))
        else
            if (sub_14122cc00(rbp) == 0)
                goto label_141472340
            
            if ((*(*rbx + 0x98))(rbx) != 0)
                goto label_141472340
        
        goto label_141472414
    
    result = 0

__security_check_cookie(rax_1 ^ &var_1d8)
return result
