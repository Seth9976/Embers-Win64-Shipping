// 函数: sub_142b23270
// 地址: 0x142b23270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx = *(arg2 + 0x18) + (zx.q(arg3) u>> 0xd << 1)
uint32_t rbx_2 = zx.d(*rdx) << 0x10 | zx.d(rdx[1])
int32_t rsi = 0
int64_t var_30 = 0
void* var_28 = &rdx[2]
int32_t var_18 = 0xffffffff

for (int32_t i = (*(*arg1 + 0x30))(arg1, arg4); i s>= 0; i = (*(*arg1 + 0x30))(arg1, arg4))
    rsi += 1
    int32_t rax_3 = sub_142b107e0(&var_30, i)
    
    if (rax_3 s>= 2)
        uint32_t rbx_3 = zx.d(rdx[2])
        
        if (test_bit(rbx_3, 0xf))
            rbx_2 = rbx_3 & 0x7fff
            
            if (rbx_2 u>= 0x4000)
                if (rbx_2 u>= 0x7fff)
                    goto label_142b23351
                
                rbx_2 = (rbx_2 - 0x4000) << 0x10 | zx.d(rdx[3])
        else if (rbx_3 u< 0x4040)
            rbx_2 = (rbx_3 u>> 6) - 1
        else if (rbx_3 u>= 0x7fc0)
        label_142b23351:
            rbx_2 = zx.d(rdx[3]) << 0x10 | zx.d(rdx[4])
        else
            rbx_2 = ((rbx_3 & 0x7fc0) - 0x4040) << 0xa | zx.d(rdx[3])
    
    if ((rax_3.b & 1) == 0)
        break

int64_t r9 = *arg1
(*(r9 + 0x58))(arg1, zx.q(rsi), arg4, r9, -2)
sub_142a97dd0(&var_30)
return zx.q(rbx_2)
