// 函数: sub_142bdfbc0
// 地址: 0x142bdfbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg4
int32_t arg_18 = arg3
int32_t r15 = arg3
int64_t* rsi = *(arg2 + 0x2d0)
int32_t* rbx = arg2
void* rdi = *(*(arg2 + 0x90) + 8)

if (rsi == 0)
    int64_t* rax_1
    rax_1, arg3 = sub_142b92360(rdi, "sfnt")
    rsi = rax_1
    
    if (rax_1 == 0)
        return zx.q((rsi + 0xb).d)
    
    *(rbx + 0x2d0) = rax_1
    *(rbx + 0x2a0) = *rax_1

arg3.b = 1
int64_t rax_4 = sub_142b99bf0(*(rbx + 0x90), "postscript-cmaps", arg3.b)
bool cond:0 = *(rbx + 0x2e0) != 0
*(rbx + 0x2d8) = rax_4

if (not(cond:0))
    *(rbx + 0x2e0) = sub_142b99bf0(sub_142b922e0(rdi, "truetype"), "multi-masters", 0)

if (*(rbx + 0x2e8) == 0)
    *(rbx + 0x2e8) = sub_142b99bf0(sub_142b922e0(rdi, "truetype"), "metrics-variations", 0)

int32_t result
int512_t zmm1
result, zmm1 = sub_142be84a0(arg1, rbx, arg5)
result_1 = result

