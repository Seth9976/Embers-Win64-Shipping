// 函数: sub_1422d1920
// 地址: 0x1422d1920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg7
int64_t* rdx = arg2[1]
int64_t* r14_2 = (sx.q(arg4) << 5) + *(arg1 + 0x38)
arg7.w = rbx[1].w
int16_t* r9 = *rdx
uint32_t result

if (&r9[1] u> rdx[1])
    int64_t** rdx_1 = &arg7
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54000(arg2, rdx_1, arg6)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_1, 2)
else
    result = zx.d(*r9)
    arg7.w = result.w
    *rdx += 2

int16_t r8 = arg7.w
uint32_t rcx_1 = zx.d(r8)
char rdx_2 = arg2[5].b & 1

if (rdx_2 == 0)
    rcx_1 = rbx[1].d

if (rcx_1 s<= data_143a2fda8)
    result = zx.d(*(r14_2 + 0xa)) * rcx_1

if (rcx_1 s> data_143a2fda8 || result s> data_143a2fdac)
    *(arg2 + 0x29) |= 1

if ((*(arg2 + 0x29) & 1) == 0)
    if (rdx_2 != 0)
        uint32_t rdx_3 = zx.d(r8)
        
        if (rdx_3 != rbx[1].d)
            void* rax_4 = *r14_2
            void* rcx_2 = *(rax_4 + 0x78)
            int32_t r8_1 = *(rax_4 + 0x80)
            int32_t rax_5 = *(rcx_2 + 0x3c)
            void* var_58 = rcx_2
            int32_t var_48_1 = rax_5
            int32_t var_44_1 = r8_1
            int64_t* var_50_1 = rbx
            result, arg5 = sub_1422cf5a0(&var_58, rdx_3)
    
    int64_t rdi_1 = *rbx
    int32_t rbp_1 = 0
    
    if (rbx[1].d s> 0)
        while ((*(arg2 + 0x29) & 1) == 0)
            result, arg5 = sub_1422d1b10(arg1, arg2, arg3, arg4 + 1, arg5, arg6, 
                zx.d(r14_2[1].w) - 1, sx.q(zx.d(*(r14_2 + 0xa)) * rbp_1) + rdi_1, arg8, rbp_1, 
                arg9, arg10, arg11)
            rbp_1 += 1
            
            if (rbp_1 s>= rbx[1].d)
                break

return result
