// 函数: sub_140996b60
// 地址: 0x140996b60
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
int128_t zmm8
int128_t var_58 = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int32_t var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r15 = arg4
int32_t* rdi = arg1
int32_t var_e4_1
int64_t rcx
void* rsp_1
int64_t rsi
void* r13
int32_t r14

if (arg4 - 1 u> 1)
    r14 = arg5
    
    if (r14 == 0 && arg4 != 0)
        r14 = arg4
    
    rsi = sx.q(arg2[3].d)
    var_e4_1 = rsi.d
    rcx = rsi << 2
    int64_t rax_3 = rcx + 0xf
    
    if (rax_3 u<= rcx)
        rax_3 = 0xffffffffffffff0
    
    int64_t rax_4 = rax_3 & 0xfffffffffffffff0
    __chkstk(rax_4)
    void var_118
    rsp_1 = &var_118 - rax_4
    r13 = nullptr
    zmm11 = zx.o(0)
    
    if ((r15 & 0xfffffffb) == 0 || r15 != r14)
        zmm11 = *(*(*arg2 + 0x198) + (sx.q(arg2[2].d) << 2))
        rdi = arg1
        r13 = sub_1409c44d0(arg2, rsp_1 + 0x30)
        
        if (r15 == 0)
            var_e8 = *rdi
            r15 = sub_1429c8d50(&var_e8, zmm11.d, rsi.d, r13)

int64_t result

if (arg4 - 1 u<= 1 || r15 - 1 u<= 1)
    result = sub_1409a0410(rdi, arg2, arg3)
