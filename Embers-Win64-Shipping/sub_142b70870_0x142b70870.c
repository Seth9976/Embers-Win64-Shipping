// 函数: sub_142b70870
// 地址: 0x142b70870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t* rdi = arg6
int32_t rbx = arg4
int32_t rbp = arg2
int32_t var_f4 = rbx
int32_t var_f8 = arg5
int32_t* var_e0 = rdi
int64_t* result

if (*rdi s> 0)
    result = nullptr
else
    int32_t i_2 = 0
    int32_t rcx = var_f8
    int32_t var_108
    int32_t* var_100
    int64_t (* var_d8)[0xe]
    int64_t var_c8[0xe]
    int16_t var_58[0x10]
    
    if (rcx s> (*(*arg1 + 0x50))())
        var_d8 = &var_c8
        int16_t (* var_e8_1)[0x10] = &var_58
        
        while (true)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx)
            int32_t rax_8 = (temp1_1 - temp0_1) s>> 1
            int32_t rax_9 = (*(*arg1 + 0x38))(arg1, zx.q(rbp), zx.q(rbx), zx.q(rax_8), var_108, 
                var_100, var_f8, i_2, var_e8_1, var_e0, var_d8, arg3)
            int64_t r9_1 = *arg1
            *var_e8_1 = (*(r9_1 + 0x18))(arg1, zx.q(rax_9), zx.q(var_f4), r9_1)
            var_100 = var_e0
            var_108 = rax_8
            int64_t rax_12 =
                sub_142b70870(arg1, zx.q(rbp), zx.q(rax_9), zx.q(var_f4), var_108, var_100)
            rbp = rax_9
            i_2 += 1
            int32_t rbx_3 = var_f8 - rax_8
            var_e8_1 = &(*var_e8_1)[1]
            *var_d8 = rax_12
            var_d8 = &(*var_d8)[1]
            var_f8 = rbx_3
            rcx = rbx_3
            
            if (rbx_3 s<= (*(*arg1 + 0x50))(arg1))
                break
            
            rbx = var_f4
        
        rdi = var_e0
    
    if (*rdi s> 0)
        result = nullptr
    else
        struct 
            icu_64::StringTrieBuilder::BranchNode::icu_64::StringTrieBuilder::ListBranchNode::VTable
            ** rax_15 = j_sub_142a7dd00(0x68)
        struct 
            icu_64::StringTrieBuilder::BranchNode::icu_64::StringTrieBuilder::ListBranchNode::VTable
            ** var_e8_2 = rax_15
        
        if (rax_15 == 0)
            *rdi = 7
            result = nullptr
        else
            rax_15[1] = 0x444444
            rax_15[8].d = 0
            *rax_15 = &icu_64::StringTrieBuilder::ListBranchNode::`vftable'{for `icu_64::StringTrieBuilder::BranchNode'}
            var_d8.d = 0
            var_e8_2.d = var_f8 - 1
            int32_t rax_20
            int32_t i
            
            do
                int16_t rax_19 = (*(*arg1 + 0x18))(arg1, zx.q(rbp), zx.q(var_f4))
                var_f8.w = rax_19
                rax_20 = (*(*arg1 + 0x40))(arg1, zx.q(rbp + 1), zx.q(var_f4), zx.q(rax_19), 
                    var_108, var_100, var_f8, i_2, var_e8_2, var_e0, var_d8, arg3)
                int32_t rdx_7
                
                if (rbp != rax_20 - 1)
                    rdx_7 = var_f4
                label_142b70a7e:
                    var_108.q = var_e0
                    void* rax_24 = sub_142b70c80(arg1, rbp, rax_20, rdx_7 + 1, var_108)
                    uint32_t r8_8 = zx.d(var_f8.w)
                    *(rax_15 + (sx.q(rax_15[8].d) << 1) + 0x58) = r8_8.w
                    rax_15[sx.q(rax_15[8].d) + 3] = rax_24
                    *(rax_15 + (sx.q(rax_15[8].d) << 2) + 0x44) = 0
                    rax_15[8].d = &rax_15[8].d->vFunc_0 + 1
                    int32_t rdx_13
                    
                    if (rax_24 != 0)
                        rdx_13 = *(rax_24 + 8)
                    else
                        rdx_13 = 0
                    
                    rax_15[1].d = (rax_15[1].d * 0x25 + r8_8) * 0x25 + rdx_13
                else
                    int64_t r8_5 = *arg1
                    rdx_7 = var_f4
                    
                    if (rdx_7 + 1 != (*(r8_5 + 0x10))(arg1, zx.q(rbp), r8_5))
                        goto label_142b70a7e
                    
                    int64_t r8_6 = *arg1
                    int32_t rax_22 = (*(r8_6 + 0x20))(arg1, zx.q(rbp), r8_6)
                    uint32_t rdx_9 = zx.d(var_f8.w)
                    *(rax_15 + (sx.q(rax_15[8].d) << 1) + 0x58) = rdx_9.w
                    rax_15[sx.q(rax_15[8].d) + 3] = 0
                    *(rax_15 + (sx.q(rax_15[8].d) << 2) + 0x44) = rax_22
                    rax_15[8].d = &rax_15[8].d->vFunc_0 + 1
                    rax_15[1].d = (rax_15[1].d * 0x25 + rdx_9) * 0x25 + rax_22
                rbp = rax_20
                i = var_d8.d + 1
                var_d8.d = i
            while (i s< var_e8_2.d)
            var_f8.w = (*(*arg1 + 0x18))(arg1, zx.q(rax_20), zx.q(var_f4))
            int32_t rax_30
            
            if (rax_20 == arg3 - 1)
                int64_t r8_10 = *arg1
                rax_30 = (*(r8_10 + 0x10))(arg1, zx.q(rax_20), r8_10)
            
            int32_t* rbp_2
            
            if (rax_20 != arg3 - 1 || var_f4 + 1 != rax_30)
                rbp_2 = var_e0
                var_108.q = rbp_2
                sub_142b70720(rax_15, zx.d(var_f8.w), 
                    sub_142b70c80(arg1, rax_20, arg3, var_f4 + 1, var_108))
            else
                int64_t r8_11 = *arg1
                int32_t rax_31 = (*(r8_11 + 0x20))(arg1, zx.q(rax_20), r8_11)
                uint32_t rdx_17 = zx.d(var_f8.w)
                rbp_2 = var_e0
                *(rax_15 + (sx.q(rax_15[8].d) << 1) + 0x58) = rdx_17.w
                rax_15[sx.q(rax_15[8].d) + 3] = 0
                *(rax_15 + (sx.q(rax_15[8].d) << 2) + 0x44) = rax_31
                rax_15[8].d = &rax_15[8].d->vFunc_0 + 1
                rax_15[1].d = (rax_15[1].d * 0x25 + rdx_17) * 0x25 + rax_31
            
            int64_t i_1 = sx.q(i_2)
            int64_t* result_1 = sub_142b71130(arg1, rax_15, rbp_2)
            
            while (i_1 s> 0)
                i_1 -= 1
                int64_t* rax_34 = j_sub_142a7dd00(0x30)
                int64_t* var_e0_1 = rax_34
                int64_t* rdx_23 = rax_34
                
                if (rax_34 == 0)
                    rdx_23 = nullptr
                else
                    void* r8_15 = var_c8[i_1]
                    int16_t r11_1 = var_58[i_1]
                    int32_t r10_3
                    
                    if (r8_15 != 0)
                        r10_3 = *(r8_15 + 8)
                    else
                        r10_3 = 0
                    
                    int32_t r9_7
                    
                    if (result_1 != 0)
                        r9_7 = result_1[1].d
                    else
                        r9_7 = 0
                    
                    *(rdx_23 + 0xc) = 0
                    *rdx_23 = &icu_64::StringTrieBuilder::SplitBranchNode::`vftable'{for `icu_64::StringTrieBuilder::BranchNode'}
                    rdx_23[3].w = r11_1
                    rdx_23[4] = r8_15
                    rdx_23[5] = result_1
                    rdx_23[1].d = (zx.d(r11_1) * 0x25 + r10_3) * 0x25 - 0xbaaec9f + r9_7
                
                result_1 = sub_142b71130(arg1, rdx_23, rbp_2)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_128)
return result
