// 函数: sub_1417929e0
// 地址: 0x1417929e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void** rbx = *arg1
int64_t* rsi = arg3
int64_t* r14 = arg2
void* rdi = &rbx[sx.q(arg1[1].d)]
int64_t result
int32_t var_c0
uint128_t var_a0

if (rbx == rdi)
label_141792a79:
    void** rbx_1 = arg1[4]
    int32_t var_b0_1 = r14[1].d
    int32_t var_a4_1 = *(r14 + 0x14)
    int64_t rax_5 = sx.q(arg1[5].d)
    uint64_t var_b8 = *r14
    uint64_t var_ac_1 = *(r14 + 0xc)
    void* rdi_1 = &rbx_1[rax_5]
    
    if (rbx_1 == rdi_1)
    label_141792ad5:
        void** i = arg1[8]
        void* rdi_2 = &i[sx.q(arg1[9].d)]
        uint64_t var_90_1 = var_ac_1
        var_a0 = var_b8.o
        
        for (; i != rdi_2; i = &i[1])
            void* rcx_2 = *i
            
            if (rcx_2 != 0)
                void var_50
                void* var_70_1 = &var_50
                int64_t* var_d0_2 = rsi
                int16_t var_54_1 = 0
                char var_52_1 = 0
                uint128_t* var_d8_2 = &var_a0
                int32_t var_c0_1 = var_c0
                result, arg2, arg3 = sub_1416ed270(rcx_2, arg2, arg3)
                
                if (result.b == 0)
                    goto label_141792b73_1
        
        result.b = 1
    else
        while (true)
            void* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result, arg2, arg3 = sub_1416e8d10(rcx_1, &var_b8, rsi)
                
                if (result.b == 0)
                    break
            
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rdi_1)
                goto label_141792ad5
        
    label_141792b73:
        result.b = 0
else
    int32_t r12_1 = var_c0
    
    while (true)
        void* rcx = *rbx
        
        if (rcx != 0)
            void var_80
            var_a0.q = &var_80
            int64_t* var_d0_1 = rsi
            int16_t var_84_1 = 0
            char var_82_1 = 0
            var_c0 = r12_1
            int64_t* var_d8_1 = r14
            result, arg2, arg3 = sub_1416ece20(rcx, arg2, arg3)
            
            if (result.b == 0)
                break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_141792a79
    
label_141792b73_1:
    result.b = 0
__security_check_cookie(rax_1 ^ &var_f8)
return result
