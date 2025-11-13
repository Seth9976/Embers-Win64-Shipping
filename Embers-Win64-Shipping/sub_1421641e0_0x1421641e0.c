// 函数: sub_1421641e0
// 地址: 0x1421641e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg4 + 0x24)
int64_t* rbx = *(arg2 + 0x150)
void* rsi = arg4[6]
int64_t var_50
int64_t* rax_1 = sub_140b63b70(arg4, &var_50)
int64_t* rcx_2 = rbx[0x29]
void* result

if (rcx_2 != 0)
    int64_t rdx_1 = *rcx_2
    result = (*(rdx_1 + 0x368))(rcx_2, rdx_1)

int32_t arg_10
int32_t rbx_1

if (rcx_2 == 0 || result.b != 0)
    void arg_20
    sub_1421693f0(rbx, &arg_20, rax, nullptr)
    *(rbx + 0xa4) += 1
    arg_10 = (*(rbx + 0xa4) * 2) | 1
    result = sub_142172df0(rbx, &arg_10, rax_1, &arg_20, 
        sub_140bdcf70(*(rbx[0x29] + 0x160), rsi)[6], 1, 1)
    rbx_1 = arg_10
else
    rbx_1 = 1

int64_t rcx_6 = var_50
arg_10 = rbx_1

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

if (rbx_1 != 1)
    void* rsi_1
    
    if (*(arg2 + 0x330) == *(arg2 + 0x35c))
    label_142164322:
        void* rax_11 = sub_14215b0a0(arg2 + 0x328, rbx_1, &arg_10)
        rbx_1 = arg_10
        rsi_1 = rax_11
    else
        void* rcx_7 = *(arg2 + 0x368)
        void* r8_2 = arg2 + 0x360
        
        if (rcx_7 != 0)
            r8_2 = rcx_7
        
        int32_t rax_10 = *(r8_2 + (((sx.q(*(arg2 + 0x370)) - 1) & sx.q(rbx_1)) << 2))
        
        if (rax_10 == 0xffffffff)
            goto label_142164322
        
        int64_t r8_3 = *(arg2 + 0x328)
        void* rcx_9
        
        while (true)
            int64_t rdx_8 = sx.q(rax_10) * 3
            rcx_9 = r8_3 + (rdx_8 << 3)
            
            if (*(r8_3 + (rdx_8 << 3)) == rbx_1)
                break
            
            rax_10 = *(rcx_9 + 0x10)
            
            if (rax_10 == 0xffffffff)
                goto label_142164322
        
        if (rax_10 == 0xffffffff || rcx_9 == 0)
            goto label_142164322
        
        rsi_1 = rcx_9 + 8
    
    if (*rsi_1 == 0)
        int32_t* rax_12 = j_sub_140a82f30(0x40)
        int32_t* rdi_1 = rax_12
        
        if (rax_12 == 0)
            rdi_1 = nullptr
        else
            *rax_12 = 0xffffffff
            rax_12[1] = 0
            rax_12[2] = 0xffffffff
            rax_12[3] = 0
            __builtin_memset(&rax_12[7], 0, 0x1e)
        
        if (rsi_1 != &arg_10)
            void* r15_1 = *rsi_1
            *rsi_1 = rdi_1
            
            if (r15_1 != 0)
                int64_t rcx_11 = *(r15_1 + 0x20)
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                j_sub_140a74f90(r15_1)
        else if (rdi_1 != 0)
            int64_t rcx_34 = *(rdi_1 + 0x20)
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            j_sub_140a74f90(rdi_1)
    
    int32_t* rsi_2 = *rsi_1
    *(rsi_2 + 0x10) = arg4[3]
    rsi_2[6] = arg4[4].d
    rsi_2[7] = rbx_1
    sub_140d3a3a0(rsi_2, arg3)
    sub_140d3a3a0(&rsi_2[2], sub_140d3c6e0(arg4 + 0x24))
    int64_t* rax_15 = sub_140b63b70(arg4, &var_50)
    
    if (&rsi_2[8] != rax_15)
        int64_t rcx_17 = *(rsi_2 + 0x20)
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *(rsi_2 + 0x20) = *rax_15
        *rax_15 = 0
        rsi_2[0xa] = rax_15[1].d
        rsi_2[0xb] = *(rax_15 + 0xc)
        rax_15[1] = 0
    
    int64_t rcx_19 = var_50
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rbx_3 = *arg4
    arg_10.q = rbx_3
    int32_t var_58
    int32_t var_54
    int32_t rcx_23
    
    if (*(arg2 + 0x380) == *(arg2 + 0x3ac))
    label_1421644bb:
        rcx_23 = 0
        var_54 = 0
        var_58 = 0
    else
        int32_t rax_20 = sub_140b5ead0(rbx_3.d) + arg5
        void* r8_5 = arg2 + 0x3b0
        void* rcx_21 = *(r8_5 + 8)
        
        if (rcx_21 != 0)
            r8_5 = rcx_21
        
        int32_t rax_22 = *(r8_5 + (((sx.q(*(arg2 + 0x3c0)) - 1) & sx.q(rax_20)) << 2))
        
        if (rax_22 == 0xffffffff)
            goto label_1421644bb
        
        int64_t r8_6 = *(arg2 + 0x378)
        int64_t rdx_17
        
        while (true)
            rdx_17 = sx.q(rax_22)
            int64_t rcx_22 = rdx_17 * 3
            
            if (*(r8_6 + (rcx_22 << 3)) == rbx_3)
                break
            
            rax_22 = *(r8_6 + (rcx_22 << 3) + 0x10)
            
            if (rax_22 == 0xffffffff)
                goto label_1421644bb
        
        if (rax_22 == 0xffffffff)
            goto label_1421644bb
        
        void* rax_32 = r8_6 + rdx_17 * 0x18
        
        if (rax_32 == 0)
            goto label_1421644bb
        
        var_58.q = *(rax_32 + 8)
        rcx_23 = var_58
    
    rcx_23.b = sub_140b5b8a0(rcx_23, 0) == 0
    
    if ((var_54 != 0 | rcx_23.b) != 0)
        int64_t* rax_24 = sub_140b63b70(&var_58, &var_50)
        
        if (&rsi_2[8] != rax_24)
            int64_t rcx_25 = *(rsi_2 + 0x20)
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            *(rsi_2 + 0x20) = *rax_24
            *rax_24 = 0
            rsi_2[0xa] = rax_24[1].d
            rsi_2[0xb] = *(rax_24 + 0xc)
            rax_24[1] = 0
        
        int64_t rcx_27 = var_50
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    
    char rax_27 = sub_140d3e110(rsi_2)
    char rax_29
    
    if (rax_27 != 0)
        rax_29 = sub_1420e6590(sub_140d3c6e0(rsi_2))
    
    if (rax_27 == 0 || rax_29 != 0)
        arg_10.q = 0
        result = arg_10.q
        *(rsi_2 + 0x30) = result
    else
        result = sub_140d21d80(sub_140d3c6e0(rsi_2))
        *(rsi_2 + 0x30) = *(result + 0x18)
    
    rsi_2[0xe].b = 0

return result
