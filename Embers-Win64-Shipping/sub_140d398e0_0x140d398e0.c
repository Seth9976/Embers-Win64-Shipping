// 函数: sub_140d398e0
// 地址: 0x140d398e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
void var_878
int64_t rax_1 = __security_cookie ^ &var_878
*arg1 = 0
arg1[9] = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 8
int16_t var_838
sub_140b5e700(&arg_10, &var_838)
uint32_t rcx_1 = zx.d(var_838)
int16_t* r8 = &var_838
int16_t* rbx = &var_838
uint64_t rax_3 = zx.q(rcx_1) & 0x3f

if (not(test_bit(sbb.q(rax_3, rax_3, rcx_1 u< 0x40) & 0x400400000000001, zx.q(rax_3.b))))
    uint64_t rax_7
    uint32_t i
    
    do
        i = zx.d(rbx[1])
        rbx = &rbx[1]
        rax_7 = zx.q(i) & 0x3f
    while (not(test_bit(sbb.q(rax_7, rax_7, i u< 0x40) & 0x400400000000001, zx.q(rax_7.b))))

uint64_t var_858

if (*rbx != 0)
    uint32_t i_1
    
    do
        uint64_t* rax_10 = sub_140b580e0(&var_858, ((rbx - r8) s>> 1).d, r8, 1)
        int64_t rsi_1 = sx.q(arg1[0xa].d)
        int32_t rax_11 = (rsi_1 + 1).d
        arg1[0xa].d = rax_11
        
        if (rax_11 s> *(arg1 + 0x54))
            sub_140809370(&arg1[1], rsi_1.d)
        
        void* rax_12 = arg1[9]
        r8 = &rbx[1]
        void* rdx_7 = &arg1[1]
        rbx = r8
        
        if (rax_12 != 0)
            rdx_7 = rax_12
        
        *(rdx_7 + (rsi_1 << 3)) = *rax_10
        i_1 = zx.d(*r8)
        uint64_t rax_15 = zx.q(i_1) & 0x3f
        
        if (not(test_bit(sbb.q(rax_15, rax_15, i_1 u< 0x40) & 0x400400000000001, zx.q(rax_15.b))))
            uint64_t rax_19
            
            do
                i_1 = zx.d(rbx[1])
                rbx = &rbx[1]
                rax_19 = zx.q(i_1) & 0x3f
            while (not(test_bit(sbb.q(rax_19, rax_19, i_1 u< 0x40) & 0x400400000000001, 
                zx.q(rax_19.b))))
    while (i_1.w != 0)

uint64_t* rax_23

if (arg1[0xa].d != 0)
    int16_t* var_850 = r8
    int32_t var_848_1 = ((rbx - r8) s>> 1).d
    rax_23 = sub_140b57f80(&var_858, &var_850, arg_10:4.d, 1)
else
    var_858 = arg_10
    rax_23 = &var_858

*arg1 = *rax_23
__security_check_cookie(rax_1 ^ &var_878)
return arg1
