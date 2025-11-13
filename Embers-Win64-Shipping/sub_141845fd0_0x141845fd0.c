// 函数: sub_141845fd0
// 地址: 0x141845fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rdi = arg3
arg4[1].d = 0

if (*(arg4 + 0xc) s<= 0xffffffff)
    sub_1405a52a0(arg4, 0)

void* r13 = *arg1
int64_t rcx_1 = 0
int64_t rax_2 = sx.q(arg1[1].d)
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
void* rax_5 = rax_2 * 0x60 + r13
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t* rbx

if (r13 == rax_5)
label_14184617b:
    rbx.b = 1
else
    while (true)
        rbx = *(r13 + 0x48)
        void* r15_1 = &rbx[sx.q(*(r13 + 0x50)) * 3]
        
        if (rbx != r15_1)
            while (true)
                char var_c8 = 0
                void var_c4
                sub_140acafe0(&var_a8, &var_c4, rbx, &var_c8)
                
                if (var_c8 == 0)
                    int64_t* rcx_4 = *rdi
                    int128_t* rax_8 = (*(*rcx_4 + 0x1e8))(rcx_4, rbx)
                    int128_t* rdi_1 = rax_8
                    
                    if (rax_8 == 0)
                        int64_t* rcx_5 = *arg2
                        int128_t* rax_10
                        
                        if (rcx_5 != 0)
                            rax_10 = (*(*rcx_5 + 0x1e8))(rcx_5, rbx)
                            rdi_1 = rax_10
                        
                        if (rcx_5 == 0 || rax_10 == 0)
                            rcx_1 = var_68
                            rbx.b = 0
                            break
                    
                    int64_t r14_1 = sx.q(arg4[1].d)
                    int32_t rax_11 = (r14_1 + 1).d
                    arg4[1].d = rax_11
                    
                    if (rax_11 s> *(arg4 + 0xc))
                        sub_1405c4fe0(arg4)
                    
                    uint64_t rax_12 = *arg4
                    int64_t rcx_8 = r14_1 << 6
                    *(rcx_8 + rax_12) = *rdi_1
                    *(rcx_8 + rax_12 + 0x10) = rdi_1[1]
                    *(rcx_8 + rax_12 + 0x20) = rdi_1[2]
                    rdi = arg3
                    *(rcx_8 + rax_12 + 0x30) = rdi_1[3]
                
                rbx = &rbx[3]
                
                if (rbx == r15_1)
                    goto label_141846166
            
            break
        
    label_141846166:
        r13 += 0x60
        
        if (r13 == rax_5)
            rcx_1 = var_68
            goto label_14184617b

int32_t var_60_1 = 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t var_a0
bool cond:1 = var_a0:4.d == 0
var_a0.d = 0

if (not(cond:1))
    sub_1405a5130(&var_a8, 0)

int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int64_t var_98
sub_14059a8e0(&var_98, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_12 = var_a8

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbx.b)
