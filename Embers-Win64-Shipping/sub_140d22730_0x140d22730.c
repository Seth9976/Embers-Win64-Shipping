// 函数: sub_140d22730
// 地址: 0x140d22730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rdi_1 = arg1

if (arg2 == 0)
    return 

int32_t var_78_1 = 0
int32_t* var_68
sub_1409aa070(&var_68, sub_140d41340(), 0, 0, 0)
int64_t* var_58
int64_t* rsi_1 = var_58

if (rsi_1 == 0)
    return 

int32_t r8 = data_143e1d9b4
void* rdx_1 = arg2 + 0x30
int32_t var_60
int32_t rbx_2 = var_60
int64_t r10_1 = data_143e1d9a0
int32_t* rbp_1 = var_68
void* arg_18 = rdx_1

while (true)
    void* const i_2
    
    if (rsi_1 == 0)
        i_2 = nullptr
    else
        i_2 = *rsi_1
    
    void* rax_2 = *(i_2 + 0x10)
    int64_t rcx_1 = sx.q(*(rdx_1 + 8))
    
    if (rcx_1.d s<= *(rax_2 + 0x38) && *(*(rax_2 + 0x30) + (rcx_1 << 3)) == rdx_1)
        int32_t rax_4 = *(i_2 + 0xc)
        void* const rax_10
        
        if (rax_4 s>= r8)
            rax_10 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_4)
            uint32_t rdx_3 = zx.d(temp2_1)
            int32_t rax_6 = temp3_1 + rdx_3
            rax_10 = *(r10_1 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
            void* const i_1
            
            if (data_143de5451 != 0)
                void* i = *(i_2 + 0x20)
                i_1 = i_2
                
                for (; i != 0; i = *(i + 0x20))
                    i_1 = i
            
            if (data_143de5451 == 0 || ((*(i_1 + 0x50) u>> 0x14).b & 1) != 0)
                var_78_1.q = i_2
                sub_140941070(arg3, rdi_1, sx.q(*(arg3 + 0x4c)) + i_2, 0, var_78_1, data_143ddb418)
    
    while (true)
        int32_t r8_3 = rbp_1[9]
        int32_t rax = rbx_2 + 1
        rbx_2 = rax
        
        if (rax s>= r8_3)
            return 
        
        void* rdi_2
        
        while (true)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx_2)
            uint32_t rdx_7 = zx.d(temp0_1)
            int32_t rax_18 = temp1_1 + rdx_7
            int64_t rdx_8 = *(*(rbp_1 + 0x10) + (sx.q(rax_18 s>> 0x10) << 3))
            int64_t rcx_10 = sx.q(zx.d(rax_18.w) - rdx_7) * 3
            rdi_2 = *(rdx_8 + (rcx_10 << 3))
            rsi_1 = rdx_8 + (rcx_10 << 3)
            
            if (rdi_2 != 0)
                break
            
            rax = rbx_2 + 1
            rbx_2 = rax
            
            if (rax s>= r8_3)
                return 
        
        int32_t var_48
        
        if ((*(rdi_2 + 8) & var_48) == 0)
            void* var_50
            
            if (var_50 != sub_140d41340())
                void* rax_23 = *(rdi_2 + 0x10)
                int64_t rcx_11 = sx.q(*(var_50 + 0x38))
                
                if (rcx_11.d s> *(rax_23 + 0x38))
                    continue
                else if (*(*(rax_23 + 0x30) + (rcx_11 << 3)) != var_50 + 0x30)
                    continue
            
            int32_t rax_25 = *(rdi_2 + 0xc)
            r8 = data_143e1d9b4
            r10_1 = data_143e1d9a0
            void* const rdx_11
            
            if (rax_25 s>= r8)
                rdx_11 = nullptr
            else
                uint32_t rcx_12 = zx.d(rax_25.w)
                
                if (rax_25 s< 0)
                    rax_25 += 0xffff
                    rcx_12 -= 0x10000
                
                rdx_11 = *(r10_1 + (sx.q(rax_25 s>> 0x10) << 3)) + sx.q(rcx_12) * 0x18
            
            int32_t var_44
            
            if ((*(rdx_11 + 8) & var_44) == 0)
                break
    
    rdx_1 = arg_18
    rdi_1 = arg1
