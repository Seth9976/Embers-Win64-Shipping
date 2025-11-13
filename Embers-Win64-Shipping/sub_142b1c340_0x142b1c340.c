// 函数: sub_142b1c340
// 地址: 0x142b1c340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rbx = arg4
int32_t rdi = arg2

if (arg3 u< *(arg1 + 0x1a))
    goto label_142b1c3d0

void* result

if (arg3 u< *(arg1 + 0x1e))
    rdi += (zx.d(arg3) u>> 3) - zx.d(*(arg1 + 0x1c))
    uint16_t rax_4
    rax_4, arg4 = sub_142b1e310(arg1, rdi)
    arg3 = rax_4
label_142b1c3d0:
    int16_t rcx_5 = *(arg1 + 0xe)
    
    if (arg3 u>= rcx_5)
        if (arg3 == rcx_5 || arg3 == (*(arg1 + 0x10) | 1))
            int32_t r8_7 = (rdi - 0xac00) s/ 0x1c
            int32_t rdi_2 = (rdi - 0xac00) s% 0x1c
            int16_t rdx_6 = (r8_7 s/ 0x15).w
            int16_t var_38 = 0x1100 + rdx_6
            r8_7.w -= rdx_6 * 0x15
            r8_7.w += 0x1161
            int16_t var_36_1 = r8_7.w
            int64_t rdi_3
            
            if (rdi_2 != 0)
                rdi_2.w += 0x11a7
                int16_t var_34_1 = rdi_2.w
                rdi_3 = 6
            else
                rdi_3 = 4
            
            if (&var_38 == &var_38 + rdi_3)
                result.b = 1
            else
                uint32_t rdi_4 = (rdi_3 u>> 1).d
                
                if (rbx[5].d s< rdi_4)
                    result = sub_142b1fbc0(rbx, rdi_4, arg5)
                
                if (rbx[5].d s>= rdi_4 || result.b != 0)
                    sub_142a8bca0(rbx[4], &var_38, rdi_4)
                    rbx[4] += sx.q(rdi_4) * 2
                    rbx[5].d -= rdi_4
                    goto label_142b1c59a
                
                result.b = 0
        else
            int64_t rax_10 = *(arg1 + 0x30)
            uint64_t rcx_11 = zx.q(arg3) u>> 1
            void* rdx_1 = rax_10 + (rcx_11 << 1)
            uint32_t rax_11 = zx.d(*(rax_10 + (rcx_11 << 1)))
            int32_t r8_4 = rax_11 & 0x1f
            uint16_t rcx_12 = rax_11.w u>> 8
            
            if (rax_11.b s>= 0)
                rax_11.b = 0
            else
                rax_11 = zx.d(*(rdx_1 - 1))
            
            arg4.b = 1
            result = sub_142b19b80(rbx, rdx_1 + 2, r8_4, arg4.b, rax_11.b, rcx_12.b, arg5)
    else if (rdi s> 0xffff)
        if (rbx[5].d s< 2)
            result = sub_142b1fbc0(rbx, 2, arg5)
        
        if (rbx[5].d s< 2 && result.b == 0)
            result.b = 0
        else
            *rbx[4] = (rdi s>> 0xa).w - 0x2840
            rdi.w &= 0x3ff
            rdi.w |= 0xdc00
            *(rbx[4] + 2) = rdi.w
            rbx[4] += 4
            rbx[5].d -= 2
        label_142b1c59a:
            rbx[3] = rbx[4]
            *(rbx + 0x2c) = 0
            result.b = 1
    else
        char rax_5
        
        if (rbx[5].d == 0)
            rax_5 = sub_142b1fbc0(rbx, 1, arg5)
        
        if (rbx[5].d != 0 || rax_5 != 0)
            *rbx[4] = rdi.w
            rbx[4] += 2
            rbx[5].d -= 1
            goto label_142b1c59a
        
        result = nullptr
else
    char rax_2
    
    if (arg3 u< 0xfc00)
        rax_2 = 0
    else
        rax_2 = (arg3 u>> 1).b
    
    if (rdi s> 0xffff)
        result = sub_142b19f70(rbx, arg2, rax_2, arg5)
    else
        result = sub_142b19db0(rbx, arg2.w, rax_2, arg5)

__security_check_cookie(rax_1 ^ &var_78)
return result
