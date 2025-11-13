// 函数: sub_140f19af0
// 地址: 0x140f19af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0

if (*(arg1 + 0x3b0) != 0)
    int64_t* rcx = *(arg1 + 0x3a8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3a8)
        
        *(arg1 + 0x3a0) = (*(*rcx_1 + 0x48))(rcx_1)

char rbp = *(arg1 + 0x3a0)

if (rbp - 1 u<= 1)
    if (*(arg1 + 0x3b0) == 0)
        *(arg1 + 0x3a0) = 0x100
    else
        int64_t* rcx_6 = *(arg1 + 0x3a8)
        char rax_11
        
        if (rcx_6 != 0)
            rax_11 = (*(*rcx_6 + 0x28))(rcx_6)
        
        if (rcx_6 == 0 || rax_11 == 0)
            if (*(arg1 + 0x3b0) == 0)
                *(arg1 + 0x3a0) = 0x100
            else
                int64_t* rcx_7 = *(arg1 + 0x3a8)
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x38))(rcx_7, 0)
                    int64_t rcx_8 = *(arg1 + 0x3a8)
                    
                    if (rcx_8 != 0)
                        *(arg1 + 0x3a8) = sub_140a84c80(rcx_8, 0, 0)
                    
                    *(arg1 + 0x3b0) = 0
                
                *(arg1 + 0x3a0) = 0x100
    
    if (*(arg1 + 0x3c0) != 0)
        int64_t* rcx_9 = *(arg1 + 0x3b8)
        
        if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
            int64_t* rcx_10
            
            if (*(arg1 + 0x3c0) == 0)
                rcx_10 = nullptr
            else
                rcx_10 = *(arg1 + 0x3b8)
            
            (*(*rcx_10 + 0x50))(rcx_10, 0)
else if (rbp == 0)
    if (*(arg1 + 0x3b0) == 0)
        *(arg1 + 0x3a0) = 0x101
    else
        int64_t* rcx_2 = *(arg1 + 0x3a8)
        char rax_7
        
        if (rcx_2 != 0)
            rax_7 = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (rcx_2 == 0 || rax_7 == 0)
            if (*(arg1 + 0x3b0) == 0)
                *(arg1 + 0x3a0) = 0x101
            else
                int64_t* rcx_3 = *(arg1 + 0x3a8)
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 0x38))(rcx_3, 0)
                    int64_t rcx_4 = *(arg1 + 0x3a8)
                    
                    if (rcx_4 != 0)
                        *(arg1 + 0x3a8) = sub_140a84c80(rcx_4, 0, 0)
                    
                    *(arg1 + 0x3b0) = 0
                
                *(arg1 + 0x3a0) = 0x101
    
    sub_14095ec70(arg1 + 0x3b8, true)

if (*(arg1 + 0x3b0) != 0)
    int64_t* rcx_11 = *(arg1 + 0x3a8)
    
    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
        int64_t* rcx_12
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_12 = nullptr
        else
            rcx_12 = *(arg1 + 0x3a8)
        
        *(arg1 + 0x3a0) = (*(*rcx_12 + 0x48))(rcx_12)

void* const rcx_13 = *(arg1 + 0x10)

if (rcx_13 != 0)
    int32_t rax_21 = *(rcx_13 + 8)
    
    if (rax_21 != 0)
        *(rcx_13 + 8) = rax_21 + 1
        rax_21.b = 1
    
    if (rax_21.b == 0)
        rcx_13 = nullptr
    
    if (rcx_13 != 0)
        rdi = *(arg1 + 8)

void* rax_22 = data_143e20d08
int64_t var_48 = rdi
void* const var_40 = rcx_13
int64_t* rdi_1 = *(rax_22 + 0xb0)
void* rsi = *(rax_22 + 0xa8)

if (rdi_1 != 0)
    rdi_1[1].d += 1

void var_38
int32_t* rax_23 = sub_140d6efb0(&var_38, *(arg1 + 0x3a0) == 1)
void var_20
int32_t* rax_24
int512_t zmm1
rax_24, zmm1 = sub_140d6efb0(&var_20, rbp == 1)
int64_t result = sub_140e1f360(rsi, &var_48, 1, rax_24, zmm1, rax_23)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rdi_1 + 8))(rdi_1, 1)

return result