if (result == 0)
    int64_t* rdi_1 = *(rbx + 0xa0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15)
    int32_t r12_3 = (temp1_1 ^ temp0_1) - temp0_1
    uint32_t rcx_7 = zx.d(r12_3.w)
    uint32_t rdx_2 = rcx_7 - 1
    
    if (r15 s>= 0)
        rdx_2 = rcx_7
    
    if (rdx_2 s>= rbx[0x38])
        if (r15 s>= 0)
            return 6
        
        rdx_2 = 0
    
    result = sub_142b97060(rdi_1, *(*(rbx + 0xe8) + (sx.q(rdx_2) << 2)), zmm1)
    result_1 = result
    
    if (result == 0)
        result = rsi[0x16](rbx, rdi_1)
        result_1 = result
        
        if (result == 0)
            int64_t rax_12 = *(rbx + 0x98)
            int64_t buffer1 = 0
            int64_t buffer2 = 0
            int32_t var_78
            int32_t var_74
            uint32_t var_70_1
            int16_t var_6c_1
            uint32_t var_68_1
            uint32_t rsi_1
            uint32_t r14_2
            uint32_t r15_1
            
            if ((*(rbx + 0x2a0))(rbx, 0x66766172, rdi_1, &var_74) != 0 || var_74 u< 0x14)
            label_142bdfea2:
                r14_2 = 0
                rsi_1 = 0
                var_70_1 = 0
                var_78 = 0
                var_6c_1 = 0
                r15_1 = 0
                var_68_1 = 0
            else
                int32_t rax_14 = sub_142b96d30(rdi_1, &result_1)
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                uint32_t r13_1 = zx.d(sub_142b96f00(rdi_1, &result_1))
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                int32_t result_2 = sub_142b970b0(rdi_1, 2)
                result_1 = result_2
                
                if (result_2 != 0)
                    goto label_142bdfea2
                
                rsi_1 = zx.d(sub_142b96f00(rdi_1, &result_1))
                var_70_1 = rsi_1
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                var_78.w = sub_142b96f00(rdi_1, &result_1)
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                r15_1 = zx.d(sub_142b96f00(rdi_1, &result_1))
                var_68_1 = r15_1
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                int16_t rax_19 = sub_142b96f00(rdi_1, &result_1)
                var_6c_1 = rax_19
                
                if (result_1 != 0)
                    goto label_142bdfea2
                
                uint32_t rcx_20
                uint64_t rdx_11
                uint32_t r8_1
                
                if (rax_14 == 0x10000 && var_78.w == 0x14 && rsi_1.w - 1 u<= 0x3ffd)
                    rcx_20 = zx.d(rax_19)
                    rdx_11 = zx.q(rsi_1.w)
                    r8_1 = (rdx_11 << 2).d
                
                if (rax_14 == 0x10000 && var_78.w == 0x14 && rsi_1.w - 1 u<= 0x3ffd
                        && (rcx_20 == r8_1 + 4 || rcx_20 == r8_1 + 6) && r15_1.w u<= 0x7eff)
                    r14_2 = r13_1
                    
                    if (zx.d(r15_1.w) * rcx_20 + r13_1 + ((rdx_11 * 5).d << 2) u> var_74)
                        r15_1 = 0
                        var_68_1 = 0
                    else
                        rbx[0x106] |= 1
                else
                    r14_2 = r13_1
                    r15_1 = 0
                    var_68_1 = 0
            
            int32_t var_50
            
            if ((rbx[0x106].b & 1) != 0)
                uint64_t r13_2 = zx.q(rsi_1.w)
                uint32_t rsi_2 = (r13_2 << 2).d
                buffer1 = sub_142b99860(rax_12, rsi_2, &result_1)
                
                if (result_1 == 0)
                    int64_t buffer2_1
                    int512_t zmm0_1
                    buffer2_1, zmm0_1 = sub_142b99860(rax_12, rsi_2, &result_1)
                    buffer2 = buffer2_1
                    
                    if (result_1 == 0)
                        int32_t rax_28 = sub_1408e52d0(rdi_1) - 0x10 + r14_2
                        int64_t buffer1_1 = buffer1
                        var_50 = rax_28
                        int32_t rsi_3 = rax_28 + 8
                        
                        if (r13_2.d != 0)
                            uint64_t i_1 = zx.q(r13_2.d)
                            uint64_t i
                            
                            do
                                int32_t result_3
                                result_3, zmm0_1 = sub_142b969a0(rdi_1, rsi_3, buffer1_1, 4, zmm0_1)
                                rsi_3 += zx.d(var_78.w)
                                result_1 = result_3
                                buffer1_1 += 4
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            rbx = arg2
                        
                        int32_t rsi_4 = 0
                        uint32_t r12_5 = zx.d(r15_1.w)
                        int32_t r14_5 = var_50 + 4 + zx.d(var_78.w) * r13_2.d
                        
                        if (r12_5 != 0)
                            do
                                result_1 = sub_142b969a0(rdi_1, r14_5, buffer2, rsi_2, zmm0_1)
                                int32_t rax_33
                                rax_33, zmm0_1 = memcmp(buffer1, buffer2, zx.q(var_70_1.w) << 2)
                                
                                if (rax_33 == 0)
                                    break
                                
                                rsi_4 += 1
                                r14_5 += zx.d(var_6c_1)
                            while (rsi_4 u< r12_5)
                            
                            rbx = arg2
                            r15_1 = var_68_1
                        
                        if (rsi_4 == r12_5)
                            r15_1.w += 1
            
            sub_142b99980(rax_12, buffer1)
            sub_142b99980(rax_12, buffer2)
            
            if ((*(rbx + 0x2a0))(rbx, 0x676c7966, rdi_1, 0, var_78, var_70_1, var_68_1, buffer1, 
                    buffer2, var_50, rax_12) != 0 && (*(rbx + 0x2a0))(rbx, 0x43464632, rdi_1, 0) != 0
                    && (*(rbx + 0x2a0))(rbx, 0x43464620, rdi_1, 0) == 0)
                r15_1 = 0
            
            if (r12_3 s>> 0x10 s> zx.d(r15_1.w))
                if (arg_18 s>= 0)
                    return 6
                
                r15_1 = 0
            
            rbx[3] = zx.d(r15_1.w) << 0x10
            *rbx = rbx[0x38]
            result = result_1
            rbx[1] = arg_18

return result
