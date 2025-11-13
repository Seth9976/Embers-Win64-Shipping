// 函数: sub_141dae360
// 地址: 0x141dae360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t result = *(arg1 + 0x2f8)

if (result != 0)
    if (not(0.0 f>= *(result + 0x30)))
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        result = *(arg1 + 0x2f8)
        
        if (not(float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f<= *(result + 0x30)))
            *(result + 0x30) = 0
            int64_t* rcx_1 = *(*(arg1 + 0x2f8) + 0x10)
            (*(*rcx_1 + 0x88))(rcx_1, 0)
    
    result.b = 0
else if (*(arg1 + 0x2f0) s<= 0)
    result.b = 0
else
    int64_t* rax_4 = *(arg1 + 0x2e8)
    int64_t* rbx_1 = rax_4[1]
    int64_t* rsi_1 = *rax_4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140dbae50(arg1 + 0x2e8, 0, 1, 1)
    int32_t rax_5 = rsi_1[1].d
    uint64_t rdi
    
    if (rax_5 == 0x10)
        sub_141db0740(arg1)
        rdi = zx.q(sub_141dae360(arg1))
    else if (rax_5 != 0x11)
        if ((*(*rsi_1 + 8))(rsi_1, arg1, arg1 + 0x228, arg1 + 0x200) == 0 || rsi_1[2] == 0)
            rdi = zx.q(sub_141dae360(arg1))
        else
            int64_t* var_a0 = rsi_1
            int64_t* rsi_2 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (&var_a0 != arg1 + 0x2f8)
                arg2 = var_a0.o
                int128_t var_30_1 = arg2
                var_a0.o = *(arg1 + 0x2f8)
                rsi_2 = rbx_1
                *(arg1 + 0x2f8) = arg2
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2, arg2)
                    int32_t temp3_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            int64_t* rcx_12 = *(*(arg1 + 0x2f8) + 0x10)
            int32_t var_a8
            int64_t var_50
            sub_1419cdde0(arg1 + 0x360, &var_a8, (**rcx_12)(rcx_12, &var_50))
            int64_t rax_15 = sx.q(var_a8)
            void* const rax_18
            
            if (rax_15.d == 0xffffffff)
                rax_18 = nullptr
            else
                rax_18 = rax_15 * 0x30 + *(arg1 + 0x360)
            
            int64_t rcx_14 = var_50
            int64_t* rsi_3 = rax_18 + 0x10
            
            if (rax_18 == 0)
                rsi_3 = nullptr
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            if (rsi_3 == 0)
            label_141dae698:
                void* rcx_24 = *(arg1 + 0x2f8)
                int64_t var_60 = *(rcx_24 + 0x10)
                void* rax_34 = *(rcx_24 + 0x18)
                void* var_58_1 = rax_34
                
                if (rax_34 != 0)
                    *(rax_34 + 8) += 1
                
                (*(*arg1 + 0x1a0))(arg1, &var_60)
                rdi.b = 1
            else
                int64_t* rcx_15 = *(*(arg1 + 0x2f8) + 0x10)
                int64_t* rax_21 = (*(*rcx_15 + 0x90))(rcx_15)
                
                if (rax_21[1].d == 0)
                label_141dae672:
                    int64_t* rcx_21 = *(*(arg1 + 0x2f8) + 0x10)
                    int64_t var_40
                    sub_141dae960(arg1 + 0x360, (**rcx_21)(rcx_21, &var_40))
                    int64_t rcx_23 = var_40
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    goto label_141dae698
                
                int64_t* rcx_16 = *rax_21
                
                if (rcx_16 == 0)
                    goto label_141dae672
                
                if ((*(*rcx_16 + 0x28))(rcx_16) == 0)
                    goto label_141dae672
                
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                int128_t zmm0_1
                zmm0_1.q = float.d(performanceCount_1)
                int64_t var_80 = *rsi_3
                void* rax_25 = rsi_3[1]
                void* var_78_1 = rax_25
                zmm0_1.q = zmm0_1.q f* data_143d796f8
                zmm0_1.q = zmm0_1.q f+ 16777216.0
                rsi_3[2] = zmm0_1.q
                void* rcx_18 = *(arg1 + 0x2f8)
                int64_t* rdx_4 = *(rcx_18 + 0x10)
                
                if (rax_25 != 0)
                    *(rax_25 + 8) += 1
                    rcx_18 = *(arg1 + 0x2f8)
                
                int64_t var_70 = *(rcx_18 + 0x10)
                void* rax_27 = *(rcx_18 + 0x18)
                void* var_68_1 = rax_27
                
                if (rax_27 != 0)
                    *(rax_27 + 8) += 1
                
                sub_141801670((*(*rdx_4 + 0x90))(rdx_4), &var_70, &var_80, 1)
                rdi = zx.q(sub_141dae360(arg1))
    else
        *(arg1 + 0x258) = 0
        *(arg1 + 0x25c) = 0
        rdi = zx.q(sub_141dae360(arg1))
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = zx.q(rdi.b)

__security_check_cookie(rax_1 ^ &var_c8)
return result
