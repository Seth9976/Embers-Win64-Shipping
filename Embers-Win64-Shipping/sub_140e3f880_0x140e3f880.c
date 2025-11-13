// 函数: sub_140e3f880
// 地址: 0x140e3f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
int512_t zmm1
rax, zmm1 = sub_140e41de0(arg1, arg2)

if (rax == 0xd9)
    return 0

if (rax != 0xda)
    sub_140e43530(arg1, 0xffffff10)
    noreturn

sub_140e43150(arg1, zmm1)
sub_140e39df0(arg1)
int32_t r9 = arg1[0x23].d
int32_t r8 = 0

if (r9 s> 0)
    void* __offset(_SETJMP_FLOAT128, 0x234) rdx_1 = arg1 + 0x234
    
    do
        if (*(arg1 + 0x264) == 0
                && *(arg1 + (sx.q(*(arg1 + (sx.q(*rdx_1) << 2) + 0x244)) << 3) + 0x128) == 0)
            sub_140e43530(arg1, 0xffffff16)
            noreturn
        
        if (*(arg1 + 0x268) s> 0
                && *(arg1 + (sx.q(*(arg1 + (sx.q(*rdx_1) << 2) + 0x254)) << 3) + 0x128) == 0)
            sub_140e43530(arg1, 0xffffff16)
            noreturn
        
        r8 += 1
        rdx_1 += 4
    while (r8 s< r9)

int32_t i = 0
void* __offset(_SETJMP_FLOAT128, 0x2c8) rdi = arg1 + 0x2c8

do
    if (*(rdi - 0x1a0) != 0)
        void* r8_1 = *rdi
        
        if (r8_1 == 0)
            void** rax_3 = arg1[0x10].q
            
            if (rax_3 == 0)
            label_140e3f98f:
                int64_t* rax_4 = sub_140a82f30(0x7f20, 0, r8_1)
                
                if (rax_4 == 0)
                    sub_140e43530(arg1, 0xffffff20)
                    noreturn
                
                r8_1 = &rax_4[3]
                *rax_4 = arg1[0x10].q
                arg1[0x10].q = rax_4
                rax_4[1] = 0x1104
                rax_4[2] = 0x7f00
            else
                int64_t rcx_4
                
                while (true)
                    rcx_4 = rax_3[1]
                    
                    if (rcx_4 + 0x1104 u<= rax_3[2])
                        break
                    
                    rax_3 = *rax_3
                    
                    if (rax_3 == 0)
                        goto label_140e3f98f
                
                rax_3[1] = rcx_4 + 0x1104
                r8_1 = &rax_3[3] + rcx_4
                
                if (&rax_3[3] == neg.q(rcx_4))
                    goto label_140e3f98f
            
            *rdi = r8_1
        
        sub_140e41480(arg1, i, r8_1)
    
    i += 1
    rdi += 8
while (i s< 8)

int32_t r9_1 = arg1[0x23].d
int32_t rdx_4 = 0

if (r9_1 s> 0)
    void* __offset(_SETJMP_FLOAT128, 0x234) r8_3 = arg1 + 0x234
    
    do
        if (*(arg1 + (sx.q(*(arg1 + (sx.q(*r8_3) << 2) + 0x1f0)) << 3) + 0x1a8) == 0)
            sub_140e43530(arg1, 0xffffff15)
            noreturn
        
        rdx_4 += 1
        r8_3 += 4
    while (rdx_4 s< r9_1)

memset(arg1 + 0x2524, 0, sx.q(*(arg1 + 0x1cc)) << 2)
int32_t rax_6 = *(arg1 + 0x24fc)
*(arg1 + 0x348) = 0

if (rax_6 != 0)
    arg1[0x250].d = rax_6
    *(arg1 + 0x2504) = 0

int32_t rax_7 = *(arg1 + 0x24f4)

if (rax_7 == 0x10)
    arg1[0x36].q -= 1
    *arg1[0x36].q = *(arg1 + 0x24f8)
    *(arg1 + 0x368) += 1
    rax_7 = *(arg1 + 0x24f4)

if (rax_7 s>= 8)
    arg1[0x36].q -= 1
    *arg1[0x36].q = *(arg1 + 0x24f9)
    *(arg1 + 0x368) += 1

arg1[0x36].q -= 1
*arg1[0x36].q = *(arg1 + 0x24fa)
arg1[0x36].q -= 1
char* rcx_12 = arg1[0x36].q
*(arg1 + 0x368) += 1
*rcx_12 = *(arg1 + 0x24fb)
*(arg1 + 0x368) += 1
*(arg1 + 0x24f4) = 0x10
sub_140e3cc80(arg1, 0x10, zmm1)
sub_140e3cc80(arg1, 0x10, zmm1)
return 1
