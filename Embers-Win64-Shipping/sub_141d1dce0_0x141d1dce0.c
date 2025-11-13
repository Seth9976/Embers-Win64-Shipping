// 函数: sub_141d1dce0
// 地址: 0x141d1dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rax_2 = sub_141d1f690(arg1, data_143f37078)
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int64_t r14 = 0
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int64_t var_b8 = 0
int64_t var_b0 = 0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t i_3 = sub_141d1f690(arg1, data_143f36fd0)
uint64_t i_2 = zx.q(i_3)

if (i_3 != 0)
    sub_1405dadb0(&var_b8, i_2.d)
    r14 = var_b8

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t rbx = sx.q(var_b0.d)
        int32_t rax_3 = (rbx + 1).d
        var_b0.d = rax_3
        
        if (rax_3 s> var_b0:4.d)
            sub_1405a4cf0(&var_b8)
            r14 = var_b8
        
        int32_t* rcx_3 = r14 + (rbx << 2)
        
        if (rcx_3 != 0)
            *rcx_3 = 0xffffffff
        
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx_1 = sx.q((*(*(arg1 + 0x278) + 0x48))(arg1 + 0x278))
int64_t rdx_4 = *(arg1 + 0x200)
int32_t rax_6 = (*(rdx_4 + 0x48))(arg1 + 0x200, rdx_4)
var_b8 = rbx_1
int64_t r12 = 0
int64_t r13 = sx.q(rax_6)
int64_t var_80
void* r9_1

if (rbx_1.d s<= 0)
label_141d1df26:
    int32_t rdi_2 = 0
    
    if (sub_141d1f690(arg1, data_143f36fd0) s<= 0)
    label_141d1df57:
        r9_1 = var_48
        rbx_1.b = 1
    else
        rbx_1 = r14
        
        while (*rbx_1 s>= 0)
            rdi_2 += 1
            rbx_1 += 4
            
            if (rdi_2 s>= sub_141d1f690(arg1, data_143f36fd0))
                goto label_141d1df57
        
    label_141d1e00f:
        r9_1 = var_48
        rbx_1.b = 0
else
    while (true)
        rbx_1 = sx.q(*(*(arg1 + 0x280) + (r12 << 2)))
        int64_t rdi_1 = sx.q(*(*(arg1 + 0x2e0) + (r12 << 2)))
        int32_t r15_1 = *(*(arg1 + 0x2f8) + (r12 << 2))
        
        if (var_80.d != var_54)
            r9_1 = var_48
            void var_50
            void* rax_13 = &var_50
            
            if (r9_1 != 0)
                rax_13 = r9_1
            
            int32_t rax_14 = *(rax_13 + ((sx.q(var_40 - 1) & rbx_1) << 2))
            
            if (rax_14 != 0xffffffff)
                int64_t r8_1 = var_88
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_14) * 3
                    
                    if (*(r8_1 + (rdx_5 << 2)) == rbx_1.d)
                        break
                    
                    rax_14 = *(r8_1 + (rdx_5 << 2) + 4)
                    
                    if (rax_14 == 0xffffffff)
                        goto label_141d1de7b
                
                if (rax_14 != 0xffffffff)
                    break
        
    label_141d1de7b:
        int32_t var_a0
        sub_1409afd50(&var_88, &var_a0)
        int32_t rax_15 = var_a0
        char* var_c0_1 = nullptr
        int32_t* var_98
        *var_98 = rbx_1.d
        var_98[1] = 0xffffffff
        void var_a4
        sub_1406da850(&var_88, &var_a4, rbx_1.d, var_98, rax_15, var_c0_1)
        int32_t r8_3 = 0
        int64_t rax_16 = 0
        int32_t r9_3 = r15_1
        
        if (r13 s> 0)
            do
                if (rdi_1 s<= rax_16 && r8_3 s< r15_1 + rdi_1.d)
                    int32_t rdx_8 = *(*(arg1 + 0x208) + (rax_16 << 2))
                    *(r14 + (rax_16 << 2)) = rdx_8
                    
                    if (rdx_8 s< 0)
                        goto label_141d1e00f
                    
                    if (rax_2 s<= rdx_8)
                        goto label_141d1e00f
                    
                    if (rbx_1.d != rdx_8)
                        goto label_141d1e00f
                    
                    r9_3 -= 1
                
                r8_3 += 1
                rax_16 += 1
            while (rax_16 s< r13)
        
        if (r9_3 != 0)
            goto label_141d1e00f
        
        r12 += 1
        
        if (r12 s>= var_b8)
            goto label_141d1df26
    
    rbx_1.b = 0

if (r14 != 0)
    sub_140a74f90(r14)
    r9_1 = var_48

int32_t var_40_1 = 0

if (r9_1 != 0)
    sub_140a74f90(r9_1)

bool cond:0 = var_80:4.d == 0
var_80.d = 0

if (not(cond:0))
    sub_140638cc0(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_21 = var_88

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbx_1.b)
