// 函数: sub_140da3dd0
// 地址: 0x140da3dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t var_58 = __security_cookie ^ &var_1b8
int32_t r12 = arg1[0x1c].d
uint64_t rdi
rdi.b = 0
char var_e8 = 0
uint32_t r9 = zx.d(arg3)
int16_t var_188 = r9.w
int64_t* var_160
int32_t var_198
char* var_190
int16_t* var_180
int64_t var_f8_1
char var_f0_1
char var_ef_1
char var_ee_1
char var_e8_1
int64_t* rbx_2
char rbx_10

if (r9 s>= r12)
    if (arg1[1].d != *(arg1 + 0x34))
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_5 = *(r8 + (((sx.q(arg1[9].d) - 1) & zx.q(r9.w)) << 2))
        
        if (rax_5 == 0xffffffff)
            goto label_140da3e98
        
        int64_t rdx_3 = *arg1
        int64_t r8_1
        
        while (true)
            r8_1 = sx.q(rax_5)
            int16_t* rcx_1 = r8_1 * 0x88
            
            if (*(rcx_1 + rdx_3) == r9.w)
                break
            
            rax_5 = *(rcx_1 + rdx_3 + 0x80)
            
            if (rax_5 == 0xffffffff)
                goto label_140da3e98
        
        if (rax_5 == 0xffffffff)
            goto label_140da3e98
        
        void* rbx_8 = r8_1 * 0x88
        void* rbx_9 = rbx_8 + rdx_3
        
        if (rbx_8 == neg.q(rdx_3))
            goto label_140da3e98
        
        rbx_2 = rbx_9 + 8
        
        if (rbx_9 == -8 || rbx_2 == &var_160)
            goto label_140da3e98
        
        goto label_140da3f2d
    
label_140da3e98:
    
    if (sub_140d9b250(arg1, r9.w, arg4) == 0)
        sub_140da3dd0(arg1, arg2, 0xfffd, zx.q(arg4), var_198, var_190)
    else
        int64_t* rbx_7
        
        if (r9 s>= r12)
            var_180 = &var_188
            int32_t var_170
            sub_140d99540(arg1, &var_170)
            int16_t* var_168
            sub_140d8b2a0(&var_180, var_168)
            int32_t rax_13 = var_170
            *(var_168 + 0x80) = 0xffffffff
            var_190 = nullptr
            var_198 = rax_13
            sub_140d9e530(arg1, &var_180, zx.d(*var_168), var_168, var_198, var_190)
            rbx_7 = *arg1 + sx.q(var_180.d) * 0x88 + 8
        else
            int64_t r12_1 = sx.q(arg1[0xb].d)
            int32_t rbx_5 = zx.d(var_188) - arg1[0xb].d + 1
            int32_t rax_7 = r12_1.d + rbx_5
            arg1[0xb].d = rax_7
            
            if (rax_7 s> *(arg1 + 0x5c))
                sub_1407c3920(&arg1[0xa])
            
            memset(r12_1 * 0x78 + arg1[0xa], 0, sx.q(rbx_5) * 0x78)
            rbx_7 = zx.q(var_188) * 0x78 + arg1[0xa]
        
        if (rbx_7 != &var_160)
            sub_140d924a0(&var_160, rbx_7)
            rdi.b = 1
            var_f8_1 = rbx_7[0xd]
            var_f0_1 = rbx_7[0xe].b
            rbx_10 = *(rbx_7 + 0x72)
            var_ee_1 = rbx_10
            var_e8_1 = 1
            var_ef_1 = *(rbx_7 + 0x71)
        label_140da4086:
            void var_d8
            int64_t* rax_18 = sub_140d9acc0(arg1, &var_d8, var_188)
            
            if (rax_18 != &var_160)
                char var_e8_2 = 0
                sub_140d95810(&var_160)
                sub_140d91d10(&var_160, rax_18)
                rbx_10 = var_ee_1
                rdi.b = 1
                var_e8_1 = 1
            
            sub_140d95810(&var_d8)
            goto label_140da40c7
        
        sub_140da3dd0(arg1, arg2, 0xfffd, zx.q(arg4), var_198, var_190)
else
    int64_t rax_1
    rax_1.b = r9 s< arg1[0xb].d
    
    if (rax_1.b == 0)
        goto label_140da3e98
    
    rbx_2 = zx.q(r9.w) * 0x78 + arg1[0xa]
    
    if (rbx_2 == &var_160)
        goto label_140da3e98
    
label_140da3f2d:
    sub_140d924a0(&var_160, rbx_2)
    rdi.b = 1
    char rcx_7 = rbx_2[0xe].b
    var_f8_1 = rbx_2[0xd]
    rbx_10 = *(rbx_2 + 0x72)
    var_e8_1 = 1
    var_ee_1 = rbx_10
    var_ef_1 = *(rbx_2 + 0x71)
    var_f0_1 = rcx_7
    
    if (rbx_10 != 0)
        goto label_140da3fa6
    
    char rax_12 = sub_140d9b250(arg1, var_188, arg4)
    
    if (rax_12 != 0)
        goto label_140da4086
    
    var_e8_1 = rax_12
    sub_140d95810(&var_160)
    rdi = zx.q(var_e8_1)
    
    if (rdi.b == 0)
        sub_140da3dd0(arg1, arg2, 0xfffd, zx.q(arg4), var_198, var_190)
    else
        rbx_10 = var_ee_1
        rcx_7 = var_f0_1
    label_140da3fa6:
        
        if (var_188 != 0xfffd && arg4 u< rcx_7)
            var_e8_1 = 0
            sub_140d95810(&var_160)
            rdi = zx.q(var_e8_1)
            rbx_10 = var_ee_1
        
        if (rdi.b == 0)
            sub_140da3dd0(arg1, arg2, 0xfffd, zx.q(arg4), var_198, var_190)
        else
        label_140da40c7:
            int16_t r15_2 = var_188
            *arg2 = 0
            __builtin_memset(&arg2[2], 0, 0x24)
            *(arg2 + 0x28) = 0x300
            arg2[0x16].b = rbx_10
            
            if (rbx_10 != 0)
                sub_140da9d40(arg1[0x1b], &var_180, &var_160, &arg1[0x16])
                char var_172
                arg2[0x16].b = var_172
                
                if (var_172 != 0)
                    int64_t* rdx_15 = var_160
                    int32_t var_150
                    *(arg2 + 4) = var_150
                    *(arg2 + 8) = var_f8_1
                    *arg2 = r15_2
                    *(arg2 + 0x10) = rdx_15[3].d
                    *(arg2 + 0x14) = *(rdx_15 + 0x1c)
                    arg2[0xc] = var_180:4.w
                    arg2[0xd] = var_180:6.w
                    int16_t var_178
                    arg2[0xe] = var_178
                    int16_t var_176
                    arg2[0xf] = var_176
                    arg2[0x10] = var_180.w
                    arg2[0x11] = var_180:2.w
                    arg2[0x12] = sub_140da2d00(arg1)
                    int16_t var_148
                    arg2[0x13] = var_148
                    char var_174
                    arg2[0x14].b = var_174
                    arg2[0x15].b = var_ef_1
                    char var_173
                    *(arg2 + 0x2b) = var_173
                    *(arg2 + 0x29) = var_f0_1
                
                rdi = zx.q(var_e8_1)

if (rdi.b != 0)
    char var_e8_3 = 0
    sub_140d95810(&var_160)

__security_check_cookie(var_58 ^ &var_1b8)
return arg2
