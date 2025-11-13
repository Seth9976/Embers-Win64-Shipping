// 函数: sub_140fc3db0
// 地址: 0x140fc3db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg2
int64_t rbx_2

if (((arg2 u>> 0x20).d == 0 & sub_140b5b8a0(arg2.d, 0)) == 0)
    rbx_2 = arg_8
else
    rbx_2 = *(arg1 + 8)
    arg_8 = rbx_2

int64_t arg_18
void* const rcx_4

if (*(arg1 + 0x18) == *(arg1 + 0x44))
labelid_23:
    rcx_4 = nullptr
else
    arg_18 = rbx_2
    int32_t rax_4 = sub_140b5ead0(rbx_2.d) + arg_18:4.d
    void* r8_1 = arg1 + 0x48
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140fc3e60:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x10)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_6) * 3
            rcx_4 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx_2)
                break
            
            rax_6 = *(rcx_4 + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140fc3e60_1
        
        if (rax_6 == 0xffffffff)
        label_140fc3e60_1:
            rcx_4 = nullptr

void* rdi = rcx_4 + 8

if (rcx_4 == 0)
    rdi = nullptr

if (rdi == 0)
    int64_t var_28
    int64_t* rax_7 = sub_140b63b70(&arg_8, &var_28)
    j_sub_140b3db50()
    int64_t* rax_8
    int512_t zmm1_1
    rax_8, zmm1_1 = sub_140fc8db0(&arg_18, rax_7)
    int64_t rbx_4 = *rax_8
    
    if (sub_140b404d0(&data_143de7d78, rbx_4, zmm1_1) == 0)
        sub_140b407e0(&data_143de7d78, rbx_4)
    
    int64_t rax_10 = sub_140b3da90(&data_143de7d78, rbx_4)
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rax_10 != 0)
        int64_t rbx_6 = arg_8
        
        if (*(arg1 + 0x18) == *(arg1 + 0x44))
            return 0
        
        arg_18 = rbx_6
        int32_t rax_13 = sub_140b5ead0(rbx_6.d) + arg_18:4.d
        void* r8_3 = arg1 + 0x48
        void* rcx_9 = *(r8_3 + 8)
        
        if (rcx_9 != 0)
            r8_3 = rcx_9
        
        int32_t rax_15 = *(r8_3 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_13)) << 2))
        
        if (rax_15 == 0xffffffff)
            return 0
        
        int64_t r8_4 = *(arg1 + 0x10)
        void* rcx_11
        
        while (true)
            int64_t rdx_13 = sx.q(rax_15) * 3
            rcx_11 = r8_4 + (rdx_13 << 3)
            
            if (*(r8_4 + (rdx_13 << 3)) == rbx_6)
                break
            
            rax_15 = *(rcx_11 + 0x10)
            
            if (rax_15 == 0xffffffff)
                return 0
        
        if (rax_15 == 0xffffffff || rcx_11 == 0)
            return 0
        
        rdi = rcx_11 + 8
    
    if (rdi == 0)
        return 0

return *rdi
