// 函数: sub_1409581b0
// 地址: 0x1409581b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t var_208 = 0
int64_t* rbx = arg2
arg2.b = 3
sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation", arg2.b)
int32_t result = sub_14095ca70(arg3, 0)
int64_t* r15 = *rbx
void* r12_2 = &r15[sx.q(rbx[1].d) * 2]

if (r15 != r12_2)
    int64_t var_200
    __builtin_memset(&var_200, 0, 0x18)
    
    do
        int64_t* rsi_1 = r15[1]
        void* rdi_1 = *r15
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        sub_140d23f50(
            UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation In Loop", 3)
        int64_t var_198 = 0
        int64_t var_190_1 = 0
        uint128_t var_188
        sub_140a96170(&var_188)
        uint128_t var_170
        sub_140a96170(&var_170)
        uint128_t var_158
        sub_140a96170(&var_158)
        uint128_t var_140
        sub_140a96170(&var_140)
        uint128_t var_120
        sub_140a96170(&var_120)
        uint64_t var_100 = 0
        int64_t var_f8_1 = 0
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x2c)
        int32_t var_ac_1 = 0x80
        int32_t var_a8_1 = 0xffffffff
        int32_t var_a4_1 = 0
        int64_t var_98_1 = 0
        int32_t var_90_1 = 0
        
        if (&var_198 != rdi_1 + 8)
            int32_t rbx_1 = *(rdi_1 + 0x10)
            int64_t r14_1 = *(rdi_1 + 8)
            int32_t r8_2 = var_190_1:4.d
            var_190_1.d = rbx_1
            
            if (rbx_1 != 0 || r8_2 != 0)
                sub_1405a4c70(&var_198, rbx_1, r8_2)
                memcpy(var_198, r14_1, rbx_1 * 2)
            else
                var_190_1:4.d = 0
        
        int64_t* rax_4 = *(rdi_1 + 0x20)
        
        if (rax_4 != 0)
            rax_4[1].d += 1
        
        uint128_t zmm1_1 = var_188
        uint128_t zmm0_1 = (*(rdi_1 + 0x18)).o
        int64_t var_1e8_1
        var_1e8_1.o = zmm1_1
        void* rcx_8 = _mm_bsrli_si128(zmm1_1, 8).q
        uint128_t var_88_1 = zmm0_1
        var_188 = zmm0_1
        
        if (rcx_8 != 0)
            int32_t rax_5 = *(rcx_8 + 8)
            *(rcx_8 + 8) -= 1
            
            if (rax_5 == 1)
                (**rax_4)(rax_4)
                int32_t rax_7 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rax_4 + 8))(rax_4, 1)
        
        int32_t var_178_1 = *(rdi_1 + 0x28)
        int64_t* rax_11 = *(rdi_1 + 0x38)
        
        if (rax_11 != 0)
            rax_11[1].d += 1
        
        zmm1_1 = var_170
        zmm0_1 = (*(rdi_1 + 0x30)).o
        int64_t var_1d8_1
        var_1d8_1.o = zmm1_1
        void* rcx_11 = _mm_bsrli_si128(zmm1_1, 8).q
        uint128_t var_78_1 = zmm0_1
        var_170 = zmm0_1
        
        if (rcx_11 != 0)
            int32_t rax_12 = *(rcx_11 + 8)
            *(rcx_11 + 8) -= 1
            
            if (rax_12 == 1)
                (**rax_11)(rax_11)
                int32_t rax_14 = *(rax_11 + 0xc)
                *(rax_11 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*rax_11 + 8))(rax_11, 1)
        
        int32_t var_160_1 = *(rdi_1 + 0x40)
        int64_t* rax_18 = *(rdi_1 + 0x50)
        
        if (rax_18 != 0)
            rax_18[1].d += 1
        
        zmm1_1 = var_158
        zmm0_1 = (*(rdi_1 + 0x48)).o
        int64_t var_1c8_1
        var_1c8_1.o = zmm1_1
        void* rcx_14 = _mm_bsrli_si128(zmm1_1, 8).q
        uint128_t var_68_1 = zmm0_1
        var_158 = zmm0_1
        
        if (rcx_14 != 0)
            int32_t rax_19 = *(rcx_14 + 8)
            *(rcx_14 + 8) -= 1
            
            if (rax_19 == 1)
                (**rax_18)(rax_18)
                int32_t rax_21 = *(rax_18 + 0xc)
                *(rax_18 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*rax_18 + 8))(rax_18, 1)
        
        int32_t var_148_1 = *(rdi_1 + 0x58)
        int64_t* rax_25 = *(rdi_1 + 0x68)
        
        if (rax_25 != 0)
            rax_25[1].d += 1
        
        zmm1_1 = var_140
        zmm0_1 = (*(rdi_1 + 0x60)).o
        int64_t var_1b8_1
        var_1b8_1.o = zmm1_1
        void* rcx_17 = _mm_bsrli_si128(zmm1_1, 8).q
        uint128_t var_58_1 = zmm0_1
        var_140 = zmm0_1
        
        if (rcx_17 != 0)
            int32_t rax_26 = *(rcx_17 + 8)
            *(rcx_17 + 8) -= 1
            
            if (rax_26 == 1)
                (**rax_25)(rax_25)
                int32_t rax_28 = *(rax_25 + 0xc)
                *(rax_25 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rax_25 + 8))(rax_25, 1)
        
        int32_t var_130_1 = *(rdi_1 + 0x70)
        int32_t var_128_1 = *(rdi_1 + 0x78)
        int64_t* rax_33 = *(rdi_1 + 0x88)
        
        if (rax_33 != 0)
            rax_33[1].d += 1
        
        zmm1_1 = var_120
        zmm0_1 = (*(rdi_1 + 0x80)).o
        int64_t var_1a8_1
        var_1a8_1.o = zmm1_1
        void* rcx_20 = _mm_bsrli_si128(zmm1_1, 8).q
        uint128_t var_48_1 = zmm0_1
        var_120 = zmm0_1
        
        if (rcx_20 != 0)
            int32_t rax_34 = *(rcx_20 + 8)
            *(rcx_20 + 8) -= 1
            
            if (rax_34 == 1)
                (**rax_33)(rax_33)
                int32_t rax_36 = *(rax_33 + 0xc)
                *(rax_33 + 0xc) -= 1
                
                if (rax_36 == 1)
                    (*(*rax_33 + 8))(rax_33, 1)
        
        int32_t var_110_1 = *(rdi_1 + 0x90)
        int32_t var_108_1 = *(rdi_1 + 0x98)
        
        if (&var_100 != rdi_1 + 0xa0)
            int32_t rbx_7 = *(rdi_1 + 0xa8)
            int64_t r14_2 = *(rdi_1 + 0xa0)
            var_f8_1.d = rbx_7
            
            if (rbx_7 != 0 || 0 != rbx_7)
                sub_1405a4c70(&var_100, rbx_7, 0)
                memcpy(var_100, r14_2, rbx_7 * 2)
            else
                var_f8_1:4.d = 0
        
        int64_t var_f0_1 = *(rdi_1 + 0xb0)
        int64_t var_e8_1 = *(rdi_1 + 0xb8)
        char var_e0_1 = *(rdi_1 + 0xc0)
        sub_14094d9d0(&var_d8, rdi_1 + 0xc8)
        sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Adding Product", 3)
        int64_t rbx_8 = sx.q(arg3[1].d)
        int32_t rax_44 = (rbx_8 + 1).d
        arg3[1].d = rax_44
        
        if (rax_44 s> *(arg3 + 0xc))
            sub_140976ab0(arg3)
        
        sub_140948950(rbx_8 * 0x110 + *arg3, &var_198)
        sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Done Adding Product", 3)
        int32_t var_90_2 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        result = sub_1405e1b50(&var_d8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            result = sub_140a74f90(var_b8)
        
        int64_t rcx_32 = var_d8
        
        if (rcx_32 != 0)
            result = sub_140a74f90(rcx_32)
        
        uint64_t rcx_33 = var_100
        
        if (rcx_33 != 0)
            result = sub_140a74f90(rcx_33)
        
        int64_t* rbx_9 = var_120:8.q
        
        if (rbx_9 != 0)
            result = rbx_9[1].d
            rbx_9[1].d -= 1
            
            if (result == 1)
                (**rbx_9)(rbx_9)
                result = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_9 + 8))(rbx_9, 1)
        
        int64_t* rbx_10 = var_140:8.q
        
        if (rbx_10 != 0)
            result = rbx_10[1].d
            rbx_10[1].d -= 1
            
            if (result == 1)
                (**rbx_10)(rbx_10)
                result = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_10 + 8))(rbx_10, 1)
        
        int64_t* rbx_11 = var_158:8.q
        
        if (rbx_11 != 0)
            result = rbx_11[1].d
            rbx_11[1].d -= 1
            
            if (result == 1)
                (**rbx_11)(rbx_11)
                result = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_11 + 8))(rbx_11, 1)
        
        int64_t* rbx_12 = var_170:8.q
        
        if (rbx_12 != 0)
            result = rbx_12[1].d
            rbx_12[1].d -= 1
            
            if (result == 1)
                (**rbx_12)(rbx_12)
                result = *(rbx_12 + 0xc)
                *(rbx_12 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_12 + 8))(rbx_12, 1)
        
        int64_t* rbx_13 = var_188:8.q
        
        if (rbx_13 != 0)
            result = rbx_13[1].d
            rbx_13[1].d -= 1
            
            if (result == 1)
                (**rbx_13)(rbx_13)
                result = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_13 + 8))(rbx_13, 1)
        
        int64_t rcx_44 = var_198
        
        if (rcx_44 != 0)
            result = sub_140a74f90(rcx_44)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                result = (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)
        
        r15 = &r15[2]
    while (r15 != r12_2)

__security_check_cookie(rax_1 ^ &var_228)
return result
