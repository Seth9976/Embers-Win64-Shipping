// 函数: sub_141a55640
// 地址: 0x141a55640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg5
int64_t* r12 = arg3
int64_t r11 = sx.q(arg4)
void* r14 = arg1
void* r9_3

if (rbx.d == 0xffffffff)
    r9_3 = r14
else
    r9_3 =
        ((sx.q(*(*(r14 + 0x20) + sx.q(rbx.d) * 0xc)) + sx.q((rbx u>> 0x20).d)) << 5) + *(r14 + 0x30)

int64_t rsi = sx.q(*(r9_3 + 0x18))
void* r15 = r14 + 0x20
int32_t var_88

if (rsi.d != 0xffffffff)
    int64_t rax_18 = *r15
    int64_t rcx_9 = rsi * 3
    int32_t r8 = r11.d
    int32_t r10_1 = *(rax_18 + (rcx_9 << 2) + 4)
    
    if (r11.d s< r10_1)
        int64_t* arg_18
        arg_18.d = rsi.d
        int32_t* r9_6 = *(r15 + 0x10) + 0x18 + ((sx.q(*(rax_18 + (rcx_9 << 2))) + r11) << 5)
        
        do
            int64_t rax_19 = sx.q(*r9_6)
            r8 += 1
            arg_18:4.d = r8
            uint128_t* rax_25
            
            if (rax_19.d == 0xffffffff)
                int64_t var_78 = 0
                rax_25 = &var_78
                int32_t var_70_1 = 0
            else
                int64_t rcx_12 = rax_19 * 3
                int64_t rax_20 = *r15
                var_88.q = (sx.q(*(rax_20 + (rcx_12 << 2))) << 5) + *(r15 + 0x10)
                int32_t var_80_1 = *(rax_20 + (rcx_12 << 2) + 4)
                rax_25 = &var_88
            
            uint128_t zmm1 = *rax_25
            void* i = zmm1.q
            
            for (void* rdx_6 = (sx.q(_mm_bsrli_si128(zmm1, 8).d) << 5) + i; i != rdx_6; i += 0x20)
                *(i + 0x10) = arg_18
            
            r9_6 = &r9_6[8]
        while (r8 s< r10_1)
else
    rsi = sx.q(*(r15 + 8))
    var_88 = *(r15 + 0x18)
    int32_t rax_7 = (rsi + 1).d
    arg5.d = rsi.d
    *(r15 + 8) = rax_7
    int32_t var_84_1 = 0
    
    if (rax_7 s> *(r15 + 0xc))
        sub_14083a7e0(r15)
    
    int64_t rax_8 = *r15
    int64_t rcx_2 = rsi * 3
    *(rax_8 + (rcx_2 << 2)) = var_88.q
    *(rax_8 + (rcx_2 << 2) + 8) = 1
    int64_t r12_1 = sx.q(*(r15 + 0x18))
    int32_t rax_10 = *(r15 + 0x18) + 1
    
    if (rax_10 s> r12_1.d)
        *(r15 + 0x18) = rax_10
        int32_t i_2 = rax_10 - r12_1.d
        
        if (rax_10 s> *(r15 + 0x1c))
            sub_1405c4e40(r15 + 0x10)
        
        void* rcx_6 = (r12_1 << 5) + *(r15 + 0x10)
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                rcx_6 += 0x20
                int32_t arg_c = 0
                *(rcx_6 - 0x20) = 0.q
                var_88.b = 0
                int32_t var_84_2 = 0
                *(rcx_6 - 0x18) = var_88.q
                *(rcx_6 - 0x10) = -1
                *(rcx_6 - 8) = -1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        rsi = zx.q(arg5.d)
    else if (rax_10 s< r12_1.d && rax_10 != r12_1.d)
        *(r15 + 0x18) = rax_10
        sub_1405dad20(r15 + 0x10)
    
    if (rbx.d != 0xffffffff)
        r14 = ((sx.q(*(*r15 + sx.q(rbx.d) * 0xc)) + sx.q((rbx u>> 0x20).d)) << 5) + *(r15 + 0x10)
    
    r12 = arg3
    *(r14 + 0x18) = rsi.d
int64_t var_58 = rbx
int64_t var_50 = -1
int64_t rax_29 = *r12
uint128_t var_68 = *arg2
(*(rax_29 + 8))(r12, &var_68)
return sub_141a54f80(r15, rsi.d, arg4, &var_68)
