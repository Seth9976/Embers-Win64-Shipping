// 函数: sub_1409966d0
// 地址: 0x1409966d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* var_90 = arg1
int32_t r15 = arg4
int64_t rdx
void* rsp_1
int64_t rsi
void* r12
int32_t r14

if (arg4 - 1 u> 1)
    r14 = arg5
    
    if (r14 == 0 && arg4 != 0)
        r14 = arg4
    
    rsi = sx.q(arg2[3].d)
    var_98 = rsi.d
    rdx = rsi << 2
    int64_t rax_3 = rdx + 0xf
    
    if (rax_3 u<= rdx)
        rax_3 = 0xffffffffffffff0
    
    int64_t rax_4 = rax_3 & 0xfffffffffffffff0
    __chkstk(rax_4)
    void var_c8
    rsp_1 = &var_c8 - rax_4
    r12 = nullptr
    
    if ((r15 & 0xfffffffb) == 0 || r15 != r14)
        zmm7 = *(*(*arg2 + 0x198) + (sx.q(arg2[2].d) << 2))
        r12 = sub_1409c44d0(arg2, rsp_1 + 0x30)
        
        if (r15 == 0)
            int32_t var_88 = *var_90
            r15 = sub_1429c8d50(&var_88, zmm7.d, rsi.d, r12)
        
        arg1 = var_90

float* result

if (arg4 - 1 u<= 1 || r15 - 1 u<= 1)
    result = sub_1409a0240(arg1, arg2, arg3)
