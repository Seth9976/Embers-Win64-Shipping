// 函数: sub_141737810
// 地址: 0x141737810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t i_2 = -1
int64_t* rdi = arg2
void* r11 = arg1
int32_t rax_2 = 0
int32_t rcx = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t rdx = 0
int64_t r9 = 0
void* r10 = nullptr
int32_t i = 0
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
void* var_68 = nullptr
int32_t var_60 = 0
int32_t i_1 = 0

if (*(r11 + 0x18) s> 0)
    int32_t* r12_1 = nullptr
    
    do
        int64_t r13_1 = *(r11 + 0x10)
        uint32_t zmm2[0x4] = *(rdi + 4)
        int64_t zmm0 = *rdi
        float zmm1 = rdi[1].d
        zmm2[0] = zmm2[0] f- *(r12_1 + r13_1 + 4)
        zmm0.d = zmm0.d f- *(r12_1 + r13_1)
        zmm1 = zmm1 f- *(r12_1 + r13_1 + 8)
        zmm2[0] = zmm2[0] f* *(r12_1 + r13_1 + 0x10)
        zmm0.d = zmm0.d f* *(r12_1 + r13_1 + 0xc)
        zmm1 = zmm1 f* *(r12_1 + r13_1 + 0x14)
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm2[0] = zmm2[0] f+ zmm1
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= arg4.d))
            bool cond:1_1 = *(r11 + 0x38) s<= 0
            int32_t j = 0
            int32_t j_1 = 0
            
            if (not(cond:1_1))
                int32_t j_2 = 0
                
                do
                    if (rax_2 == rcx)
                    label_141737992:
                        int64_t r15_1 = *(r11 + 0x48)
                        int64_t r14_1 = sx.q(j) * 3
                        zmm2 = *(r15_1 + (r14_1 << 2) + 4)
                        zmm2[0] = zmm2[0] f- *(r12_1 + r13_1 + 4)
                        zmm0.d = (*(r15_1 + (r14_1 << 2))).d f- *(r12_1 + r13_1)
                        zmm1 = *(r15_1 + (r14_1 << 2) + 8) f- *(r12_1 + r13_1 + 8)
                        zmm2[0] = zmm2[0] f* *(r12_1 + r13_1 + 0x10)
                        zmm0.d = zmm0.d f* *(r12_1 + r13_1 + 0xc)
                        zmm1 = zmm1 f* *(r12_1 + r13_1 + 0x14)
                        zmm2[0] = zmm2[0] f+ zmm0.d
                        zmm2[0] = zmm2[0] f+ zmm1
                        
                        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= arg4.d))
                            int64_t rbx = sx.q(arg3[1].d)
                            int32_t rax_8 = (rbx + 1).d
                            arg3[1].d = rax_8
                            
                            if (rax_8 s> *(arg3 + 0xc))
                                sub_14083a7e0(arg3)
                            
                            int64_t rcx_5 = *arg3
                            int64_t rdx_3 = rbx * 3
                            *(rcx_5 + (rdx_3 << 2)) = *(r15_1 + (r14_1 << 2))
                            *(rcx_5 + (rdx_3 << 2) + 8) = *(r15_1 + (r14_1 << 2) + 8)
                            void var_c0
                            sub_14077a5e0(&var_a8, &var_c0, &j_1, nullptr)
                            r10 = var_68
                            r9 = var_a8
                            r11 = arg1
                    else
                        void var_70
                        void* rax_5 = &var_70
                        
                        if (r10 != 0)
                            rax_5 = r10
                        
                        int32_t rax_6 = *(rax_5 + ((sx.q(rdx - 1) & sx.q(j_2)) << 2))
                        
                        if (rax_6 == 0xffffffff)
                            goto label_141737992
                        
                        while (true)
                            int64_t rdx_1 = sx.q(rax_6) * 3
                            
                            if (*(r9 + (rdx_1 << 2)) == j_2)
                                break
                            
                            rax_6 = *(r9 + (rdx_1 << 2) + 4)
                            
                            if (rax_6 == 0xffffffff)
                                goto label_141737992
                        
                        if (rax_6 == 0xffffffff)
                            goto label_141737992
                    
                    int32_t var_a0
                    rax_2 = var_a0
                    j += 1
                    j_2 = j
                    rcx = var_74
                    rdx = var_60
                    j_1 = j
                while (j s< *(r11 + 0x38))
                
                i = i_1
            
            rdi = arg2
            i_2 = i
        
        i += 1
        r12_1 = &r12_1[6]
        i_1 = i
    while (i s< *(r11 + 0x18))

int32_t var_60_1 = 0

if (r10 != 0)
    sub_140a74f90(r10)

int32_t var_a0_1 = 0
int64_t var_9c

if (var_9c.d != 0)
    sub_140638cc0(&var_a8, 0)

int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
sub_14059a8e0(&var_9c:4, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_11 = var_a8

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(i_2)
