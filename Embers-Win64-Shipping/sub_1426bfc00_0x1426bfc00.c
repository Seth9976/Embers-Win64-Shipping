// 函数: sub_1426bfc00
// 地址: 0x1426bfc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2
char rcx = *(arg1 + 0x263)

if (*(arg1 + 0x262) != 0)
    *(arg1 + 0x263) = rcx | 1
    return result

int64_t* r15 = nullptr
*(arg1 + 0x262) = 2
int32_t result_1
int32_t arg_18

if ((rcx & 0x10) == 0)
    int32_t rax = *(arg1 + 0x118)
    rcx |= 0x10
    int64_t r13_1 = sx.q(rax - 1)
    int64_t var_68_1 = r13_1
    *(arg1 + 0x263) = rcx
    
    if (rax - 1 s>= 0)
        int64_t temp1_1
        
        do
            int32_t i = 0
            void* rsi_2 = r13_1 * 0x58 + *(arg1 + 0x110)
            
            if (*(rsi_2 + 0x18) s> 0)
                do
                    int64_t* rcx_2 = *(r15 + *(rsi_2 + 0x10))
                    int64_t rdi_2 = zx.q(*(rcx_2 + 0x52)) + *(rsi_2 + 0x30)
                    
                    if ((rcx_2[0xb].b & 2) != 0)
                        if ((*(rcx_2 + 0x55) & 4) == 0)
                            goto label_1426bfd10
                        
                        uint64_t rax_4 = zx.q((*(*rcx_2 + 0x298))())
                        
                        if (rax_4.d != 0)
                            int64_t rax_6 = (rax_4 + 3) & 0xfffffffffffffffc
                            
                            if (rdi_2 != rax_6)
                                int64_t rdx = sx.q(*(rdi_2 - rax_6))
                                
                                if (rdx.d s< 0 || rdx.d s>= *(arg1 + 0x138))
                                    rax_6.b = 0
                                else
                                    rax_6.b = 1
                                
                                if (rax_6.b != 0)
                                    rcx_2 = *(*(arg1 + 0x130) + (rdx << 3))
                                label_1426bfd10:
                                    
                                    if (rcx_2 != 0)
                                        (*(*rcx_2 + 0x2b8))(rcx_2, arg1, rdi_2)
                    
                    i += 1
                    r15 = &r15[1]
                while (i s< *(rsi_2 + 0x18))
                
                r15 = nullptr
            
            *(rsi_2 + 0x18) = 0
            
            if (*(rsi_2 + 0x1c) s<= 0xffffffff)
                sub_1405c5570(rsi_2 + 0x10, 0)
            
            int32_t i_1 = 0
            int64_t r12_1 = 0
            
            if (*(rsi_2 + 0x28) s> 0)
                int64_t r9_1 = 0
                int64_t arg_20 = 0
                
                do
                    int64_t* r13_3 = *(rsi_2 + 0x20) + r9_1
                    int64_t* rdi_3 = *r13_3
                    
                    if (rdi_3 != 0 && r13_3[1].d == 0)
                        int32_t rax_9 = *(rdi_3 + 0xc)
                        void* const rax_15
                        
                        if (rax_9 s>= data_143e1d9b4)
                            rax_15 = nullptr
                        else
                            int16_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(rax_9)
                            uint32_t rdx_3 = zx.d(temp3_1)
                            int32_t rax_11 = temp4_1 + rdx_3
                            rax_15 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                                + sx.q((rax_11 & 0xffff) - rdx_3) * 0x18
                        
                        if (((*(rax_15 + 8) u>> 0x1d).b & 1) == 0)
                            if (*(arg1 + 0x118) != 0)
                                result_1:2.w = rdi_3[0xa].w
                                result_1.w = sub_1426b0430(arg1, rdi_3)
                                sub_1426bc4d0(arg1 + 0x1c0, &result_1)
                            
                            int64_t* rcx_12 = rdi_3
                            int64_t r15_2 = zx.q(*(rdi_3 + 0x52)) + *(rsi_2 + 0x30)
                            
                            if ((*(rdi_3 + 0x55) & 4) == 0)
                                goto label_1426bfe61
                            
                            uint64_t rax_22 = zx.q((*(*rdi_3 + 0x298))(rcx_12))
                            int32_t rax_27
                            
                            if (rax_22.d == 0)
                                rax_27 = 2
                            else
                                int64_t rax_24 = (rax_22 + 3) & 0xfffffffffffffffc
                                
                                if (r15_2 == rax_24)
                                    rax_27 = 2
                                else
                                    int64_t rax_25 = sx.q(*(r15_2 - rax_24))
                                    int32_t* rcx_14
                                    
                                    if (rax_25.d s< 0 || rax_25.d s>= *(arg1 + 0x138))
                                        rcx_14.b = 0
                                    else
                                        rcx_14.b = 1
                                    
                                    if (rcx_14.b == 0)
                                        rax_27 = 2
                                    else
                                        rcx_12 = *(*(arg1 + 0x130) + (rax_25 << 3))
                                    label_1426bfe61:
                                        
                                        if (rcx_12 == 0)
                                            rax_27 = 2
                                        else
                                            rax_27 = (*(*rcx_12 + 0x2b8))(rcx_12, arg1, r15_2)
                                            
                                            if (rax_27 == 3)
                                                char rcx_16
                                                
                                                if (r12_1 s< 0 || i_1 s>= *(rsi_2 + 0x28))
                                                    rcx_16 = 0
                                                else
                                                    rcx_16 = 1
                                                
                                                if (rcx_16 != 0 && *r13_3 == rdi_3)
                                                    r13_3[1].d = 1
                                                    *(arg1 + 0x263) |= 4
                            
                            arg3 = sub_1426b8c80(arg1, rdi_3, rax_27, arg3)
                            char rax_28
                            
                            if (r12_1 s< 0 || i_1 s>= *(rsi_2 + 0x28))
                                rax_28 = 0
                            else
                                rax_28 = 1
                            
                            if (rax_28 == 0 || *r13_3 != rdi_3)
                                i_1 -= 1
                                r12_1 -= 1
                                r9_1 = arg_20 - 0x10
                            else
                                r9_1 = arg_20
                            
                            r15 = nullptr
                    
                    r9_1 += 0x10
                    i_1 += 1
                    r12_1 += 1
                    arg_20 = r9_1
                while (i_1 s< *(rsi_2 + 0x28))
                
                r13_1 = var_68_1
            
            if (*(rsi_2 + 0x41) == 1)
                int64_t* rdi_4 = *(rsi_2 + 8)
                void* rax_29
                int64_t rax_30
                void* rdx_9
                
                if (rdi_4 != 0)
                    rax_29 = sub_1427393b0()
                    rdx_9 = rdi_4[2]
                    rax_30 = sx.q(*(rax_29 + 0x38))
                
                if (rdi_4 == 0 || rax_30.d s> *(rdx_9 + 0x38)
                        || *(*(rdx_9 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30)
                    rdi_4 = nullptr
                else if (*(arg1 + 0x118) != 0)
                    arg_18:2.w = rdi_4[0xa].w
                    arg_18.w = sub_1426b0430(arg1, rdi_4)
                    sub_1426bc4d0(arg1 + 0x1c0, &arg_18)
                
                *(rsi_2 + 0x41) = 2
                int64_t* rcx_21 = rdi_4
                int64_t r14_2 = zx.q(*(rdi_4 + 0x52)) + *(rsi_2 + 0x30)
                
                if ((*(rdi_4 + 0x55) & 4) == 0)
                    goto label_1426bffcf
                
                uint64_t rax_36 = zx.q((*(*rdi_4 + 0x298))(rcx_21))
                int32_t rax_42
                
                if (rax_36.d == 0)
                    rax_42 = 2
                else
                    int64_t rax_38 = (rax_36 + 3) & 0xfffffffffffffffc
                    
                    if (r14_2 == rax_38)
                        rax_42 = 2
                    else
                        int64_t rax_39 = sx.q(*(r14_2 - rax_38))
                        int32_t* rcx_23
                        
                        if (rax_39.d s< 0 || rax_39.d s>= *(arg1 + 0x138))
                            rcx_23.b = 0
                        else
                            rcx_23.b = 1
                        
                        if (rcx_23.b == 0)
                            rax_42 = 2
                        else
                            rcx_21 = *(*(arg1 + 0x130) + (rax_39 << 3))
                        label_1426bffcf:
                            
                            if (rcx_21 == 0)
                                rax_42 = 2
                            else
                                rax_42 = (*(*rcx_21 + 0x2b8))(rcx_21, arg1, r14_2)
                
                if (*(rsi_2 + 0x41) == 2)
                    arg3 = sub_1426b8c80(arg1, rdi_4, rax_42, arg3)
            
            temp1_1 = r13_1
            r13_1 -= 1
            var_68_1 = r13_1
        while (temp1_1 - 1 s>= 0)
        rcx = *(arg1 + 0x263)
    
    result = arg2

if ((rcx & 4) == 0 || result != 0)
    int32_t rax_43 = *(arg1 + 0x118)
    
    if (rax_43 != 0)
        int64_t* rdx_14 = *(arg1 + 0x110)
        arg_18 = 2
        result_1 = 0xffffffff
        sub_1426ac720(arg1, *rdx_14, 0, &arg_18, &result_1)
        rax_43 = *(arg1 + 0x118)
    
    int32_t i_2 = 0
    
    if (rax_43 s> 0)
        do
            sub_1426aaa20(sx.q(i_2) * 0x58 + *(arg1 + 0x110), arg1, 0)
            i_2 += 1
        while (i_2 s< *(arg1 + 0x118))
    
    sub_1426bd6b0(arg1 + 0x110, 0)
    sub_1426bd860(arg1 + 0x1c0)
    *(arg1 + 0x150) = 0
    
    if (*(arg1 + 0x154) s<= 0xffffffff)
        sub_1405a5130(arg1 + 0x148, 0)
    
    *(arg1 + 0x160) = 0
    
    if (*(arg1 + 0x164) s<= 0xffffffff)
        sub_1405dadb0(arg1 + 0x158, 0)
    
    *(arg1 + 0x180) &= 0xfffffff0
    char var_55
    char var_55_1 = var_55 & 0xfc
    *(arg1 + 0x178) = -1
    int64_t var_60_1 = 0
    var_60_1.d = 0
    result_1 = 0xffffffff
    *(arg1 + 0x168) = result_1
    result_1 = 0xffffffff
    *(arg1 + 0x16c) = result_1
    result_1 = 0xffffffff
    result = result_1
    *(arg1 + 0x170) = result
    *(arg1 + 0x263) &= 0xc2
    *(arg1 + 0x188) = -1.o
    *(arg1 + 0x260) = 0
    int64_t var_58
    *(arg1 + 0x198) = var_58
    *(arg1 + 0x1a0) = 0.o

*(arg1 + 0x262) &= 0xfd
return result