else
    if (r15 != 4)
        result = *arg3
        arg3[3] = 1
        arg3[4].d = 0
        *(arg3 + 0x24) = 0
        *result = 1f
    else
        int32_t r10_1 = 0
        
        if (not(0f f< *r12))
            int64_t rax_11
            
            do
                rax_11 = sx.q(r10_1)
                r10_1 += 1
            while (0f f>= *(r12 + (rax_11 << 2) + 4))
        
        int32_t r9_1 = (rsi - 1).d
        
        if (not(0f f< *(r12 + (rsi << 2) - 4)))
            int64_t rax_12
            
            do
                rax_12 = sx.q(r9_1)
                r9_1 -= 1
            while (0f f>= *(r12 + (rax_12 << 2) - 4))
        
        int64_t r11_1 = sx.q(arg2[3].d)
        int32_t* rax_13 = *arg3
        int32_t i_1 = 0
        arg3[3].d = 1
        *(arg3 + 0x1c) = r11_1.d
        arg3[4].d = 0
        *(arg3 + 0x24) = 0
        *rax_13 = 0x3f400000
        
        if (r11_1.d s> 0 && r11_1.d u>= 4)
            int64_t rdi_1 = arg3[1]
            
            if (rdi_1 u> &arg3[1] || rdi_1 + (sx.q((r11_1 - 1).d) << 2) u< &arg3[1])
                int32_t rax_17 = r11_1.d & 0x80000003
                
                if (rax_17 s< 0)
                    rax_17 = ((rax_17 - 1) | 0xfffffffc) + 1
                
                int32_t rcx_5 = r11_1.d - rax_17
                
                do
                    i_1 += 4
                while (i_1 s< rcx_5)
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rcx_5 + 3)
                __builtin_memset(rdi_1, 0, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2 << 2)
        
        int64_t i = sx.q(i_1)
        
        if (i s< r11_1)
            if (r11_1 - i s>= 4)
                do
                    arg3[1][i] = 0
                    arg3[1][i + 1] = 0
                    arg3[2][i] = 0
                    arg3[1][i + 3] = 0
                    i += 4
                while (i s< r11_1 - 3)
            
            for (; i s< r11_1; i += 1)
                arg3[1][i] = 0
        
        arg3[1][sx.q(r10_1)] = 0x3e000000
        result = arg3[1]
        result[sx.q(r9_1)] = 0x3e000000
    
    if (r14 != r15)
        int32_t var_94 = *var_90
        int64_t rax_34 = rdx + 0xf
        
        if (rax_34 u<= rdx)
            rax_34 = 0xffffffffffffff0
        
        int64_t rax_35 = rax_34 & 0xfffffffffffffff0
        __chkstk(rax_35)
        void* rsp_2 = rsp_1 - rax_35
        int32_t* rax_36
        int512_t zmm1_1
        int512_t zmm2_1
        rax_36, zmm1_1, zmm2_1, zmm7 = sub_1409c2900(arg2, &var_94, rsp_2 + 0x30)
        int32_t rdi_3 = var_98
        zmm6 = *(*(arg2[1] + 0x198) + (sx.q(*(arg2 + 0x14)) << 2))
        
        if (r14 != 0)
        label_1409969d7:
            void* rax_38 = (sx.q(rdi_3 * 2) << 2) + 0x13
            
            if (rax_38 u<= (sx.q(rdi_3 * 2) << 2) + 4)
                rax_38 = 0xffffffffffffff0
            
            void* rax_39 = rax_38 & 0xfffffffffffffff0
            __chkstk(rax_39)
            void* rsp_3 = rsp_2 - rax_39
            int32_t* var_78 = rsp_3 + 0x30
            void* var_68_1 = rdx + 4 + rsp_3 + 0x30
            void* var_70_1 = rsp_3 + 0x34
            
            if (r14 - 1 u<= 1)
                zmm1_1, zmm2_1 = sub_1409a0240(var_90, arg2, &var_78)
            else if (r14 != 4)
                int64_t var_60_1 = 1
                int32_t var_58_2 = 0
                char var_54_2 = 0
                *(rsp_3 + 0x30) = 0x3f800000
            else
                int32_t r8_3 = 0
                
                if (not(0f f< *rax_36))
                    int64_t rax_44
                    
                    do
                        rax_44 = sx.q(r8_3)
                        r8_3 += 1
                    while (0f f>= rax_36[rax_44 + 1])
                
                int32_t rdx_10 = rdi_3 - 1
                
                if (not(0f f< rax_36[sx.q(rdi_3) - 1]))
                    int64_t rax_46
                    
                    do
                        rax_46 = sx.q(rdx_10)
                        rdx_10 -= 1
                    while (0f f>= rax_36[rax_46 - 1])
                
                int64_t rax_47 = sx.q(arg2[3].d)
                int64_t var_60
                var_60.d = 1
                var_60:4.d = rax_47.d
                int32_t var_58_1 = 0
                char var_54_1 = 0
                *(rsp_3 + 0x30) = 0x3f400000
                
                if (rax_47.d s> 0)
                    __builtin_memset(rsp_3 + 0x34, 0, rax_47 << 2)
                    rdi_3 = var_98
                
                *(rsp_3 + 0x34 + (sx.q(r8_3) << 2)) = 0x3e000000
                *(rsp_3 + 0x34 + (sx.q(rdx_10) << 2)) = 0x3e000000
            
            *(rsp_3 + 0x28) = rax_36
            *(rsp_3 + 0x20) = r12
            zmm2_1.o = zmm6
            zmm1_1.o = zmm7
            float zmm0_1[0x4] = sub_1429c8b20(&var_94, zmm1_1, zmm2_1, zx.q(rdi_3))
            float zmm1_2[0x4] = 0x3f800000
            zmm1_2[0] = 1f - zmm0_1[0]
            result = EnumC13Lines::Init(&var_78, zmm1_2, zmm0_1, arg3)
        else
            zmm1_1.o = zmm6
            result, zmm2_1 = sub_1429c8d50(&var_94, zmm1_1.d, rdi_3, rax_36)
            r14 = result.d
            
            if (result.d != r15)
                goto label_1409969d7

__security_check_cookie(rax_1 ^ &var_98)
return result
