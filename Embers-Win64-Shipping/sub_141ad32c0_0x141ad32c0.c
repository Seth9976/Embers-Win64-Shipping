// 函数: sub_141ad32c0
// 地址: 0x141ad32c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int32_t* result = __security_cookie ^ &var_d8
int32_t* result_2 = result
char rcx = *(arg1 + 0x13d)

if ((rcx & 1) != 0)
    bool cond:0_1 = *(arg1 + 0x370) == 0
    result = *arg2
    *(arg1 + 0x1d0) = result[0x30] f+ *(arg1 + 0x1d0)
    
    if (not(cond:0_1))
        *(arg1 + 0x13d) = rcx | 2
        void* var_98 = nullptr
        int32_t result_1 = 0
        void var_68
        sub_142259c00(&var_68)
        sub_142277d10(&var_68, 1)
        uint32_t rcx_3 = zx.d(*(arg1 + 0x120))
        void* var_a0_1 = &var_68
        int32_t var_84_1 = *(arg1 + 0x2d0)
        int32_t var_88
        int32_t* var_b0_1 = &var_88
        void* rcx_4 = *(arg1 + 0x370)
        var_88 = 2
        sub_141ec8580(rcx_4, &var_98, arg1 + 0x2c4, &data_14399f720, rcx_3, var_b0_1, arg1 + 0x2e8, 
            var_a0_1)
        void* rcx_5 = *(arg1 + 0x358)
        int64_t* r14_1
        
        if (rcx_5 == 0)
            r14_1 = nullptr
        else
            int64_t* rax_2 = sub_14226e750(rcx_5)
            r14_1 = rax_2
            
            if (rax_2 != 0)
                int64_t r9_1 = *rax_2
                (*(r9_1 + 0x348))(rax_2, 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/AnimGraphRuntime/Private/BoneControllers/AnimNode_RigidBody_Chaos."
                "cpp", 
                    0x3f0, r9_1)
        
        void* rdi_1 = var_98
        result = sx.q(result_1)
        void* r15_1 = rdi_1 + result * 0x18
        
        if (rdi_1 != r15_1)
            do
                result = sub_1405d9510(rdi_1)
                var_88.q = result
                int32_t* result_3 = result
                
                if (result != 0)
                    void var_78
                    result = sub_1408296b0(arg1 + 0x268, &var_78, result)
                    
                    if (*result == 0xffffffff)
                        void var_74
                        sub_140812a70(arg1 + 0x268, &var_74, &var_88, nullptr)
                        int128_t* rax_3 = sub_142218ad0(&result_3[0xaa], &var_68, 1, 0)
                        result = sub_1422433e0(*(arg1 + 0x1e8), 0, &result_3[0xaa], rax_3)
                
                rdi_1 += 0x18
            while (rdi_1 != r15_1)
            
            rdi_1 = var_98
        
        *(arg1 + 0x370) = 0
        *(arg1 + 0x358) = 0
        
        if (r14_1 != 0)
            result = (*(*r14_1 + 0x350))(r14_1)
            rdi_1 = var_98
        
        if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)

__security_check_cookie(result_2 ^ &var_d8)
return result
