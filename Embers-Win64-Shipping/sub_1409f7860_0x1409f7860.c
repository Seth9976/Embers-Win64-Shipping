// 函数: sub_1409f7860
// 地址: 0x1409f7860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg2
int64_t* result = sub_140a744f0(&data_143db7b00, u"PakFile")

if (result == 0)
    return result

int64_t* rcx = *(arg1 + 0x38)
int16_t* rax = *arg3
int64_t rsi
rsi.b = 0

if (r12 s<= 0)
    r12 = 0

if (rcx != 0)
    uint64_t rdi
    uint64_t arg_18 = rdi
    int64_t* var_48
    (*(*rcx + 0x88))(rcx, &var_48)
    int64_t* rbx_1 = var_48
    int32_t i_2
    void* r14_3 = &rbx_1[sx.q(i_2) * 2]
    
    if (rbx_1 != r14_3)
        do
            int64_t var_38
            int64_t* rax_2
            int512_t zmm1_1
            rax_2, zmm1_1 = sub_140b19c30(&var_38, rbx_1, 0)
            int16_t* const rcx_2
            
            if (rax_2[1].d == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *rax_2
            
            int32_t rax_3 = sub_140a54510(rcx_2, &data_142e49920)
            int64_t rcx_3 = var_38
            rdi.b = rax_3 == 0
            
            if (rcx_3 != 0)
                zmm1_1 = sub_140a74f90(rcx_3)
            
            if (rdi.b != 0)
                int32_t rax_4 = rbx_1[1].d
                rsi = sx.q(*(arg1 + 0x30))
                rdi = zx.q(rax_4 - 1)
                
                if (rax_4 == 0)
                    rdi = 0
                
                int32_t rax_6
                
                if (rsi.d == 0)
                    rax_6 = (rsi + 2).d
                
                if (rsi.d != 0 || (rdi + 1).d == 0)
                    rax_6 = 1
                
                int16_t* var_58 = nullptr
                int32_t rcx_4 = rdi.d + rax_6
                int64_t rbp_1 = *(arg1 + 0x28)
                int32_t var_50_1 = rsi.d
                
                if (rsi.d != 0 || rcx_4 != 0)
                    sub_1405a4c70(&var_58, rsi.d + rcx_4, 0)
                    memcpy(var_58, rbp_1, rsi.d * 2)
                else
                    int32_t var_4c_1 = 0
                
                sub_140a2cf70(&var_58, *rbx_1, rdi.d)
                int16_t* rdx_5 = &data_142d40450
                
                if (var_50_1 != 0)
                    rdx_5 = var_58
                
                char rax_7 = sub_141d093d0(result, rdx_5, r12, rax, zmm1_1, 1)
                int16_t* rcx_9 = var_58
                
                if (rax_7 == 0)
                    rsi.b = 0
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    break
                
                rsi.b = 1
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            
            rbx_1 = &rbx_1[2]
        while (rbx_1 != r14_3)
        
        rbx_1 = var_48
    
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_10 = *rbx_1
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_48
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return zx.q(rsi.b)
