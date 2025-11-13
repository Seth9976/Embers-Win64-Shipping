// 函数: sub_142296050
// 地址: 0x142296050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* r15 = *(arg1 + 8)

if (r15 == 0)
    *arg2 = 0
else
    int64_t* var_90_1
    int64_t var_78
    int32_t rdx
    int64_t r8_1
    int32_t r9_2
    int128_t zmm0
    bool cond:3_1
    
    if (*arg1 == 2)
        if (*(r15 + 0x40) != 0)
            char rcx = (data_1439c7a34).b
            zmm0 = data_143dbb1e0
            var_78 = 0
            int32_t var_68_1 = 1
            char var_50_1 = 0
            int32_t var_54_1 = (1 << rcx) - 1
            int128_t var_64_1 = zmm0
            int64_t var_48_1 = 0
            int32_t var_40_1 = 0
            void* var_70_1 = r15 + 0x20
            char rax_4 = sub_142056ae0()
            char rax_6 = (*(*(r15 + 0x20) + 0x30))(r15 + 0x20)
            int32_t r9_1 = *(r15 + 0x30)
            var_90_1 = &var_78
            rdx = 0x201
            r8_1 = 2
            
            if ((rax_6 | rax_4) == 0)
                rdx = 1
            
            r9_2 = r9_1 * 2
            cond:3_1 = r9_1 == neg.d(r9_1)
            goto label_14229618b
        
        *arg2 = 0
    else if (*(r15 + 0x40) == 0)
        *arg2 = 0
    else
        char rcx_2 = (data_1439c7a34).b
        zmm0 = data_143dbb1e0
        var_78 = 0
        int32_t var_68_2 = 1
        char var_50_2 = 0
        int32_t var_54_2 = (1 << rcx_2) - 1
        int128_t var_64_2 = zmm0
        int64_t var_48_2 = 0
        int32_t var_40_2 = 0
        void* var_70_2 = r15 + 0x20
        char rax_9 = sub_142056ae0()
        var_90_1 = &var_78
        rdx = 0x201
        r8_1 = 4
        
        if (((*(*(r15 + 0x20) + 0x30))(r15 + 0x20) | rax_9) == 0)
            rdx = 1
        
        r9_2 = *(r15 + 0x30) << 2
        cond:3_1 = r9_2 == 0
    label_14229618b:
        int64_t* rcx_4 = data_143f0f180
        bool var_50_3 = cond:3_1
        int64_t var_88 = 0
        void var_80
        (*(*rcx_4 + 0x108))(zmm0, &var_80, r8_1, r9_2, rdx, var_90_1, var_88)
        sub_1405d1600(&var_88, &var_80)
        sub_14081c9d0(&var_80)
        *(r15 + 0x40) = *(r15 + 0x30)
        *arg2 = var_88
        var_88 = 0
        sub_14081c9d0(&var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