else
    if (r15 != 4)
        result = *arg3
        arg3[3] = 1
        arg3[4].d = 0
        *(arg3 + 0x24) = 0
        *result = 0x3f800000
    else
        int32_t r10_1 = 0
        
        if (not(0f f< *r13))
            int64_t rax_10
            
            do
                rax_10 = sx.q(r10_1)
                r10_1 += 1
            while (0f f>= *(r13 + (rax_10 << 2) + 4))
        
        int32_t r9_1 = (rsi - 1).d
        
        if (not(0f f< *(r13 + (rsi << 2) - 4)))
            int64_t rax_11
            
            do
                rax_11 = sx.q(r9_1)
                r9_1 -= 1
            while (0f f>= *(r13 + (rax_11 << 2) - 4))
        
        int64_t r11_1 = sx.q(arg2[3].d)
        int32_t* rax_12 = *arg3
        int32_t i_1 = 0
        arg3[3].d = 1
        *(arg3 + 0x1c) = r11_1.d
        arg3[4].d = 0
        *(arg3 + 0x24) = 0
        *rax_12 = 0x3f400000
        
        if (r11_1.d s> 0 && r11_1.d u>= 4)
            int64_t rdi_2 = arg3[1]
            
            if (rdi_2 u> &arg3[1] || rdi_2 + (sx.q((r11_1 - 1).d) << 2) u< &arg3[1])
                int32_t rax_16 = r11_1.d & 0x80000003
                
                if (rax_16 s< 0)
                    rax_16 = ((rax_16 - 1) | 0xfffffffc) + 1
                
                int32_t rcx_6 = r11_1.d - rax_16
                
                do
                    i_1 += 4
                while (i_1 s< rcx_6)
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rcx_6 + 3)
                __builtin_memset(rdi_2, 0, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2 << 2)
        
        int64_t i = sx.q(i_1)
        
        if (i s< r11_1)
            if (r11_1 - i s>= 4)
                do
                    *(arg3[1] + (i << 2)) = 0
                    *(arg3[1] + (i << 2) + 4) = 0
                    *(arg3[1] + (i << 2) + 8) = 0
                    *(arg3[1] + (i << 2) + 0xc) = 0
                    i += 4
                while (i s< r11_1 - 3)
            
            for (; i s< r11_1; i += 1)
                *(arg3[1] + (i << 2)) = 0
        
        *(arg3[1] + (sx.q(r10_1) << 2)) = 0x3e000000
        result = arg3[1]
        *(result + (sx.q(r9_1) << 2)) = 0x3e000000
    
    if (r14 != r15)
        int32_t var_e0 = *arg1
        int64_t rax_33 = rcx + 0xf
        
        if (rax_33 u<= rcx)
            rax_33 = 0xffffffffffffff0
        
        int64_t rax_34 = rax_33 & 0xfffffffffffffff0
        __chkstk(rax_34)
        void* rsp_2 = rsp_1 - rax_34
        int32_t* rax_35
        int512_t zmm1_1
        int512_t zmm2_1
        rax_35, zmm1_1, zmm2_1 = sub_1409c2900(arg2, &var_e0, rsp_2 + 0x30)
        zmm10 = *(*(arg2[1] + 0x198) + (sx.q(*(arg2 + 0x14)) << 2))
        
        if (r14 != 0)
        label_140996e7b:
            int64_t r9_3 = sx.q(var_e4_1)
            void* rax_37 = (sx.q((r9_3 * 2).d) << 2) + 0x13
            
            if (rax_37 u<= (sx.q((r9_3 * 2).d) << 2) + 4)
                rax_37 = 0xffffffffffffff0
            
            void* rax_38 = rax_37 & 0xfffffffffffffff0
            __chkstk(rax_38)
            zmm9 = 0x3f800000
            void* rsp_3 = rsp_2 - rax_38
            void* var_d0 = rsp_3 + 0x30
            void* var_c0_1 = rcx + 4 + rsp_3 + 0x30
            void* var_c8_1 = rsp_3 + 0x34
            
            if (r14 - 1 u<= 1)
                zmm8 = 0x3f200000
                var_e8 = 0x3d800000
                int64_t rdi_6 = sx.q(*(arg2 + 0x1c))
                int32_t var_b8_2 = 1
                int32_t var_b4_2 = rdi_6.d
                int32_t var_b0_3 = 0
                char var_ac_3 = 0
                
                if (rdi_6.d != 6)
                    zmm7.d = float.s(rdi_6.d)
                    zmm6.d = 1f f/ zmm7.d
                    r9_3 = zx.q(var_e4_1)
                    float zmm0_2 = cosf(zmm6.d * 6.28318548f) * 0.25f + 0.375f
                    zmm8.d = 0.625f - zmm0_2 * zmm0_2
                    zmm8.d = zmm8.d f* zmm6.d
                    zmm7.d = zmm7.d f* zmm8.d
                    var_e8 = zmm8.d
                    zmm8.d = 1f f- zmm7.d
                
                *(rsp_3 + 0x30) = zmm8.d
                int64_t rcx_18
                int64_t rdi_8
                
                if (rdi_6.d s> 0)
                    rdi_8, rcx_18 = __memfill_u32(rsp_3 + 0x34, var_e8, rdi_6)
            else if (r14 != 4)
                int32_t var_b8
                var_b8.q = 1
                int32_t var_b0_2 = 0
                char var_ac_2 = 0
                *(rsp_3 + 0x30) = 0x3f800000
            else
                int32_t r8_3 = 0
                
                if (not(0f f< *rax_35))
                    int64_t rax_42
                    
                    do
                        rax_42 = sx.q(r8_3)
                        r8_3 += 1
                    while (0f f>= rax_35[rax_42 + 1])
                
                int32_t rdx_9 = (r9_3 - 1).d
                
                if (not(0f f< rax_35[r9_3 - 1]))
                    int64_t rax_43
                    
                    do
                        rax_43 = sx.q(rdx_9)
                        rdx_9 -= 1
                    while (0f f>= rax_35[rax_43 - 1])
                
                int32_t var_b8_1 = 1
                int32_t var_b0_1 = 0
                char var_ac_1 = 0
                int64_t rax_45 = sx.q(arg2[3].d)
                int32_t var_b4_1 = rax_45.d
                *(rsp_3 + 0x30) = 0x3f400000
                
                if (rax_45.d s> 0)
                    __builtin_memset(rsp_3 + 0x34, 0, rax_45 << 2)
                
                *(rsp_3 + 0x34 + (sx.q(r8_3) << 2)) = 0x3e000000
                *(rsp_3 + 0x34 + (sx.q(rdx_9) << 2)) = 0x3e000000
            
            *(rsp_3 + 0x28) = rax_35
            zmm2_1.o = zmm10
            *(rsp_3 + 0x20) = r13
            zmm1_1.o = zmm11
            float zmm0_3[0x4] = sub_1429c8b20(&var_e0, zmm1_1, zmm2_1, r9_3)
            zmm9[0] = 1f - zmm0_3[0]
            result = EnumC13Lines::Init(&var_d0, zmm9, zmm0_3, arg3)
        else
            zmm1_1.o = zmm10
            result, zmm2_1 = sub_1429c8d50(&var_e0, zmm1_1.d, var_e4_1, rax_35)
            r14 = result.d
            
            if (result.d != r15)
                goto label_140996e7b

__security_check_cookie(rax_1 ^ &var_e8)
return result
