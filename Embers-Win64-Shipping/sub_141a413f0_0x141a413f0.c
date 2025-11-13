// 函数: sub_141a413f0
// 地址: 0x141a413f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x68)
int64_t rbp = sx.q(*(arg1 + 0x70))
int32_t i = 0
int64_t var_38 = 0
int64_t r15 = 0
int32_t var_30 = rbp.d
int32_t var_2c

if (rbp.d != 0)
    sub_1405c4a90(&var_38, rbp.d, 0)
    r15 = var_38
    memcpy(r15, rbx, (rbp << 2).d)
    rbp = zx.q(var_30)
else
    var_2c = 0

int32_t rsi = 0

while (i s>= 0)
    if (i s>= *(arg1 + 0xe0))
        break
    
    if (rsi s< 0)
        break
    
    if (rsi s>= *(arg1 + 0x70))
        break
    
    int32_t rbx_1 = *(*(arg1 + 0xd8) + (sx.q(i) << 2))
    int32_t rax_3 = *(*(arg1 + 0x68) + (sx.q(rsi) << 2))
    
    if (rbx_1 == rax_3)
        i += 1
        rsi += 1
    else if (rbx_1 u<= rax_3)
        int64_t r13_1 = sx.q(rbp.d)
        rbp = zx.q((r13_1 + 1).d)
        int32_t var_30_1 = rbp.d
        
        if (rbp.d s> var_2c)
            sub_1405a4cf0(&var_38)
            rbp = zx.q(var_30_1)
            r15 = var_38
        
        *(r15 + (r13_1 << 2)) = rbx_1
        i += 1
    else
        rsi += 1

while (i s>= 0)
    if (i s>= *(arg1 + 0xe0))
        break
    
    int64_t rbx_2 = sx.q(rbp.d)
    rbp = zx.q((rbx_2 + 1).d)
    int32_t* rsi_1 = *(arg1 + 0xd8) + (sx.q(i) << 2)
    int32_t var_30_2 = rbp.d
    
    if (rbp.d s> var_2c)
        sub_1405a4cf0(&var_38)
        rbp = zx.q(var_30_2)
        r15 = var_38
    
    i += 1
    *(r15 + (rbx_2 << 2)) = *rsi_1

int64_t* r9 = *(arg1 + 0x148)
var_38 = r15
int32_t var_30_3 = rbp.d
var_38.o = var_38.o
sub_141a2f1d0(arg2, arg1 + 0x158, arg3, r9, &var_38)

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
