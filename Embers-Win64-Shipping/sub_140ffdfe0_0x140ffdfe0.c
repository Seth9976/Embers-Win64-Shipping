// 函数: sub_140ffdfe0
// 地址: 0x140ffdfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rcx = data_14399fa54
void* i = &data_143e2bad0
int32_t j = 0

do
    int32_t rsi_1 = *(i + 8)
    int32_t rsi_2 = rsi_1 - 1
    
    if (rsi_1 - 1 s>= 0)
        int64_t r15_2 = sx.q(rsi_2) << 4
        
        while (j s< 0xa)
            int64_t* r14_2 = *i + r15_2
            
            if (rcx - *(r14_2 + 0xc) u> data_1439b49b8)
                int64_t* rbx_1 = *r14_2
                j += 1
                
                if (rbx_1 != 0)
                    (*(*rbx_1 + 8))(rbx_1)
                
                void var_50
                (*(*rbx_1 + 0x50))(rbx_1, &var_50)
                
                if (rbx_1 != 0)
                    (*(*rbx_1 + 0x10))(rbx_1)
                
                int64_t* rcx_4 = *r14_2
                *r14_2 = 0
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x10))(rcx_4)
                
                int64_t rbx_3 = sx.q(rsi_2) << 4
                int64_t* rcx_5 = *(rbx_3 + *i)
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x10))(rcx_5)
                
                int32_t rdx_6 = *(i + 8)
                int32_t rax_12 = rdx_6 - rsi_2 - 1
                
                if (rax_12 s>= 1)
                    rax_12 = 1
                
                if (rax_12 != 0)
                    int64_t rcx_6 = *i
                    memcpy(rcx_6 + rbx_3, (sx.q(rdx_6 - rax_12) << 4) + rcx_6, rax_12 << 4)
                    rdx_6 = *(i + 8)
                
                *(i + 8) = rdx_6 - 1
                sub_1405a5010(i)
                rcx = data_14399fa54
            
            r15_2 -= 0x10
            int32_t temp3_1 = rsi_2
            rsi_2 -= 1
            
            if (temp3_1 - 1 s< 0)
                break
    
    i += 0x10
while (i s< &data_143e2bbe0)

int64_t i_2 = 0x11
int64_t rcx_10 = sx.q(rcx u% 3) * 0x110
void* r8_4 = &data_143e2bad0 - rcx_10 - &data_143e2bbe0
void* r14_3 = rcx_10 + &data_143e2bbe0
void* var_58 = r8_4
int32_t result
int64_t i_1

do
    int32_t j_6 = *(r14_3 + 8)
    
    if (j_6 != 0)
        int32_t rax_16 = *(r14_3 + &data_143e2bad8 - rcx_10 - &data_143e2bbe8 + 8)
        int32_t rdx_9 = rax_16 + j_6
        
        if (rdx_9 s> *(&data_143e2badc - rcx_10 - &data_143e2bbe8 + r14_3 + 8))
            sub_1405a5410(r8_4 + r14_3, rdx_9)
            rax_16 = *(r14_3 + &data_143e2bad8 - rcx_10 - &data_143e2bbe8 + 8)
            r8_4 = var_58
        
        int64_t* rdi = *r14_3
        int32_t j_4 = j_6
        int64_t* rbx_6 = (sx.q(rax_16) << 4) + *(r8_4 + r14_3)
        int32_t j_1
        
        do
            int64_t* rcx_12 = *rdi
            *rbx_6 = rcx_12
            
            if (rcx_12 != 0)
                (*(*rcx_12 + 8))()
            
            rbx_6[1].d = rdi[1].d
            int32_t rax_19 = *(rdi + 0xc)
            rdi = &rdi[2]
            *(rbx_6 + 0xc) = rax_19
            rbx_6 = &rbx_6[2]
            j_1 = j_4
            j_4 -= 1
        while (j_1 != 1)
        *(var_58 + r14_3 + 8) += j_6
    
    result = *(r14_3 + 0xc)
    int64_t* rbx_7 = *r14_3
    int32_t j_5 = *(r14_3 + 8)
    
    if (result s< 0)
        if (j_5 != 0)
            int32_t j_2
            
            do
                int64_t* rcx_14 = *rbx_7
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x10))(rcx_14)
                
                rbx_7 = &rbx_7[2]
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
            result = *(r14_3 + 0xc)
        
        *(r14_3 + 8) = 0
        
        if (result != 0)
            result = sub_1405a5410(r14_3, 0)
    else
        if (j_5 != 0)
            int32_t j_3
            
            do
                int64_t* rcx_13 = *rbx_7
                
                if (rcx_13 != 0)
                    result = (*(*rcx_13 + 0x10))(rcx_13)
                
                rbx_7 = &rbx_7[2]
                j_3 = j_5
                j_5 -= 1
            while (j_3 != 1)
        
        *(r14_3 + 8) = 0
    
    r8_4 = var_58
    r14_3 += 0x10
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
__security_check_cookie(rax_1 ^ &var_78)
return result
