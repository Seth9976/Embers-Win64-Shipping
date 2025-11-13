// 函数: sub_1403d0750
// 地址: 0x1403d0750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_5c
__builtin_strncpy(&var_5c, "sPLT", 5)
int64_t rsi
rsi.b = arg2[1].b != 8
int32_t rbp = arg2[3].d
void* var_68
int64_t result = sub_1403d00e0(arg1, *arg2, &var_68)

if (result != 0)
    int64_t rbx
    rbx.b = rsi.b
    uint8_t var_52
    char var_4f
    int32_t var_4e
    
    if (arg1 != 0)
        *(arg1 + 0x4a8) = 0x22
        var_52 = ((result.d + rbp * ((rbx << 2) + 6).d + 2) u>> 0x18).b
        uint8_t var_51_1 = ((result.d + rbp * ((rbx << 2) + 6).d + 2) u>> 0x10).b
        char var_50_1 = (result.d + rbp * ((rbx << 2) + 6).d + 2):1.b
        var_4f = (result.d + rbp * ((rbx << 2) + 6).d + 2).b
        __builtin_strncpy(&var_4e, "sPLT", 4)
        sub_1403cc370(arg1, &var_52, 8)
        __builtin_strncpy(arg1 + 0x254, "sPLT", 4)
        sub_1403be750(arg1)
        sub_1403be770(arg1, &var_5c, 4)
        *(arg1 + 0x4a8) = 0x42
    
    void* rsi_2 = var_68
    
    if (result != -1 && arg1 != 0 && rsi_2 != 0)
        sub_1403cc370(arg1, rsi_2, result + 1)
        sub_1403be770(arg1, rsi_2, (result + 1).d)
    
    if (arg1 != 0)
        sub_1403cc370(arg1, &arg2[1], 1)
        sub_1403be770(arg1, &arg2[1], 1)
    
    int32_t rax_4 = arg2[3].d
    
    if (rax_4 s> 0)
        void* rcx_11 = arg2[2]
        void* r13_1 = rcx_11 + 6
        void* rbp_2
        
        do
            rbp_2 = r13_1 - 6
            int16_t rdx_7 = *(r13_1 - 6)
            int16_t rdx_10
            void* rbx_1
            char* rsi_3
            int32_t* rdi_3
            
            if (arg2[1].b != 8)
                var_52 = rdx_7:1.b
                char var_51_3 = rdx_7.b
                int16_t rdx_11 = *(r13_1 - 4)
                char var_50_3 = rdx_11:1.b
                var_4f = rdx_11.b
                int16_t rdx_12 = *(r13_1 - 2)
                var_4e.b = rdx_12:1.b
                var_4e:1.b = rdx_12.b
                rdx_10 = *r13_1
                var_4e:2.b = rdx_10:1.b
                rsi_3 = &var_4e:3
                void var_4a
                rdi_3 = &var_4a
                void var_49
                rbx_1 = &var_49
            else
                var_52 = rdx_7.b
                char var_51_2 = *(r13_1 - 4)
                char var_50_2 = *(r13_1 - 2)
                rdx_10 = *r13_1
                rsi_3 = &var_4f
                rdi_3 = &var_4e
                rbx_1 = &var_4e:1
            
            *rsi_3 = rdx_10.b
            int16_t rdx_13 = *(rbp_2 + 8)
            *rdi_3 = rdx_13:1.b
            *rbx_1 = rdx_13.b
            
            if (arg1 != 0)
                sub_1403cc370(arg1, &var_52, (rbx << 2) + 6)
                sub_1403be770(arg1, &var_52, ((rbx << 2) + 6).d)
                rcx_11 = arg2[2]
                rax_4 = arg2[3].d
            
            r13_1 += 0xa
        while (rbp_2 + 0xa u< rcx_11 + sx.q(rax_4) * 0xa)
    
    if (arg1 != 0)
        *(arg1 + 0x4a8) = 0x82
        int32_t rax_5 = *(arg1 + 0x244)
        uint8_t var_56 = (rax_5 u>> 0x18).b
        uint8_t var_55_1 = (rax_5 u>> 0x10).b
        char var_54_1 = rax_5:1.b
        char var_53_1 = rax_5.b
        sub_1403cc370(arg1, &var_56, 4)
    
    result = png_free(arg1, rsi_2)

__security_check_cookie(rax_1 ^ &var_98)
return result
