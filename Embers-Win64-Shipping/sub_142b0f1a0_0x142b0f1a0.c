// 函数: sub_142b0f1a0
// 地址: 0x142b0f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)
uint64_t result = zx.q(arg3 - r13.d)

if (result.d s> 1)
    int32_t r12_1 = 0
    *(arg1 + 0x2c) = 0
    *(arg1 + 0x34) = 0
    arg1[5].d = 0xffffffff
    pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(&arg1[1])
    void* rdi_2 = *arg1 + 0x148
    *(arg1 + 0x34) = arg4
    arg1[7].d = arg6
    int32_t arg_10 = 0
    int32_t result_1 = 0
    sub_142aeacd0(rdi_2, r13)
    int64_t rbx_1 = sx.q(sub_142aea4f0(rdi_2, arg5))
    int64_t* r8 = *(*(*arg1 + 0x1d8) + 0x30)
    int32_t rcx_6
    
    if (rbx_1.d u< 0xd800)
        rcx_6 = (rbx_1.d & 0x1f) + (zx.d(*(*r8 + (rbx_1 s>> 5 << 1))) << 2)
    else if (rbx_1.d u<= 0xffff)
        int32_t rcx_7 = 0
        
        if (rbx_1.d s<= 0xdbff)
            rcx_7 = 0x140
        
        rcx_6 = (rbx_1.d & 0x1f) + (zx.d(*(*r8 + (sx.q(rcx_7 + (rbx_1.d s>> 5)) << 1))) << 2)
    else if (rbx_1.d u> 0x10ffff)
        rcx_6 = r8[3].d + 0x80
    else if (rbx_1.d s< *(r8 + 0x2c))
        int64_t rdx_3 = *r8
        rcx_6 = (rbx_1.d & 0x1f) + (zx.d(*(rdx_3 + (
            zx.q(zx.d(*(rdx_3 + (sx.q((rbx_1.d s>> 0xb) + 0x820) << 1))) + (rbx_1.d s>> 5 & 0x3f))
            << 1))) << 2)
    else
        rcx_6 = r8[6].d
    
    result = *r8
    int16_t rbp_1 = *(result + (sx.q(rcx_6) << 1))
    
    if (arg_10 s<= 0)
        while (true)
            int32_t rcx_15 = *(rdi_2 + 0x28)
            int32_t rax_22
            
            if (rcx_15 s> *(rdi_2 + 0x1c))
                rax_22 = (*(*(rdi_2 + 0x38) + 0x40))(rdi_2)
            else
                rax_22 = *(rdi_2 + 0x20) + rcx_15
            
            if (rax_22 s>= arg3)
                break
            
            if ((0x4000 & rbp_1) != 0)
                int64_t* rax_48
                rax_48, arg5 = sub_142a96740(*arg1, rbx_1.d)
                
                if (rax_48 != 0)
                    result_1 +=
                        (*(*rax_48 + 0x10))(rax_48, rdi_2, zx.q(r13.d), zx.q(arg3), &arg1[1])
                
                rbx_1 = sx.q(sub_142aea4f0(rdi_2, arg5))
                int64_t* r8_3 = *(*(*arg1 + 0x1d8) + 0x30)
                int32_t rcx_45
                
                if (rbx_1.d u< 0xd800)
                    rcx_45 = (rbx_1.d & 0x1f) + (zx.d(*(*r8_3 + (rbx_1 s>> 5 << 1))) << 2)
                else if (rbx_1.d u<= 0xffff)
                    int32_t rcx_46 = 0
                    
                    if (rbx_1.d s<= 0xdbff)
                        rcx_46 = 0x140
                    
                    rcx_45 = (rbx_1.d & 0x1f)
                        + (zx.d(*(*r8_3 + (sx.q(rcx_46 + (rbx_1.d s>> 5)) << 1))) << 2)
                else if (rbx_1.d u> 0x10ffff)
                    rcx_45 = r8_3[3].d + 0x80
                else if (rbx_1.d s< *(r8_3 + 0x2c))
                    int64_t rdx_11 = *r8_3
                    rcx_45 = (rbx_1.d & 0x1f) + (zx.d(*(rdx_11 + (zx.q(
                        zx.d(*(rdx_11 + (sx.q((rbx_1.d s>> 0xb) + 0x820) << 1)))
                        + (rbx_1.d s>> 5 & 0x3f)) << 1))) << 2)
                else
                    rcx_45 = r8_3[6].d
                
                rbp_1 = *(*r8_3 + (sx.q(rcx_45) << 1))
                
                if (arg_10 s> 0)
                    break
            else
                sub_142aea870(rdi_2, arg5)
                rbx_1 = sx.q(sub_142aea4f0(rdi_2, arg5))
                int64_t* r8_1 = *(*(*arg1 + 0x1d8) + 0x30)
                
                if (rbx_1.d u< 0xd800)
                    rbp_1 = *(*r8_1 +
                        (sx.q((rbx_1.d & 0x1f) + (zx.d(*(*r8_1 + (rbx_1 s>> 5 << 1))) << 2)) << 1))
                else if (rbx_1.d u<= 0xffff)
                    int32_t rcx_24 = 0
                    
                    if (rbx_1.d s<= 0xdbff)
                        rcx_24 = 0x140
                    
                    rbp_1 = *(*r8_1 + (sx.q((rbx_1.d & 0x1f)
                        + (zx.d(*(*r8_1 + (sx.q(rcx_24 + (rbx_1.d s>> 5)) << 1))) << 2)) << 1))
                else if (rbx_1.d u> 0x10ffff)
                    rbp_1 = *(*r8_1 + (sx.q(r8_1[3].d + 0x80) << 1))
                else if (rbx_1.d s< *(r8_1 + 0x2c))
                    int64_t rdx_6 = *r8_1
                    int32_t rcx_37 = (rbx_1.d & 0x1f) + (zx.d(*(rdx_6 + (zx.q(
                        zx.d(*(rdx_6 + (sx.q((rbx_1.d s>> 0xb) + 0x820) << 1)))
                        + (rbx_1.d s>> 5 & 0x3f)) << 1))) << 2)
                    rbp_1 = *(rdx_6 + (sx.q(rcx_37) << 1))
                else
                    rbp_1 = *(*r8_1 + (sx.q(r8_1[6].d) << 1))
        
        result = zx.q(result_1)
        
        if (result.d s> 0)
            int32_t rcx_54
            
            if (arg1[2].d s<= 0)
                rcx_54 = 0
            else
                rcx_54 = *arg1[4]
            
            if (r13.d s< rcx_54)
                sub_142ae7ee0(&arg1[1], r13.d, 0, &arg_10)
            
            int32_t rax_71 = arg1[2].d
            int32_t rdx_13
            
            if (rax_71 - 1 s< 0 || rax_71 s<= 0 || 0 + 1 s<= 0)
                rdx_13 = 0
            else
                rdx_13 = *(arg1[4] + (sx.q(rax_71 - 1) << 2))
            
            if (arg3 s> rdx_13)
                int32_t rdx_14 = arg1[2].d
                char rax_74
                
                if (rdx_14 + 1 s< 0 || *(arg1 + 0x14) s< rdx_14 + 1)
                    rax_74 = sub_142ae7df0(&arg1[1], rdx_14 + 1, &arg_10)
                
                if ((rdx_14 + 1 s>= 0 && *(arg1 + 0x14) s>= rdx_14 + 1) || rax_74 != 0)
                    *(arg1[4] + (sx.q(arg1[2].d) << 2)) = arg3
                    arg1[2].d += 1
            
            arg1[5].d = 0
            int32_t rcx_60
            
            if (arg1[2].d s<= 0)
                rcx_60 = 0
            else
                rcx_60 = *arg1[4]
            
            *(arg1 + 0x2c) = rcx_60
            result = zx.q(arg1[2].d)
            int32_t rcx_61 = (result - 1).d
            
            if (rcx_61 s>= 0 && result.d s> 0)
                result = zx.q(result.d - rcx_61)
                
                if (result.d s> 0)
                    result = arg1[4]
                    r12_1 = *(result + (sx.q(rcx_61) << 2))
            
            arg1[6].d = r12_1

return result
