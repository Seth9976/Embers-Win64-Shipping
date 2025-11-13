// 函数: sub_141806730
// 地址: 0x141806730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = &arg1[0x26]

for (void* rdi_2 = (sx.q(arg1[0x8a].d) << 4) + i; i != rdi_2; i += 0x10)
    *(i + 8) = 0
    
    if (*(i + 0xc) s<= 0xffffffff)
        sub_1405947f0(i, 0)
    
    int16_t* rax_1 = *i
    
    if (rax_1 != 0)
        *rax_1 = 0

void* rcx_2 = data_143ef9cf8

if (rcx_2 == 0)
    void arg_8
    int64_t rbx = *sub_140b58170(&arg_8, "HTTP", (rcx_2 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx)
    rcx_2 = data_143ef9cf8

char rax_3 = sub_1418055c0(*(rcx_2 + 0x10), &arg1[0xd])
char rax_4

if (rax_3 != 0)
    rax_4 = sub_141808620(arg1)

int64_t* result

if (rax_3 == 0 || rax_4 == 0)
    int64_t* var_30 = nullptr
    int64_t var_38
    
    if (&arg1[0x14] != &var_38)
        arg1[0x14] = 0
        var_38 = 0
        sub_1405aeff0(&arg1[0x15], &var_30)
        int64_t* rcx_22 = var_30
        
        if (rcx_22 != 0)
            rcx_22[1].d -= 1
            
            if (rcx_22[1].d == 1)
                int64_t* rbx_4 = var_30
                (**rbx_4)(rbx_4)
                int32_t rsi_3 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rsi_3 == 1)
                    int64_t* rcx_24 = var_30
                    int64_t r8_5 = *rcx_24
                    (*(r8_5 + 8))(rcx_24, zx.q(rsi_3), r8_5)
    
    sub_141801c00(arg1)
    result.b = 0
else
    *(arg1 + 0xbc) = 1
    void*** rax_5 = j_sub_140a82f30(0xa0)
    void*** rdi_3 = rax_5
    
    if (rax_5 == 0)
        rdi_3 = nullptr
    else
        rdi_3[1] = arg1
        void* rcx_5 = &rdi_3[7]
        *rdi_3 = &data_142fe1658
        __builtin_memset(&rdi_3[2], 0, 0x14)
        rdi_3[5] = 0
        rdi_3[6] = 0
        *(rcx_5 + 0x10) = 0
        *(rcx_5 + 0x18) = 0
        *(rcx_5 + 0x1c) = 0x80
        void* rax_6 = *(rcx_5 + 0x10)
        
        if (rax_6 != 0)
            rcx_5 = rax_6
        
        *rcx_5 = 0
        *(rcx_5 + 8) = 0
        rdi_3[0xb].d = 0xffffffff
        *(rdi_3 + 0x5c) = 0
        rdi_3[0xd] = 0
        rdi_3[0xe].d = 0
        int64_t rax_7 = j_sub_140a82f30(0x28)
        
        if (rax_7 == 0)
            rax_7 = 0
        else
            __builtin_memset(rax_7, 0, 0x28)
        
        rdi_3[0x11] = rax_7
        rdi_3[0x10] = rax_7
        rdi_3[0x12] = 0
        rdi_3[0x13].d = 0
        *(rdi_3 + 0x9c) = 0
    
    int64_t* rax_8 = j_sub_140a82f30(0x18)
    int64_t* rbx_1 = rax_8
    
    if (rax_8 == 0)
        rbx_1 = nullptr
    else
        rax_8[1].d = 1
        *(rax_8 + 0xc) = 1
        *rbx_1 = &data_142fe2318
        rbx_1[2] = rdi_3
    
    void*** var_48 = rdi_3
    int64_t* var_40 = rbx_1
    
    if (&arg1[0x14] != &var_48)
        arg1[0x14] = rdi_3
        var_48 = nullptr
        sub_1405aeff0(&arg1[0x15], &var_40)
        rbx_1 = var_40
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
    
    int64_t* rdi_4 = arg1[2]
    int64_t r14_2 = 0
    
    if (rdi_4 != 0)
        int32_t rax_12 = rdi_4[1].d
        
        if (rax_12 != 0)
            rdi_4[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rdi_4 = nullptr
        
        if (rdi_4 != 0)
            int32_t rax_13 = rdi_4[1].d
            r14_2 = arg1[1]
            rdi_4[1].d = rax_13
            
            if (rax_13 == 0)
                (**rdi_4)(rdi_4)
                int32_t temp2_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
            
            rdi_4[1].d += 1
    
    void* rax_17 = data_143ef9cf8
    
    if (rax_17 == 0)
        void arg_10
        int64_t rbx_2 = *sub_140b58170(&arg_10, "HTTP", (rax_17 + 1).d)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_2)
        rax_17 = data_143ef9cf8
    
    void* rbp_1 = *(rax_17 + 0x10)
    EnterCriticalSection(&data_143ef9d10)
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    int64_t rsi_2 = sx.q(*(rbp_1 + 0x20))
    int32_t rax_18 = (rsi_2 + 1).d
    *(rbp_1 + 0x20) = rax_18
    
    if (rax_18 s> *(rbp_1 + 0x24))
        sub_1405a4f90(rbp_1 + 0x18)
    
    int64_t* rax_21 = (rsi_2 << 4) + *(rbp_1 + 0x18)
    *rax_21 = r14_2
    rax_21[1] = rdi_4
    
    if (rdi_4 != 0)
        int32_t rax_22 = rdi_4[1].d
        rdi_4[1].d = rax_22
        
        if (rax_22 == 0)
            (**rdi_4)(rdi_4)
            int32_t temp3_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    LeaveCriticalSection(&data_143ef9d10)
    void* rbx_3 = *(rbp_1 + 0x28)
    result = j_sub_140a82f30(0x10)
    int64_t* result_1 = result
    
    if (result != 0)
        *result = 0
        result[1] = r14_2
        int32_t result_2 = *(rbx_3 + 0x40)
        *(rbx_3 + 0x40) = result
        result = result_2
        *result
        *result = result_1
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp6_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
        
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp7_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_4 = *rdi_4
                (*(r8_4 + 8))(rdi_4, 1, r8_4)
    
    result.b = 1

return result
